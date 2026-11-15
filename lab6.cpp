#include <iostream>
#include <cstdio>
#include <cstring>
#include <clocale>

using namespace std;

void printWords(char s[])
{
    int i = 0;
    while (s[i] != '.' && s[i] != '\0')
    {
        while (s[i] == ' ') i++;
        if (s[i] == '.' || s[i] == '\0') break;

        int start = i;
        int digits = 0;

        while (s[i] != ' ' && s[i] != '.' && s[i] != '\0')
        {
            if (s[i] >= '0' && s[i] <= '9') digits++;
            i++;
        }

        int end = i - 1;

        if (digits == 1)
        {
            for (int j = start; j <= end; j++) cout << s[j];
            cout << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char s[256];
    cout << "Введите строку (в конце точка): " << endl;
    gets_s(s, 256); 

    cout << "Исходная строка: " << endl;
    cout << s << endl;

    cout << "Слова, содержащие по одной цифре: " << endl;
    printWords(s);

    return 0;
}