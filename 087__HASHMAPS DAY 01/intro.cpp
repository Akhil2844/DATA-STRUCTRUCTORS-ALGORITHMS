#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
  //  unordered_map<string,int>m;
  map<string, int> m;

  // insertion

  // 1
  pair<string, int> p = make_pair("babbar", 3);
  m.insert(p);

  // 2
  pair<string, int> pair2 = make_pair("love", 2);

  // 3
  m["mera"] = 1;
  m["mera"] = 2;

  //*** Searching
  cout << m["mera"] << endl;
  cout << m.at("babbar") << endl;

  // cause error
  //  cout<<m.at("unknown key")<<endl;

  cout << m["unknown key"] << endl;
  cout << m.at("unknown key") << endl;

  // size
  cout << m.size() << endl;

  // to check presence
  cout << m.count("babbar") << endl;
  cout << m.count("bro") << endl;

  // erase
  m.erase("love");
  //  m.erase("babbar");
  cout << m.size() << endl;

  // traverse
  for (auto i : m)
  {
    cout << i.first << " " << i.second << endl;
  }

  //  unordered_map<string,int>::iterator it=m.begin();
  //  while(it!=m.end())
  //  {
  //   cout<<it->first<<" "<<it->second<<endl;
  //   it++;
  //  }

  map<string, int>::iterator it = m.begin();
  while (it != m.end())
  {
    cout << it->first << " " << it->second << endl;
    it++;
  }

  return 0;
}