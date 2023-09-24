#include <iostream>

using namespace std;

struct Point {
    int x, y, r;
};

int Pos(Point& pt1, Point& pt2) {
    int dis = (pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y);
    int cond1 = (pt1.r - pt2.r) * (pt1.r - pt2.r);
    int cond2 = (pt1.r + pt2.r) * (pt1.r + pt2.r);

    if (dis == 0) {
        if (cond1 == 0) return -1;
        else return 0;
    } else {
        if (dis == cond1 || dis == cond2) return 1;
        else if (cond1 < dis && dis < cond2) return 2;
        else return 0;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    Point pt1, pt2;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> pt1.x >> pt1.y >> pt1.r >> pt2.x >> pt2.y >> pt2.r;
        cout << Pos(pt1, pt2) << "\n";
    }   

    return 0;
}