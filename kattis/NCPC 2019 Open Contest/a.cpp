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
    // cin.tie(0), ios::sync_with_stdio(0);
    string last;
    cin >> last;
    int n;
    cin >> n;
    unordered_map<char, int> ss;
    vector<string> v;
    while (n--) {
        string s;
        cin >> s;
        if (s[0] == last.back()) v.push_back(s);
        ss[s[0]]++;
    }

    if (v.empty()) {
        cout << "?\n";
        return 0;
    }

    for (string& s : v) {
        if (ss[s.back()] < 1 || s[0] == s.back() && ss[s[0]] < 2) {
            cout << s << '!' << endl;
            return 0;
        }
    }

    cout << v[0] << endl;
    return 0;
}