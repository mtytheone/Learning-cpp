#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	CClass obj;
	int num;

	cout << "��������͂��Ă��������B" << endl;
	cin >> num;

	obj.set(num);
	cout << "���͂��ꂽ����:" <<obj.get() << endl;

	return 0;
}