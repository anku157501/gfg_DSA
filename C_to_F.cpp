#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


//You need to complete this function
// double cToF(int C)
// {
//     return (double)(9*C/5+32);
//     //Your code here
// }

// // { Driver Code Starts.
double cToF(int C)
{
    return (9*C/5.0+32);
    //Your code here
}

// { Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends
