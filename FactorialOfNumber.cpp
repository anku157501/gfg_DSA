// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
long long factorial (int N)
{long long f=1;
    for(int i=1;i<=N;i++)
    f=f*i;
    return f;
    //Your code here
}


// { Driver Code Starts.
int main()
{
    int T,N;
    cin>>T;  //input number of testcases
    while(T--)
    {
        cin>>N; //input n
        cout<<factorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
