#include <iostream>
using namespace std;

int main()
{
	char name[20], role[20];
	int marks;
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your role : ";
	cin >> role;
	cout << "Enter your marks : ";
	cin >> marks;
	cout << endl;
	
	cout << "My name is " << name << ", a " << role << " with " << marks << " marks";
}
