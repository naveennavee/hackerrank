#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

            int T;
            cin>>T;
            int i,num[T],dupnum[T];
            for(i=0;i<T;i++)
            {
                cin>>num[i];
                dupnum[i]=num[i];
            }
            int temp,count[T];
            for(i=0;i<T;i++)
            {
                count[i]=0;
            }
            for(i=0;i<T;i++)
            {

                for(;dupnum[i]>0;)
                {
                    temp=dupnum[i]%10;
                    dupnum[i]/=10;
                    if(temp==0)
                    {
                    }
            else if(num[i]%temp==0)
                    {   count[i]++;
                        }
                     }
                            cout<<count[i]<<"\n";
            }


    return 0;
}
