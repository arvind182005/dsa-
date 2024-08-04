#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    map< string, int > m;

    // insertion

    //1
    pair <string, int> p = make_pair("arvind", 3);
    m.insert(p);

    //2
    pair< string, int> pair2("jangir", 2);

    //3
    m["king"] = 1;

    // what will happen
    m["king"] = 2;

     // search
     cout << m["king"] << endl;
     cout << m.at("arvind") << endl;

     cout << m["unknownkey"] << endl;
     cout << m.at("unknownkey") << endl;

      // size
     cout << m.size() << endl;

     // to check presence
     cout << m.count("arvind") << endl;

     // erase
    //  m.erase("arvind");
    //  cout << m.size() << endl;

    //  for(auto i:m)
    //  {
    //     cout << i.first << " " << i.second << endl;
    //  }

     
     // iterator
     map< string, int > :: iterator it = m.begin();

     while(it != m.end())
     {
        cout << it-> first << " " << it-> second << endl;
        it++;
     }

     return 0;

    }