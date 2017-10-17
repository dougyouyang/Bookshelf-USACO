//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;
int cow[20200];

int main()
{
    int n, s;
    int sum=0, cows=0;
    int i;
    
    cin >> n >> s;
    for(i=0;i<n;i++){
        cin >> cow[i];
    }
    
    sort(cow, cow+n);
    for(i=n-1;i>=0;i--){
        sum+=cow[i], cows++;
        if(sum>=s)
            break;
    }
    
    cout << cows << endl;
    
    return 0;
}
