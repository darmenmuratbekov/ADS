#include <iostream> 
#include <vector>
#include <stack> 
#include <map>
using namespace std;
vector<long> sumset;
map<long,long> mapcheck;
vector<pair<pair<long,long>,pair<long,long>>> checkset; 
bool bin_search(vector<pair<pair<long,long>, pair<long,long>>> &checkset, vector<long>&sumset ) {
    int l = 0;
    bool ok = false;
    int rize = checkset.size();
    long getonesumset;
    map<bool,pair<int,long> > checkevery;
    for(int i = 0; i < sumset.size(); i++) {
        getonesumset = sumset[i];
        l = 0;
        ok = false;
      //  cout << "next start" <<  endl;
    while(l  < rize ) {
        ok  = false;
      if(checkset[l].first.first <= getonesumset &&  getonesumset <= checkset[l].first.second)
      {  // cout <<"first "  <<"l " <<  l << " " << getonesumset << endl;
          mapcheck[l]++;
          ok = true;
      }
      if(checkset[l].second.first <= getonesumset && getonesumset <= checkset[l].second.second && ok == false) 
      {  // cout << "second " <<"l " << l << " " << getonesumset <<  endl;
          ok =  false;
          mapcheck[l]++;
      }
     l = l + 1;
    }
  }


}
int main()  {
    //  solve problems throughout binary  search 
    int sum, check; 
    long sumone;
    cin >>  sum >>  check; 
    for(int  i = 1;  i <=  sum;  i++) 
   {
        cin >> sumone;
        sumset.push_back(sumone);
    }
    long checkonebegin;
    long checkoneend;
    long checktwobegin;
    long checktwoend;
    for(int i = 0;  i  < check;  i++) {
        mapcheck[i]  = 0;
    }
    for(int i = 0; i <  check;  i++) 
    {
       cin >>  checkonebegin >> checkoneend >> checktwobegin >> checktwoend;
       checkset.push_back(make_pair(make_pair(checkonebegin, checkoneend),  make_pair(checktwobegin,  checktwoend)));
    }
    bin_search(checkset, sumset);
    //cout << endl;
    

    for(int i = 0; i < mapcheck.size(); i++) {
        cout << mapcheck[i] << endl;
    }
    
    //cout << checkset[0].first.first << " " << checkset[0].first.second << endl;
   // if(checkset[0].first.first <= 5 && 5 <= checkset[0].first.second) {
   //     cout << "1" << endl;
   // }
    return 0; 
}
