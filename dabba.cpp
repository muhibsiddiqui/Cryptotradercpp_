#include <iostream>
#include <iomanip>

using namespace std;

void printRow(string cell1, string cell2)
{
    cout << "| " << setw(10) << left << cell1 << " | " << setw(10) << left << cell2 << " |" << endl;
}

int main()
{
    cout << "\t\t\t\t\t+--------------+------------+" << endl;
    cout << "| Column 1   | Column 2     |" << endl;
    cout << "+-------------+-------------+" << endl;

    printRow("Row 1, Cell 1", "Row 1");
    cout << "+------------+------------+" << endl;
    printRow("Row 2, Cell 1", "Row 2");
    cout << "+------------+------------+" << endl;
   printRow("Row 2, Cell 1", "Row 2");
    cout << "+------------+------------+" << endl;
    return 0;
}