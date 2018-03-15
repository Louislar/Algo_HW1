#include<iostream>

using namespace std;

int perfect(long int num)
{
    long int sum=0;
    for(long int i=1;i<num;i++)
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
    int output_num=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long int input;
        cin>>input;
        if(perfect(input)&&input>0)
        {
            if(output_num) cout<<" ";
            cout<<input;
            output_num++;
        }
    }
}
