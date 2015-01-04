#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;
using namespace boost::gregorian;

int main(int argc, char* argv[])
{
    date d1(2011,1,2);
    date d2 = from_string("2012-11-13");

    cout << to_iso_string(d1) << endl;
    cout << to_iso_extended_string(d1) << endl;


    return 0;

}
