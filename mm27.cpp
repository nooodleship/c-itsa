// Online C++ compiler to run C++ program online    
#include <iostream>    
#include<stdio.h>    
#include<math.h>    
using namespace std;    
    
int main() {    
    long int n ,a ,b , i, t;    
    cin >> a >> b ;    
    n=0;    
    if (a>b){    
        t = b;    
        b = a;    
        a = t;    
    }    
    for(i =a; i<=b; i++){    
        n += i;    
    }    
    cout << n << endl;    
            
} 