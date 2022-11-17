#include <iostream>

using namespace std;

int **arr;

void star(int startx, int starty, int size){

    if(size == 1)
        return;

    for(int i = startx + (size / 3); i < startx + (2 * size / 3); i++){
        for(int j = starty + (size / 3); j < starty + (2 *size / 3); j++){
            arr[i][j] = 1;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            star(startx + i * size / 3, starty + j * size / 3, size / 3);
        }
    }

    return;
}

int main(){

    int n;

    cin >> n;
    
    arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n]{0,};
    }

    star(0, 0, n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0)
                cout << '*';
            else if(arr[i][j] == 1)
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}