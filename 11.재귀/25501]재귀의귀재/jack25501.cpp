#include <iostream>
#include <string.h>
using namespace std;


#define MAX_CHAR 1000
int recursioncount=0;

int recursion(const char *s, int l, int r){
    recursioncount++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else {
        return recursion(s, l+1, r-1);
    }
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(){
    int count;
    char input_table[MAX_CHAR]={0};

    cin>>count;

    for(int i=0;i<count;i++) {
        cin>>input_table;
        cout<<isPalindrome(input_table)<<" ";
        cout<<recursioncount<<"\n";
        recursioncount=0;
    }
}
