#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> p(n);
        iota(p.begin(), p.end(), 1);

        vector<int> result(n);
        int current_index = 0;

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '>') {
                int j = i;
                while (j < n - 1 && s[j] == '>') {
                    j++;
                }
                vector<int> sub_array;
                for (int k = i; k <= j; ++k) {
                    sub_array.push_back(p[k]);
                }
                sort(sub_array.rbegin(), sub_array.rend());
                for (int k = 0; k < sub_array.size(); ++k) {
                    result[i + k] = sub_array[k];
                }
                i = j;
            }
        }

        vector<int> remaining_elements;
        vector<bool> used(n + 1, false);
        for (int val : result) {
            if (val != 0) {
                used[val] = true;
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (!used[i]) {
                remaining_elements.push_back(i);
            }
        }

        int remaining_idx = 0;
        for (int i = 0; i < n; ++i) {
            if (result[i] == 0) {
                result[i] = remaining_elements[remaining_idx++];
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}