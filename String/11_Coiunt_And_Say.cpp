class Solution {
public:
    string countAndSay(int n) {
         if (n == 1) return "1";

    // let's take the ans of prev. count
    string a = countAndSay(n - 1);

    // now make new ans based on count from prev.
    string ans = "";
    for (int i = 0;i < a.size();) {
        char c = a[i];
        int count = 0;
        while (i < a.size() && a[i] == c) {
            count++;
            i++;
        }
        ans += to_string(count);
        ans += c;
    }
    return ans;
    }
};
