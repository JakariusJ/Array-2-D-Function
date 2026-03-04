#include <iostream>
using namespace std;

int main()
{
    const int max_row = 2;
    const int max_col = 3;
    int tableA[max_row][max_col];
    int tableB[max_row][max_col];

    cout << "Enter values for matrix A (2X3):\n";

    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> tableA[row][col];
        }
    }

    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            tableB[row][col] = tableA[row][col];
        }
    }

    cout << "\nMatrix B (copy of A):\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << tableB[row][col] << "\t";
        }
        cout << endl;
    }

}

