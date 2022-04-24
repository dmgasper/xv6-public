#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    struct pstat* procstat = malloc(sizeof(struct pstat));
    int status = getpinfo(procstat);
    printf(1, "Status: %d\n", status);

    if(status == 0)
    {
        for (int i = 0; i < NPROC; i++)
        {
            if (procstat->pid[i] != 0)
            {
                printf(1, "PID: %d, inuse: %d, hticks: %d, lticks: %d\n",
                    procstat->pid[i],
                    procstat->inuse[i],
                    procstat->hticks[i],
                    procstat->lticks[i]
                );
            }
        }
    }
    free(procstat);
    exit();
}