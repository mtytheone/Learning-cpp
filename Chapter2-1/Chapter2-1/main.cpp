#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	CClass obj;
	int num;

	cout << "整数を入力してください。" << endl;
	cin >> num;

	obj.set(num);
	cout << "入力された整数:" <<obj.get() << endl;

	return 0;
}