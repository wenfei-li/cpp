#include <iostream>
using namespace std;

int main(){

    double  x[2];
    int     y[2];
    double*    p;
    int*       q;

    p = x;
    q = y;

    cout << "p,p+1 : " << p << " " << p+1 << endl;
    cout << "q,q+1 : " << q << " " << q+1 << endl;
}
