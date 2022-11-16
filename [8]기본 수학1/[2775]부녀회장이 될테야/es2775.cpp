#include <iostream>

using namespace std;

int main(){

    int t, k, n;
    int **apt;

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> k >> n;

        apt = new int*[k + 1];

        for(int j = 0; j <= k; j++){
            apt[j] = new int[n + 1]{0};

            for(int l = 0; l <= n; l++){
                if(j == 0){
                    apt[j][l] = l;
                }

                else{
                    for(int m = 0; m <= l; m++){
                        apt[j][l] += apt[j - 1][m];
                    }
                }
            }
        }

        cout << apt[k][n] << '\n';

        for(int j = 0; j <=k ; j++)
            delete[] apt[j];
        delete apt;
    }

    return 0;
}