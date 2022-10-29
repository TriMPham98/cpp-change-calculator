#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double userAmount = 0;
    int remainingAmount;
    int numOneDollars = 0, numFiveDollars = 0, numTenDollars = 0, numTwentyDollars = 0, numFiftyDollars = 0, numHundredDollars = 0;
    int numPennies = 0, numNickels = 0, numDimes = 0, numQuarters = 0;

    cout << "This program calculates how many coins are needed for change." << endl;

    // Prompt user for amount
    cout << "Please enter the amount you want change for: $";
    cin >> userAmount;

    // Use modulus based on coin value to see how many coins are needed
    remainingAmount = static_cast<int>(userAmount * 100);

    // Number of $100's
    numHundredDollars = remainingAmount / 10000;
    remainingAmount %= 10000;

    // Number of $50's
    numFiftyDollars = remainingAmount / 5000;
    remainingAmount %= 5000;

    // Number of $20's
    numTwentyDollars = remainingAmount / 2000;
    remainingAmount %= 2000;

    // Number of $10's
    numTenDollars = remainingAmount / 1000;
    remainingAmount %= 1000;

    // Number of $5's
    numFiveDollars = remainingAmount / 500;
    remainingAmount %= 500;

    // Number of $1's
    numOneDollars = remainingAmount / 100;
    remainingAmount %= 100;

    // Number of 25¢'s
    numQuarters = remainingAmount / 25;
    remainingAmount %= 25;

    // Number of 10¢'s
    numDimes = remainingAmount / 10;
    remainingAmount %= 10;

    // Number of 5¢'s
    numNickels = remainingAmount / 5;
    remainingAmount %= 5;

    // Number of 1¢'s
    numPennies = remainingAmount;

    // Print out how many dollars and coins are required for the change
    cout << "\nThe change required for $" << fixed << setprecision(2) << userAmount << " is: " << endl
         << numHundredDollars << "\t$100\tDollar Bills" << endl
         << numFiftyDollars << "\t$50\tDollar Bills" << endl
         << numTwentyDollars << "\t$20\tDollar Bills" << endl
         << numTenDollars << "\t$10\tDollar Bills" << endl
         << numFiveDollars << "\t$5\tDollar Bills" << endl
         << numOneDollars << "\t$1\tDollar Bills" << endl
         << endl
         << numQuarters << "\t25¢\tQuarters" << endl
         << numDimes << "\t10¢\tDimes" << endl
         << numNickels << "\t5¢\tNickels" << endl
         << numPennies << "\t1¢\tPennies";

    return 0;
}