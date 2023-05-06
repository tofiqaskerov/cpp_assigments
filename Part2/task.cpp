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

// Question 2.


void task2(){
    int x,y;
    double res;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
    cin >> y;

    res = pow(((1+x)/(y-2) + 1/pow(x,2)), 1.0/6);

    cout << "Result: \n" << res;
}

// Question 3.


void task3(){
    int x,y;
    double res, res1;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
     cin >> y;

     res1 =  ((pow(x,3)-2.0)/pow(y,2)) + ((pow(y,2) - 4.0)/(1.0/(-y))) ;
     res1 > 0 ? res = sqrt(res1) :res = 0;

    cout << "Result: \n" << res;
}

// Question 4.


void task4(){
    int x,y;
    double res;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
    cin >> y;
   
    res = cbrt(((y-pow(x,2)/x) / (2-(1.0/x))/y) + (1.0/sqrt(2*x/pow(y,3))-y) + ((3 * pow(x,2) - sqrt(y))/sqrt(x*y)));

    cout << "Result: \n" << res;
}


// Question 5.


void task5(){
    int x,y;
    double res;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
    cin >> y;
  
    res =( (cbrt((y-pow(x,2)/x)/(sqrt(x)/pow(y,2)+5)))) / ((3-pow(y,4) + 4*x + 5) / (pow(y,4) - pow(x,3) + 8*x))   +  ((pow((pow(x,2)+pow(y,3),4), 1.0/5))/(pow(x,3) + 8 * pow(y,2))/sqrt(y)) ; 

    cout << "Result: \n" << res;
}



void task11(){
    int a,b, x,y,z;
    double res, test;
    cout << "Add first number: \n";
    cin >> a;
    cout << "Add second number: \n";
    cin >> b;
      cout << "Add third number: \n";
    cin >> x;
      cout << "Add  fourth number: \n";
    cin >> y;
      cout << "Add fifth number: \n";
    cin >> z;
    x > pow(z,3) ?  res = abs(sqrt(pow(a,2) + pow(b,2))) + (pow(x,2)/ y)/sqrt(x-pow(z,3)) : res = 0;
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
    res = (pow(x,2) * y / pow(x+pow(y + cbrt(z), 1.0/4), 1.0/5)) +(sqrt(x+y+z));
    cout << "Result: \n" << res;
}
int main(){
//    task1();
//    task2();
   task3();
//    task4();
//    task5();
//    task11();
//    task17();
//    task22();
}

