#include "cpio.hpp"

cpio_header::cpio_header()
{
}

size_t cpio_header::size()
{
    return sizeof(cpio_header::header);
}

