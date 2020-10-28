
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf(1, "Usage: setPriority new_priority pid\n");
        exit();
    }
    int priority = atoi(argv[1]);
    int pid = atoi(argv[2]);
    set_priority(priority, pid);
    exit();
}
