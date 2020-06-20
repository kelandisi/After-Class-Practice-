#define _CRT_SECURE_NO_WARNINGS 1
class MinStack {
	stack<int> s;
	stack<int> s2;
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		s.push(x);
		if (s2.empty() || x <= s2.top()) s2.push(x);
	}

	void pop() {
		if (s.top() == s2.top()) s2.pop();
		s.pop();
	}

	int top() {
		return s.top();
	}

	int min() {
		return s2.top();
	}
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(x);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->min();
*/
