#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int n;
    cin>>n;
    double dd;
    cin>>dd;
    string name;
    getline(cin, name);
    getline(cin, name);
    // Read and save an integer, double, and String to your variables.
    cin>>n>>dd;
    cin.ignore();    //to ignore any new line character
    getline(cin, name); //read full sentence, and store in string
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    int add = i + n;
    cout<< add << endl;
    // Print the sum of the double variables on a new line.
    double addD = d + dd;
    cout <<  setprecision(1) << fixed << addD << endl;
    // Concatenate and print the String variables on a new line
    string full = s + name;
    cout << full;
    // The 's' variable above should be printed first.

    return 0;
}
