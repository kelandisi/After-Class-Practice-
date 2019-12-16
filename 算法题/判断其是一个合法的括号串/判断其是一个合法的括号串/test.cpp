#define _CRT_SECURE_NO_WARNINGS 1

class Parenthesis {

public:

	bool chkParenthesis(string A, int n) {

		// write code here

		int l = 0; //×óÀ¨ºÅÊı

		for (int i = 0; i < A.length(); i++)

		{

			char c = A[i];

			if (c == '(') {

				l++;

			}
			else if (c == ')') {

				if (l > 0) {

					l--;

				}
				else {

					return false;

				}

			}
			else {

				return false;

			}

		}

		return l == 0;

	}

};
