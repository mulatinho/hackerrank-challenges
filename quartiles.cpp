#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int n, j, k;
    cin >> n;
    double lh = 0, median = 0, uh = 0, sum = 0;

    vector<int> arr(n);
    vector<int> arrlh((n / 2));
    vector<int> arruh((n / 2));
    vector<int>::iterator it;


    for (int i = 0; i < n; i++) {
        cin >> arr[i]; sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    int middle = 0;
    if (!(arr.size() % 2)) { median = sum / n; }
    else { median = arr[arr.size() / 2]; middle++; }

    int change = 0;
    for (int i = 0; i < n; i++) {
        if (i == (arr.size() / 2)) { change++; }

        if (!change) { if (j < arrlh.size()) { arrlh[j++] = arr[i]; } }
        else {
            if (middle == 0 && change == 1) { change++; continue;}
            if (k < arruh.size()) { arruh[k++] = arr[i]; }
        }
    }

    // for (it = arrlh.begin(); it != arrlh.end(); it++) { cout << *it << ' '; }
    // cout << endl;
    // for (it = arruh.begin(); it != arruh.end(); it++) { cout << *it << ' '; }
    // cout << endl;

    cout << (arrlh[(n / 2) / 2]) << ' ' << (arrlh[((n / 2) / 2) - 1]) << endl;
    cout << (arruh[(n / 2) / 2]) << ' ' << (arruh[((n / 2) / 2) + 1]) << endl;

    if (!middle) {
        lh = ( (arrlh[(n / 2) / 2]) + (arrlh[((n / 2) / 2) - 1]) ) / 2;
        uh = ( (arruh[(n / 2) / 2]) + (arruh[((n / 2) / 2) - 1]) ) / 2;
    } else {
        lh = ( (arrlh[(n / 2) / 2]) + (arrlh[((n / 2) / 2) - 1]) ) / 2;
        uh = ( (arruh[(n / 2) / 2]) + (arruh[((n / 2) / 2) + 1]) ) / 2;
    }

    cout << lh << endl;
    cout << median << endl;
    cout << uh << endl;

    return 0;
}
