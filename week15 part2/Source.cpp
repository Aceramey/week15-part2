// Cooper Ramey
// CIS 1202
// 12/4/2022
#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T number)
{
	if (typeid(number) == typeid(std::int32_t))
	{
		float temp;
		temp = static_cast<double>(number);
		temp = temp / 2.0;
		temp = round(temp);
		return static_cast<int>(temp);
	}
	else
	{
		return number / 2.0;
	}
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}