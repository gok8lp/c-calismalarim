#include "input.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
/* 0: başarılı, -1: geçersiz giriş */
int read_long(long *out) {
    char line[64];
    char *end;
    if (fgets(line, sizeof line, stdin) == NULL) {
        return -1;
    }
    /* Uzun satirin kalani sonraki girdiye karismasin. */
    if (strchr(line, '\n') == NULL) {
        int ch = getchar();
        if (ch != '\n' && ch != EOF) {
            while (ch != '\n' && ch != EOF) {
                ch = getchar();
            }
            return -1;
        }
    }
    errno = 0;
    long value = strtol(line, &end, 10);
    if (end == line || errno == ERANGE) {
        return -1;
    }
    while (isspace((unsigned char)*end)) {
        end++;
    }
    if (*end != '\0') {
        return -1;
    }
    *out = value;
    return 0;
}
