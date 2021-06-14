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
using ll = long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
const ll INF = 1LL << 60; 

int main() {
    map<int,int> rate;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a <= 399) rate[399]++;
        else if (a <= 799) rate[799]++;
        else if (a <= 1199) rate[1199]++;
        else if (a <= 1599) rate[1599]++;
        else if (a <= 1999) rate[1999]++;
        else if (a <= 2399) rate[2399]++;
        else if (a <= 2799) rate[2799]++;
        else if (a <= 3199) rate[3199]++;
        else rate[3200]++;
    }

    int cnt = 0;
    int cnt_free = 0;
    for (auto r : rate) {
        if (r.first == 3200) cnt_free += r.second;
        else cnt++;
    }

    int min_cnt = cnt;
    int max_cnt;
    if (cnt_free == 0) {
        max_cnt = cnt;
    }
    else if (cnt + cnt_free <= 8) {
        max_cnt = cnt + cnt_free;
    }
    else max_cnt = 8;


    cout << min_cnt << " " << max_cnt << endl;
}