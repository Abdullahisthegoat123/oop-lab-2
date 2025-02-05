#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows for both matrix 1 and matrix 2: ";
    cin >> row;
    cout << "Enter the number of columns for both matrix 1 and matrix 2: ";
    cin >> col;
    int **ptr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }
    cout << "Enter the elements for the matrix 1:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j];
        }
    }
    int **ptr2 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        ptr2[i] = new int[col];
    }
    cout << "Enter the elements for the matrix 2:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr2[i][j];
        }
    }
    int **add = new int *[row];
    for (int i = 0; i < row; i++)
    {
        add[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add[i][j] = ptr[i][j] + ptr2[i][j];
        }
    }
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << "\n";
    }
    int **subtract = new int *[row];
    for (int i = 0; i < row; i++)
    {
        subtract[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            subtract[i][j] = ptr[i][j] - ptr2[i][j];
        }
    }
    cout << "The subtraction of the two matrices is:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << subtract[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < row; i++)
    {
        delete[] ptr[i];
        delete[] ptr2[i];
        delete[] add[i];
        delete[] subtract[i];
    }
    delete[] ptr;
    delete[] ptr2;
    delete[] add;
    delete[] subtract;
}