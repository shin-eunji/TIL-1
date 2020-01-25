#include <iostream>
#include <algorithm>
using namespace std;
int score[101];
int ranking[101];
int comp[101];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> score[i];
        comp[i] = score[i];
        ranking[i] = 1;
    }
    sort(comp, comp+n);
    for(int i=0; i<n; ++i) {
        cout << comp[i] <<" ";
    }
    cout << '\n';
    for(int i=0; i<n; ++i) {
         cout << score[i] << " ";
    }
    cout << '\n';
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(score[j] < comp[i]) ranking[j]++;
        }
    }
    for(int i=0; i<n; ++i) {
        cout << ranking[i]<<" ";
    }
}