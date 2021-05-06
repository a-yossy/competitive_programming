#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <numeric>
using namespace std;
const int INF = 1234567890; 

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    bool exist = false;
    for (int bit = 0; bit < (1 << N); bit++){
        int sum = 0;
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                sum += a[i];
            }
        }

        if (sum == W) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}