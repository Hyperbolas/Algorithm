#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
const double PI = acos(-1);
#define x first
#define y second
#define iter(c) c.begin(), c.end()
#define ms(a) memset(a, 0, sizeof(a))
#define mss(a) memset(a, -1, sizeof(a))
#define mp(e, f) make_pair(e, f)

int main() {
    cin.tie(0), ios::sync_with_stdio(0);
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double s = (a + b + c + d) / 2;
    double area = (s - a) * (s - b) * (s - c) * (s - d);
    area = sqrt(area);
    printf("%.8lf\n", area);
    return 0;
}