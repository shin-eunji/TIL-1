#include <iostream>
using namespace std;
int num[101];
int result=0, sum=0;

void blackJack(int N, int M) {
    for(int i=0; i<N-2; ++i) {
        for(int j=i+1; j<N-1; ++j) {
            for(int k=j+1; k<N; ++k) {
                sum = num[i] + num[j] + num[k];
                if(sum <= M && result < sum) result = sum;
            }
        }
    }
}
int main() {
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; ++i) {
        cin >> num[i];
    }
    blackJack(N, M);
    cout << result << '\n';
    return 0;
}