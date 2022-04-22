#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    struct pstat* procstat = malloc(sizeof(struct pstat));
    int status = getpinfo(procstat);
    printf(1, "Status: %d\n", status);
    //printf(1, "%d\n", procstat);
    exit();
}