#include <iostream>
#include <string>
using namespace std;

int main(){

  string input;
  int arr[15];
  int sum = 0;

  cin >> input;

  for(int i = 0; i < input.length(); i++){

    switch (input[i])
    {
    case 'A':
    case 'B':
    case 'C':
      arr[i] = 2;
      break;
    case 'D':
    case 'E':
    case 'F':
      arr[i] = 3;
      break;
    case 'G':
    case 'H':
    case 'I':
      arr[i] = 4;
      break; 
    case 'J':
    case 'K':
    case 'L':
      arr[i] = 5;
      break;   
    case 'M':
    case 'N':
    case 'O':
      arr[i] = 6;
      break; 
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
      arr[i] = 7;
      break;
    case 'T':
    case 'U':
    case 'V':
      arr[i] = 8;
      break;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
      arr[i] = 9;
      break;
    }
  }

  for(int i = 0; i < input.length(); i++){
    sum += arr[i]+1;
  }

  cout << sum;
  return 0;
}