#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


class Solution {
public:
	bool isMatch(string s, string p) {
		if (p.empty()) return s.empty();
		if (p[1] == '*') {
			return isMatch(s, p.substr(2)) || (!s.empty() && (s[0] == p[0] || p[0] == '.')) && isMatch(s.substr(1), p);
		}
		else {
			return !s.empty() && (s[0] == p[0] || p[0] == '.') && (isMatch(s.substr(1), p.substr(1)));
		}
	}
};


//动态规划
bool isMatch(std::string s, std::string p) {
	if (p.empty()) {
		return s.empty();
	}

	// p,s第一个字符是否匹配，相等或为 '.'
	bool first_match = (!s.empty() && (p[0] == s[0] || p[0] == '.'));

	// 从p的第2个字符开始，如果为 '*'
	if (p.size() >= 2 && p[1] == '*') {
		// 考虑 '*' 表示前面字符0次和多次的情况
		// 0次：s回溯与p第3个字符继续下一轮匹配
		// 多次 : 第1个字符匹配，从s第2个字符与p继续下一轮匹配
		return (isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p)));
	}
	else {
		//未匹配到 '*'，继续普通匹配
		return first_match && isMatch(s.substr(1), p.substr(1));
	}
}

