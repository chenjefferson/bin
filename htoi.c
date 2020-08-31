#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc == 1) {
        printf("ERROR: give to convert strs in arg\n");
        return -1;
    }

    for (int i = 1; i < argc; i++)
        printf("%ld\n", strtol(argv[i], NULL, 16));
}
