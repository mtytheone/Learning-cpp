/*入力された数値を漢数字に直すプログラム*/

#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int main()
{
	map<char, string> converter;

	converter['0'] = "○";
	converter['1'] = "一";
	converter['2'] = "二";
	converter['3'] = "三";
	converter['4'] = "四";
	converter['5'] = "五";
	converter['6'] = "六";
	converter['7'] = "七";
	converter['8'] = "八";
	converter['9'] = "九";

	string num;

	cout << "整数を入力してください:";
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

	cout << endl<< "変換結果:";
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;

	return 0;
}