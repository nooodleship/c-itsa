#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, c;  
    cin >> a >> b ;  
      
    if(a==0 && b ==0)  
        cout << "Origin" << endl;  
    else if(a ==0)  
        cout << "y-axis" << endl;  
    else if(b ==0)  
        cout << "x-axis" << endl;  
    else if(a>0){  
        if(b >0)  
            cout << "1st Quadrant" << endl;  
        else   
            cout << "4th Quadrant" << endl;  
    }  
    else {  
        if(a>0)  
            cout << "2nd Quadrant" << endl;  
        else  
            cout << "3rd Quadrant" << endl;  
    }  
} 