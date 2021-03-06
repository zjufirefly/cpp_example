#include <iostream>
#include <set>
#include <iterator>

using namespace std;

class student{
    public:
        int num;
        void setnum(int num) const{
        }
};

bool operator< (const student& s1, const student& s2) {
    return s1.num < s2.num;
}

int main(int argc, char* argv[])
{
    set<student> ss;
    student s1;
    s1.num =1;
    student s2;
    s2.num = 2;
    ss.insert(s1);
    ss.insert(s2);


    set<student>::iterator spos;
    spos = ss.begin();
    spos->setnum(3);
    for (spos = ss.begin(); spos != ss.end(); ++spos) {
        cout << spos->num << endl;
    }

    cout << "hello world!" << endl;

    typedef multiset<int> IntSet;

    less<int> ls;
    IntSet col1(ls);

    col1.insert(4);
    col1.insert(3);
    col1.insert(5);
    col1.insert(1);
    col1.insert(6);
    col1.insert(2);
    col1.insert(5);

    IntSet::iterator pos;
    for (pos = col1.begin(); pos != col1.end(); ++pos) {
        cout << *pos << " ";
    }
    cout << endl;

    IntSet::iterator ipos = col1.insert(4);
    cout << "4 insert as element " << distance(col1.begin(), ipos) + 1 << endl;

    multiset<int> col2(col1.begin(), col1.end());

    copy(col2.begin(), col2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    col2.erase(col2.begin(), col2.find(3));

    int num = col2.erase(5);
    cout << num << " elements removed" << endl;

    copy(col2.begin(), col2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    return 0;
}
