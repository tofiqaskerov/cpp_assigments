#include <iostream>
#include <cmath>
using namespace std;


void task12(){
    int  n = 15;
    double x, y;
    x = 1.5;
    y = sin(x);

    for(int i = 3 ; i <= n ; i+=2 ){
        y += sin(x*i)/i;
    }
    cout << "*-----------------------*\n";
    cout << "Result:" << y << "\n" ;
    cout << "*-----------------------*\n";

}

int main(){
    task12();
}