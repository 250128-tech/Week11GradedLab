//
// Problem 5
//

#include <iostream>
using namespace std;

int search(const int nums[], int n, int target);

int main()
{
    int n; cin >> n;
    const int constN = n;
    int nums[constN];
    for ( int i = 0; i < n; i++)
    {
        int x; cin >> x;
        nums[i]=x;
    }
    int target; cin >> target;
    cout << search ( nums,n,target);
    return 0;
}

int search(const int nums[], int n, int target)
{
    int high = n - 1; int low = 0;
    int indexTarget = -1;
    while ( high >= low )
    {
        int mid = ( high + low ) /2;
        if ( nums[mid] == target ) { return mid; }
        else if ( nums[mid] > target ) { high = mid - 1;}
        else { low = mid + 1;}
    }
    return indexTarget;
}