//
// This is problem 2.
//

#include <iostream>
using namespace std;

int largestAltitude(const int gain[], int n);

int main()
{
    int n; cin >> n;
    const int constn = n;
    int gain[constn];
    for ( int i = 0; i < n; i++ )
    {
        int x; cin >> x;
        gain[i] = x;
    }
    cout << largestAltitude(gain[],n);
    return 0;
}

int largestAltitude(const int gain[], int n)
{

}