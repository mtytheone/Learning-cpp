/*���͂��ꂽ���l���������ɒ����v���O����*/

#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int main()
{
	map<char, string> converter;

	converter['0'] = "��";
	converter['1'] = "��";
	converter['2'] = "��";
	converter['3'] = "�O";
	converter['4'] = "�l";
	converter['5'] = "��";
	converter['6'] = "�Z";
	converter['7'] = "��";
	converter['8'] = "��";
	converter['9'] = "��";

	string num;

	cout << "��������͂��Ă�������:";
	cin >> num;

	stack<string> st;
	int counter = 0;

	for (int i = num.length(); i >= 0; i--, counter++)
	{
		char ch = num[i];
		string covert_ch = converter[ch];
		st.push(covert_ch);

		if (counter % 3 == 0 && counter != 0)
		{
			st.push(",");
		}
	}

	cout << endl<< "�ϊ�����:";
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;

	return 0;
}