class Solution {
public:
    vector<string> res;
    bool isValide(string s, int n) {
        int cnt = 0;
        for (auto c : s) {
            if (c == '(')
                cnt++;
            if (c == ')')
                cnt--;
            if (cnt < 0)
                return false;
        }
        if (cnt == 0)
            return true;
        return false;
    }
    void func(string s, int n, int open, int close) {
        if (s.size() == 2 * n) {
            if (isValide(s, n)) {
                res.push_back(s);
                return;
            }
        }
        if (open >= close) {
            s.push_back(')');
            close++;
            func(s, n, open, close);
            s.pop_back();
            close--;
            if (open < n) {
                s.push_back('(');
                open++;
                func(s, n, open, close);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        func(s, n, 0, 0);
        return res;
    }
};