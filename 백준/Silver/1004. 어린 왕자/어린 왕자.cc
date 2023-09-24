#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

struct Planet : public Point {
    int r;
};

int isPass(Point pt1, Point pt2, Planet p1) {
    if (pt1.x == pt2.x && pt1.y == pt2.y) return 0;

    int dis1 = (pt1.x - p1.x) * (pt1.x - p1.x) + (pt1.y - p1.y) * (pt1.y - p1.y);
    int dis2 = (pt2.x - p1.x) * (pt2.x - p1.x) + (pt2.y - p1.y) * (pt2.y - p1.y);
    int result = 0;

    if (dis1 < p1.r * p1.r && dis2 < p1.r * p1.r) result = 0;
    else if (dis1 < p1.r * p1.r && dis2 > p1.r * p1.r) result = 1;
    else if (dis1 > p1.r * p1.r && dis2 < p1.r * p1.r) result = 1;
    else result = 0;
    return result;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, n, answer;

    Point D, A;
    Planet p;

    cin >> T;
    for (int i = 0; i < T; ++i) {
        answer = 0;
        cin >> D.x >> D.y >> A.x >> A.y;
        cin >> n; 
        for (int j = 0; j < n; ++j) {
            cin >> p.x >> p.y >> p.r;
            answer += isPass(D, A, p);
        }
        cout << answer << "\n";
    }

    return 0;
}