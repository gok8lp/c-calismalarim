/*
 * input.c
 *
 *  Created on: Oct 16, 2026
 *      Author: flugel
 */
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
	errno = 0;
	long value = strtol(line, &end, 10);
	if (end == line || errno == ERANGE) {
		return -1;
	}
	while (*end == ' ' || *end == '\n') {
		end++;
	}
	if (*end != '\0') {
		return -1;
	}
	*out = value;
	return 0;
}
