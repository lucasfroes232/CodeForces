#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll = long long;
using namespace std;
// The idea is to fix one point and find two other points such that the difference between the first and the last does not exceed d.
// To achieve this, we can search for points[i] + d, knowing the interval between the index i and the index of the element that is <= points[i] + d.
// We use the combination formula to calculate the number of ways to choose two points from the available n points.
// The combination formula is:
// C(n, k) = n! / ((n - k)! * k!), but since k = 2, we can simplify it to...
// C(n, 2) = (n * (n - 1) * (n - 2)!) / ((n - 2)! * 2!)
// C(n, 2) = (n * (n - 1)) / 2
int binarySearch(vector<int>& x,int value,int start){
    int l = start;
    int r = x.size()-1;
    int middle = (l + r)/2;

    if(value > x.back())
        return x.size()-1;
    while(l<=r)
    {
        if(middle == value)
            return middle;
        if(value<x[middle])
            r = middle - 1;
        else
            l = middle + 1; 
        middle = (l + r) /2;
    }
    return middle;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector <int> points(n);
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    ll count = 0;
    for(int i=0;i<n-2;i++){
        
        ll bSearch = binarySearch(points,points[i] + d, i + 1);
        count += (bSearch - i) * (bSearch - i - 1) / 2;
    }
    cout << count <<endl;
}

