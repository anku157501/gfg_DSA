// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int absolute(int I);

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        cout << absolute(I) << endl; // print the output
    }
    return 0;
}// } Driver Code Ends


// User function Template for C++

// Should return absolute value of I
// You need to complete this function
int absolute(int I) {
        if(I<0){
    I=I*(-1);
        }
        return I;
    // Your code here
}