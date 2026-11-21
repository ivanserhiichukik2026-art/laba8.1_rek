#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, char c, int i = 0) // кількість символів c у рядку
{
    if (str[i] == '\0')
        return 0;

    if (str[i] == c)
        return 1 + Count(str, c, i + 1);
    else
        return Count(str, c, i + 1);
}

char* Change(char* dest, char* str, char* t, int i = 0) // заміна кожного слова "BASIC" на "Delphi"
{
    if (str[i] == '\0')
        return dest;

    if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
    {
        strcat(t, "Delphi");
        return Change(dest, str, t + 6, i + 5);
    }
    else
    {
        *t++ = str[i++];
        *t = '\0';
        return Change(dest, str, t, i);
    }
}

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "B : " << Count(str, 'B') << endl;
    cout << "A : " << Count(str, 'A') << endl;
    cout << "S : " << Count(str, 'S') << endl;
    cout << "I : " << Count(str, 'I') << endl;
    cout << "C : " << Count(str, 'C') << endl;

    char* dest = new char[151];
    dest[0] = '\0';

    Change(dest, str, dest);

    cout << "Modified string: " << dest << endl;

    delete[] dest;

    return 0;
}
