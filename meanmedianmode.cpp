#include <map>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, mode;
    double mean, median;

    cin >> n;

    vector<int> arr(n);
    map<int, int> rv;
    map<int, int>::iterator it;

    for (int i = 0; i < n; i++) { cin >> arr[i]; mean += arr[i]; rv[arr[i]]++; }

    sort(arr.begin(), arr.end());

    mean   = mean / n;
    median = (arr[(n / 2)] + arr[(n / 2) - 1]) / 2.0;

    cout << mean << endl;
    cout << median << endl;

    int nmax = 0, max = 0;
    for (auto val = rv.begin(); val != rv.end(); val++) {
        if (val->second > nmax) { nmax = val->second; max = val->first; }
    }
    cout << max << endl;


    return 0;
}
