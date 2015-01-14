#include <iostream>
#include <vector>
#include <deque>
#include <list>

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

    return 0;
}


