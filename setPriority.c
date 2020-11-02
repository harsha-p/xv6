
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf(1, "Usage: setPriority <new priority> <pid>\n");
        exit();
    }
    int priority = atoi(argv[1]);
    int pid = atoi(argv[2]);
    int ret;
    if ((ret = set_priority(priority, pid)) < 0)
    {
        if (ret == -1)
            printf(1, "invalid priority\n");
        if (ret == -2)
            printf(1, "No process with pid %d or ", pid);
    }
    exit();
}
