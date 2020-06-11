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


//��̬�滮
bool isMatch(std::string s, std::string p) {
	if (p.empty()) {
		return s.empty();
	}

	// p,s��һ���ַ��Ƿ�ƥ�䣬��Ȼ�Ϊ '.'
	bool first_match = (!s.empty() && (p[0] == s[0] || p[0] == '.'));

	// ��p�ĵ�2���ַ���ʼ�����Ϊ '*'
	if (p.size() >= 2 && p[1] == '*') {
		// ���� '*' ��ʾǰ���ַ�0�κͶ�ε����
		// 0�Σ�s������p��3���ַ�������һ��ƥ��
		// ��� : ��1���ַ�ƥ�䣬��s��2���ַ���p������һ��ƥ��
		return (isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p)));
	}
	else {
		//δƥ�䵽 '*'��������ͨƥ��
		return first_match && isMatch(s.substr(1), p.substr(1));
	}
}

