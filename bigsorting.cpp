#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool mycmp(string i, string j)
{
    return i.size() == j.size() ? (i<j) : (i.size() < j.size());
}

int main()
{
    int n;
    cin >> n;

    vector<string> unsorted(n);
    vector<string>::iterator it;

    for (int unsorted_i = 0; unsorted_i < n; unsorted_i++) {
        cin >> unsorted[unsorted_i];
    }

    sort(unsorted.begin(), unsorted.end(), mycmp);

    for (it = unsorted.begin(); it != unsorted.end(); it++) { cout << *it << endl; }
    return 0;
}
