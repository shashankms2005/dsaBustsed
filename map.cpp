#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
//if only map then out squence is based on users input
    // insertion
    pair<string, int> p = make_pair("shash", 1);
    m.insert(p);

    pair<string, int> p2("ms", 2);
    m.insert(p2);

    m["shashu"] = 3;

    // iteration 1
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    // printing
    cout << m["shashu"] << endl;
    cout << m.at("ms") << endl;
    // see notes once

    cout << "size" << m.size() << endl;

    // deleteing
    m.erase("ms");

    cout << "size after deleting" << m.size() << endl;

    // checking if ele is present or not
    cout << m.count("shash") << endl;
    cout << m.count("key") << endl;

    // iteration 2  : using iterator operator use ->
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}