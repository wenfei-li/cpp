#include <iostream>
using namespace std;

int main(){

    int i;

    i=0;
    while(i<5){
        cout << "i = " << i << endl;
        i++;
    }

    i=0;
    do{
        cout << "i = " << i << endl;
        i++;
    }
    while(i<5);

    for(i=0;i<5;i++){
        cout << "i = " << i << endl;
    }

    i=0;
    while(true){
        cout << "i = " << i << endl;
        i++;
        if(i>4){
            break;
        }
    }

    return 0;
}    
