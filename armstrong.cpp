#include<iostream>
#include<bits/stdc++.h>
int main ()
{
    int num,a,b;
    int c=0;
    int sum=0;
    std::cout<<"Enter the number: ";
    std::cin >> num;
    a=num;
    while(a!=0)
    {
        b=a%10;
        c=c+1;
        a=a/10;
    }
    a=num;
    b=0;
    while(a!=0)
    {
        b=a%10;
        sum=sum+(pow(b,c));
        a=a/10;
    }
    if(num==sum){
        std::cout<<"armstrong\n";
        
    }
    else {
        std::cout<<"Not armstrong\n";
    }
}
