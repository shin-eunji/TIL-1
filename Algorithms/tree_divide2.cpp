#include <iostream>
using namespace std;
long long treeHeight[1000001];
int main() {
    long long n,m;
    long long max = 0;
    long long left, right;
    long long result=0;
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> treeHeight[i];
        if(max < treeHeight[i]) {
            max = treeHeight[i];
        }
    }
    left = 0; right = max;
    while(left <= right) {
        long long mid = (left+right)/2;
        long long total = 0;
        for (int i=0; i<n; i++) {
            if(mid < treeHeight[i]) {
                total += treeHeight[i]-mid;
            }
        }
        if (total >= m) {
            if(result<mid) {
                result = mid;
            }
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    cout << result;
    return 0;
}