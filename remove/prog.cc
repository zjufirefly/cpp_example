#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    list<int> col1;

    for (int i = 1; i <= 6; i++) {
        col1.push_front(i);
        col1.push_back(i);
    }

    cout << "pre:";
    copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    list<int>::iterator col1_itr = remove(col1.begin(), col1.end(), 3);

    cout << "post:";
    copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "size = " << col1.size() << endl;
    cout << "The number of remove element:" << distance(col1_itr, col1.end()) << endl;

    col1.erase(col1_itr, col1.end());
    copy(col1.begin(), col1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "size = " << col1.size() << endl;

    return 0;
}
