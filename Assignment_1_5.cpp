#include <iostream>
using namespace std;

int main()
{
	int a[6];
	int i, j, temp;
	
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter the element for position " << i + 1 << " : ";
		cin >> a[i];
	}
	
	for (i = 0; i < 6; i++)
	{
		for (j = i; j < 6; j++)
		{
			if (a[j] > a[i])
			{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		    }
		}
	}

	cout << endl << "The array after being sorted in descending order is ";
	 
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
