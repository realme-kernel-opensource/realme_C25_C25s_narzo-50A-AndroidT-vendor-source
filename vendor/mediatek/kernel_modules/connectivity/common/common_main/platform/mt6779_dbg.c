/*  SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#include "mtk_wcn_consys_hw.h"


int g_mapped_reg_table_sz_mt6779 = 11;
struct reg_map_addr g_mapped_reg_table_mt6779[] = {
	{ 0x18007000,	NULL,	0x140 },
	{ 0x180C1100,	NULL,	0x538 },
	{ 0x180B501C,	NULL,	0x20 },
	{ 0x180B2080,	NULL,	0x20 },
	{ 0x180C5048,	NULL,	0x4 },
	{ 0x10001220,	NULL,	0xC },
	{ 0x10006110,	NULL,	0x340 },
	{ 0x10000000,	NULL,	0x204 },
	{ 0x1020E02C,	NULL,	0x164 },
	{ 0x18830220,	NULL,	0x3C },
	{ 0x18003028,	NULL,	0x258 },
};

static struct consys_dump_item g_conn_debug_dump[] = {
	{ DUMP_ACT_READ,	0,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x4,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x8,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0xC,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x10,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x14,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x18,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x1C,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x100,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x108,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x10C,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x110,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x114,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x118,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x11C,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x120,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x124,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x128,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x12C,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x130,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x134,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x138,	0x0,	0x0},
	{ DUMP_ACT_READ,	0,	0x13C,	0x0,	0x0},
};

INT32 dump_conn_debug_dump_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_debug_dump",
			g_conn_debug_dump, ARRAY_SIZE(g_conn_debug_dump));
}

static struct consys_dump_item g_conn_mcu_debug_flag[] = {
	{ DUMP_ACT_WRITE,	0,	0x14,	0x4C,	0x7E},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x4525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x4545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x5525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x5545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x6525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x6545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x7525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x7545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
};

INT32 dump_conn_mcu_debug_flag_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_mcu_debug_flag",
			g_conn_mcu_debug_flag, ARRAY_SIZE(g_conn_mcu_debug_flag));
}

static struct consys_dump_item g_conn_mcu_apb0_bus[] = {
	{ DUMP_ACT_WRITE,	0,	0x40,	0x1565501,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x1585701,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x2565501,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x2585701,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x3565501,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x3585701,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x9565501,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x9585701,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
};

INT32 dump_conn_mcu_apb0_bus_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_mcu_apb0_bus",
			g_conn_mcu_apb0_bus, ARRAY_SIZE(g_conn_mcu_apb0_bus));
}

static struct consys_dump_item g_conn_mcu_apb1_bus[] = {
	{ DUMP_ACT_WRITE,	0,	0x40,	0x15A5901,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x15C5B01,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x25A5901,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x25C5B01,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x35A5901,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x35C5B01,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x95A5901,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x95C5B01,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
};

INT32 dump_conn_mcu_apb1_bus_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_mcu_apb1_bus",
			g_conn_mcu_apb1_bus, ARRAY_SIZE(g_conn_mcu_apb1_bus));
}

static struct consys_dump_item g_conn_bus_timeout[] = {
	{ DUMP_ACT_WRITE,	0,	0x40,	0x25525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x25545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x26525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x26545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x27525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x27545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x28525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x28545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x29525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x29545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x2A525101,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x40,	0x2A545301,	0x0},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
};

INT32 dump_conn_bus_timeout_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_bus_timeout",
			g_conn_bus_timeout, ARRAY_SIZE(g_conn_bus_timeout));
}

static struct consys_dump_item g_conn_mcu_pc_log[] = {
	{ DUMP_ACT_WRITE,	0,	0x14,	0x0,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x2,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x4,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x6,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x8,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0xA,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0xC,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0xE,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x10,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x12,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x14,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x16,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x18,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x1A,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x1C,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x1E,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x20,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x22,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x24,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x26,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x28,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x2A,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x2C,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x2E,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x30,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x32,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x34,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x36,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x38,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x3A,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x3C,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x3E,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x40,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x42,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x44,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x46,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x48,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x4A,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x4C,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x4E,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x50,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	0,	0x14,	0x7E,	0x7E},
	{ DUMP_ACT_READ,	0,	0x104,	0x0,	0x0},
};

INT32 dump_conn_mcu_pc_log_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_mcu_pc_log",
			g_conn_mcu_pc_log, ARRAY_SIZE(g_conn_mcu_pc_log));
}

static struct consys_dump_item g_conn_cfg_on_debug_signal[] = {
	{ DUMP_ACT_WRITE,	1,	0x220,	0x80000000,	0x80000000},
	{ DUMP_ACT_WRITE,	1,	0x220,	0x1,	0x7},
	{ DUMP_ACT_WRITE,	1,	0x228,	0x3020100,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x22C,	0x7060504,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x230,	0xB0A0908,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x234,	0xF0E0D0C,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x1,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x2,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x3,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x4,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x5,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x6,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x7,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x8,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x9,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xA,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xB,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xC,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xD,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xE,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0xF,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x10,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	1,	0x210,	0x11,	0x0},
	{ DUMP_ACT_READ,	1,	0x240,	0x0,	0x0},
};

INT32 dump_conn_cfg_on_debug_signal_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_cfg_on_debug_signal",
			g_conn_cfg_on_debug_signal, ARRAY_SIZE(g_conn_cfg_on_debug_signal));
}

static struct consys_dump_item g_conn_cfg_on_register[] = {
	{ DUMP_ACT_READ,	1,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x4,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x8,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0xC,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x14,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x30,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x100,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x104,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x110,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x500,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x504,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x508,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x50C,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x510,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x514,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x518,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x51C,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x528,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x52C,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x530,	0x0,	0x0},
	{ DUMP_ACT_READ,	1,	0x534,	0x0,	0x0},
};

INT32 dump_conn_cfg_on_register_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_cfg_on_register",
			g_conn_cfg_on_register, ARRAY_SIZE(g_conn_cfg_on_register));
}

static struct consys_dump_item g_conn_cmdbt_debug_signal[] = {
	{ DUMP_ACT_WRITE,	2,	0x1C,	0x2,	0x2},
	{ DUMP_ACT_WRITE,	2,	0x0,	0x3020100,	0x0},
	{ DUMP_ACT_WRITE,	2,	0x4,	0x7060504,	0x0},
	{ DUMP_ACT_WRITE,	2,	0x8,	0xB0A0908,	0x0},
	{ DUMP_ACT_WRITE,	2,	0xC,	0xF0E0D0C,	0x0},
	{ DUMP_ACT_WRITE,	2,	0x18,	0xF0E0D0C,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x30000,	0x30000},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x800C,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8483,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8281,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8887,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8685,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8C8B,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x8A89,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x100,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x302,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x807,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x605,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x40B,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0xA09,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x100F,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0xE0D,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1413,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1211,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1817,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1615,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1A19,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1E1D,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	3,	0x1C,	0x1C1B,	0xFFFF},
	{ DUMP_ACT_READ,	4,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	3,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	3,	0x1C,	0x0,	0x0},
};

INT32 dump_conn_cmdbt_debug_signal_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_cmdbt_debug_signal",
			g_conn_cmdbt_debug_signal, ARRAY_SIZE(g_conn_cmdbt_debug_signal));
}

static struct consys_dump_item g_conn_emi_detect[] = {
	{ DUMP_ACT_READ,	5,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	5,	0x4,	0x0,	0x0},
	{ DUMP_ACT_READ,	5,	0x8,	0x0,	0x0},
};

INT32 dump_conn_emi_detect_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_emi_detect",
			g_conn_emi_detect, ARRAY_SIZE(g_conn_emi_detect));
}

static struct consys_dump_item g_conn_slp_protect_debug[] = {
	{ DUMP_ACT_READ,	1,	0x44,	0x0,	0x0},
};

INT32 dump_conn_slp_protect_debug_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_slp_protect_debug",
			g_conn_slp_protect_debug, ARRAY_SIZE(g_conn_slp_protect_debug));
}

static struct consys_dump_item g_conn_spm_r13[] = {
	{ DUMP_ACT_READ,	6,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	6,	0x4,	0x0,	0x0},
};

INT32 dump_conn_spm_r13_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_spm_r13",
			g_conn_spm_r13, ARRAY_SIZE(g_conn_spm_r13));
}

static struct consys_dump_item g_conn_bus_timeout_debug[] = {
	{ DUMP_ACT_READ,	7,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	7,	0x200,	0x0,	0x0},
	{ DUMP_ACT_READ,	6,	0x2F8,	0x0,	0x0},
	{ DUMP_ACT_READ,	6,	0x2FC,	0x0,	0x0},
	{ DUMP_ACT_READ,	6,	0x33C,	0x0,	0x0},
	{ DUMP_ACT_READ,	8,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	8,	0x154,	0x0,	0x0},
	{ DUMP_ACT_READ,	8,	0x158,	0x0,	0x0},
	{ DUMP_ACT_READ,	8,	0x15C,	0x0,	0x0},
	{ DUMP_ACT_READ,	8,	0x160,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x0,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x4,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x8,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x30,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x34,	0x0,	0x0},
	{ DUMP_ACT_READ,	9,	0x38,	0x0,	0x0},
};

INT32 dump_conn_bus_timeout_debug_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_bus_timeout_debug",
			g_conn_bus_timeout_debug, ARRAY_SIZE(g_conn_bus_timeout_debug));
}

static struct consys_dump_item g_conn_ILM_corrupt_issue_debug[] = {
	{ DUMP_ACT_READ,	10,	0x1D8,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x1F8,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x218,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x238,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x248,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x1DC,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x1FC,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x21C,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x23C,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x24C,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x1E0,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x200,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x220,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x240,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x250,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x1E4,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x204,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x224,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x244,	0x0,	0x0},
	{ DUMP_ACT_READ,	10,	0x254,	0x0,	0x0},
	{ DUMP_ACT_WRITE,	10,	0x0,	0x5,	0x0},
	{ DUMP_ACT_READ,	0,	0x108,	0x0,	0x0},
};

INT32 dump_conn_ILM_corrupt_issue_debug_mt6779(const char *trg_str)
{
	return execute_dump_action(trg_str, "conn_ILM_corrupt_issue_debug",
			g_conn_ILM_corrupt_issue_debug, ARRAY_SIZE(g_conn_ILM_corrupt_issue_debug));
}

