#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, t;  
    cin >> n;  
    for(i = n-1; i>=1; i--){  
        a=1;  
        for(b = 2; b<i; b ++){  
            if(i%b == 0){  
                a=0;  
                break;  
            }  
        }  
        if(a ==1){  
            break;  
        }  
    }  
    cout << i << endl;  
      
          
}  