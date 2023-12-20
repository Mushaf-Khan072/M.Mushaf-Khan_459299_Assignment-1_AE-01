#include <iostream>
using namespace std;

int main ()
{
	string str1, str2;
	
	cout << "Enter the first string: ";
	getline (cin, str1);
	
	cout << "Enter the second string: ";
	getline (cin, str2);
	
	int x = str2.length();
	
	if (str1 == str2)
	{
		cout << endl << "The entered strings are equal.\n" << endl;
	    
	    for (int i = 0; i < x - 1; i++)
	    {
	    	swap (str2[i], str2[i + 1]);
		}
		cout << "The second string after rotating becomes: " << str2;
    }
	
	else 
	{
		cout << endl << "The entered strings are not equal.\n" << endl;
	}
	
	return 0;
}