// Week 5 Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{
    int record1 = 1;
    int record2 = 2;
    int record3 = 1;
    int record4 = 3;
    int record5 = 2;
    int record6 = 2;

    int phoneCount = 0;
    int headphonesCount = 0;
    int chargerCount = 0;

    int saleType = 0;

    for (int i = 1; i <= 6; i++)
    {
        if (i == 1)
        {
            saleType = record1;
        }
        else if (i == 2)
        {
            saleType = record2;
        }
        else if (i == 3)
        {
            saleType = record3;
        }
        else if (i == 4)
        {
            saleType = record4;
        }
        else if (i == 5)
        {
            saleType = record5;
        }
        else if (i == 6)
        {
            saleType = record6;
        }
        switch (saleType)
        {
        case 1:
            phoneCount++;
            break;

        case 2:
            headphonesCount++;
            break;

        case 3:
            chargerCount++;
            break;

        default:
            cout << "Invalid sale type" << endl;
            break;
        }
    }
    cout << "=== Daily Sales Summary ===" << endl;
    cout << "Phone: " << phoneCount << endl;
    cout << "Headphones: " << headphonesCount << endl;
    cout << "Charger: " << chargerCount << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
