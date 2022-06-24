// Online C++ compiler to run C++ program online  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i;  
    cin >> n ;  
    a=1;  
    for(i =2; i<=n; i++){  
        a *= i;  
    }  
    cout << a << endl;  
          
}