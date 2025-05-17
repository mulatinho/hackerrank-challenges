#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> h(26);
    string word;
    int maxHeight = 0;

    for(int h_i = 0; h_i < 26; h_i++) { cin >> h[h_i]; }
    cin >> word;

    for (int x = 0; x < word.size(); x++) {
        int idx = (int)word[x] - 97;
        // cout << x << ' ' << h[idx] << ' ' << maxHeight << endl;
        maxHeight = h[idx] > maxHeight ? h[idx] : maxHeight;
    }

    cout << maxHeight * word.size() << endl;

    return 0;
}
