#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int add(int, int);
double add(double, double);
string add(string, string);

int main()
{
	int IntFirstValue;
	int IntSecondValue;
	double DoubFirstValue;
	double DoubSecondValue;
	string FirstData;
	string SecondData;

	cout << "Enter integer value " << endl;
	cin >> IntFirstValue;
	cin >> IntSecondValue;
	add(IntFirstValue, IntSecondValue);
	
	cout << "Enter value fractional" << endl;
	cin >> DoubFirstValue;
	cin >> DoubSecondValue;
	add(DoubFirstValue, DoubSecondValue);

	cout << "Enter message " << endl;
	cin >> FirstData;
	cin >> SecondData;
	add(FirstData, SecondData);


}

int add(int FirstValue, int SecondValue)
{
	int Sum;
	Sum = FirstValue + SecondValue;
	cout << Sum << endl;
	return cout.good();
}

double add(double FirstValue, double SecondValue)
{
	double Sum;
	Sum = FirstValue + SecondValue;
	cout << Sum << endl;
	return cout.good();
}

string add(string FirstData, string SecondData)
{
	string Sum;
	Sum = FirstData + SecondData;
	cout << Sum << endl;
	return Sum;
}