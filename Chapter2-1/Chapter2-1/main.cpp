#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	CClass obj;
	int num;

	cout << "®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
	cin >> num;

	obj.set(num);
	cout << "“ü—Í‚³‚ê‚½®”:" <<obj.get() << endl;

	return 0;
}