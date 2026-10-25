#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 5;
const int COURSE_COUNT = 3;

// Function prototypes
void calculateStudent(int i, double Score[][3], double& total, double& average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

int main()
{
    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = { "Alice", "Bob", "Carl" };
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}
    };

    cout << fixed << setprecision(2);
    cout << "Student Grade Report" << endl;
    displayAll(n, NameArr, Score);

    int topIndex = findTopStudent(n, Score);
    double topTotal;
    double topAverage;
    calculateStudent(topIndex, Score, topTotal, topAverage);
    cout << "Top Student: " << NameArr[topIndex]
        << " Total: " << topTotal << endl;

    // TODO:
    // 1. print the title
    // 2. call displayAll(...)
    // 3. find the top student index
    // 4. call calculateStudent(...) for the top student
    // 5. print the top student's name and total

    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double& total, double& average)
{
    total = Score[i][0] + Score[i][1] + Score[i][2];
    average = total / 3;
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{
    for (int i = 0; i < n; i++)
    {
        double total;
        double average;

        calculateStudent(i, Score, total, average);

        cout << NameArr[i] << " "
            << Score[i][0] << " "
            << Score[i][1] << " "
            << Score[i][2] << " "
            << total << " "
            << average << endl;
    }
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{
    int topIndex = 0;
    double topTotal;
    double topAverage;

    calculateStudent(0, Score, topTotal, topAverage);

    for (int i = 1; i < n; i++)
    {
        double total;
        double average;

        calculateStudent(i, Score, total, average);

        if (total > topTotal)
        {
            topTotal = total;
            topIndex = i;
        }
    }

    return topIndex;
}