#include <iostream>
#include <cmath>
#include <algorithm>
#include <typeinfo>
using namespace std;



void task12(){
  
    int n, res, first, last;
    cout << "Add Number: ";
    cin >> n;
    while (n >= 10) {
        n /= 10;
    }
    first = n % 10;
    first = n;
    res = first + last;
    res % 2 == 0 ? cout << "Result: Even" : cout << "Result: Odd";
    
}

int main(){
    task12();
 
}


/*  
  Question 1.
  A natural number is given. Determine whether its square is a natural number or not.
*/ 

void task13(){
    int n, i;
    i = 1;
    bool ascending = true;
    cout << "Add number: \n";
    cin >> n;

    string str = to_string(n);
    sort(str.begin(), str.end());

    while ( i < str.length()) {
        if (str[i] != str[i-1]+1) {
            ascending = false;
            break;
        }
        i++;
    }
    ascending ? cout << " Result : Yes" : cout << "Result : False" ;
}



