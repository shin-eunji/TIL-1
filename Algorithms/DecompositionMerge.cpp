#include <iostream>
using namespace std;
int a[10];
int main() {
    int n, sum=0, num=0,result=0;
    cin >> n;
    for(int i=1; i<=n; ++i) {
        num = i; 
        sum = 0;
        for(int j=0; j<10; ++j) {
            if(num == 0) break;
            a[j] = num % 10;
            num = num/10;
            sum += a[j];
        }
        if(i+sum == n) {            
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}