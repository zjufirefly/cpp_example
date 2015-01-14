#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    vector<int> col1;

    for (int i = 1; i <= 6; i++) {
        col1.push_back(i);
    }

    for (int i = 0; i < col1.size(); ++i) {
        cout << col1[i] << ' ';
    }
    cout << endl;

    vector<int>::iterator pos_vec;
    pos_vec = min_element(col1.begin(), col1.end());
    cout << "min:" << *pos_vec << endl;

    sort(col1.begin(), col1.end(), greater<int>());
    for (int i = 0; i < col1.size(); ++i) {
        cout << col1[i] << ' ';
    }
    cout << endl;

    deque<float> col2;
    for (int i = 1; i <= 6; i++) {
        col2.push_front(i*1.1);
    }

    for (int i = 0; i < col2.size(); ++i) {
        cout << col2[i] << ' ';
    }
    cout << endl;

    list<char> col3;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        col3.push_back(ch);
    }

    list<char>::const_iterator pos;
    for (pos = col3.begin(); pos != col3.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;

    while (!col3.empty()) {
        cout << col3.front() << ' ';
        col3.pop_front();
    }
    cout << endl;

    set<int, greater<int> > col4;

    col4.insert(3);
    col4.insert(1);
    col4.insert(5);
    col4.insert(4);

    set<int>::const_iterator pos1;
    for (pos1 = col4.begin(); pos1 != col4.end(); ++pos1) {
        cout << *pos1 << ' ';
    }
    cout << endl;

    multimap<int, string> col5;

    col5.insert(make_pair(5, "tagged"));
    col5.insert(make_pair(2, "a"));
    col5.insert(make_pair(1, "this"));
    col5.insert(make_pair(4, "of"));
    col5.insert(make_pair(6, "strings"));
    col5.insert(make_pair(1, "is"));
    col5.insert(make_pair(3, "multimap"));

    multimap<int, string>::const_iterator pos2;
    for (pos2 = col5.begin(); pos2 != col5.end(); ++pos2) {
        cout << pos2->second <<  ' ';
    }
    cout << endl;

    return 0;
}


