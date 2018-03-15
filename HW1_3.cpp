#include<iostream>

using namespace std;

int perfect(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if(num==sum)
        return 1;
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        if(perfect(input)&&input>0)
        {
            cout<<input;
            if(i<n-1)
                cout<<" ";
        }
    }
}
