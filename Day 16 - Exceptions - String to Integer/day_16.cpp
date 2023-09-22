#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try {
        int num=stoi(S);
        cout<<num;
    } catch (exception) {
        cout<<"Bad String";
    }

    return 0;
}
