#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


/*  
  Question 1.
  A natural number is given. Determine whether its square is a natural number or not.
*/ 

void task1(){
     int x, res, square;
     cout << "Add Number: \n";
     cin >>  x;
     res = sqrt(x);
     square = pow(res, 2);
     x == square ?  cout << "Yes" : cout << "No";
}

/*  
  Question 2.
  Divide the values of variables X and Y in such a way that X becomes the larger one and Y becomes the smaller one
*/ 

void task2(){
    int x, y, res;
    cout << "Add first number: \n";
    cin >> x;
    cout << "Add second number: \n";
    cin >> y;
     
    x > y ? cout << "Result: " << x << " " << y : cout << "Result: " << y << " " << x;
    
    
}

/*  
  Question 3.
  An integer with two digits is given. Determine whether it is even or odd.
*/ 

void task3(){
    int a;
    string res;
    cout << "Add  number: \n";
    cin >> a;
    res =  a % 2 == 0 ? "Yes" : "No";
    cout << res;
}


/*  
  Question 4.
  A four-digit integer is given. Determine whether this number is a palindrome or not.
*/ 

void task4(){
    int a,rem;
    int num = 0;
    cout << "Add number: \n";
    cin >> a; 
    int def = a;
     while (a != 0) {
        rem = a % 10;
        num = num * 10 + rem;
        a /= 10;
    }
    def == num ? cout << "Yes" : cout << "No";
}

/*  
  Question 5.
  A five-digit number is given. It is necessary to determine whether all the digits of this number are arranged in ascending order starting from the second digit from the left. For example, the digits of the number 15689 are arranged in ascending order.
*/ 

void task5(){
    int n;
    bool ascending = true;
    cout << "Add number: \n";
    cin >> n;

    string str = to_string(n);
    sort(str.begin(), str.end());

    for (int i = 1; i < 5; i++) {
        if (str[i] != str[i-1]+1) {
            ascending = false;
            break;
        }
    }
    ascending ? cout << "Yes" : cout << "False" ;
  
}


/*
 Question 13.
 A three-digit positive integer is given. Rearrange its digits to obtain the smallest possible integer consisting of those digits
*/ 

void task13(){
    int n;
    cout << "Add Number: \n";
    cin >> n; 

   int minSay = min({n, 100*(n%10) + 10*((n/10)%10) + n/100, 100*(n%10) + (n/100)*10 + (n/10)%10, 10*(n%10) + 100*((n/10)%10) + n/100, 10*(n%10) + (n/100)*100 + (n/10)%10, 100*((n/10)%10) + 10*(n%10) + n/100});
    
    cout << "En kicik ədəd: " << minSay << "\n";
}

/*
 Question 18.
 Three real numbers are given. Raise to the square those which are non-negative
*/

void task18(){
    int a,b,c;
    cout << "Add first number: \n";
    cin >> a;
    cout << "Add second number: \n";
    cin >> b;
    cout << "Add third number: \n";
    cin >> c;
    a>0  ? cout << "Result :" << pow(a, 2)<< "\n" : cout <<  "Negative \n";
    b>0  ? cout << "Result :" << pow(b, 2)<< "\n" : cout <<  "Negative \n";
    c>0  ? cout << "Result :" << pow(c, 2)<< "\n" : cout <<  "Negative \n";
    
}


int main(){
    // task1();
    // task2();
    // task3();
    // task4();
    task5();
    //  task13();
   // task18();

}

