#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0, squaredistance = 0, mean = 0;

    vector<int> arr(n);
    vector<int>::iterator it;

    for (int i = 0; i < n; i++) { cin >> arr[i]; sum += arr[i]; }

    mean = sum / n;

    for (it = arr.begin(); it != arr.end(); it++) {
        squaredistance += pow((*it - mean), 2);
    }

    cout << fixed << setprecision(1) << sqrt((squaredistance / n)) << endl;

    return 0;
}
