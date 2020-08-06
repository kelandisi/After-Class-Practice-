#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	string reverseWords(string s) {
		stack<string> stk;
		string res, str;
		istringstream ss(s);
		while (ss >> str) stk.push(str), stk.push(" ");
		if (!stk.empty()) stk.pop();
		while (!stk.empty()) res += stk.top(), stk.pop();
		return res;
	}
};

class Solution {
public:
	string reverseWords(string s) {
		istringstream ss(s);
		string res, str;
		while (ss >> str)
			res = str + ' ' + res;
		return res.substr(0, res.size() - 1);
	}
};

