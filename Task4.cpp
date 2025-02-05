#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore();
    string *str = new string[n];
    cout << "Enter the " << n << " strings: " << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, str[i]);
    }
    sort(str, str + n);
    cout << "\nSorted Strings\n";
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    delete[] str;
}