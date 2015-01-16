#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    typedef map<string, float> StringFloatMap;

    StringFloatMap stocks;

    stocks["BASF"] = 369.50;
    stocks["VW"] = 413.50;
    stocks["Daimler"] = 819.00;
    stocks["BMW"] = 834.00;
    stocks["Siemens"] = 842.20;

    StringFloatMap::iterator pos;
    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stock:" << pos->first << "\t" << "price:" << pos->second << endl;
    }
    cout << endl;

    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        pos->second *= 2;
    }


    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stock:" << pos->first << "\t" << "price:" << pos->second << endl;
    }
    cout << endl;

    stocks["Volkswagen"] = stocks["VW"];
    stocks.erase("VW");

    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stock:" << pos->first << "\t" << "price:" << pos->second << endl;
    }
    cout << endl;

    typedef multimap<string, string> StrStrMMap;

    StrStrMMap dict;

    dict.insert(make_pair("day","Tag"));
    dict.insert(make_pair("strange","fremd"));
    dict.insert(make_pair("car","Auto"));
    dict.insert(make_pair("smart","elegant"));
    dict.insert(make_pair("trait","Merkmal"));
    dict.insert(make_pair("strange","seltsam"));
    dict.insert(make_pair("smart","raffiniert"));
    dict.insert(make_pair("smart","klug"));
    dict.insert(make_pair("clever","raffiniert"));

    StrStrMMap::iterator pos1;
    for (pos1 = dict.begin(); pos1 != dict.end(); ++pos1) {
        cout << pos1->first << "\t\t" << pos1->second << endl;
    }
    cout << endl;

    for (pos1 = dict.lower_bound("smart"); pos1 != dict.upper_bound("smart"); ++pos1) {
        cout << pos1->first << "\t\t" << pos1->second << endl;
    }
    cout << endl;

    for (pos1 = dict.begin(); pos1 != dict.end(); ++pos1) {
        if (pos1->second == "raffiniert")
            cout << pos1->first << "\t\t" << pos1->second << endl;
    }
    cout << endl;



    return 0;
}
