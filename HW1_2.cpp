#include<iostream>

using namespace std;

int oddsum(int a, int b)
{
    int sum=0;

    if(a%2==0) a++; // If a is even a=a+1

    for(int i=a;i<=b;i=i+2) sum=sum+i;

    return sum;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int input_a;
        int input_b;
        int result;
        cin>>input_a;
        cin>>input_b;
        result=oddsum(input_a, input_b);

        cout<<"Case "<<i+1<<": "<<result<<endl;
    }
}
