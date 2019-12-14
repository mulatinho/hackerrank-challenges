#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> weight(n);

    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    for (int i = 0; i < n; i++) { cin >> weight[i]; }

    double dividend = 0, weightsum = 0;

    for (int i = 0; i < n; i++) {
        weightsum += (arr[i] * weight[i]);
        dividend  += weight[i];

    }

    cout << fixed << setprecision(2) << weightsum / dividend << endl;

    return 0;
}
