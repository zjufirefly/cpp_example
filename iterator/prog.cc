#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <deque>
#include <set>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    list<int> col1;
    for (int i = 1; i <= 9; i++) {
        col1.push_back(i);
    }

    vector<int> col2;
    copy(col1.begin(), col1.end(), back_inserter(col2));
    vector<int>::iterator col2_itr;
    for (col2_itr = col2.begin(); col2_itr != col2.end(); col2_itr++) {
        cout << *col2_itr << ' ';
    }
    cout << endl;

    deque<int> col3;
    copy(col1.begin(), col1.end(), front_inserter(col3));
    deque<int>::iterator col3_itr;
    for (col3_itr = col3.begin(); col3_itr != col3.end(); col3_itr++) {
        cout << *col3_itr << ' ';
    }
    cout << endl;

    set<int> col4;
    copy(col1.begin(), col1.end(), inserter(col4, col4.begin()));
    set<int>::iterator col4_itr;
    for (col4_itr = col4.begin(); col4_itr != col4.end(); col4_itr++) {
        cout << *col4_itr << ' ';
    }
    cout << endl;

    return 0;
}
