#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> li;
	string str;

	do
	{
		cout << "����������:";
		cin >> str;
		li.push_back(str);
	} while (str.length != 0);

	cout << endl;

	list<string>::iterator itr;

	for (itr = li.begin(); itr != li.end(); itr++)
	{
		if (itr->length() >= 5)
		{
			li.erase(itr);
		}
	}

	cout << "5���������̒P��:";
	for (itr = li.begin(); itr != li.end(); itr++)
	{
		cout << *itr;
	}
	cout << endl;

	return 0;
}