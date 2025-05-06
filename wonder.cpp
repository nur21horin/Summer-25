#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> arrange_sticks(int n, const string &s) {
    vector<int> result;
    stack<int> stk;

    for (int i = 1; i <= n; ++i) {  // Start from the largest number
        stk.push(i);
        if (i == 1 || s[i - 2] == '>') {  // If the next relation is '>', pop the stack
            while (!stk.empty()) {
                result.push_back(stk.top());
                stk.pop();
            }
        }
    }

    return result;
}

int main() {
    int t; 
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        string s;
        cin >> n >> s;  // Input stick count and constraints

        vector<int> arrangement = arrange_sticks(n, s);
        
        for (int num : arrangement) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}