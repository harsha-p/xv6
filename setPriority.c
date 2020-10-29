
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
    printf(1, "%d %d prio pid\n", priority, pid);
    if (set_priority(priority, pid) == -1)
    {
        printf(1, "No process with pid %d\n", pid);
    }
    exit();
}
