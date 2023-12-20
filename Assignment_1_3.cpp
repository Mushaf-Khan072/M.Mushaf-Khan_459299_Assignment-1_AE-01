#include <iostream>
using namespace std;

int main ()
{
	int a[5] = {1,2,3,4,5};
	int b[5];
	
	cout << "Current array elements are: ";
	
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	
	cout << endl << endl << "Enter five additional elements: \n";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}
	
	cout << endl << "The array after the addition of five elements becomes: ";
	
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
	
	return 0;
}