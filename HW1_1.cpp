#include<iostream>

using namespace std;

int happy(int num)
{
    int sum=0;
    int digits=1;

    for(int q=num;q!=q%10;q=q/10) digits=digits+1;



    for(int i=digits;i>0;i--)
    {
        sum=sum+(num%10)*(num%10);
        num=num/10;
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        int ans=0;
        cin>>input;


        for(int q=0;q<1000;q++)
        {
            input=happy(input);
            if(input==1)
            {
                ans=1;
                break;
            }
        }


        if(ans==1)
            cout<<"Happy"<<endl;
        else if(ans==0)
            cout<<"Not Happy"<<endl;
    }
}
