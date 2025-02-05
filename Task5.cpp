#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": " << *(arr + i) << endl;
    }
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    cout << "Sum of Elements in the array is: " << sum << endl;
    delete[] arr;
}