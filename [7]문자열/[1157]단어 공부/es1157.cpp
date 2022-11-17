#include <iostream>
#include <string>
using namespace std;

int main(){

  int arr[26] = {0};
  int max = 0, index = 0;
  int count = 0;
  string s;

  cin >> s;

  for(int i = 0; i < s.length(); i++){
    if(s[i] >= 'A' && s[i] <= 'Z')
      arr[s[i] - 65]++;
    else if(s[i] >= 'a' && s[i] <= 'z')
      arr[s[i] - 97]++;
  }

  for(int i = 0; i < 26; i++){
    if(max < arr[i]){
      max = arr[i];
      index = i;
    }
  }

  for(int i = 0; i < 26; i++){
    if((arr[i] == max) && (i != index)){
      cout << '?';
      return 0;
    }
  }
  cout << (char)(index + 65);
  return 0;
}