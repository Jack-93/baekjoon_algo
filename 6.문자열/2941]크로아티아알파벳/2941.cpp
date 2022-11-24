#include <iostream>
#include <cstring>

using namespace std;
// ?	c=
// ?	c-
// d?	dz=
// ©¢	d-
// lj	lj
// nj	nj
// ?	s=
// ?	z=

int alpha(char in[]){
    int count=0;

    for(int i=0;i<strlen(in);i++)
    {
        if(in[i]=='c' && in[i+1]=='=') count+=1;
        else if(in[i]=='c' && in[i+1]=='-'){
            count+=1;
            i++;
        }
        else if(in[i]=='d' && in[i+1]=='z' && in[i+2]=='='){
            count+=1;
            i+=2;
        }
        else if(in[i]=='d' && in[i+1]=='-'){
            count+=1;
            i++;
        }
        else if(in[i]=='l' && in[i+1]=='j'){
            count+=1;
            i++;
        }
        else if(in[i]=='n' && in[i+1]=='j'){
            count+=1;
            i++;
        }
        else if(in[i]=='s' && in[i+1]=='='){
            count+=1;
            i++;
        }
        else if(in[i]=='z' && in[i+1]=='='){
            count+=1;
            i++;
        }
        else if(in[i]>='a' && in[i]<='z') count+=1;
        else if(in[i]=='-' && in[i]=='=') count+=1;
    }
    return count;
}
int main()
{
    char input[101];
    cin>>input;
    int sum=alpha(input);
    cout << sum;

	return 0;
}
