#include <iostream>
#include "cpio.hpp"

using namespace std;

int main( int argc, char *argv[] )
{
    (void) argc;
    (void) argv;
    cpio_header cpio_h;

    cout << "CPIO header size=" << cpio_h.size() << endl;

    return 0;
}

