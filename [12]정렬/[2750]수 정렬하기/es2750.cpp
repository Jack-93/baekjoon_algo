#include <iostream>

using namespace std;

int main(){

    int n;
    int *input;
    int tmp;
    cin >> n;

    input = new int[n];
    for(int i = 0; i < n; i ++)
        cin >> input[i];
    
    for(int i = 0; i < n; i ++){
        for(int j = i + 1; j < n; j++){
            if(input[i] > input[j]){
                tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i ++){
        cout << input[i] << '\n';
    }
    
    return 0;
}