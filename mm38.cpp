#include <iostream>  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, c;  
    cin >> a >> b >> c ;  
      
    n=1;  
    if(a+b<=c)  
        n=0;  
    else if(a+c<=b)  
        n=0;  
    else if(b+c<=a)  
        n=0;  
    if(n == 1)  
        cout << "fit" << endl;  
    else  
        cout << "unfit" << endl;  
      
}  