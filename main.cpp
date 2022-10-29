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

    // Use modulus based on coin value to see how many coins are needed
    remainingAmount = static_cast<int>(userAmount * 100);

    numOneDollars = remainingAmount / 100;
    remainingAmount %= 100;

    numQuarters = remainingAmount / 25;
    remainingAmount %= 25;

    numDimes = remainingAmount / 10;
    remainingAmount %= 10;

    numNickels = remainingAmount / 5;
    remainingAmount %= 5;

    numPennies = remainingAmount;

    // Print out how many pennies, nickels, dimes, and quarters are needed
    cout << "\nThe change required for $" << userAmount << " is: " << endl
         << numOneDollars << "\t$1 Dollar Bills" << endl
         << numQuarters << "\t25¢ Quarters" << endl
         << numDimes << "\t10¢ Dimes" << endl
         << numNickels << "\t5¢ Nickels" << endl
         << numPennies << "\t1¢ Pennies";

    return 0;
}