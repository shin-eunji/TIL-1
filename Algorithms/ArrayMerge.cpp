#include <iostream>
using namespace std;
int a[101],b[101],c[301];
int p1=0,p2=0,p3=0;
void merge(int n, int m) {
    while(p1<n && p2<m) {
        if(a[p1]<b[p2]) {
            c[p3++] = a[p1++];
        }
        else {
            c[p3++] = b[p2++];
        }
    }
    while(p1<n) c[p3++] = a[p1++];
    while(p2<m) c[p3++] = b[p2++];
}
int main() {
    int n,m;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    merge(n, m);
    for(int i=0; i<p3; i++) {
        cout << c[i];
    }
    return 0;
}