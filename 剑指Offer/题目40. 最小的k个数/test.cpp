#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		vector<int> vec(k, 0);
		sort(arr.begin(), arr.end());
		for (int i = 0; i < k; ++i) vec[i] = arr[i];
		return vec;
	}
};




//
class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		vector<int>vec(k, 0);
		if (k == 0) return vec; // ÅÅ³ý 0 µÄÇé¿ö
		priority_queue<int>Q;
		for (int i = 0; i < k; ++i) Q.push(arr[i]);
		for (int i = k; i < (int)arr.size(); ++i) {
			if (Q.top() > arr[i]) {
				Q.pop();
				Q.push(arr[i]);
			}
		}
		for (int i = 0; i < k; ++i) {
			vec[i] = Q.top();
			Q.pop();
		}
		return vec;
	}
};

