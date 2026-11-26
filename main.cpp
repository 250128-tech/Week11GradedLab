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
    cout << largestAltitude(gain,n);
    return 0;
}

int largestAltitude(const int gain[], int n)
{
    int altitudeMax = 0;
    const int x = n+1;
    int altitude[x];
    altitude[0] = 0;
    for ( int i = 0; i < n; i++)
    {
        altitude[i+1] = altitude[i] + gain[i];
        if ( altitudeMax < altitude[i+1]){ altitudeMax = altitude[i+1];}
    }
    return altitudeMax;
}