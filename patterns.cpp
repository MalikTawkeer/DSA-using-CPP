#include <iostream>
using namespace std;

// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa

void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void printPattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void printPattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printPattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }

        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void printPattern9(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (stars > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printPattern10(int n)
{
    int start = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void printPattern11(int n)
{
    int space = 2 * (n - 1);
    for (int i = 0; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // spaces
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space = space - 2;
    }
}

void printPattern12(int n)
{
    // 1
    // 23
    // 456
    // 78910
    int tempNumber = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << tempNumber;
            cout << " ";
            tempNumber++;
        }

        cout << endl;
    }
}

void printPattern13(int n)
{
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern14(int n)
{
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

void printPattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void printPattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 0; k <= i * 2 - 1; k++)
        {
            cout << " ";
        }

        // stars

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int counter = n * 2 - 2;
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < counter; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        counter = counter - 2;
        cout << endl;
    }
}

void printPattern18(int n)
{
    int counter = n * 2 - 2;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < counter; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        counter = counter - 2;

        cout << endl;
    }
}

void printPattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

void printPattern20(int n)
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right)));
        }

        cout << endl;
    }
}

int main()
{
    // printPattern1(5);
    // printPattern2(5);
    // printPattern3(5);
    // printPattern4(5);
    // printPattern5(5);
    // printPattern6(5);
    // printPattern7(5);
    // printPattern7(5);
    // printPattern8(5);
    // printPattern9(5);
    // printPattern10(5);
    // printPattern11(4);
    // printPattern12(5);
    // printPattern13(5);
    // printPattern14(5);
    // printPattern15(5);
    // printPattern16(5);
    // printPattern18(5);
    // printPattern19(4);
    printPattern20(4);

    return 0;
}