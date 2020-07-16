#define _CRT_SECURE_NO_WARNINGS 1
class MedianFinder {
	vector<double> store;

public:
	// Adds a number into the data structure.
	void addNum(int num)
	{
		store.push_back(num);
	}

	// Returns the median of current data stream
	double findMedian()
	{
		sort(store.begin(), store.end());

		int n = store.size();
		return (n & 1 ? store[n / 2] : (store[n / 2 - 1] + store[n / 2]) * 0.5);
	}
};

