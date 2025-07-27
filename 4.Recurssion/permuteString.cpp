#include <bits/stdc++.h>
using namespace std;

void getPerms(string& s, int idx, vector<string>& ans) {
    if (idx == s.size()) {
        ans.push_back(s);
        return;
    }

    for (int i = idx; i < s.size(); i++) {
        swap(s[idx], s[i]);
        getPerms(s, idx + 1, ans);
        swap(s[idx], s[i]); // backtrack
    }
}

int main() {
    string s = "abc";
    vector<string> ans;

    getPerms(s, 0, ans);

    for (const string& perm : ans) {
        cout << perm << endl;
    }

    return 0;
}
