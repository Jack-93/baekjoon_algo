#include <iostream>
using namespace std;

int main(){

  int t, a, b;

  cin >> t;

  int *array = new int[t];
  
  for(int i = 0; i < t; i++){
    cin >> a >> b;
    array[i] = a + b;
  }

  for(int i = 0 ; i < t; i++){
    cout << array[i]<<endl;
  }
  
  return 0;
}