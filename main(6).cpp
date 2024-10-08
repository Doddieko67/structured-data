#include <iostream>
#include <set>
using lli = long long int;
using namespace std;

int main()
{
    multiset<lli,greater<lli>>tickets;
    lli n, m, d;
    cin>>n>>m;
    for(int i = 0; i < n; ++i){
        cin>>d;
        tickets.insert(d);
    }
    for(int i = 0; i < m; ++i){
        
        cin>>d;
        auto ticket = tickets.lower_bound(d);
        if(ticket != tickets.end()) {
            cout<<*ticket; tickets.erase(ticket);
        } else cout<<-1;
        cout<<endl;
    }

    return 0;
}