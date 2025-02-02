//
// Created by Asmita Tamang on 2/1/25.
//

#include <iostream>

using namespace std;

// all the currency rates with USD being the base
double usdRate = 1.0;
double eurRate = 2.7;
double gbpRate = 7.5;
double jpyRate = 113.5;

//inputs from user
string convertFrom = " ";
string convertTo = " ";
double amountToConvert = 0.0;

//variable used to hold conversion from any currency to base (USD)
double amountInUSD = 0.0;

int main() {

    //asking for what currency user wants to convert from
    cout << "What currency would you like to convert from? usd? eur? gbp? jpy?" << endl;
    cin >> convertFrom;


    //asking wjat currency to convert to
    cout << "What currency would you like to convert to?" << endl;
    cin >> convertTo;


    //used to mare sure two currencies aren't the same
    while (convertFrom == convertTo) {
        cout << "Your conversion into currency is the same as your conversion from. Please close another currency" << endl;
        cin >> convertTo;
    }

    //how much user wants to convert
    cout << "How much would you like to convert?" << endl;
    cin >> amountToConvert;

    //converting from given currency to USD
    if (convertFrom == "eur") {
        amountInUSD = amountToConvert / eurRate;
    } else if (convertTo == "gbp") {
        amountInUSD = amountToConvert / gbpRate;
    } else if (convertTo == "jpy") {
        amountInUSD = amountToConvert / jpyRate;
    } else {
        amountInUSD = amountToConvert;
    }

    //converting from USD to wanted currency
    if (convertTo == "eur") {
        cout << "Your new amount is: " << (amountInUSD * eurRate) << endl;
    } else if (convertTo == "gbp") {
        cout << "Your new amount is: " << (amountInUSD * gbpRate) << endl;
    } else if (convertTo == "jpy") {
        cout << "Your new amount is: " << (amountInUSD * jpyRate) << endl;
    } else {
        cout << "Your new amount is: " << (amountInUSD) << endl;
    }


    return 0;
}