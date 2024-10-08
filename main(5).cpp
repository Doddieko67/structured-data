#include <iostream>
#include <set>
#include <algorithm>

using lli = long long int;

using namespace std;

int main()
{
    multiset<int> children;
    lli n, x, d, c = 0;
    cin>>n>>x;
    for(int i = 0; i < n; ++i){
        cin>>d;
        children.insert(d);
    }
    
    while(true){
        if(children.empty()) break;
        ++c;
        auto ult = children.end();
        --ult;
        auto ini = children.begin();
        if(ini == ult) {
            children.erase(ini);
            continue;
        }
        if(*children.begin() + *ult <= x){
            children.erase(ini);
            children.erase(ult);
        } else {
            
            children.erase(ult);
        }
    }
    
    cout<<c;
    return 0;
}