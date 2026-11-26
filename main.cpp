//
// Problem 3
//

#include <iostream>
using namespace std;

void shuffle(const int nums[], int n, int result[]);

int main()
{
    int n; cin >> n;
    const int constN = 2*n;
    int nums[constN];
    for ( int i = 0 ; i < 2*n ; i++ )
    {
        int x; cin >> x;
        nums[i] = x;
    }
    int result[constN];
    shuffle(nums,n,result);
    for ( int i = 0; i < 2*n ; i++ )
    {
        cout << result[i] << ' ';
    }
    return 0;
}

void shuffle(const int nums[], int n, int result[])
{
    for ( int i = 0; i < n ; i++ )
    {
        result[2*i] = nums[i];
        result[2*i+1] = nums[ n + i];
    }
}