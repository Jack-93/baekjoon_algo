#include <iostream>
using namespace std;

int main(){

  int n;
  int max;
  double avg = 0;
  
  cin >> n;

  double *arr = new double[n];
 
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  max = arr[0];
  for(int i = 0; i < n; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }

  for(int i = 0; i < n; i++){
    arr[i] = (arr[i] / (double)max) * 100;
  }

  for(int i = 0; i < n; i++){
    avg += arr[i];
  }
  avg /= n;

  cout << avg;
  return 0;

}