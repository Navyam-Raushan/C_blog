// printing Markov Matrix
#include <iostream>
using namespace std;

int main()
{

    int i, j,csum;
    int m=3,n=3;
    int a[m][n];
    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    // printing matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for ( j = 0; j < m; j++)
    {
         csum=0;
        for ( i = 0; i < n; i++)
        {
            csum=csum+a[i][j];
        }
        
    }
    cout<<"sum of cols is"<<csum<<endl;
    if (csum==1)
    {
      cout<<"It is a Markov Matrix"<<endl;
    }
    else
    cout<<"It is not a Markov matrix"<<endl;
    

    return 0;
}