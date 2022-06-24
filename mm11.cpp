// Online C++ compiler to run C++ program online  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    int i;    
    cin >> i;   
    cout << "NT10=" << i/10 << endl;  
    i %= 10;    
    cout << "NT5=" <<i/5 << endl;  
    i %= 5;    
    cout << "NT1=" <<i << endl;  
}  