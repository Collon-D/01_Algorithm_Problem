#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

int solution(vector<int>& distance) {
    int answer = 0;
    
    int gcd = GCD(distance[0], distance[1]);
    for (int i = 2; i < distance.size(); ++i) {
        gcd = GCD(gcd, distance[i]);
    }

    for (int i = 0; i < distance.size(); ++i) {
        answer += distance[i] / gcd - 1;
    }

    return answer;
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N; 
    cin >> N;

    vector<int> input(N);
    vector<int> dis(N - 1);

    cin >> input[0];
    for (int i = 1; i < N; ++i) {
        cin >> input[i];
        dis[i - 1] = input[i] - input[i - 1];
    }

    cout << solution(dis);

    return 0;
}