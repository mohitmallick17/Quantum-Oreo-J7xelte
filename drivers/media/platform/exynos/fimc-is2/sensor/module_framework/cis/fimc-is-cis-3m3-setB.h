/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
/* S5K3M3SX_EVT0.1_Ver_0.5_20170216.xlsx */
#ifndef FIMC_IS_CIS_3M3_SET_B_H
#define FIMC_IS_CIS_3M3_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3m3.h"

const u32 sensor_3m3_setfile_B_initial_reset[] = {
	0xFCFC, 0x4000, 0x2,
	0x6010, 0x0001, 0x2,
	0xFFFF, 0x0003, 0x2, /* 3ms delay is needed after sw reset */

	/* Open clock */
	0xFCFC, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
};

u16 sensor_3m3_setfile_B_initial_burst[] = {
	0x0000,
};

const u32 sensor_3m3_setfile_B_initial_other[] = {
	0x0300, 0x0004, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0004, 0x02,
	0x3644, 0x0060, 0x02,
	0x0216, 0x0000, 0x02,
	0xF496, 0x0048, 0x02,
	0x1118, 0x43C8, 0x02,
	0x1124, 0x43C8, 0x02,
	0x3058, 0x0000, 0x02,
	0xB0CA, 0x4800, 0x02,
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_B_4144x3106_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x1030, 0x02,
	0x034E, 0x0C22, 0x02,
	0x0340, 0x0D2F, 0x02,
	0x0342, 0x1268, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x002F, 0x02,
	0xF494, 0x0030, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0D27, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	//0x0100, 0x0100,	0x02, /* Stream on */
};

/* 16:9, 16x10 margin */
const u32 sensor_3m3_setfile_B_4144x2332_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0190, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0AAF, 0x02,
	0x034C, 0x1030, 0x02,
	0x034E, 0x091C, 0x02,
	0x0340, 0x0D2F, 0x02,
	0x0342, 0x1268, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x002F, 0x02,
	0xF494, 0x0030, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0D27, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	//0x0100, 0x0100,	0x02, /* Stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_B_2072x1552_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x069E, 0x02,
	0x0342, 0x24C0, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x006F, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	//0x0100, 0x0100,	0x02, /* Stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_B_2072x1552_15fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x0650, 0x02,
	0x0342, 0x4D50, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x006F, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	//0x0100, 0x0100,	0x02, /* Stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_B_2072x1552_7fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0010, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0C2F, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x0610, 0x02,
	0x0340, 0x0638, 0x02,
	0x0342, 0xA850, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x006F, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	//0x0100, 0x0100,	0x02, /* Stream on */
};

/* 4:3, 16x10 margin */
const u32 sensor_3m3_setfile_B_2072x1162_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0028, 0x02,
	0x0346, 0x0190, 0x02,
	0x0348, 0x1057, 0x02,
	0x034A, 0x0AAF, 0x02,
	0x034C, 0x0818, 0x02,
	0x034E, 0x048A, 0x02,
	0x0340, 0x04F5, 0x02,
	0x0342, 0x3140, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x006F, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x059D, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 4:3 */
const u32 sensor_3m3_setfile_B_1008x754_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0060, 0x02,
	0x0346, 0x0038, 0x02,
	0x0348, 0x101F, 0x02,
	0x034A, 0x0BFF, 0x02,
	0x034C, 0x03F0, 0x02,
	0x034E, 0x02F2, 0x02,
	0x0340, 0x0350, 0x02,
	0x0342, 0x1268, 0x02,
	0x3000, 0x0000, 0x02,
	0xF440, 0x00AF, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0028, 0x02,
	0xF4CE, 0x0028, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0034, 0x02,
	0xF4D4, 0x0FFF, 0x02,
	0xF4D6, 0x0FFF, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0034, 0x02,
	0xF4DC, 0x0FFF, 0x02,
	0xF4DE, 0x0FFF, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0340, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0114, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

/* 16:9 */
const u32 sensor_3m3_setfile_B_1008x568_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0060, 0x02,
	0x0346, 0x01B0, 0x02,
	0x0348, 0x101F, 0x02,
	0x034A, 0x0A8F, 0x02,
	0x034C, 0x03F0, 0x02,
	0x034E, 0x0238, 0x02,
	0x0340, 0x0350, 0x02,
	0x0342, 0x1268, 0x02,
	0x3000, 0x0000, 0x02,
	0xF440, 0x00AF, 0x02,
	0xF494, 0x0020, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0028, 0x02,
	0xF4CE, 0x0028, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0034, 0x02,
	0xF4D4, 0x0FFF, 0x02,
	0xF4D6, 0x0FFF, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0034, 0x02,
	0xF4DC, 0x0FFF, 0x02,
	0xF4DE, 0x0FFF, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0340, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0114, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	//0x0100, 0x0100, 0x02, /* stream on */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_4144x3106_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D2F, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_4144x2332_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D2F, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_2072x1552_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x069E, /* frame_length_lines */
	0x24C0, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_2072x1552_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0650, /* frame_length_lines */
	0x4D50, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_2072x1552_7fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0638, /* frame_length_lines */
	0xA850, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_2072x1162_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x04F5, /* frame_length_lines */
	0x3140, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_1008x754_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0350, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_B_1008x568_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0350, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

static const u32 *sensor_3m3_setfiles_B[] = {
	sensor_3m3_setfile_B_4144x3106_30fps,
	sensor_3m3_setfile_B_4144x2332_30fps,
	sensor_3m3_setfile_B_2072x1552_30fps,
	sensor_3m3_setfile_B_2072x1552_15fps,
	sensor_3m3_setfile_B_2072x1552_7fps,
	sensor_3m3_setfile_B_2072x1162_30fps,
	sensor_3m3_setfile_B_1008x754_120fps,
	sensor_3m3_setfile_B_1008x568_120fps,
};

static const u32 sensor_3m3_setfile_B_sizes[] = {
	sizeof(sensor_3m3_setfile_B_4144x3106_30fps) / sizeof(sensor_3m3_setfile_B_4144x3106_30fps[0]),
	sizeof(sensor_3m3_setfile_B_4144x2332_30fps) / sizeof(sensor_3m3_setfile_B_4144x2332_30fps[0]),
	sizeof(sensor_3m3_setfile_B_2072x1552_30fps) / sizeof(sensor_3m3_setfile_B_2072x1552_30fps[0]),
	sizeof(sensor_3m3_setfile_B_2072x1552_15fps) / sizeof(sensor_3m3_setfile_B_2072x1552_15fps[0]),
	sizeof(sensor_3m3_setfile_B_2072x1552_7fps) / sizeof(sensor_3m3_setfile_B_2072x1552_7fps[0]),
	sizeof(sensor_3m3_setfile_B_2072x1162_30fps) / sizeof(sensor_3m3_setfile_B_2072x1162_30fps[0]),
	sizeof(sensor_3m3_setfile_B_1008x754_120fps) / sizeof(sensor_3m3_setfile_B_1008x754_120fps[0]),
	sizeof(sensor_3m3_setfile_B_1008x568_120fps) / sizeof(sensor_3m3_setfile_B_1008x568_120fps[0]),
};

static const u32 sensor_3m3_setfile_B_initial_reset_size =
	sizeof(sensor_3m3_setfile_B_initial_reset) / sizeof(sensor_3m3_setfile_B_initial_reset[0]);
static const u32 sensor_3m3_setfile_B_initial_burst_size =
	sizeof(sensor_3m3_setfile_B_initial_burst) / sizeof(sensor_3m3_setfile_B_initial_burst[0]);
static const u32 sensor_3m3_setfile_B_initial_other_size =
	sizeof(sensor_3m3_setfile_B_initial_other) / sizeof(sensor_3m3_setfile_B_initial_other[0]);

static const struct sensor_pll_info_compact *sensor_3m3_pllinfos_B[] = {
	&sensor_3m3_pllinfo_B_4144x3106_30fps,
	&sensor_3m3_pllinfo_B_4144x2332_30fps,
	&sensor_3m3_pllinfo_B_2072x1552_30fps,
	&sensor_3m3_pllinfo_B_2072x1552_15fps,
	&sensor_3m3_pllinfo_B_2072x1552_7fps,
	&sensor_3m3_pllinfo_B_2072x1162_30fps,
	&sensor_3m3_pllinfo_B_1008x754_120fps,
	&sensor_3m3_pllinfo_B_1008x568_120fps,
};

#endif

