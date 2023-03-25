
#include <iostream>
using namespace std;
int isprime(int n);
int isprime(int n)
{ // this function is to check whether a no. is prime or not
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)

        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1; // compiler will automatiocally understand 1 means true
    }
    else
        return 0; // compiler will automatically understand 0 as false.
}
// We have to check that a given no. can be expressed as prime or not
int main()

{
    int num, i;
    cout << "Enter a number" << endl;
    cin >> num;
    for (i =1 ; i <= num; i++)
    {
        if (isprime(i) == 1)
        {
            if (isprime(num - i) == 1)
            {
                cout << "This number is expressed as sum of two primes." << endl;
                exit(0);
            }
        }
        else
            cout << "Number can't be express as sum of two primes." << endl;
        // exit(0);
    }

    return 0;
}
 // Take student marks from user
 // show the result of grade calculate percentage and put range for it and get grades.
 //percentage calculation and all grade claculation will be done in function.
 // to stop the program user have to enter 0 .