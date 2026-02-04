#include <iostream>
using namespace std;

int main()
{
    const int max_rows = 3;
    const int max_cols = 4;
    int seats[max_rows][max_cols];

    cout << "Enter roll numbers for a 3x4 seating chart:\n";

    for (int row = 0; row < max_rows; row++)
    {
        for (int col = 0; col < max_cols; col++)
        {
            cout << "Seat [" << row << "][" << col << "]: ";
            cin >> seats[row][col];
        }
    }

    cout << "\nSeating Chart:\n";
    for (int row = 0; row < max_rows; row++)
    {
        for (int col = 0; col < max_cols; col++)
        {
            cout << seats[row][col] << "\t";
        }

        cout << endl;
    }

    return 0;
}
