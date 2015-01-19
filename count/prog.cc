#include <iostream>
#include <deque>
#include <list>
#include <algorithm>

using namespace std;

template <typename T>
class count_ptr
{
    private:
        long *count;
        T *value_ptr;

    public:
        count_ptr(T* value) : value_ptr(value), count(new long(1)) {
        }

        count_ptr(const count_ptr<T>& p) : value_ptr(p.value_ptr), count(p.count) {
            ++(*count);
        }

        count_ptr<T>& operator= (const count_ptr<T>& p) {
            if (this != &p) {
                value_ptr = p.value_ptr;
                count = p.count;
                ++(*count);
            }

            return *this;
        }

        ~count_ptr() {
            if (--(*count) == 0) {
                delete count;
                delete value_ptr;
            }
        }

        T& operator*() {
            return *value_ptr;
        }

        T* operator->() {
            return value_ptr;
        }
};

//template <typename T>
//void print_element(const count_ptr<T> element) {
//    cout << *element << " ";
//}

void print_element(count_ptr<int> elem) 
{
    cout << *elem << " ";
}

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    int values[] = {3, 5, 9, 1, 6, 4};
    typedef count_ptr<int> int_ptr;

    deque<int_ptr> col1;
    list<int_ptr> col2;

    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        int_ptr p(new int(values[i]));
        col1.push_back(p);
        col2.push_front(p);
    }

    for_each(col1.begin(), col1.end(), print_element);
    cout << endl;

    for_each(col2.begin(), col2.end(), print_element);
    cout << endl;

    *col1[2] *= *col1[2];
    (**col1.begin()) *= -1;
    (**col2.begin()) *= 0;

    for_each(col1.begin(), col1.end(), print_element);
    cout << endl;

    for_each(col2.begin(), col2.end(), print_element);
    cout << endl;

    return 0;
}
