#include <iostream>
using namespace std;
void add()
{
    int a,b;
    cout<<"Give two numbers to add"<<endl;
    cin>>a>>b;
    cout<<"SUM= "<<a+b<<endl;
}
void add2(int a, int b)
{
    cout<<"SUM= "<<a+b<<endl;
}
int add3()
{
    int a,b;
    cout<<"Give two numbers to add"<<endl;
    cin>>a>>b;
    int sum=a+b;
    return sum; 
}
int add4(int a, int b)
{
    int sum=a+b;
    return sum;
}
int factorial(int f)
{
    if(f==1)
        return 1;
    int result=1;
    result= f*factorial(f-1);
    return result;
}
int palindrome(int a)
{
    int pal=0,rem=0,temp=a;
    while(a!=0)
    {
        rem=a%10;
        pal= (pal*10)+rem;
        a/=10;
    }
    if(temp==pal)
    return 1;
    else    
    return -1;
}
int main()
{
    cout<<"\nNO ARGUMENT NO RETURN TYPE\n\n";
    add();

    cout<<"\nWITH ARGUMENT NO RETURN\n";
    int a,b;
    cout<<"Give two numbers to add"<<endl;
    cin>>a>>b;
    add2(a,b);

    cout<<"\nNO ARGUMENT WITH RETURN\n";
    int sum=add3();
    cout<<"The sum of your numbers is "<<sum<<endl;

    cout<<"\nWITH ARGUMENT AND RETURN\n";
    cout<<"Give two numbers to add"<<endl;
    cin>>a>>b;
    cout<<"The sum of your numbers is "<<add4(a,b)<<endl;

    cout<<"\nFACTORIAL\n";
    cout<<"Give a number you want to find factorial of\n";
    int f;
    cin>>f;
    int result=factorial(f);
    cout<<"The factorial of "<<f<<" is "<<result<<endl;

    cout<<"\nPALINDROME CHECKER\n";
    int palind;
    cout<<"Give a number\n"<<endl;
    cin>>palind;
    if(palindrome(palind)==1)
        cout<<"Yes it is a palindrom\n";
    else
        cout<<"No it is not\n";
    return 0;
}