#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool changeCalcLoop = true;
    double totalAmount = 0;
    int remainingAmount = 0;
    int numOneDollars = 0, numFiveDollars = 0, numTenDollars = 0, numTwentyDollars = 0, numFiftyDollars = 0, numHundredDollars = 0;
    int numPennies = 0, numNickels = 0, numDimes = 0, numQuarters = 0;

    cout << "This program calculates how many dollars and coins are needed for change." << endl;

    while (changeCalcLoop)
    {
        // Prompt user for amount
        cout << "\nPlease enter an amount you want change for or enter 0 to exit: $";
        cin >> totalAmount;

        if (totalAmount == 0)
        {
            changeCalcLoop = false;
            break;
        }

        // Use modulus based on coin value to see how many coins are needed
        remainingAmount = static_cast<int>(totalAmount * 100);

        // Loop over denominations of bills and coins
        int denominations[] = {10000, 5000, 2000, 1000, 500, 100, 25, 10, 5, 1};
        string names[] = {"$100 Dollar Bills", "$50 Dollar Bills", "$20 Dollar Bills", "$10 Dollar Bills", "$5 Dollar Bills", "$1 Dollar Bills",
                          "25¢ Quarters", "10¢ Dimes", "5¢ Nickels", "1¢ Pennies"};

        for (int i = 0; i < 10; i++)
        {
            int num = remainingAmount / denominations[i];
            remainingAmount %= denominations[i];

            if (num > 0)
            {
                cout << num << "\t" << names[i] << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
