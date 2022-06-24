// Online C++ compiler to run C++ program online  
#include <iostream>  
#include<stdio.h>  
#include<math.h>  
using namespace std;  
  
int main() {  
    long int n ,a ,b , i, c;  
    cin >> n;  
      
    if(n == 1 || n == 2 || n == 12){  
        cout << "Winter" << endl;  
    }  
    else if (n<6)  
        cout <<"Spring" << endl;  
    else if (n<9)  
        cout <<"Summer" << endl;  
    else if (n<12)  
        cout <<"Autumn" << endl;  
} 