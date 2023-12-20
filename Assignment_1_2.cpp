#include <iostream>
using namespace std;

int main()
{
	string str;
	
	cout << "Enter a string: ";
	getline (cin, str);
	cout << endl;
	
	int x = str.length();
	
	for (int i = 0; i < x; i++)
	{
		bool isUnique = true;
		
		for (int j = 0; j < x; j++)
		{
			if (i != j && str[i] == str[j])
			{
				isUnique = false;
				break;
			}
		}
		
		if (isUnique)
		{
			cout << str[i];
		}
	}
	
	
	return 0;
}