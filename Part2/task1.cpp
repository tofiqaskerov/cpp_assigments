#include <iostream>
#include <cmath>
using namespace std;

// Question 1.

void task1(){
    int a,b;
    double res;
    cout << "Add first number: \n";
    cin >> a;
    cout << "Add second number: \n";
    cin >> b;

    res = pow(((abs(a+b)+(cbrt(pow(a,2)+pow(b,2)))) / abs(pow(a,3)+a*pow(b,2)+pow(b,3))), 1.0/5);

    cout << "Result: \n" << res;
}

// Question 17.

void task17(){
    int a,b;
    double res;
    cout << "Add first number: \n";
    cin >> a;
    cout << "Add second number: \n";
    cin >> b;
    res = pow((pow(a,4) + pow(b,6))/(pow(a,2)+pow(b,4) +8), 1.0/8);
    cout << "Result: \n"<< res;
}

// Question 22.

void task22(){
    int x,y,z;
    double res;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
    cin >> y;
    cout << "Add third number: \n";
    cin >> z;
    res = (pow(x,2)*y / pow(x+pow(y + cbrt(z), 1.0/4), 1.0/5)) +(sqrt(x+y+z));
    cout << "Result: \n" << res;
}
int main(){
   task1();
//    task17();
//    task22();
}

