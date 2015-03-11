#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>


using namespace std;

int main(int argc, char* argv[])
{
    vector<int> l;
    l.push_back(1);
    l.push_back(5);
    l.push_back(9);
    l.push_back(4);
    l.push_back(7);
    l.push_back(8);

    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    make_heap(l.begin(), l.end());
    sort_heap(l.begin(), l.end());

    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
