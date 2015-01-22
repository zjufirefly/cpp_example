#include <iostream>
#include <string>
#include <cstring>

using namespace std;
typedef basic_string<int>    istring;   

inline ostream& operator<< (std::ostream& strm, const istring& s)
{
    int i;
    for (i = 0; i != s.size(); ++i) {
        cout << s[i] << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[])
{
    string str(9, '\0');
    cout << strlen(str.c_str()) << endl;

    istring istr(4,5);
    istr.push_back(456);
    istr.push_back(789);
    cout << istr.size() << endl;
    cout << istr << endl;

    istring::iterator itr = istr.begin();
    for( ;itr != istr.end(); ++itr)
        cout << *itr << endl;

    return 0;
}
