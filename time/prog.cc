#include <iostream>
#include <boost/progress.hpp>
#include <boost/timer.hpp>


using namespace std;
using namespace boost;

int main(int argc, char* argv[])
{
    cout << "hello world!" << endl;

    timer t;
    cout << "max timespan" << t.elapsed_max()/3600 << "h" << endl;
    cout << "min timespan" << t.elapsed_min() << "s" << endl;
    cout << "now time elapsed:" << t.elapsed() << endl;

    progress_timer tt;

    int count = 1000000000;
    progress_display pd(count);
    for (int i; i < count; i++) {
        ++pd;
    }

	return 0;
}
