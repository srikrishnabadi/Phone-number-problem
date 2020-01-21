#include<iostream>
#include<string>
#include<cctype>
using namespace std;

const int num = 10;
//string readValidNumber(string usernumber);

int main()
{
	string usernumber;
	cout << "Enter the valid number of 10 digit : ";
	cin >> usernumber;
	if(usernumber.length()==num)
	{
		cout << "You have entered a valid number!!" << endl;
	}
	else
	{
		cout << "Invalid number of digits\nEnter again..." << endl;
		return 0;
	}
	usernumber.insert(0,"(");
	usernumber.insert(4,") ");
	usernumber.insert(9,"-");
	cout << "The give number can be represented as " << usernumber << "." << endl;
	cout << "The area code is represented in () brackets." << endl;
	cout << "The Exchange code is represented within '-' symbol." << endl;
	cout << "The Number code is the last 4 numbers of the usernumber." << endl;
	//cout << usernumber;
	return 0;
}
