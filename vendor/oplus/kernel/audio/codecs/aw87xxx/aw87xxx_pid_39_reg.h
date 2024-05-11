/* SPDX-License-Identifier: GPL-2.0
 * aw87xxx_pid_39_reg.h
 *
 * Copyright (c) 2021 AWINIC Technology CO., LTD
 *
 * Author: Barry <zhaozhongbo@awinic.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __AW87XXX_PID_39_REG_H__
#define __AW87XXX_PID_39_REG_H__

#define AW87XXX_PID_39_REG_CHIPID		(0x00)
#define AW87XXX_PID_39_REG_SYSCTRL		(0x01)
#define AW87XXX_PID_39_REG_MODECTRL		(0x02)
#define AW87XXX_PID_39_REG_CPOVP		(0x03)
#define AW87XXX_PID_39_REG_CPP			(0x04)
#define AW87XXX_PID_39_REG_GAIN			(0x05)
#define AW87XXX_PID_39_REG_AGC3_PO		(0x06)
#define AW87XXX_PID_39_REG_AGC3			(0x07)
#define AW87XXX_PID_39_REG_AGC2_PO		(0x08)
#define AW87XXX_PID_39_REG_AGC2			(0x09)
#define AW87XXX_PID_39_REG_AGC1			(0x0A)
#define AW87XXX_PID_39_REG_DFT1			(0x62)
#define AW87XXX_PID_39_REG_DFT2			(0x63)
#define AW87XXX_PID_39_REG_ENCRY		(0x64)

#define AW87XXX_PID_39_MODECTRL_DEFAULT		(0xa0)

/********************************************
 * soft control info
 * If you need to update this file, add this information manually
 *******************************************/
unsigned char aw87xxx_pid_39_softrst_access[2] = {0x00, 0xaa};

/********************************************
 * Register Access
 *******************************************/
#define AW87XXX_PID_39_REG_MAX			(0x65)

#define REG_NONE_ACCESS		(0)
#define REG_RD_ACCESS		(1 << 0)
#define REG_WR_ACCESS		(1 << 1)

const unsigned char aw87xxx_pid_39_reg_access[AW87XXX_PID_39_REG_MAX] = {
	[AW87XXX_PID_39_REG_CHIPID]	= (REG_RD_ACCESS),
	[AW87XXX_PID_39_REG_SYSCTRL]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_MODECTRL]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_CPOVP]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_CPP]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_GAIN]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_AGC3_PO]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_AGC3]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_AGC2_PO]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_AGC2]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_AGC1]	= (REG_RD_ACCESS | REG_WR_ACCESS),
	[AW87XXX_PID_39_REG_DFT1]	= (REG_RD_ACCESS),
	[AW87XXX_PID_39_REG_DFT2]	= (REG_RD_ACCESS),
	[AW87XXX_PID_39_REG_ENCRY]	= (REG_RD_ACCESS),
};

/* RCV_MODE bit 3 (MODECTRL 0x02) */
#define AW87XXX_PID_39_REC_MODE_START_BIT	(3)
#define AW87XXX_PID_39_REC_MODE_BITS_LEN	(1)
#define AW87XXX_PID_39_REC_MODE_MASK	\
	(~(((1<<AW87XXX_PID_39_REC_MODE_BITS_LEN)-1) << AW87XXX_PID_39_REC_MODE_START_BIT))

#define AW87XXX_PID_39_REC_MODE_DISABLE	(0)
#define AW87XXX_PID_39_REC_MODE_DISABLE_VALUE	\
	(AW87XXX_PID_39_REC_MODE_DISABLE << AW87XXX_PID_39_REC_MODE_START_BIT)

#define AW87XXX_PID_39_REC_MODE_ENABLE	(1)
#define AW87XXX_PID_39_REC_MODE_ENABLE_VALUE	\
	(AW87XXX_PID_39_REC_MODE_ENABLE << AW87XXX_PID_39_REC_MODE_START_BIT)

#endif
