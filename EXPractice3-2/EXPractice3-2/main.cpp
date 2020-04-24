#include <iostream>
#include "collection.h"

using namespace std;

int main() 
{
    cout << "�����̏ꍇ" << endl;
    int array1[] = { 1, 5, 4, 2, 3 };
    Collection<int>* c1 = new Collection<int>(array1, 5);
    c1->showArray();
    cout << "�ő�l : " << c1->getMax() << endl;
    cout << "�ŏ��l : " << c1->getMin() << endl << endl;
    delete c1;

    cout << "�����̏ꍇ" << endl;
    double array2[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2 };
    Collection<double>* c2 = new Collection<double>(array2, 5);
    c2->showArray();
    cout << "�ő�l : " << c2->getMax() << endl;
    cout << "�ŏ��l : " << c2->getMin() << endl << endl;
    delete c2;
    return 0;
}