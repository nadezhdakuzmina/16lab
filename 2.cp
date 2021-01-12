#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
    int N, A, D, c=1 ;
    cout << "введите N, A, D";
    cin >> N >> A >> D;
    vector <int> a(N);
    for (int i = 0; i < N; i++) {
        a[i]=A*c;
        c=c*D;
    }
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
