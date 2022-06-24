#include <iostream>   
#include<stdio.h>   
#include<math.h>   
using namespace std;   
   
int main() {   
    long int n ,a ,b;   
    cin >> a;    
    n = pow(2, a);   
    if(a<31)   
        cout <<  n  << endl;   
    else    
        cout << "Value of more than 31" << endl;   
}  