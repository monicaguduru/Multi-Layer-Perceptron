#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d, flag=0;
        cin>>n;
        vector<float>a;
        float mid;

        for(int i=0;i<n;i++)
         {
             cin>>d;
             a.push_back(d);
         }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                float mid=(a[i]+a[j])/2;
                if(i<j){
                    for(int k=i;k<=j;k++){
                        if(a[k]==mid){

                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1){
                    break;
                }
           }
           if(flag==1){
                    break;
                }
        }

        if(flag==1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
