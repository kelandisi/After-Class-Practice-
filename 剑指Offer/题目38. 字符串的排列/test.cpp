#define _CRT_SECURE_NO_WARNINGS 1
std::vector<std::string> permutation(std::string s) {
	if (s.empty()) {
		return{};
	}

	// ���ַ�����������
	std::sort(s.begin(), s.end());
	std::vector<std::string> res;
	// ����ַ��Ƿ������
	std::vector<bool> visit(s.size(), false);
	std::string track;
	backtrack(res, s, track, visit);

	return res;
}

/*
* ���ݺ���
* ʹ��sort�������ַ�������ʹ�ظ����ַ����ڣ�
* ʹ��visit�����¼����������ʱÿ���ڵ��״̬��
* �ڵ�δ�����������ַ������ظ��ַ�ʱ��
* �򽫸��ַ����������ַ����У����εݹ������
* */
void backtrack(std::vector<std::string> &res, std::string s, std::string &track, std::vector<bool> &visit) {
	// ���ݽ�������
	if (track.size() == s.size()) {
		res.push_back(track);
		return;
	}

	// ѡ���ѡ���б�
	for (int i = 0; i < s.size(); i++) {
		// �ų����Ϸ���ѡ��
		if (visit[i]) {
			continue;
		}

		if (i > 0 && !visit[i - 1] && s[i - 1] == s[i]) {
			continue;
		}
		visit[i] = true;

		// ��ѡ��
		track.push_back(s[i]);
		// ������һ�ξ�����
		backtrack(res, s, track, visit);
		// ����ѡ��
		track.pop_back();
		visit[i] = false;
	}
}

std::vector<std::string> permutation2(std::string s) {
	// ȥ�ش���
	std::set<std::string> res;
	backtrack2(s, 0, res);

	return std::vector<std::string>(res.begin(), res.end());
}

/*
* ���ݺ���
* ʹ��set�������ַ����ַ�����ȥ�أ�
* ʹ��swap�������������ַ�
* */
void backtrack2(std::string s, int start, std::set<std::string> &res) {
	// ���ݽ�������
	if (start == s.size()) {
		res.insert(s);
		return;
	}

	for (int i = start; i < s.size(); i++) {
		// ��ѡ��
		std::swap(s[i], s[start]);
		// ������һ�ξ�����
		backtrack2(s, start + 1, res);
		// ����ѡ��
		std::swap(s[i], s[start]);
	}
}

