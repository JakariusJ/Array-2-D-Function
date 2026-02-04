#include <iostream>
using namespace std;

int main()
{
    const int cities = 3;
    const int days = 4;
    int temp[cities][days];

    cout << "Enter temperature for 3 cities over 4 days:\n";

    for (int row = 0; row < cities; row++)
    {
        cout << "City " << (row + 1) << ":\n";

        for (int col = 0; col < days; col++)
        {
            cout << "  Day " << (col + 1) << ": ";
            cin >> temp[row][col];
        }
    }

    cout << "\nTeemperature Table:\n";

    for (int row = 0; row < cities; row++)
    {
        for (int col = 0; col < days; col++)
        {
            cout << temp[row][col] << "\t";
        }

        cout << endl;
    }

    return 0;

}

