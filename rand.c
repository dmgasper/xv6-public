#include "rand.h"
#include "types.h"

unsigned long z1, z2, z3, z4;

// LFSR113, from http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.43.3639
double
lfsr113()
{
    unsigned long b;
    b = (((z1 << 6) ^ z1) >> 13);
    z1 = (((z1 & 4294967294) << 18) ^ b);
    b = (((z2 << 2) ^ z2) >> 27);
    z2 = (((z2 & 4294967288) << 2) ^ b);
    b = (((z3 << 13) ^ z3) >> 21);
    z3 = (((z3 & 4294967280) << 7) ^ b);
    b = (((z4 << 3) ^ z4) >> 12);
    z4 = (((z4 & 4294967168) << 13) ^ b);
    return ((z1 ^ z2 ^ z3 ^ z4) * 2.3283064365387e-10);
}