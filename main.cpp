//
// Problem 6
//

#include <iostream>
using namespace std;

void duplicateZeros(int arr[], int n);

int main()
{
    int n; cin >> n;
    const int constN = n;
    int arr[constN];
    for ( int i = 0; i < n; i++)
    {
        int x; cin >> x;
        arr[i] = x;
    }
    duplicateZeros(arr,n);
    for ( int i = 0; i < n; i++ )
    {
        cout << arr[i] << ' ';
    }
    return 0;
}

void duplicateZeros(int arr[], int n)
{
    int cache1; int cache2;
    for (int i = 0; i < n ; )
    {
        if ( arr[i]==0)
        {
            int cache1;
            int cache2;
            cache1 = arr [ i + 1 ];
            // got confused in this part
            for ( int j = i+1; j < n; j++)
            {
                cache2 = arr [ j +  1];
                arr [ j + 1 ] = cache1;
                cache1 = cache2;
            }
            arr[i + 1] = 0;
            i += 2;
        }
        else { i += 1; }
    }
}