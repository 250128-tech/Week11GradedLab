//
// This is for Problem 1
//

int countValue(const int a[], int n, int x);

#include <iostream>
using namespace std;

int countValue(const int a[], int n, int x);

int main()
{
    int n; cin >> n;
    const int perm = n;
    int a[perm];
    for (int i = 0; i < n; i++ )
    {
        int num; cin >> num;
        a[i] = num;
    }
    int x; cin >> x;
    cout << countValue(a,n,x);
    return 0;
}

int countValue(const int a[], int n, int x)
{
    int counter = 0;
    for ( int i = 0; i < n ; i++ )
    {
        if ( x == a[i]) { counter ++ ;}
    }
    return counter;

}