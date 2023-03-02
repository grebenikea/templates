#include <iostream>
#include <string>
#include <vector>
#include <utility>
using std::cout, std::endl;

void printVector(const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}


template <typename T>
T max(std::vector<T> v)
{
    T result = v[0];

    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] > result)
            result = v[i];
    }

    return result;
}


int main()
{
    std::vector v1 {1, 2, 3, 4, 5, 6, 7};
    cout << max(v1) << endl;

    std::vector v2 {-0.9, 1.7, -12.3, 5.6, 3.0, 3.5, -2.3, 0.0};
    cout << max(v2) << endl;

    std::vector<std::string> v3 {"a", "aaa", "AAA", "AaAaAaAa" , "KKKKKKK"};
    cout << max(v3) << endl;

    std::vector<std::pair<int, int>> v4 {{10, 20}, {30,40}, {40,30}};
    std::pair<int, int> result = max(v4);
    cout << result.first << " " << result.second << endl;
}