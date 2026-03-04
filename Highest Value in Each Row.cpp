#include <iostream>
using namespace std;

int main()
{
    const int students = 3;
    const int subjects = 4;
    int marks[students][subjects];

    cout << "Enter the marks for the sudents and the subjects:\n";

    for (int row = 0; row < students; row++)
    {
        cout << "Student " << (row + 1) << ":\n";
        for (int col = 0; col < subjects; col++)
        {
            cout << " Subject " << (col + 1) << ": ";
            cin >> marks[row][col];
        }
    }

    cout << "\nHighest mark for each student:\n";

    for (int row = 0; row < students; row++)
    {
        int max = marks[row][0];
        for (int col = 1; col < subjects; col++)
        {
            if (marks[row][col] > max)
            {
                max = marks[row][col];
            }
        }

        cout << "Student " << (row + 1) << " highest = " << max << endl;
    }

    return 0;

}

