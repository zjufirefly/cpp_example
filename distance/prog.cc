#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

template <typename input_iterator>
typename iterator_traits<input_iterator>::difference_type __distance1(input_iterator pos1, input_iterator pos2, input_iterator_tag) 
{
    typename iterator_traits<input_iterator>::difference_type d = 0;
    while (pos1 != pos2) {
        ++pos1;
        ++d;
    }

    return d;
}

template <typename rand_iterator>
typename iterator_traits<rand_iterator>::difference_type __distance1(rand_iterator pos1, rand_iterator pos2, random_access_iterator_tag)
{
    return pos2 - pos1;
}

template<typename _Iter>
typename iterator_traits<_Iter>::iterator_category __iterator_category1(const _Iter&)
{
    return typename iterator_traits<_Iter>::iterator_category();
}

template <typename iterator>
typename iterator_traits<iterator>::difference_type distance1(iterator pos1, iterator pos2)
{
//    return __distance1(pos1, pos2, iterator_traits<iterator>::iterator_category());
    return __distance1(pos1, pos2, __iterator_category1(pos1));
}


int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;
    list<int> col1;
    col1.push_back(1);
    col1.push_back(1);
    col1.push_back(1);
    col1.push_back(1);
    col1.push_back(1);

    cout << distance1(col1.begin(), col1.end());

    return 0;
}
