#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void Full_Adder(int A,int B,int C_In){
    int Sum , C_Out;
    
    Sum = C_In ^ (A ^ B);
   
    
    C_Out = (A & B) | (B & C_In) | (A & C_In);
  
   
    cout<<"Sum = "<< Sum <<endl;
    cout<<"C-Out = "<< C_Out <<endl;
  }
  

 
int main() {
    int A ;
    int B ;
    int C_In;

    cin>>A>>B>>C_In;
    

    Full_Adder(A, B, C_In);
    return 0;
}
