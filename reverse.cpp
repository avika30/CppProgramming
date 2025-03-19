//
//  reverse.cpp
//  CppProgramming
//
//  Created by Avika Singh on 3/19/25.
//
#include <iostream>
int main()
{
    int num;
    int a,b;
    int num2=0;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    a=num;
    while(a!=0)
    {
        b=a%10;
        num2=num2+(10*b);
        a=num/10;
    }
    std::cout<<"The reversed number is "<<num2<<"\n";
  
    
}
