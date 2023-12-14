#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num) {
	int i;
	for (i = 2;i <= num / 2;i++)
		if (num % i == 0)
			return 0;
	return 1;
}
void printPrimeNumber(int numofprime)
{
	const int NUMBER_OF_PRIMES = 200;
	const int LINE = 10;
	int count = 0;
	int number = 2;
	while (count < numofprime)
	{
		if (is_prime(number))
		{
			count++;
			if (count % LINE == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}

int main()
{
	cout << "The first 200 prime numbers are \n";
	printPrimeNumber(200);

	return 0;
}