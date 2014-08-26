#include <cstring>

class cpio_header
{
public:
    struct header
    {
        unsigned int field_a;
        unsigned char field_b;
    };

    cpio_header();


    size_t size();
};

