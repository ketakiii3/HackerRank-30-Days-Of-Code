#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Day, Month, Year, Day1, Month1, Year1, mdiff, ddiff, ydiff, diff;
    
    cin >> Day >> Month >> Year >> Day1 >> Month1 >> Year1;
    
    ydiff = Year - Year1;
    mdiff = Month - Month1;
    ddiff = Day - Day1;
    
    if (ydiff > 0) {
        diff = 10000; // Returned after the due year
    } else if (ydiff == 0 && mdiff > 0) {
        diff = mdiff * 500; // Returned in the same year but after due month
    } else if (ydiff == 0 && mdiff == 0 && ddiff > 0) {
        diff = ddiff * 15; // Returned in the same year and month but after due day
    } else {
        diff = 0; // No fine
    }

    cout << diff << endl;  
    
    return 0;
}
