#include <iostream>
using namespace std;

int main()
{
    double userAmount;
    int remainingAmount;
    int numPennies = 0, numNickels = 0, numDimes = 0, numQuarters = 0, numOneDollars = 0;

    cout << "This program calculates how many coins are needed for change." << endl;

    // Prompt user for amount
    cout << "Please enter the amount you want change for: $";
    cin >> userAmount;

    // TODO: Use if/else if/else conditionals and modulus to see how many coins are needed
    remainingAmount = static_cast<int>(userAmount * 100);

    numOneDollars = remainingAmount / 100;
    remainingAmount %= 100;

    // TODO: Print out how many pennies, nickels, dimes, and quarters are needed
    cout << "The change required is: " << endl
         << numOneDollars << "\t$1 Dollar Bills" << endl
         << numQuarters << "\t25¢ Quarters" << endl
         << numDimes << "\t10¢ Dimes" << endl
         << numNickels << "\t5¢ Nickels" << endl
         << numPennies << "\t1¢ Pennies";

    return 0;
}