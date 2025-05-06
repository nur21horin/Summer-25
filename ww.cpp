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

        vector<int> result(n); // To store the final arrangement
        vector<int> numbers(n);
        iota(numbers.begin(), numbers.end(), 1); // Fill with 1 to n

        int left = 0;
        int right = n - 1;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '<') {
                result[i] = numbers[left++];
            }
        }
        for(int i = n-1; i >=0; i--){
            if(result[i] == 0){
                result[i] = numbers[right--];
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
