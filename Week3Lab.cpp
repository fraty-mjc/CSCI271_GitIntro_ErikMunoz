#include <iostream>
#include <string>
using namespace std;

int main() {
    // ========================
    // Part 1 – Basic Input/Output
    // ========================
    string name;
    int grade1, grade2;

    // TODO: Ask user for name (without spaces) and two grades
    // TODO: Output the values entered
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter grade 1: ";
    cin >> grade1;

    cout << "Enter grade 2: ";
    cin >> grade2;

    cout << "Name: " << name << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;

    // ========================
    // Part 2 – Arithmetic & Expressions
    // ========================
    int total;
    double average;

    total = grade1 + grade2;
    average = total / 2.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;

    // TODO: Compute total = grade1 + grade2
    // TODO: Compute average = total / 2.0
    // TODO: Output total and average

    // ========================
    // Part 3 – Constants & Escape Sequences
    // ========================
    const int MAX_SCORE = 100;

    cout << "Grade 1:" << grade1 << " out of " << MAX_SCORE << "\n";
    cout << "Grade 2 " << grade2 << " out of " << MAX_SCORE << "\n";

    // TODO: Print each grade in the form "Grade X: <score> out of MAX_SCORE"
    // Use endl or \n for line breaks

    // ========================
    // Part 4 – Increment/Decrement
    // ========================
    int counter = 0;

    cout << "Initial counter = " << counter << endl;

    cout << "counter++ gives " << counter++
        << ", now counter = " << counter << endl;

    cout << "++counter gives " << ++counter
        << ", now counter = " << counter << endl;

    // TODO: In a single cout statement, print the result of counter++ 
    //       and then the new value of counter.
    // Example: cout << "counter++ gives " << counter++ 
    //               << ", now counter = " << counter << endl;

    // TODO: In a single cout statement, print the result of ++counter 
    //       and then the new value of counter.
    // Example: cout << "++counter gives " << ++counter 
    //               << ", now counter = " << counter << endl;

    return 0;
}
