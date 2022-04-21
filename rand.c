#include "rand.h"
#include "types.h"

//With code from https://stackoverflow.com/questions/24005459/implementation-of-the-random-number-generator-in-c-c

static uint next = 1;

int
randInt()
{
   next = next * 1103515245 + 12345; 
   return (unsigned int)(next/65536) % 32768; 
}