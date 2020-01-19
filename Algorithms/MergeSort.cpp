#include <iostream>
using namespace std;
int d[10], tmp[10];
void divide(int lt, int rt) {
    int mid;
    int p1, p2, p3;
    if(lt<rt) {
        mid = (lt+rt)/2;
        divide(lt, mid);
        divide(mid+1, rt);
        p1=lt;
        p2=mid+1;
        p3=lt;
        while(p1 < mid && p2 < rt) {
            if(d[p1] < d[p2]) tmp[p3++] = d[p1++];
            else tmp[p3++] = d[p2++];
        }
        while(p1<mid) tmp[p3++] = d[p1++];
        while(p2<rt) tmp[p3++] = d[p2++];
        for(int i=lt; i<rt; i++) {
            d[i] = tmp[i];
        }
    }
}
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> d[i];
    }
    divide(0, n-1);
    for(int i=0; i<n; i++) {
        cout << d[i]<<" ";
    }
    return 0;
}