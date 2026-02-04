#include <iostream>
using namespace std;

const int maxr = 2;
const int maxc = 3;

void read(int marks[][maxc], int maxr);
void print(int marks[][maxc], int maxr);

int main()
{
    int marks[maxr][maxc];

    read(marks, maxr);

    print(marks, maxr);

    return 0;
}

void read(int marks[][maxc], int maxr)
{
    for (int row = 0; row < maxr; row++)
    {
        for (int col = 0; col < maxc; col++)
        {
            cout << "Enter value for marks[" << row << "][" << col << "]: ";
            cin >> marks[row][col];
        }
    }
}

void print(int marks[][maxc], int maxr)
{
    cout << "\nMarks array:\n";

    for (int row = 0; row < maxr; row++)
    {
        for (int col = 0; col < maxc; col++)
        {
            cout << marks[row][col] << " ";
        }

        cout << endl;
    }
}
