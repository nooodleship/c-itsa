// Online C++ compiler to run C++ program online  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, c;  
    cin >> n;  
      
    a = n / 100;  
    b = (n%100)/10;  
    c = n%100%10;  
    if(a*a*a+b*b*b+c*c*c == n)  
        cout<< "Yes" << endl;  
    else  
        cout << "No" << endl;  
      
          
} 