/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_ARM64_HYPERV_TIMER_H
#define _ASM_ARM64_HYPERV_TIMER_H

#include <clocksource/arm_arch_timer.h>

static inline u64 hv_get_raw_timer(void)
{
	return arch_timer_read_counter();
}

#endif
