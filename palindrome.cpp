//
//  palindrome.cpp
//  CppProgramming
//
//  Created by Avika Singh on 3/19/25.
//
#include<iostream>
int main()
{
    int num;
    int a,b;
    int num2=0;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    a=num;
    while(num!=0)
    {
        b=num%10;
        num2=(num2*10)+b;
        num=num/10;
    }
    if(num2==a)
    {
        std::cout<<"the number is palindrome\n";
    }
    else
        std::cout<<"the number is not a palindrome\n";
}
