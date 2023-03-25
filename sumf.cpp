#include <iostream>
using namespace std;
int sum(int a, int b, int c);
float div(float x, float y);
int max(int a, int b);

int sum(int a, int b, int c)
{
    return a + b + c;
}
float divis(float x, float y)
{

    return (x / y);
}
int max(int a, int b)
{
    if (a > b)
    {
        return a; //use return inside function to return anything
    }
    else
    {
        return b;
    }
}

int main()
{
    // int a, b, c, d;
    // cin >> a >> b >> c;
    // d = sum(a, b, c);
    // cout << d << endl;

    int m, n;
    cin >> m >> n;
    float e = divis(m, n);
    cout << e << endl;
    int largest=max(m,n);
    cout<<largest;

    return 0;
}
