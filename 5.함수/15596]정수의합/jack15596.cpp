#include <iostream>
#include <vector>
using namespace std;

/*ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
long long sum(std::vector<int> &a){
    long long ans=0;

    for(int i=0;i<a.size();i++){
        ans+=a[i];
    }
    return ans;
}
