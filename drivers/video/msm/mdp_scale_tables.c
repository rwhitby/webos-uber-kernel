/* drivers/video/msm_fb/mdp_scale_tables.c
 *
 * Copyright (C) 2007 QUALCOMM Incorporated
 * Copyright (C) 2007 Google Incorporated
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "mdp_scale_tables.h"
#include "mdp_hw.h"

struct mdp_table_entry mdp_upscale_table[] = {
	{ MSM_MDP_BASE + 0x5fffc, 0x0 },
	{ MSM_MDP_BASE + 0x50200, 0x7fc00000 },
	{ MSM_MDP_BASE + 0x5fffc, 0xff80000d },
	{ MSM_MDP_BASE + 0x50204, 0x7ec003f9 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfec0001c },
	{ MSM_MDP_BASE + 0x50208, 0x7d4003f3 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfe40002b },
	{ MSM_MDP_BASE + 0x5020c, 0x7b8003ed },
	{ MSM_MDP_BASE + 0x5fffc, 0xfd80003c },
	{ MSM_MDP_BASE + 0x50210, 0x794003e8 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfcc0004d },
	{ MSM_MDP_BASE + 0x50214, 0x76c003e4 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfc40005f },
	{ MSM_MDP_BASE + 0x50218, 0x73c003e0 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfb800071 },
	{ MSM_MDP_BASE + 0x5021c, 0x708003de },
	{ MSM_MDP_BASE + 0x5fffc, 0xfac00085 },
	{ MSM_MDP_BASE + 0x50220, 0x6d0003db },
	{ MSM_MDP_BASE + 0x5fffc, 0xfa000098 },
	{ MSM_MDP_BASE + 0x50224, 0x698003d9 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf98000ac },
	{ MSM_MDP_BASE + 0x50228, 0x654003d8 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf8c000c1 },
	{ MSM_MDP_BASE + 0x5022c, 0x610003d7 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf84000d5 },
	{ MSM_MDP_BASE + 0x50230, 0x5c8003d7 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf7c000e9 },
	{ MSM_MDP_BASE + 0x50234, 0x580003d7 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf74000fd },
	{ MSM_MDP_BASE + 0x50238, 0x534003d8 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf6c00112 },
	{ MSM_MDP_BASE + 0x5023c, 0x4e8003d8 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf6800126 },
	{ MSM_MDP_BASE + 0x50240, 0x494003da },
	{ MSM_MDP_BASE + 0x5fffc, 0xf600013a },
	{ MSM_MDP_BASE + 0x50244, 0x448003db },
	{ MSM_MDP_BASE + 0x5fffc, 0xf600014d },
	{ MSM_MDP_BASE + 0x50248, 0x3f4003dd },
	{ MSM_MDP_BASE + 0x5fffc, 0xf5c00160 },
	{ MSM_MDP_BASE + 0x5024c, 0x3a4003df },
	{ MSM_MDP_BASE + 0x5fffc, 0xf5c00172 },
	{ MSM_MDP_BASE + 0x50250, 0x354003e1 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf5c00184 },
	{ MSM_MDP_BASE + 0x50254, 0x304003e3 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf6000195 },
	{ MSM_MDP_BASE + 0x50258, 0x2b0003e6 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf64001a6 },
	{ MSM_MDP_BASE + 0x5025c, 0x260003e8 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf6c001b4 },
	{ MSM_MDP_BASE + 0x50260, 0x214003eb },
	{ MSM_MDP_BASE + 0x5fffc, 0xf78001c2 },
	{ MSM_MDP_BASE + 0x50264, 0x1c4003ee },
	{ MSM_MDP_BASE + 0x5fffc, 0xf80001cf },
	{ MSM_MDP_BASE + 0x50268, 0x17c003f1 },
	{ MSM_MDP_BASE + 0x5fffc, 0xf90001db },
	{ MSM_MDP_BASE + 0x5026c, 0x134003f3 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfa0001e5 },
	{ MSM_MDP_BASE + 0x50270, 0xf0003f6 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfb4001ee },
	{ MSM_MDP_BASE + 0x50274, 0xac003f9 },
	{ MSM_MDP_BASE + 0x5fffc, 0xfcc001f5 },
	{ MSM_MDP_BASE + 0x50278, 0x70003fb },
	{ MSM_MDP_BASE + 0x5fffc, 0xfe4001fb },
	{ MSM_MDP_BASE + 0x5027c, 0x34003fe },
};

static struct mdp_table_entry mdp_downscale_x_table_PT2TOPT4[] = {
	{ MSM_MDP_BASE + 0x5fffc, 0x740008c },
	{ MSM_MDP_BASE + 0x50280, 0x33800088 },
	{ MSM_MDP_BASE + 0x5fffc, 0x800008e },
	{ MSM_MDP_BASE + 0x50284, 0x33400084 },
	{ MSM_MDP_BASE + 0x5fffc, 0x8400092 },
	{ MSM_MDP_BASE + 0x50288, 0x33000080 },
	{ MSM_MDP_BASE + 0x5fffc, 0x9000094 },
	{ MSM_MDP_BASE + 0x5028c, 0x3300007b },
	{ MSM_MDP_BASE + 0x5fffc, 0x9c00098 },
	{ MSM_MDP_BASE + 0x50290, 0x32400077 },
	{ MSM_MDP_BASE + 0x5fffc, 0xa40009b },
	{ MSM_MDP_BASE + 0x50294, 0x32000073 },
	{ MSM_MDP_BASE + 0x5fffc, 0xb00009d },
	{ MSM_MDP_BASE + 0x50298,  0x31c0006f },
	{ MSM_MDP_BASE + 0x5fffc,  0xbc000a0 },
	{ MSM_MDP_BASE + 0x5029c,  0x3140006b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc8000a2 },
	{ MSM_MDP_BASE + 0x502a0,  0x31000067 },
	{ MSM_MDP_BASE + 0x5fffc,  0xd8000a5 },
	{ MSM_MDP_BASE + 0x502a4,  0x30800062 },
	{ MSM_MDP_BASE + 0x5fffc,  0xe4000a8 },
	{ MSM_MDP_BASE + 0x502a8,  0x2fc0005f },
	{ MSM_MDP_BASE + 0x5fffc,  0xec000aa },
	{ MSM_MDP_BASE + 0x502ac,  0x2fc0005b },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8000ad },
	{ MSM_MDP_BASE + 0x502b0,  0x2f400057 },
	{ MSM_MDP_BASE + 0x5fffc,  0x108000b0 },
	{ MSM_MDP_BASE + 0x502b4,  0x2e400054 },
	{ MSM_MDP_BASE + 0x5fffc,  0x114000b2 },
	{ MSM_MDP_BASE + 0x502b8,  0x2e000050 },
	{ MSM_MDP_BASE + 0x5fffc,  0x124000b4 },
	{ MSM_MDP_BASE + 0x502bc,  0x2d80004c },
	{ MSM_MDP_BASE + 0x5fffc,  0x130000b6 },
	{ MSM_MDP_BASE + 0x502c0,  0x2d000049 },
	{ MSM_MDP_BASE + 0x5fffc,  0x140000b8 },
	{ MSM_MDP_BASE + 0x502c4,  0x2c800045 },
	{ MSM_MDP_BASE + 0x5fffc,  0x150000b9 },
	{ MSM_MDP_BASE + 0x502c8,  0x2c000042 },
	{ MSM_MDP_BASE + 0x5fffc,  0x15c000bd },
	{ MSM_MDP_BASE + 0x502cc,  0x2b40003e },
	{ MSM_MDP_BASE + 0x5fffc,  0x16c000bf },
	{ MSM_MDP_BASE + 0x502d0,  0x2a80003b },
	{ MSM_MDP_BASE + 0x5fffc,  0x17c000bf },
	{ MSM_MDP_BASE + 0x502d4,  0x2a000039 },
	{ MSM_MDP_BASE + 0x5fffc,  0x188000c2 },
	{ MSM_MDP_BASE + 0x502d8,  0x29400036 },
	{ MSM_MDP_BASE + 0x5fffc,  0x19c000c4 },
	{ MSM_MDP_BASE + 0x502dc,  0x28800032 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ac000c5 },
	{ MSM_MDP_BASE + 0x502e0,  0x2800002f },
	{ MSM_MDP_BASE + 0x5fffc,  0x1bc000c7 },
	{ MSM_MDP_BASE + 0x502e4,  0x2740002c },
	{ MSM_MDP_BASE + 0x5fffc,  0x1cc000c8 },
	{ MSM_MDP_BASE + 0x502e8,  0x26c00029 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1dc000c9 },
	{ MSM_MDP_BASE + 0x502ec,  0x26000027 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ec000cc },
	{ MSM_MDP_BASE + 0x502f0,  0x25000024 },
	{ MSM_MDP_BASE + 0x5fffc,  0x200000cc },
	{ MSM_MDP_BASE + 0x502f4,  0x24800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x210000cd },
	{ MSM_MDP_BASE + 0x502f8,  0x23800020 },
	{ MSM_MDP_BASE + 0x5fffc,  0x220000ce },
	{ MSM_MDP_BASE + 0x502fc,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_x_table_PT4TOPT6[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0x740008c },
	{ MSM_MDP_BASE + 0x50280,  0x33800088 },
	{ MSM_MDP_BASE + 0x5fffc,  0x800008e },
	{ MSM_MDP_BASE + 0x50284,  0x33400084 },
	{ MSM_MDP_BASE + 0x5fffc,  0x8400092 },
	{ MSM_MDP_BASE + 0x50288,  0x33000080 },
	{ MSM_MDP_BASE + 0x5fffc,  0x9000094 },
	{ MSM_MDP_BASE + 0x5028c,  0x3300007b },
	{ MSM_MDP_BASE + 0x5fffc,  0x9c00098 },
	{ MSM_MDP_BASE + 0x50290,  0x32400077 },
	{ MSM_MDP_BASE + 0x5fffc,  0xa40009b },
	{ MSM_MDP_BASE + 0x50294,  0x32000073 },
	{ MSM_MDP_BASE + 0x5fffc,  0xb00009d },
	{ MSM_MDP_BASE + 0x50298,  0x31c0006f },
	{ MSM_MDP_BASE + 0x5fffc,  0xbc000a0 },
	{ MSM_MDP_BASE + 0x5029c,  0x3140006b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc8000a2 },
	{ MSM_MDP_BASE + 0x502a0,  0x31000067 },
	{ MSM_MDP_BASE + 0x5fffc,  0xd8000a5 },
	{ MSM_MDP_BASE + 0x502a4,  0x30800062 },
	{ MSM_MDP_BASE + 0x5fffc,  0xe4000a8 },
	{ MSM_MDP_BASE + 0x502a8,  0x2fc0005f },
	{ MSM_MDP_BASE + 0x5fffc,  0xec000aa },
	{ MSM_MDP_BASE + 0x502ac,  0x2fc0005b },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8000ad },
	{ MSM_MDP_BASE + 0x502b0,  0x2f400057 },
	{ MSM_MDP_BASE + 0x5fffc,  0x108000b0 },
	{ MSM_MDP_BASE + 0x502b4,  0x2e400054 },
	{ MSM_MDP_BASE + 0x5fffc,  0x114000b2 },
	{ MSM_MDP_BASE + 0x502b8,  0x2e000050 },
	{ MSM_MDP_BASE + 0x5fffc,  0x124000b4 },
	{ MSM_MDP_BASE + 0x502bc,  0x2d80004c },
	{ MSM_MDP_BASE + 0x5fffc,  0x130000b6 },
	{ MSM_MDP_BASE + 0x502c0,  0x2d000049 },
	{ MSM_MDP_BASE + 0x5fffc,  0x140000b8 },
	{ MSM_MDP_BASE + 0x502c4,  0x2c800045 },
	{ MSM_MDP_BASE + 0x5fffc,  0x150000b9 },
	{ MSM_MDP_BASE + 0x502c8,  0x2c000042 },
	{ MSM_MDP_BASE + 0x5fffc,  0x15c000bd },
	{ MSM_MDP_BASE + 0x502cc,  0x2b40003e },
	{ MSM_MDP_BASE + 0x5fffc,  0x16c000bf },
	{ MSM_MDP_BASE + 0x502d0,  0x2a80003b },
	{ MSM_MDP_BASE + 0x5fffc,  0x17c000bf },
	{ MSM_MDP_BASE + 0x502d4,  0x2a000039 },
	{ MSM_MDP_BASE + 0x5fffc,  0x188000c2 },
	{ MSM_MDP_BASE + 0x502d8,  0x29400036 },
	{ MSM_MDP_BASE + 0x5fffc,  0x19c000c4 },
	{ MSM_MDP_BASE + 0x502dc,  0x28800032 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ac000c5 },
	{ MSM_MDP_BASE + 0x502e0,  0x2800002f },
	{ MSM_MDP_BASE + 0x5fffc,  0x1bc000c7 },
	{ MSM_MDP_BASE + 0x502e4,  0x2740002c },
	{ MSM_MDP_BASE + 0x5fffc,  0x1cc000c8 },
	{ MSM_MDP_BASE + 0x502e8,  0x26c00029 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1dc000c9 },
	{ MSM_MDP_BASE + 0x502ec,  0x26000027 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ec000cc },
	{ MSM_MDP_BASE + 0x502f0,  0x25000024 },
	{ MSM_MDP_BASE + 0x5fffc,  0x200000cc },
	{ MSM_MDP_BASE + 0x502f4,  0x24800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x210000cd },
	{ MSM_MDP_BASE + 0x502f8,  0x23800020 },
	{ MSM_MDP_BASE + 0x5fffc,  0x220000ce },
	{ MSM_MDP_BASE + 0x502fc,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_x_table_PT6TOPT8[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000070 },
	{ MSM_MDP_BASE + 0x50280,  0x4bc00068 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000078 },
	{ MSM_MDP_BASE + 0x50284,  0x4bc00060 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000080 },
	{ MSM_MDP_BASE + 0x50288,  0x4b800059 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000089 },
	{ MSM_MDP_BASE + 0x5028c,  0x4b000052 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe400091 },
	{ MSM_MDP_BASE + 0x50290,  0x4a80004b },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe40009a },
	{ MSM_MDP_BASE + 0x50294,  0x4a000044 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe8000a3 },
	{ MSM_MDP_BASE + 0x50298,  0x4940003d },
	{ MSM_MDP_BASE + 0x5fffc,  0xfec000ac },
	{ MSM_MDP_BASE + 0x5029c,  0x48400037 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff0000b4 },
	{ MSM_MDP_BASE + 0x502a0,  0x47800031 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff8000bd },
	{ MSM_MDP_BASE + 0x502a4,  0x4640002b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc5 },
	{ MSM_MDP_BASE + 0x502a8,  0x45000026 },
	{ MSM_MDP_BASE + 0x5fffc,  0x8000ce },
	{ MSM_MDP_BASE + 0x502ac,  0x43800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x10000d6 },
	{ MSM_MDP_BASE + 0x502b0,  0x4240001c },
	{ MSM_MDP_BASE + 0x5fffc,  0x18000df },
	{ MSM_MDP_BASE + 0x502b4,  0x40800018 },
	{ MSM_MDP_BASE + 0x5fffc,  0x24000e6 },
	{ MSM_MDP_BASE + 0x502b8,  0x3f000014 },
	{ MSM_MDP_BASE + 0x5fffc,  0x30000ee },
	{ MSM_MDP_BASE + 0x502bc,  0x3d400010 },
	{ MSM_MDP_BASE + 0x5fffc,  0x40000f5 },
	{ MSM_MDP_BASE + 0x502c0,  0x3b80000c },
	{ MSM_MDP_BASE + 0x5fffc,  0x50000fc },
	{ MSM_MDP_BASE + 0x502c4,  0x39800009 },
	{ MSM_MDP_BASE + 0x5fffc,  0x6000102 },
	{ MSM_MDP_BASE + 0x502c8,  0x37c00006 },
	{ MSM_MDP_BASE + 0x5fffc,  0x7000109 },
	{ MSM_MDP_BASE + 0x502cc,  0x35800004 },
	{ MSM_MDP_BASE + 0x5fffc,  0x840010e },
	{ MSM_MDP_BASE + 0x502d0,  0x33800002 },
	{ MSM_MDP_BASE + 0x5fffc,  0x9800114 },
	{ MSM_MDP_BASE + 0x502d4,  0x31400000 },
	{ MSM_MDP_BASE + 0x5fffc,  0xac00119 },
	{ MSM_MDP_BASE + 0x502d8,  0x2f4003fe },
	{ MSM_MDP_BASE + 0x5fffc,  0xc40011e },
	{ MSM_MDP_BASE + 0x502dc,  0x2d0003fc },
	{ MSM_MDP_BASE + 0x5fffc,  0xdc00121 },
	{ MSM_MDP_BASE + 0x502e0,  0x2b0003fb },
	{ MSM_MDP_BASE + 0x5fffc,  0xf400125 },
	{ MSM_MDP_BASE + 0x502e4,  0x28c003fa },
	{ MSM_MDP_BASE + 0x5fffc,  0x11000128 },
	{ MSM_MDP_BASE + 0x502e8,  0x268003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0x12c0012a },
	{ MSM_MDP_BASE + 0x502ec,  0x244003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1480012c },
	{ MSM_MDP_BASE + 0x502f0,  0x224003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1640012e },
	{ MSM_MDP_BASE + 0x502f4,  0x200003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1800012f },
	{ MSM_MDP_BASE + 0x502f8,  0x1e0003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1a00012f },
	{ MSM_MDP_BASE + 0x502fc,  0x1c0003f8 },
};

static struct mdp_table_entry mdp_downscale_x_table_PT8TO1[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0x0 },
	{ MSM_MDP_BASE + 0x50280,  0x7fc00000 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff80000d },
	{ MSM_MDP_BASE + 0x50284,  0x7ec003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfec0001c },
	{ MSM_MDP_BASE + 0x50288,  0x7d4003f3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe40002b },
	{ MSM_MDP_BASE + 0x5028c,  0x7b8003ed },
	{ MSM_MDP_BASE + 0x5fffc,  0xfd80003c },
	{ MSM_MDP_BASE + 0x50290,  0x794003e8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfcc0004d },
	{ MSM_MDP_BASE + 0x50294,  0x76c003e4 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfc40005f },
	{ MSM_MDP_BASE + 0x50298,  0x73c003e0 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfb800071 },
	{ MSM_MDP_BASE + 0x5029c,  0x708003de },
	{ MSM_MDP_BASE + 0x5fffc,  0xfac00085 },
	{ MSM_MDP_BASE + 0x502a0,  0x6d0003db },
	{ MSM_MDP_BASE + 0x5fffc,  0xfa000098 },
	{ MSM_MDP_BASE + 0x502a4,  0x698003d9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf98000ac },
	{ MSM_MDP_BASE + 0x502a8,  0x654003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8c000c1 },
	{ MSM_MDP_BASE + 0x502ac,  0x610003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf84000d5 },
	{ MSM_MDP_BASE + 0x502b0,  0x5c8003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf7c000e9 },
	{ MSM_MDP_BASE + 0x502b4,  0x580003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf74000fd },
	{ MSM_MDP_BASE + 0x502b8,  0x534003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6c00112 },
	{ MSM_MDP_BASE + 0x502bc,  0x4e8003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6800126 },
	{ MSM_MDP_BASE + 0x502c0,  0x494003da },
	{ MSM_MDP_BASE + 0x5fffc,  0xf600013a },
	{ MSM_MDP_BASE + 0x502c4,  0x448003db },
	{ MSM_MDP_BASE + 0x5fffc,  0xf600014d },
	{ MSM_MDP_BASE + 0x502c8,  0x3f4003dd },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00160 },
	{ MSM_MDP_BASE + 0x502cc,  0x3a4003df },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00172 },
	{ MSM_MDP_BASE + 0x502d0,  0x354003e1 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00184 },
	{ MSM_MDP_BASE + 0x502d4,  0x304003e3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6000195 },
	{ MSM_MDP_BASE + 0x502d8,  0x2b0003e6 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf64001a6 },
	{ MSM_MDP_BASE + 0x502dc,  0x260003e8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6c001b4 },
	{ MSM_MDP_BASE + 0x502e0,  0x214003eb },
	{ MSM_MDP_BASE + 0x5fffc,  0xf78001c2 },
	{ MSM_MDP_BASE + 0x502e4,  0x1c4003ee },
	{ MSM_MDP_BASE + 0x5fffc,  0xf80001cf },
	{ MSM_MDP_BASE + 0x502e8,  0x17c003f1 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf90001db },
	{ MSM_MDP_BASE + 0x502ec,  0x134003f3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfa0001e5 },
	{ MSM_MDP_BASE + 0x502f0,  0xf0003f6 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfb4001ee },
	{ MSM_MDP_BASE + 0x502f4,  0xac003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfcc001f5 },
	{ MSM_MDP_BASE + 0x502f8,  0x70003fb },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe4001fb },
	{ MSM_MDP_BASE + 0x502fc,  0x34003fe },
};

struct mdp_table_entry* mdp_downscale_x_table[MDP_DOWNSCALE_MAX] = {
	[ MDP_DOWNSCALE_PT2TOPT4] = mdp_downscale_x_table_PT2TOPT4,
	[ MDP_DOWNSCALE_PT4TOPT6] = mdp_downscale_x_table_PT4TOPT6,
	[ MDP_DOWNSCALE_PT6TOPT8] = mdp_downscale_x_table_PT6TOPT8,
	[ MDP_DOWNSCALE_PT8TO1]  = mdp_downscale_x_table_PT8TO1,
};

static struct mdp_table_entry mdp_downscale_y_table_PT2TOPT4[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0x740008c },
	{ MSM_MDP_BASE + 0x50300,  0x33800088 },
	{ MSM_MDP_BASE + 0x5fffc,  0x800008e },
	{ MSM_MDP_BASE + 0x50304,  0x33400084 },
	{ MSM_MDP_BASE + 0x5fffc,  0x8400092 },
	{ MSM_MDP_BASE + 0x50308,  0x33000080 },
	{ MSM_MDP_BASE + 0x5fffc,  0x9000094 },
	{ MSM_MDP_BASE + 0x5030c,  0x3300007b },
	{ MSM_MDP_BASE + 0x5fffc,  0x9c00098 },
	{ MSM_MDP_BASE + 0x50310,  0x32400077 },
	{ MSM_MDP_BASE + 0x5fffc,  0xa40009b },
	{ MSM_MDP_BASE + 0x50314,  0x32000073 },
	{ MSM_MDP_BASE + 0x5fffc,  0xb00009d },
	{ MSM_MDP_BASE + 0x50318,  0x31c0006f },
	{ MSM_MDP_BASE + 0x5fffc,  0xbc000a0 },
	{ MSM_MDP_BASE + 0x5031c,  0x3140006b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc8000a2 },
	{ MSM_MDP_BASE + 0x50320,  0x31000067 },
	{ MSM_MDP_BASE + 0x5fffc,  0xd8000a5 },
	{ MSM_MDP_BASE + 0x50324,  0x30800062 },
	{ MSM_MDP_BASE + 0x5fffc,  0xe4000a8 },
	{ MSM_MDP_BASE + 0x50328,  0x2fc0005f },
	{ MSM_MDP_BASE + 0x5fffc,  0xec000aa },
	{ MSM_MDP_BASE + 0x5032c,  0x2fc0005b },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8000ad },
	{ MSM_MDP_BASE + 0x50330,  0x2f400057 },
	{ MSM_MDP_BASE + 0x5fffc,  0x108000b0 },
	{ MSM_MDP_BASE + 0x50334,  0x2e400054 },
	{ MSM_MDP_BASE + 0x5fffc,  0x114000b2 },
	{ MSM_MDP_BASE + 0x50338,  0x2e000050 },
	{ MSM_MDP_BASE + 0x5fffc,  0x124000b4 },
	{ MSM_MDP_BASE + 0x5033c,  0x2d80004c },
	{ MSM_MDP_BASE + 0x5fffc,  0x130000b6 },
	{ MSM_MDP_BASE + 0x50340,  0x2d000049 },
	{ MSM_MDP_BASE + 0x5fffc,  0x140000b8 },
	{ MSM_MDP_BASE + 0x50344,  0x2c800045 },
	{ MSM_MDP_BASE + 0x5fffc,  0x150000b9 },
	{ MSM_MDP_BASE + 0x50348,  0x2c000042 },
	{ MSM_MDP_BASE + 0x5fffc,  0x15c000bd },
	{ MSM_MDP_BASE + 0x5034c,  0x2b40003e },
	{ MSM_MDP_BASE + 0x5fffc,  0x16c000bf },
	{ MSM_MDP_BASE + 0x50350,  0x2a80003b },
	{ MSM_MDP_BASE + 0x5fffc,  0x17c000bf },
	{ MSM_MDP_BASE + 0x50354,  0x2a000039 },
	{ MSM_MDP_BASE + 0x5fffc,  0x188000c2 },
	{ MSM_MDP_BASE + 0x50358,  0x29400036 },
	{ MSM_MDP_BASE + 0x5fffc,  0x19c000c4 },
	{ MSM_MDP_BASE + 0x5035c,  0x28800032 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ac000c5 },
	{ MSM_MDP_BASE + 0x50360,  0x2800002f },
	{ MSM_MDP_BASE + 0x5fffc,  0x1bc000c7 },
	{ MSM_MDP_BASE + 0x50364,  0x2740002c },
	{ MSM_MDP_BASE + 0x5fffc,  0x1cc000c8 },
	{ MSM_MDP_BASE + 0x50368,  0x26c00029 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1dc000c9 },
	{ MSM_MDP_BASE + 0x5036c,  0x26000027 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ec000cc },
	{ MSM_MDP_BASE + 0x50370,  0x25000024 },
	{ MSM_MDP_BASE + 0x5fffc,  0x200000cc },
	{ MSM_MDP_BASE + 0x50374,  0x24800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x210000cd },
	{ MSM_MDP_BASE + 0x50378,  0x23800020 },
	{ MSM_MDP_BASE + 0x5fffc,  0x220000ce },
	{ MSM_MDP_BASE + 0x5037c,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_y_table_PT4TOPT6[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0x740008c },
	{ MSM_MDP_BASE + 0x50300,  0x33800088 },
	{ MSM_MDP_BASE + 0x5fffc,  0x800008e },
	{ MSM_MDP_BASE + 0x50304,  0x33400084 },
	{ MSM_MDP_BASE + 0x5fffc,  0x8400092 },
	{ MSM_MDP_BASE + 0x50308,  0x33000080 },
	{ MSM_MDP_BASE + 0x5fffc,  0x9000094 },
	{ MSM_MDP_BASE + 0x5030c,  0x3300007b },
	{ MSM_MDP_BASE + 0x5fffc,  0x9c00098 },
	{ MSM_MDP_BASE + 0x50310,  0x32400077 },
	{ MSM_MDP_BASE + 0x5fffc,  0xa40009b },
	{ MSM_MDP_BASE + 0x50314,  0x32000073 },
	{ MSM_MDP_BASE + 0x5fffc,  0xb00009d },
	{ MSM_MDP_BASE + 0x50318,  0x31c0006f },
	{ MSM_MDP_BASE + 0x5fffc,  0xbc000a0 },
	{ MSM_MDP_BASE + 0x5031c,  0x3140006b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc8000a2 },
	{ MSM_MDP_BASE + 0x50320,  0x31000067 },
	{ MSM_MDP_BASE + 0x5fffc,  0xd8000a5 },
	{ MSM_MDP_BASE + 0x50324,  0x30800062 },
	{ MSM_MDP_BASE + 0x5fffc,  0xe4000a8 },
	{ MSM_MDP_BASE + 0x50328,  0x2fc0005f },
	{ MSM_MDP_BASE + 0x5fffc,  0xec000aa },
	{ MSM_MDP_BASE + 0x5032c,  0x2fc0005b },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8000ad },
	{ MSM_MDP_BASE + 0x50330,  0x2f400057 },
	{ MSM_MDP_BASE + 0x5fffc,  0x108000b0 },
	{ MSM_MDP_BASE + 0x50334,  0x2e400054 },
	{ MSM_MDP_BASE + 0x5fffc,  0x114000b2 },
	{ MSM_MDP_BASE + 0x50338,  0x2e000050 },
	{ MSM_MDP_BASE + 0x5fffc,  0x124000b4 },
	{ MSM_MDP_BASE + 0x5033c,  0x2d80004c },
	{ MSM_MDP_BASE + 0x5fffc,  0x130000b6 },
	{ MSM_MDP_BASE + 0x50340,  0x2d000049 },
	{ MSM_MDP_BASE + 0x5fffc,  0x140000b8 },
	{ MSM_MDP_BASE + 0x50344,  0x2c800045 },
	{ MSM_MDP_BASE + 0x5fffc,  0x150000b9 },
	{ MSM_MDP_BASE + 0x50348,  0x2c000042 },
	{ MSM_MDP_BASE + 0x5fffc,  0x15c000bd },
	{ MSM_MDP_BASE + 0x5034c,  0x2b40003e },
	{ MSM_MDP_BASE + 0x5fffc,  0x16c000bf },
	{ MSM_MDP_BASE + 0x50350,  0x2a80003b },
	{ MSM_MDP_BASE + 0x5fffc,  0x17c000bf },
	{ MSM_MDP_BASE + 0x50354,  0x2a000039 },
	{ MSM_MDP_BASE + 0x5fffc,  0x188000c2 },
	{ MSM_MDP_BASE + 0x50358,  0x29400036 },
	{ MSM_MDP_BASE + 0x5fffc,  0x19c000c4 },
	{ MSM_MDP_BASE + 0x5035c,  0x28800032 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ac000c5 },
	{ MSM_MDP_BASE + 0x50360,  0x2800002f },
	{ MSM_MDP_BASE + 0x5fffc,  0x1bc000c7 },
	{ MSM_MDP_BASE + 0x50364,  0x2740002c },
	{ MSM_MDP_BASE + 0x5fffc,  0x1cc000c8 },
	{ MSM_MDP_BASE + 0x50368,  0x26c00029 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1dc000c9 },
	{ MSM_MDP_BASE + 0x5036c,  0x26000027 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1ec000cc },
	{ MSM_MDP_BASE + 0x50370,  0x25000024 },
	{ MSM_MDP_BASE + 0x5fffc,  0x200000cc },
	{ MSM_MDP_BASE + 0x50374,  0x24800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x210000cd },
	{ MSM_MDP_BASE + 0x50378,  0x23800020 },
	{ MSM_MDP_BASE + 0x5fffc,  0x220000ce },
	{ MSM_MDP_BASE + 0x5037c,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_y_table_PT6TOPT8[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000070 },
	{ MSM_MDP_BASE + 0x50300,  0x4bc00068 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000078 },
	{ MSM_MDP_BASE + 0x50304,  0x4bc00060 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000080 },
	{ MSM_MDP_BASE + 0x50308,  0x4b800059 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe000089 },
	{ MSM_MDP_BASE + 0x5030c,  0x4b000052 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe400091 },
	{ MSM_MDP_BASE + 0x50310,  0x4a80004b },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe40009a },
	{ MSM_MDP_BASE + 0x50314,  0x4a000044 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe8000a3 },
	{ MSM_MDP_BASE + 0x50318,  0x4940003d },
	{ MSM_MDP_BASE + 0x5fffc,  0xfec000ac },
	{ MSM_MDP_BASE + 0x5031c,  0x48400037 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff0000b4 },
	{ MSM_MDP_BASE + 0x50320,  0x47800031 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff8000bd },
	{ MSM_MDP_BASE + 0x50324,  0x4640002b },
	{ MSM_MDP_BASE + 0x5fffc,  0xc5 },
	{ MSM_MDP_BASE + 0x50328,  0x45000026 },
	{ MSM_MDP_BASE + 0x5fffc,  0x8000ce },
	{ MSM_MDP_BASE + 0x5032c,  0x43800021 },
	{ MSM_MDP_BASE + 0x5fffc,  0x10000d6 },
	{ MSM_MDP_BASE + 0x50330,  0x4240001c },
	{ MSM_MDP_BASE + 0x5fffc,  0x18000df },
	{ MSM_MDP_BASE + 0x50334,  0x40800018 },
	{ MSM_MDP_BASE + 0x5fffc,  0x24000e6 },
	{ MSM_MDP_BASE + 0x50338,  0x3f000014 },
	{ MSM_MDP_BASE + 0x5fffc,  0x30000ee },
	{ MSM_MDP_BASE + 0x5033c,  0x3d400010 },
	{ MSM_MDP_BASE + 0x5fffc,  0x40000f5 },
	{ MSM_MDP_BASE + 0x50340,  0x3b80000c },
	{ MSM_MDP_BASE + 0x5fffc,  0x50000fc },
	{ MSM_MDP_BASE + 0x50344,  0x39800009 },
	{ MSM_MDP_BASE + 0x5fffc,  0x6000102 },
	{ MSM_MDP_BASE + 0x50348,  0x37c00006 },
	{ MSM_MDP_BASE + 0x5fffc,  0x7000109 },
	{ MSM_MDP_BASE + 0x5034c,  0x35800004 },
	{ MSM_MDP_BASE + 0x5fffc,  0x840010e },
	{ MSM_MDP_BASE + 0x50350,  0x33800002 },
	{ MSM_MDP_BASE + 0x5fffc,  0x9800114 },
	{ MSM_MDP_BASE + 0x50354,  0x31400000 },
	{ MSM_MDP_BASE + 0x5fffc,  0xac00119 },
	{ MSM_MDP_BASE + 0x50358,  0x2f4003fe },
	{ MSM_MDP_BASE + 0x5fffc,  0xc40011e },
	{ MSM_MDP_BASE + 0x5035c,  0x2d0003fc },
	{ MSM_MDP_BASE + 0x5fffc,  0xdc00121 },
	{ MSM_MDP_BASE + 0x50360,  0x2b0003fb },
	{ MSM_MDP_BASE + 0x5fffc,  0xf400125 },
	{ MSM_MDP_BASE + 0x50364,  0x28c003fa },
	{ MSM_MDP_BASE + 0x5fffc,  0x11000128 },
	{ MSM_MDP_BASE + 0x50368,  0x268003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0x12c0012a },
	{ MSM_MDP_BASE + 0x5036c,  0x244003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1480012c },
	{ MSM_MDP_BASE + 0x50370,  0x224003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1640012e },
	{ MSM_MDP_BASE + 0x50374,  0x200003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1800012f },
	{ MSM_MDP_BASE + 0x50378,  0x1e0003f8 },
	{ MSM_MDP_BASE + 0x5fffc,  0x1a00012f },
	{ MSM_MDP_BASE + 0x5037c,  0x1c0003f8 },
};

static struct mdp_table_entry mdp_downscale_y_table_PT8TO1[] = {
	{ MSM_MDP_BASE + 0x5fffc,  0x0 },
	{ MSM_MDP_BASE + 0x50300,  0x7fc00000 },
	{ MSM_MDP_BASE + 0x5fffc,  0xff80000d },
	{ MSM_MDP_BASE + 0x50304,  0x7ec003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfec0001c },
	{ MSM_MDP_BASE + 0x50308,  0x7d4003f3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe40002b },
	{ MSM_MDP_BASE + 0x5030c,  0x7b8003ed },
	{ MSM_MDP_BASE + 0x5fffc,  0xfd80003c },
	{ MSM_MDP_BASE + 0x50310,  0x794003e8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfcc0004d },
	{ MSM_MDP_BASE + 0x50314,  0x76c003e4 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfc40005f },
	{ MSM_MDP_BASE + 0x50318,  0x73c003e0 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfb800071 },
	{ MSM_MDP_BASE + 0x5031c,  0x708003de },
	{ MSM_MDP_BASE + 0x5fffc,  0xfac00085 },
	{ MSM_MDP_BASE + 0x50320,  0x6d0003db },
	{ MSM_MDP_BASE + 0x5fffc,  0xfa000098 },
	{ MSM_MDP_BASE + 0x50324,  0x698003d9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf98000ac },
	{ MSM_MDP_BASE + 0x50328,  0x654003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf8c000c1 },
	{ MSM_MDP_BASE + 0x5032c,  0x610003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf84000d5 },
	{ MSM_MDP_BASE + 0x50330,  0x5c8003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf7c000e9 },
	{ MSM_MDP_BASE + 0x50334,  0x580003d7 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf74000fd },
	{ MSM_MDP_BASE + 0x50338,  0x534003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6c00112 },
	{ MSM_MDP_BASE + 0x5033c,  0x4e8003d8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6800126 },
	{ MSM_MDP_BASE + 0x50340,  0x494003da },
	{ MSM_MDP_BASE + 0x5fffc,  0xf600013a },
	{ MSM_MDP_BASE + 0x50344,  0x448003db },
	{ MSM_MDP_BASE + 0x5fffc,  0xf600014d },
	{ MSM_MDP_BASE + 0x50348,  0x3f4003dd },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00160 },
	{ MSM_MDP_BASE + 0x5034c,  0x3a4003df },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00172 },
	{ MSM_MDP_BASE + 0x50350,  0x354003e1 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf5c00184 },
	{ MSM_MDP_BASE + 0x50354,  0x304003e3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6000195 },
	{ MSM_MDP_BASE + 0x50358,  0x2b0003e6 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf64001a6 },
	{ MSM_MDP_BASE + 0x5035c,  0x260003e8 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf6c001b4 },
	{ MSM_MDP_BASE + 0x50360,  0x214003eb },
	{ MSM_MDP_BASE + 0x5fffc,  0xf78001c2 },
	{ MSM_MDP_BASE + 0x50364,  0x1c4003ee },
	{ MSM_MDP_BASE + 0x5fffc,  0xf80001cf },
	{ MSM_MDP_BASE + 0x50368,  0x17c003f1 },
	{ MSM_MDP_BASE + 0x5fffc,  0xf90001db },
	{ MSM_MDP_BASE + 0x5036c,  0x134003f3 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfa0001e5 },
	{ MSM_MDP_BASE + 0x50370,  0xf0003f6 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfb4001ee },
	{ MSM_MDP_BASE + 0x50374,  0xac003f9 },
	{ MSM_MDP_BASE + 0x5fffc,  0xfcc001f5 },
	{ MSM_MDP_BASE + 0x50378,  0x70003fb },
	{ MSM_MDP_BASE + 0x5fffc,  0xfe4001fb },
	{ MSM_MDP_BASE + 0x5037c,  0x34003fe },
};

struct mdp_table_entry *mdp_downscale_y_table[MDP_DOWNSCALE_MAX] = {
	[ MDP_DOWNSCALE_PT2TOPT4] = mdp_downscale_y_table_PT2TOPT4,
	[ MDP_DOWNSCALE_PT4TOPT6] = mdp_downscale_y_table_PT4TOPT6,
	[ MDP_DOWNSCALE_PT6TOPT8] = mdp_downscale_y_table_PT6TOPT8,
	[ MDP_DOWNSCALE_PT8TO1]  = mdp_downscale_y_table_PT8TO1,
};
