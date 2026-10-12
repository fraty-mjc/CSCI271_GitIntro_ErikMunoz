#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    double score[3][3];
    string courseName[3] = { "Math", "C Programming", "Operating Systems" };
    bool hasData = false;
    int choice;

    do {
        cout << "\n=== Student Grade System ===\n"
            << "1) Record grades (3x3)\n"
            << "2) One student's Total & Average\n"
            << "3) Display ALL (table + per-student stats)\n"
            << "4) Exit\n"
            << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                cout << "\nStudent " << i + 1 << ":\n";

                for (int j = 0; j < 3; j++) {
                    do {
                        cout << "Enter grade for " << courseName[j] << " (0-100): ";
                        cin >> score[i][j];

                        if (score[i][j] < 0 || score[i][j] > 100) {
                            cout << "Invalid grade. Try again.\n";
                        }

                    } while (score[i][j] < 0 || score[i][j] > 100);
                }
            }

            hasData = true;
        }
        else if (choice == 2) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }
            int idx;

            do {
                cout << "Enter student index (0-2): ";
                cin >> idx;

                if (idx < 0 || idx > 2) {
                    cout << "Invalid student. Try again.\n";
                }

            } while (idx < 0 || idx > 2);

            double total = 0;

            for (int j = 0; j < 3; j++) {
                total += score[idx][j];
            }

            double average = total / 3.0;

            cout << "Student " << idx + 1 << " total: " << total << "\n";
            cout << "Student " << idx + 1 << " average: " << average << "\n";
        }
        else if (choice == 3) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }
            cout << "\nGrades:\n";

            cout << "Student\t";
            for (int j = 0; j < 3; j++) {
                cout << courseName[j] << "\t";
            }
            cout << "Total\tAverage\n";

            for (int i = 0; i < 3; i++) {
                double total = 0;

                cout << i + 1 << "\t";

                for (int j = 0; j < 3; j++) {
                    cout << score[i][j] << "\t";
                    total += score[i][j];
                }

                double average = total / 3.0;

                cout << total << "\t" << average << "\n";
            }
        }
        else if (choice == 4) {
            cout << "Bye!\n";
        }
        else {
            cout << "Invalid choice. Enter 1, 2, 3, or 4.\n";
        }
    } while (choice != 4);

    return 0;
}
