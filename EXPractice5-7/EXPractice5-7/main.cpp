/*���͂��ꂽ�p�P����t���ŏo�͂���v���O����*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	cout << "�p�P������:";

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