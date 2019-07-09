/*
 * This file is part of the zlog Library.
 *
 * Copyright (C) 2011 by Hardy Simpson <HardySimpson1984@gmail.com>
 *
 * Licensed under the LGPL v2.1, see the file COPYING in base directory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#include "zlog.h"

int main(int argc, char** argv)
{
    int rc = 0;

    if (!zlog_is_init()) {
        rc = zlog_init("test_init.conf");
        if (rc) {
            printf("init fail");
            return -1;
        }
        printf("init succeeded");
    }

    if (zlog_is_init()) {
        zlog_fini();
        printf("fini");
    }

    return 0;
}
