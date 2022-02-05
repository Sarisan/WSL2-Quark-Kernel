// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright (c) 2019, Microsoft Corporation.
 *
 * Author:
 *   Iouri Tarassov <iourit@linux.microsoft.com>
 *
 * Dxgkrnl Graphics Driver
 * Handle manager implementation
 *
 */

#include <linux/kernel.h>
#include <linux/mutex.h>
#include <linux/rwsem.h>

#include "misc.h"
#include "dxgkrnl.h"
#include "hmgr.h"

#undef pr_fmt
#define pr_fmt(fmt)	"dxgk: " fmt
