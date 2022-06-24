#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, t;  
    cin >> n;  
      
     a=1;  
    for(i=2;i<n;i++){  
        if(n % i == 0){  
            a = 0;  
            break;  
        }  
    }  
    if(a == 1){  
        cout << "YES" << endl;  
    }  
    else  
        cout << "NO" << endl;  
      
          
}  