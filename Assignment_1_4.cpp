#include <iostream>
using namespace std;

int main() 
{
    int N;
    
	cout << "Enter a positive integer limit: ";
    cin >> N;

    while (N > 2) 
	{
        bool x = true;

        for (int i = 2; i < N; ++i) 
		{
            if (N % i == 0) 
			{
                x = false;
                break;
            }
        }

        if (x) 
		{
            cout << "The largest prime number less than or equal to the entered limit is: " << N << endl;
            break;
        }

        N--;
    }
    
    if (N < 1)
    {
    	cout << "Error: Invalid Input.";
	}
	
	if (N == 1 || N == 2)
    {
    	cout << "The largest prime number less than or equal to the entered limit is: " << N;
	}

    return 0;
}
