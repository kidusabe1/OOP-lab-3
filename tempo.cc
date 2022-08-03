#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void increase(int& A)
{
    A++;
}
int main()
{
    //TYPE conversion Vs TYPE CASTING//
    //type conversion is done by the compiler... from lower data type in to a higher, it is implicitly done
    //type casting is explicitly  changing the data type from higher(4 byte) one to lower(2 byte), loss of data ios possible in type casting
    int a=9;
    int& A=a;
    cout<<a;
    increase(A); increase(A);
    cout<<endl<<a<<endl;
    return 0;
}