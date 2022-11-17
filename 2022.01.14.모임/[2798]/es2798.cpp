#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, m;
    int input;
    int sum;
    vector<int> card, sums;

    cin >> n >> m;                                          // n개의 카드 개수와 3카드의 합계의 상한선인 m 입력받음

    for(int i = 0; i < n; i++){                             // n개의 카드를 입력받아 card벡터에 푸쉬
        cin >> input;
        card.push_back(input);
    }

    for(int i = 0; i < card.size(); i ++){                  // 3장의 카드를 뽑는 모든 경우의 수 찾아서 최대 값을 넘지 않는 값만 벡터에 넣음
        for(int j = i + 1; j < card.size(); j++){
            if(i == j)
                break;
            for(int k = j + 1; k < card.size(); k++){
                if(k == i || k == j)
                    break;
                sum = card[i] + card[j] + card[k];
                if(sum == m){                               // 최대 값 도달시 리턴
                    cout << m;
                    return 0;
                } 
                else if(sum < m){
                    sums.push_back(sum);
                }
            }
        }   
    }

    sort(sums.begin(), sums.end());                          // 오름차순으로 정렬하면 맨 마지막에 있는 값이 최대값
    cout << sums[sums.size() - 1];
    return 0;
}