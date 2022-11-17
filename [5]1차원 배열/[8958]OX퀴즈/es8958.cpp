#include <iostream>
#include <string.h>
using namespace std;

int main(){

  int input, score, count;
  char str[80] = {0};
  cin >> input;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  for(int i = 0; i < input; i++){
    score = 0;
    count = 0;
    cin >> str;

    for(int j = 0 ; str[j] != 0; j++){
      if(str[j] == 'O'){
        count++;
        score += count;
      }
      else{
        count = 0;
      }
    }
    cout << score << '\n';
    memset(str,0,sizeof(str));

  }
  return 0;
}