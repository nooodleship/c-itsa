#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, c;  
    cin >> n;  
      
    a = n / 100;  
       
    if(n>=8589869056)  
        cout << "6 28 496 8128 33550336 8589869056" << endl;   
    else if(n>=33550336)  
        cout << "6 28 496 8128 33550336" << endl;  
    else if(n>=8128)  
        cout << "6 28 496 8128" << endl;  
    else if(n>=496)  
        cout << "6 28 496" << endl;   
    else if(n>=28)  
        cout << "6 28" << endl;   
    else if(n>=6)  
        cout << "6" << endl;  
          
}  