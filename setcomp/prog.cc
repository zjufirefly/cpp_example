#include <iostream>
#include <set>

using namespace std;

template <typename T>
class rt_cmp
{
    public:
        enum cmp_mode {normal, reverse};
    private:
        cmp_mode mode;

    public:
        rt_cmp(cmp_mode mode = normal):mode(mode) {}

        bool operator() (const T& t1, const T& t2) {
            return mode == normal? t1 < t2: t2 < t1;
        }

        bool operator== (const rt_cmp& cmp) {
            return mode == cmp.mode;
        }
};

typedef set<int, rt_cmp<int> > IntSet;

void fill(IntSet& set)
{
    set.insert(4);
    set.insert(7);
    set.insert(5);
    set.insert(1);
    set.insert(6);
    set.insert(2);
    set.insert(5);
}

template <typename T>
void print_elements(const T& t, const char* sep = " ")
{
    typename T::const_iterator pos;

    for (pos = t.begin(); pos != t.end(); ++pos) {
        cout << *pos << sep;
    }
    cout << endl;
}

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    IntSet col1;
    fill(col1);
    print_elements(col1);
    cout << endl;

    rt_cmp<int> rev_order(rt_cmp<int>::reverse);
    IntSet col2(rev_order);
    fill(col2);
    print_elements(col2);

    col1 = col2;
    col1.insert(3);
    print_elements(col1);

    if (col1.value_comp() == col2.value_comp()) {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }

    return 0;
}
