#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//65-90
//97-122

int main()
{
    int n, k;
    string s;

    cin >> n;
    cin >> s;
    cin >> k;

    if ( (n < 1 && n > 100) || (k < 0 && k > 100) ) { return 0; }
    string o(n, '\0');
    for (int i = 0; i < s.size(); i++) {
        int nchar = (int)s[i];

        if (s[i] >= 'A' && s[i] <= 'Z') { nchar = 'A' + (nchar - 'A' + k) % 26; }
        else if (s[i] >= 'a' && s[i] <= 'z') { nchar = 'a' + (nchar - 'a' + k) % 26;}
        else { nchar = s[i]; }

        o[i] = (char)nchar;
    }

    cout << o << endl;
    return 0;
}
