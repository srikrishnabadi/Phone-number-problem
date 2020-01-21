#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class Phone
{
	int i;
	public:
		void getArea(char arr[])
		{
			cout << "The area code is ";
			for(i=0;i<3;i++)
			{
				cout << arr[i];
			}
			cout << endl;
		}
		void getExchange(char arr[])
		{
			cout << "The Exchange code is ";
			for(i=3;i<6;i++)
			{
				cout << arr[i];
			}
			cout << endl;
		}
		void getNumber(char arr[])
		{
			cout << "The number code is ";
			for(i=6;i<10;i++)
			{
				cout << arr[i];
			}
			cout << endl;
		}
};

int main()
{
	char a[15],b[10];
	Phone p;
	int c=0;
	cout << "Enter the 10 digit number : ";
	cin >> a;
	int i=0,j=0;
	while(a[i]!='\0')
	{
		if(isdigit(a[i]))
		{
			b[j]=a[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	cout << "The actual number are ";
	for(i=0;i<10;i++)
	cout << b[i];
	cout << endl;
	p.getArea(b);
	p.getExchange(b);
	p.getNumber(b);
	return 0;
}
