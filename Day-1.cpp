#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
#include <string>
    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> a >> b;
    cin.ignore();
    getline(cin, c);
    // Print the sum of both integer variables on a new line.
    cout << a+i << "\n";
    // Print the sum of the double variables on a new line.
    double e = b+d;
    cout <<fixed<< setprecision(1) << e << "\n";
    // Concatenate and print the String variables on a new line
    cout << s+c;
    // The 's' variable above should be printed first.

    return 0;
}
