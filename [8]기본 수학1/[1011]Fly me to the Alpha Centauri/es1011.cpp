#include <iostream>

using namespace std;

int main(){

    int t, x, y, k = 0;
    int count;

    cin >> t;

    for(int i = 0; i < t; i++){
        count = 0;
        k = 0;
        
        cin >> x >> y;

        while(1){
            if(y - x <= k + 1){
                count += 1;
                break;
            }

            else if(y - x <= 2 * (k + 1)){
                count += 2;
                break;
            }

            count +=2;
            k++;
            x += k;
            y -= k;
        }


        cout << count << endl;
    }

    
    return 0;

}