#include <iostream>
using namespace std;
int main() {
    int n, num, tmp;
    int count1=0, count2=0;
    cin >> n;
    for(int i=2; i<=n; ++i) {
        tmp = i;
        while(tmp != 0) {
            if(tmp%2 == 0) {
                count1++;
                tmp=tmp/2;
            }
            if(tmp%5 == 0) {
                count2++;
                tmp=tmp/5;
            }
            else {
                break;
            }
        }
    }
    if(count1 <= count2) num = count1;
    else num = count2;
    cout << num;
}