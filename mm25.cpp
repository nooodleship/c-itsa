// Online C++ compiler to run C++ program online  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, t;  
    cin >> n;  
    a=0;  
    for(i = 1;i<=n;i++){  
        if(i%3 == 0){  
            a += i;  
        }  
    }  
    cout << a << endl;  
          
} 