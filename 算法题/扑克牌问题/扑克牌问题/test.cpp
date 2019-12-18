#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> helper(string s) {
	vector<int> v;
	for (int i = 0; i<s.size(); i++) {
		if (s[i] == '1') {
			v.push_back(10);
			i++;
		}
		else if (s[i] == 'J') v.push_back(11);
		else if (s[i] == 'Q') v.push_back(12);
		else if (s[i] == 'K') v.push_back(13);
		else if (s[i] == 'A') v.push_back(14);
		else if (s[i] == '2') v.push_back(15);
		else if (s[i] == ' ') continue;
		else v.push_back(s[i] - '0');
	}
	return v;
}
int main() {
	string s;
	getline(cin, s);
	unsigned int k = s.find('-');
	int n = s.size();
	string s1 = s.substr(0, k);
	string s2 = s.substr(k + 1);
	if (s1 == "joker JOKER" || s2 == "joker JOKER") {
		cout << "joker JOKER" << endl;
		return 0;
	}
	vector<int> v1 = helper(s1);
	vector<int> v2 = helper(s2);
	if (v1.size() == 4 && v2.size() == 4) {
		if (v1[0]<v2[0]) cout << s2 << endl;
		else cout << s1 << endl;
		return 0;
	}
	if (v1.size() == 4) cout << s1 << endl;
	else if (v2.size() == 4) cout << s2 << endl;
	else if (v1.size() != v2.size()) cout << "ERROR" << endl;
	else if (v1[0]<v2[0]) cout << s2 << endl;
	else if (v1[0]>v2[0]) cout << s1 << endl;
	else {
		cout << "ERROR" << endl;
	}
	system("pause");
	return 0;


}