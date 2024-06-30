#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<int> v;
	int N,score,P;
	cin >> N >> score >> P;
	int rank = 1;
	
	for(int i = 0; i < N; i++) {
		int x;
		cin >>x;
		v.push_back(x);
	}
	
	if(N == P && v[N-1] >= score)
		rank = -1;
	else {
		for(int i = 0; i < N; i++){
			if(v[i] > score)
				rank++;
		}
	}
	cout<<rank<<'\n';
	return 0;
}