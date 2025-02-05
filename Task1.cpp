#include <iostream>
using namespace std;
struct book
{
    string title;
    string author;
    int year;
};
int main()
{

    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    book *b = new book[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the title of book#" << i + 1 << " : ";
        cin >> b[i].title;
        cout << "Enter the author name of book#" << i + 1 << " : ";
        cin >> b[i].author;
        cout << "Enter the year of book#" << i + 1 << " : ";
        cin >> b[i].year;
        cout << "\n";
    }
    cout << "the books in the library are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Book#" << i + 1 << ":" << endl;
        cout << "Title: " << b[i].title << endl;
        cout << "Author: " << b[i].author << endl;
        cout << "Year: " << b[i].year << endl;
    }
    int y;
    cout << "Enter after which years books do you want: ";
    cin >> y;
    cout << "The books after year " << y << " is:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (b[i].year > y)
        {
            cout << "Book#" << i + 1 << ":" << endl;
            cout << "Title: " << b[i].title << endl;
            cout << "Author: " << b[i].author << endl;
            cout << "Year: " << b[i].year << endl;
        }
    }
    delete[] b;
}