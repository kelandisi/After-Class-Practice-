#define _CRT_SECURE_NO_WARNINGS 1
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Codec {
public:

	// Encodes a tree to a single string.
	string serialize(TreeNode* root) {
		ostringstream out;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()) {
			TreeNode* tmp = q.front();
			q.pop();
			if (tmp) {
				out << tmp->val << " ";
				q.push(tmp->left);
				q.push(tmp->right);
			}
			else {
				out << "null ";
			}
		}
		return out.str();
	}

	// Decodes your encoded data to tree.
	TreeNode* deserialize(string data) {
		istringstream input(data);
		string val;
		vector<TreeNode*> vec;
		while (input >> val) {
			if (val == "null") {
				vec.push_back(NULL);
			}
			else {
				vec.push_back(new TreeNode(stoi(val)));
			}
		}
		int j = 1;                                          // iÿ�����ƶ�һλ��j�ƶ���λ��jʼ���ǵ�ǰi�������±�
		for (int i = 0; j < vec.size(); ++i) {              // �϶���j�ȵ���߽磬���������ж�j < vec.size()
			if (vec[i] == NULL) continue;                   // vec[i]Ϊnullʱ������
			if (j < vec.size()) vec[i]->left = vec[j++];    // ��ǰjλ��Ϊi��������
			if (j < vec.size()) vec[i]->right = vec[j++];   // ��ǰjλ��Ϊi��������
		}
		return vec[0];
	}

};
