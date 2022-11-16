#include <iostream>
#include <string>

using namespace std;

int main(){

  bool check = true;
  int count = 0;
  string s;

  getline(cin,s);

  for(int i = 0; i < s.length(); i++){
    if(s[i] == ' '){
      check = true;
      continue;
    }
    else if(check){
      count++;
      check = false;
    }
  }

  cout << count;

  return 0;
}