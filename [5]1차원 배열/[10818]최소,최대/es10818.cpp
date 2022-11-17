#include <iostream>
using namespace std;

int main(){

  int n;
  int min, max;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin >> n;
  int *array = new int[n];

  for(int i = 0; i < n; i++){
    cin >> array[i];
  }

  min = max = array[0];

  for(int i = 0; i < n; i ++){
    if(min > array[i])
      min = array[i];
    if(max < array[i])
      max = array[i];
  }

  cout << min << ' ' << max;
  return 0;
}