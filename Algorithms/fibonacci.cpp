#include <iostream>
using namespace std;

int number[100];
int count1=0, count2=0, result;
int recur(int n) {
    if(n==1) return result=1;
    if(n==2) return result=2;
    else {
        return result = recur(n-1) + recur(n-2);      
    }
    return 0;
}

int main () {
    int n,a=0;
    cin >> n;    
    recur(n);
      while (result != 0) {
            number[a++] = result%10;
            result = result/10;
        }

        for(int i=0; number[i]!=0; i++) {
            if (number[i]==0) {
                count1++;
            }
            if (number[i]==1) {
                count2++;
            }
        }
    cout << count1 << " "<< count2 <<'\n';
    return 0;
}