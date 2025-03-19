//
//  divisors.cpp
//  CppProgramming
//
//  Created by Avika Singh on 3/19/25.
//

#include<iostream>
#include<algorithm>
int main()
{
    int num;
    std::cin>> num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            std::cout<< i <<"\n";
        }
    }
    
    
}
