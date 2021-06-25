#include <iostream>
using namespace std;

void swap1(int,int);
void swap2(int&,int&);
void swap3(int*,int*);

int main(){
    int x = 3;
    int y = 4;

    cout << "Address of x,y : " << &x << " " << &y << endl;

    cout << "x,y = " << x << y << endl;

    swap1(x,y);
    cout << "x,y = " << x << y << endl;

    swap2(x,y);
    cout << "x,y = " << x << y << endl;

    swap3(&x,&y);
    cout << "x,y = " << x << y << endl;

    return 0;
}

void swap1(int a, int b){
    int tmp;

    tmp =   a;
    a   =   b;
    b   = tmp;

    cout << "Call by value\n";
    cout << "Address of a,b : " << &a << " " << &b << endl;

    return;
}

void swap2(int &a, int &b){
    int tmp;

    tmp =   a;
    a   =   b;
    b   = tmp;

    cout << "Call by reference\n";
    cout << "Address of a,b : " << &a << " " << &b << endl;

    return;
}

void swap3(int *a, int *b){
    int tmp;

    tmp =  *a;
    *a  =  *b;
    *b  = tmp;

    cout << "Call by pointer\n";
    cout << "Address of a,b : " << a << " " << b << endl;

    return;
}

