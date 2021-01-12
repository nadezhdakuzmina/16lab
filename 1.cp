#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
    int N, c=1 ;
    cout << "введите число";
    cin >> N;
    vector <int> a(N);
    for (int i = 0; i < N; i++) {
        a[i]=c;
        c=c+2;
    }
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}


