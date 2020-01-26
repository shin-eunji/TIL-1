#include <iostream>
using namespace std;
int processTime[2001];
int main() {
    int n, k, sum=0;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> processTime[i];
    }

    cin >> k;
    for(int i=1; i<=n; ++i) {
        sum += processTime[i];
        if(sum > k) {
            cout << i;
            break;
        } else if (sum == k) {
            cout << i+1;
            break;
        }
    }
    if(sum < k) cout << -1;
    return 0;
}