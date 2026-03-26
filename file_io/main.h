#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

#include <fcntl.h>   /* open */
#include <unistd.h>  /* read, write, close */
#include <stdlib.h>  /* exit */
#include <string.h>  /* strlen */
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
