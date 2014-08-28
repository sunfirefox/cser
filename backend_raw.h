/* Copyright (C) 2014 DiUS Computing Pty. Ltd.   See LICENSE file. */

#ifndef _BACKEND_RAW_H_
#define _BACKEND_RAW_H_

#include "model.h"
#include <stdio.h>

bool backend_raw (const type_list_t *types, const alias_list_t *aliases, FILE *fh, FILE *fc);

#endif
