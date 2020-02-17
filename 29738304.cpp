#include <iostream>
using namespace std;

int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long int n,p;
            cin>>n>>p;
            long long int j,value;
            long long int arr[n+1],result[n];
            for(long long int i=0;i<n;i++)
            result[i]=0;
          
            for(long long int i=0;i<n;i++)
            cin>>arr[i];
              arr[n]=p;
           int f;
                 for(long long int i=0;i<n;i++)
           {       f=0; 
               if(arr[i+1]%arr[i]!=0)
               {
                break;
               }
                if((arr[i+1]%arr[i]==0)&&(i==n-1))
                {
               cout<<"NO"<<endl;
                f=1;
                }
           }
           if(f==0)
           {
           for(long long int i=n-1;i>=0;i--)
                   {
                       if(p%arr[i]!=0)
                       {
                       result[i]=p/arr[i]+1;
                       break;
                       }
                       else
                       {
                          result[i]=p/arr[i]-1;
                          p=arr[i];
                       }
                   }
                   cout<<"YES";
                   for(long long int i=0;i<n;i++)
                   cout<<" "<<result[i];
                   cout<<endl;
           }   
        }
        return 0;
    }