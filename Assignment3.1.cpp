// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const int SALES_UNIT = 100;

    // Variables
    double salesOne;
    double salesTwo;
    double salesThree;
    double salesFour;
    double salesFive;

    // Input
    cout << "Enter today's sales for store 1: ";
    cin >> salesOne;

    cout << "\nEnter today's sales for store 2: ";
    cin >> salesTwo;

    cout << "\nEnter today's sales for store 3: ";
    cin >> salesThree;

    cout << "\nEnter today's sales for store 4: ";
    cin >> salesFour;

    cout << "\nEnter today's sales for store 5: ";
    cin >> salesFive;

    // Output
    cout << endl;
    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl << endl;

    cout << "Store 1: ";
    for(int i = 0; i < (salesOne / SALES_UNIT); i++)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << "Store 2: ";
    for(int i = 0; i < (salesTwo / SALES_UNIT); i++)
    {
        cout << "*";
    }
    cout << endl;

    cout << "Store 3: ";
    for(int i = 0; i < (salesThree / SALES_UNIT); i++)
    {
        cout << "*";
    }
    cout << endl;

    cout << "Store 4: ";
    for(int i = 0; i < (salesFour / SALES_UNIT); i++)
    {
        cout << "*";
    }
    cout << endl;

    cout << "Store 5: ";
    for(int i = 0; i < (salesFive / SALES_UNIT); i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
