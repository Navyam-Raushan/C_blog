#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];

  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  int max = 0;
  for (int j = 0; j < n; j++) {
    if(a[j] > max) {
      max = a[j];
    }
  }

  int max2 = 0;
  for(int k = 0; k < n; k++) {
    if(a[k] == max) {
      continue;
    }
    else if(a[k] > max2) {
      max2 = a[k];
    }
  }

  cout<<max<<endl;
  cout<<max2<<endl;

return 0;
}