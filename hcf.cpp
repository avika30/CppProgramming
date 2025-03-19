//
//  hcf.cpp
//  CppProgramming
//
//  Created by Avika Singh on 3/19/25.
//
#include<iostream>
#include<algorithm>
int main()
{
    int num1, num2;
    int hcf;
    std::cin>> num1>>num2;
    for(int i= fmin(num1,num2);i>=1;i--)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            hcf=i;
            break;
        }
    }
        std::cout<<"The hcf is "<<hcf<<"\n";
    
}
