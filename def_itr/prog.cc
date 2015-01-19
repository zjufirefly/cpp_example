#include <iostream>
#include <set>
#include <iterator>

using namespace std;

template <typename Container>
class asso_insert_iterator
{
    private:
        Container& container;

    public:
        asso_insert_iterator(Container& c) : container(c) {
        }

        asso_insert_iterator& operator= (const typename Container::value_type& value) {
            container.insert(value);
            return *this;
        }

        asso_insert_iterator& operator* () {
            return *this;
        }

};

/* convenience function to create the inserter
 */
template <class Container>
inline asso_insert_iterator<Container> asso_inserter (Container& c)
{
    return asso_insert_iterator<Container>(c);
}

int main(int argc, char* argv[])
{
    set<int> col1;   

    // create inserter for coll
    // - inconvenient way
    asso_insert_iterator<set<int> > iter(col1);

    // insert elements with the usual iterator interface
    *iter = 1;
    *iter = 2;
    *iter = 3;

    set<int>::iterator itr;
    for (itr = col1.begin(); itr != col1.end(); ++itr) {
        cout << *itr << " ";
    }

    return 0;
}
