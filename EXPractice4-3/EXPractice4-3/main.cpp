#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	int num;

	do
	{
		cout << "正の整数を入力:";
		cin >> num;
		vec.push_back(num);
	} while (num != -1);

	vector<int>* resultVec;
	resultVec = new vector<int>[10];

	for (unsigned int i = 0; i < vec.size() - 1; i++)
	{
		int tmp = vec[i];

		while (tmp >= 10)
		{
			tmp /= 10;
		}

		resultVec[tmp].push_back(vec[i]);
	}

	int max_num = vec[0], min_num = vec[0];

	for (unsigned int j = 1; j < vec.size() - 1; j++)
	{
		if (vec[j] > max_num)
		{
			max_num = vec[j];
		}
		else if (vec[j] < min_num)
		{
			min_num = vec[j];
		}
	}

	cout << endl;

	vector<int>::iterator itr;

	for (int k = 0; k < 10; k++)
	{
		cout << "一の位が" << k << " : ";
		
		if (resultVec[k].size() == 0)
		{
			cout << "なし";
		}
		else
		{
			for (itr = resultVec[k].begin(); itr != resultVec[k].end(); itr++)
			{
				cout << *itr << " ";
			}
		}

		cout << endl;
	}

	cout << endl;

	cout << "最大値 : " << max_num << endl;
	cout << "最小値 : " << min_num << endl;

	return 0;
}