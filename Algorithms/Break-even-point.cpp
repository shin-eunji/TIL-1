#include <iostream>
using namespace std;
int main() {
    int A,B,C,count=0;
    bool check=true;
    cin >> A >> B >> C;
    while(check){
        count++;        
        if(C*count-A-(B*count > 0)) {
            cout << count << '\n';
            check = false;
        }
        if(C-B <0) {
            check = false;
        } 
    }    
    return 0;
}