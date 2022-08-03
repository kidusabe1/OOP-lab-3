#include <iostream>
using namespace std;

int add1(int* A, int* B)
{
    int sum= *A+*B;
    return sum;
}


int factorial(int *ptr)
{
    int result=1;
    static int temp=*ptr;
    while(temp!=0)
    {
        result= result*(temp);
        temp=temp-1;
    }
    return result;
}


int palindrome(int *ptr)
{
    int rem=0,temp,checker=0;
    int space_holder=*ptr;
    while(space_holder!=0)
    {
        rem=space_holder%10;
        checker=(checker*10)+rem;
        space_holder/=10;
    }
    if(checker==*ptr)
        return 1;
    else
        return -1;

}


int perfect(int* ptr)
{
    int arr[20],j=0;
    for(int i=1;i<*ptr;i++)
    {
        if(*ptr%i==0)
        {
            arr[j]=i;
            j++;
        }        
    }
    int sum;
    for(int i=0;i<j;i++)
    {
        sum=sum+arr[i];
    }
    if(sum==*ptr)
        return 1;
    else
        return -1;
}


int main()
{
    cout<<"\nprogram 1\n\n";
    int a,b;
    int *A=&a;
    int *B=&b;
    cout<<"Give two numbers to add\n";
    cin>>a>>b;
    cout<<"The sum of your numbers is\n"<<add1(A,B)<<endl;


    cout<<"\nprogram 2\n\n";
    int f;
    int *ptr=&f;
    cout<<"Give a number\n";
    cin>>f;
    cout<<"The factorial of "<<f<<" is "<<factorial(ptr)<<endl;


    cout<<"\nprogram 3\n\n";
    int p;
    int *ptr2=&p;
    cout<<"Give a number\n";
    cin>>p;
    if(palindrome(ptr2)==1)
        cout<<"Your number is a palindrome number\n";
    else
        cout<<"Your number is not a palindrom\n";


    cout<<"\nprogram 4\n\n";
    int per;
    cout<<"Give a prefect number\n";
    cin>>per;
    int *ptr3=&per;
    int checker=perfect(ptr3);
    if(checker==1)
        cout<<"Your number is perfect\n";
    else
        cout<<"Your number is not perfect\n";

}