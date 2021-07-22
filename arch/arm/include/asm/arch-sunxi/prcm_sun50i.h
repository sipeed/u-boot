/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Sunxi H6 Power Management Unit register definition.
 *
 * (C) Copyright 2020 Jernej Skrabec <jernej.skrabec@siol.net>
 */

#ifndef _SUN50I_PRCM_H
#define _SUN50I_PRCM_H

#ifndef __ASSEMBLY__
#include <linux/compiler.h>

struct sunxi_prcm_reg {
	u32 cpus_cfg;		/* 0x000 */
	u8 res0[0x8];		/* 0x004 */
	u32 apbs1_cfg;		/* 0x00c */
	u32 apbs2_cfg;		/* 0x010 */
	u8 res1[0x108];		/* 0x014 */
	u32 tmr_gate_reset;	/* 0x11c */
	u8 res2[0xc];		/* 0x120 */
	u32 twd_gate_reset;	/* 0x12c */
	u8 res3[0xc];		/* 0x130 */
	u32 pwm_gate_reset;	/* 0x13c */
	u8 res4[0x4c];		/* 0x140 */
	u32 uart_gate_reset;	/* 0x18c */
	u8 res5[0xc];		/* 0x190 */
	u32 twi_gate_reset;	/* 0x19c */
	u8 res6[0x1c];		/* 0x1a0 */
	u32 rsb_gate_reset;	/* 0x1bc */
	u32 cir_cfg;		/* 0x1c0 */
	u8 res7[0x8];		/* 0x1c4 */
	u32 cir_gate_reset;	/* 0x1cc */
	u8 res8[0x10];		/* 0x1d0 */
	u32 w1_cfg;		/* 0x1e0 */
	u8 res9[0x8];		/* 0x1e4 */
	u32 w1_gate_reset;	/* 0x1ec */
	u8 res10[0x1c];		/* 0x1f0 */
	u32 rtc_gate_reset;	/* 0x20c */
#ifdef CONFIG_MACH_SUN50I_R329
	u8 res11[0xdf0];	/* 0x210 */

	u32 pll1_cfg;		/* 0x1000 pll1 (cpux) control */
	u8 reserved_0x1004[0xc];
	u32 pll6_cfg;		/* 0x1010 pll6 (periph) control */
	u8 reserved_0x1014[0xc];
	u32 pll2_cfg;		/* 0x1020 pll2 (audio) control */
	u8 reserved_0x1024[0xc];
	u32 pll_audio1_cfg;	/* 0x1030 pll audio1 control */
	u8 reserved_0x1034[0xdc];
	u32 pll6_pat0;		/* 0x1110 pll6 (periph) pattern0 */
	u32 pll6_pat1;		/* 0x1114 pll6 (periph) pattern1 */
	u8 reserved_0x1118[0x8];
	u32 pll2_pat0;		/* 0x1120 pll2 (audio) pattern0 */
	u32 pll2_pat1;		/* 0x1120 pll2 (audio) pattern1 */
	u8 reserved_0x1128[0x8];
	u32 pll_audio1_pat0;	/* 0x1130 pll audio1 pattern0 */
	u32 pll_audio1_pat1;	/* 0x1130 pll audio1 pattern1 */
	u8 reserved_0x1138[0x1c8];
	u32 pll1_bias;		/* 0x1300 pll1 (cpux) bias */
	u8 reserved_0x1304[0xc];
	u32 pll6_bias;		/* 0x1310 pll6 (periph) bias */
	u8 reserved_0x1314[0xc];
	u32 pll2_bias;		/* 0x1320 pll6 (periph0) bias */
	u8 reserved_0x1324[0xc];
	u32 pll_audio1_bias;	/* 0x1330 pll audio1 bias */
	u8 reserved_0x1334[0xcc];
	u32 pll1_tun;		/* 0x1400 pll1 (cpux) tunning */
#endif
};
check_member(sunxi_prcm_reg, rtc_gate_reset, 0x20c);
#ifdef CONFIG_MACH_SUN50I_R329
check_member(sunxi_prcm_reg, pll1_tun, 0x1400);
#endif

#define PRCM_TWI_GATE		(1 << 0)
#define PRCM_TWI_RESET		(1 << 16)

#endif /* __ASSEMBLY__ */
#endif /* _PRCM_H */
