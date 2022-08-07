#include <iostream>
using namespace std;
int add1(int &A,int &B)
{
    int sum= A+B;
    return sum;
}

int factorial(int &A)
{
    int result=1;
    static int temp=A;
    while(temp!=0)
    {
        result= result*(temp);
        temp=temp-1;
    }
    return result;
}

int palindrome(int &PAL)
{
    int rem=0,checker=0;
    int space_holder=PAL;
    while(space_holder!=0)
    {
        rem=space_holder%10;
        checker=(checker*10)+rem;
        space_holder/=10;
    }
    if(checker==PAL)
        return 1;
    else
        return -1;

}

int perfect(int &PER)
{
    int arr[20],j=0;
    for(int i=1;i<PER;i++)
    {
        if(PER%i==0)
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
    if(sum==PER)
        return 1;
    else
        return -1;
}

int prime(int &N)
{
    int temp=N,count;
    for(int i=1;i<=temp;i++)
    {
        if((temp%i)==0)
            count++;
    }
    if(count==2)
        return 1;
    else
        return -1;
}

int main()
{
    cout<<"\nProgram #1\n\n";
    int a,b;
    int &A=a;
    int &B=b;
    cout<<"Give two numbers to add\n";
    cin>>a>>b;
    cout<<"The sum of your numbers is "<<add1(A,B)<<endl;

    cout<<"\nProgram #2\n\n";
    int f;
    int &F=f;
    cout<<"Give a number\n";
    cin>>f;
    cout<<"The factorial of your number is "<<factorial(F)<<endl;

    cout<<"\nProgram #3\n\n";
    int pal;
    int &PAL=pal;
    cout<<"Give a number\n";
    cin>>pal;
    if(palindrome(PAL)==1)
        cout<<"Your number is a palindrome number\n";
    else
        cout<<"Your number is not a palindrome\n";

    cout<<"\nProgram #4\n\n";
    int per;
    int &PER=per;
    cout<<"Give a number\n";
    cin>>per;
    int checker=perfect(PER);
    if(checker==1)
        cout<<"Your number is perfect\n";
    else
        cout<<"Your number is not perfect\n";
    
    cout<<"\nProgram #5\n\n";
    int n;
    int &N=n;
    cout<<"Give a number\n";
    cin>>n;
    checker=prime(N);
    if(checker=1)
        cout<<"Your number is a prime number\n";
    else
        cout<<"Your number is not prime number\n";

    return 0;



}