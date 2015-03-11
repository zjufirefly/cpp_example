#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class student
{
    public:
        int no;
        student(int n):no(n){}
        bool operator== (const student& stu) {return stu.no == no;}
};

template <typename Itr, typename Value>
typename iterator_traits<Itr>::difference_type get_diff(Itr itr1, Itr itr2, Value val)
{
    return count(itr1, itr2, val);
}

int main(int argc, char* argv[])
{
    vector<student> stus;
    student stu1(1);
    student stu2(2);
    student stu3(1);
    student stu4(1);
    student stu5(1);

    stus.push_back(stu1);
    stus.push_back(stu2);
    stus.push_back(stu3);
    stus.push_back(stu4);
    stus.push_back(stu5);

    
    cout << get_diff(stus.begin(), stus.end(), stu5);
    // iterator_traits<vector<student>::iterator>::difference_type diff = count(stus.begin(), stus.end(), stu5);
    // cout << diff;

    return 0;
}
