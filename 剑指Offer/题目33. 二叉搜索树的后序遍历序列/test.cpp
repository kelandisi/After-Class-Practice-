#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	bool verifyPostorder(vector<int>& postorder) {
		if (postorder.size() <= 1) {
			return true;
		}
		return Recur(postorder, 0, postorder.size() - 1);
	}
	bool Recur(vector<int>& postorder, int i, int j) {
		if (i >= j) {
			return true;
		}
		int m;
		for (m = 0; m<j; m++) {
			if (postorder[m]>postorder[j]) {
				break;
			}
		}
		for (int k = m + 1; k<j; k++) {
			if (postorder[k]<postorder[j]) {
				return false;
			}
		}
		return Recur(postorder, i, m - 1) && Recur(postorder, m, j - 1);
	}
};
  




class Solution {
public:
	bool verifyPostorder(vector<int>& postorder) {
		if (postorder.size() == 0) {
			return true;
		}
		stack<int> q;
		int root = INT_MAX;
		for (int i = postorder.size() - 1; i >= 0; i--) {
			if (postorder[i]>root) {
				return false;
			}
			while (!q.empty() && q.top()>postorder[i]) {
				root = q.top();
				q.pop();
			}
			q.push(postorder[i]);
		}
		return true;
	}
};

