#include <iostream>
#include <cmath>
#include <string>
#include <utility>

using namespace std;

// 판별식 계산 함수
int Discriminant(int a, int b, int c) {
    return b * b - 4 * a * c;
}

// 2의 거듭제곱인지 확인하는 함수
bool Is2Times(int x) {
    if (x <= 1) return false; // 양수가 아니면 false
    return (x & (x - 1)) == 0; // 2^K 판별
}

// 정수인지 확인하는 함수
bool IsInteger(double x) {
    return floor(x) == x; // 소수부가 0인지 확인
}

// 이차방정식의 근을 계산하는 함수
pair<double, double> SolveQuadratic(int a, int b, int c) {
    double sqrtDis = sqrt(b * b - 4.0 * a * c);
    double n = (-b + sqrtDis) / (2.0 * a);
    double m = (-b - sqrtDis) / (2.0 * a);
    return { n, m };
}

// 문제 해결 함수
string Solution(int a, int b, int c) {
    int discriminant = Discriminant(a, b, c);

    if (discriminant < 0) {
        return "둘다틀렸근"; // 허근
    }
    else if (discriminant == 0) {
        // 중근일 때
        double root = -b / (2.0 * a);
        pair<double, double> rt = SolveQuadratic(a, b, c);

        if (rt.first == rt.second) return "둘다틀렸근";

        if (IsInteger(root)) {
            if (Is2Times(static_cast<int>(root))) {
                return "이수근";
            }
            return "정수근";
        }
        return "둘다틀렸근";
    }
    else {
        // 서로 다른 두 실근일 때
        pair<double, double> rt = SolveQuadratic(a, b, c);

        if (IsInteger(rt.first) && IsInteger(rt.second)) {
            if (Is2Times(static_cast<int>(rt.first)) && Is2Times(static_cast<int>(rt.second))) {
                return "이수근";
            }
            return "정수근";
        }
        return "둘다틀렸근";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << Solution(a, b, c) << endl;

    return 0;
}
