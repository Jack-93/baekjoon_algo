#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n, m;                                //n의 세로의 수, m은 가로의 수
    int bc, wc, result = 64;
    vector<int> v;                           //경우의 수 저장벡터
    string *board;                           //입력받은 보드    
    string b[8];
    string w[8];

    cin >> n >> m; 

    board = new string[n];                   // 동적배열 할당 (m * n)                    
    
    for(int i = 0; i < n; i ++)              // 보드에 입력받은 값 저장
        cin >> board[i];
    
    for(int i = 0; i < 8; i++){
        if(i % 2 == 0){
            b[i] = "BWBWBWBW";
            w[i] = "WBWBWBWB";
            continue;
        }
        b[i] = "WBWBWBWB";
        w[i] = "BWBWBWBW";
    }


    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            bc = 0;
            wc = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(board[i + k][j + l] != b[k][l])
                        bc++;
                    else
                        wc++;
                }
            }
            if( result > min(bc, wc))
                result = min(bc, wc);
        }
    }

    cout << result;
    return 0;
}