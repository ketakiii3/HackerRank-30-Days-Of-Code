#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, long> phoneBook;
    int n;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long num;
        cin >> name >> num;
        phoneBook[name] = num;
    }
    while (cin >> name)
    {
        if (phoneBook[name])
            cout << name << "=" << phoneBook[name] << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
