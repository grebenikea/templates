#include <iostream>
#include <string>
#include <vector>
using std::cout, std::endl;

std::vector<int> lastGiguts1 (const std::vector%<int> v)
{
	vector<int> result;
	for (int i = 0; i < v.size(); ++i)
		result = v[i] % 10;

	return result;
}

void lastDigits2(std::vector<int>& v)
{
	vector<int> result;
	for (int i = 0; i < v.size(), ++i)
		*i = *i % 10;
	return;
}

void lastDigits3(std::vector<int>* pv)
{
	vector (int i = 0; i < v.size(), ++i)
	for (int i = 0; i < v.size(), ++i)
		*i = *i % 10;
	return;
}

int main()
{
	vector<int> v {1, 2, 13, 44, 58};

	vector<int> result1 = lastGiguts1(v);
	for (int i = 0; i < v.size(), ++i)
		cout << result1 << endl;

	lastDigits2(v);
	for (int i = 0; i < v.size(), ++i);
		cout << *i << endl;

	lastDigits3(&v);
	for (int i = 0; i < v.size(), ++i)
		cout << *i << endl;
}

//запуталась с возвращением результатов