#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, sum, left, right;
    cin >> n;
    vector< vector<int> > a(n, vector<int>(n));

    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) { cin >> a[a_i][a_j]; }
    }

    left = 0; right = 0; sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) { left += a[i][j]; }
        }
    }

    int j = 0;
    for (int i = n - 1; i > -1; i--) { right += a[i][j++]; }
    sum = abs(left - right);

    cout << sum << endl;
    return 0;
}
