#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void Half_Adder(int A , int B)
{
    int sum;
    int carry;

    sum = A^B;

    carry = A & B;

    cout<<"Sum is :"<<sum<<endl;
    cout<<"Carry is :"<<carry<<endl;
}

int main()
{
    int A,B;
    cin>>A>>B;
    Half_Adder(A,B);
    return 0;

}
