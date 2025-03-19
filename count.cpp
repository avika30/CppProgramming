//
//  count.cpp
//  CppProgramming
//
//  Created by Avika Singh on 3/19/25.
//
#include <iostream>
int main()
{
    int num,a,b;
    int c=0;
    std::cout<<"Enter the number: ";
    std::cin >> num;
    a=num;
    while(a!=0)
    {
        b=a%10;
        c=c+1;
        a=a/10;
    }
    std::cout<<"the number of digits in the given number is "<<c <<"\n";
    
}

