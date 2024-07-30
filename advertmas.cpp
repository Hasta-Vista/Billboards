#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int billboards, advertisers, weeks, price, lengthWeek;
    int max_profit = 0;
    cin >> billboards >> advertisers >> weeks;
    vector < pair<int, int> > vec;
    for (int i = 0; i != advertisers; ++i) {
         if (cin >> price >> lengthWeek) {
            vec.push_back(make_pair(price, lengthWeek));
        }
    }
    sort(vec.rbegin(), vec.rend());
    for (int i = 0; i != weeks; ++i) {
        for (int j = 0; j != billboards; ++j) {
            for (int a = 0; a != vec.size(); ++a) {
                if (vec[a].second != 0) {
                    max_profit += vec[a].first;
                    if (vec[a].second != 0) {
                        vec[a].second--;
                    }
                    break;
                }
            }
        }
    }
    cout << max_profit << endl;
    vec.clear();
    return 0;
}


