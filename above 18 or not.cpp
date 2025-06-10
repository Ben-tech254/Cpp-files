#include <iostream>
using namespace std;

int main(void)
{
	int age;
	cout << "Enter your age : " ;
	cin >> age;
	
	if(age > 18)
		cout << "You are above 18 years!";
	else
		cout << "You are not above 18 years!";
}
