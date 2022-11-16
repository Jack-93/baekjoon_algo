#include <iostream>
#include <string>

using namespace std;

int main(){

  string s;
  int count = 0;

  cin >> s;

  for(int i = 0; i < s.length(); i++){
    
    switch (s[i])
    {
    case 'c':
      if(s[i + 1] == '='){
        count++;
        i++;
      }
      else if(s[i + 1] == '-'){
        count++;
        i++;
      }
      else
        count++;
      break;
    case 'd':
      if(s[i + 1] == 'z'){
        if(s[i + 2] == '='){
          count++;
          i += 2;
        }
        else
          count++;
      }
      else if(s[i + 1] == '-'){
        count++;
        i++;
      }
      else
        count++;
      break;
    case 'l':
      if(s[i + 1] == 'j'){
        count++;
        i++;
      }
      else
        count++;
      break;
    case 'n':
      if(s[i + 1] == 'j'){
        count++;
        i++;
      }
      else
        count++;
      break;
    case 's':
      if(s[i + 1] == '='){
        count++;
        i++;
      }
      else
        count++;
      break;
    case 'z':
      if(s[i + 1] == '='){
        count++;
        i++;
      }
      else
        count++;    
      break;
    default:
      count++;
      break;
    }
  }
  
  cout << count;
  return 0;
}