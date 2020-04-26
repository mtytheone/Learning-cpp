/*入力された英単語を逆順で出力するプログラム*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	cout << "英単語を入力:";

	string eng;
	cin >> eng;

	stack<char> st;

	for (unsigned int i = 0; i < eng.length(); i++)
	{
		st.push(eng[i]);
	}

	cout << endl;
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;

	return 0;
}