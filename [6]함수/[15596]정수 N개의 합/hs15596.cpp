#include <vector>
using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;

    // 3가지 방법이 다 같은 방식이다.
    for (int i = 0; i < a.size(); i++)
        ans += a[i];

    for (auto i : a)
        ans += i;

    for (auto i = a.begin(); i != a.end(); i++)
        ans += *i;

    return ans;
}
