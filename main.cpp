//
// Problem 4
//
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char s[], int n);

int main()
{
    int n;
    char word[10001];
    cin.getline(  word,10001);
    n = strlen(word);
    reverseString(word,n-1);
    for ( int i = 0; i < n; i++) { cout << word[i];}
    return 0;
}

void reverseString(char s[], int n)
{
    int len = n/2;
    for ( int i = 0; i < len ; i++)
    {
        char temp = s [ i];
        s[i] = s[ n - i];
        s[ n - i] = temp;
    }
}