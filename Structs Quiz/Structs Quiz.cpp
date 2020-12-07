/*/ Structs Quiz.cpp : Declare an advertising struct that keeps track of how many ads you’ve shown to readers, what percentage of ads were clicked on by users, and how much
you earned on average from each ad that was clicked. Read in values for each of these fields from the user. Pass the advertising struct to a function that prints each of
the values, and then calculates how much you made for that day (multiply all 3 fields together).
*/

#include <iostream>
#include <iomanip> //  for std::setprecision(2)
using namespace std;

struct AdTrack {
    int adshow{ 0 };
    double percentClicks{ 0 };
    double earnings{ 0 };
    };

void printAds(AdTrack ad_mult) {
    cout << "no. of ads shown: " << ad_mult.adshow << endl;
    cout << "percentage clicks: " << ad_mult.percentClicks << endl;
    std::cout << std::setprecision(2) << std::fixed;
    cout << "average earnings per click: " << ad_mult.earnings << endl;
    double calc_earnings = (ad_mult.adshow * ad_mult.percentClicks * ad_mult.earnings);
    cout << "Earnings today: "  << calc_earnings;
}

int main()
{
    AdTrack ads;
    cout << "Enter no. of ads shown: ";
    cin >> ads.adshow;
    cin.ignore(100, '\n');
    cout << "Enter percentage clicks: ";
    cin >> ads.percentClicks;
    cin.ignore(100, '\n');
    cout << "Enter average earnings per click: ";
    cin >> ads.earnings;
    cin.ignore(100, '\n');
    printAds(ads);
    }
