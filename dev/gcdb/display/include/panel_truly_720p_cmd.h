/* Copyright (c) 2016, The Linux Foundation. All rights reserved.
 *
 *Redistribution and use in source and binary forms, with or without
 *modification, are permitted provided that the following conditions are
 *met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *      disclaimer in the documentation and/or other materials provided
 *      with the distribution.
 *    * Neither the name of The Linux Foundation nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 *THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 *WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 *ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 *BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 *BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 *OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 *IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
 */

#ifndef _PANEL_TRULY_720P_CMD_H_

#define _PANEL_TRULY_720P_CMD_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config truly_720p_cmd_panel_data = {
  "qcom,mdss_dsi_truly_720p_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
  11, 1, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution truly_720p_cmd_panel_res = {
  720, 1280, 100, 100, 6, 0, 32, 32, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info truly_720p_cmd_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char truly_720p_cmd_on_cmd0[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd1[] = {
0x03, 0x00, 0x29, 0xc0,
0xb1, 0x78, 0x21, 0xff, };

static char truly_720p_cmd_on_cmd2[] = {
0xb6, 0x0f, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd3[] = {
0x03, 0x00, 0x29, 0xc0,
0xbc, 0x00, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd4[] = {
0x06, 0x00, 0x29, 0xc0,
0xbd, 0x02, 0x67, 0x20,
0x20, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd5[] = {
0x0b, 0x00, 0x29, 0xc0,
0xe7, 0xf2, 0xe6, 0xd8,
0xcc, 0xbf, 0xb2, 0xa5,
0x99, 0x99, 0x95, 0xff, };

static char truly_720p_cmd_on_cmd6[] = {
0x0b, 0x00, 0x29, 0xc0,
0xe8, 0xf2, 0xe6, 0xd8,
0xcc, 0xbf, 0xb2, 0xa5,
0x99, 0x99, 0x95, 0xff, };

static char truly_720p_cmd_on_cmd7[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x01, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd8[] = {
0x03, 0x00, 0x29, 0xc0,
0xbc, 0xa0, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd9[] = {
0x03, 0x00, 0x29, 0xc0,
0xbd, 0xa0, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd10[] = {
0xca, 0x01, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd11[] = {
0xc0, 0x0c, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd12[] = {
0xbe, 0x4e, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd13[] = {
0x03, 0x00, 0x29, 0xc0,
0xb3, 0x38, 0x38, 0xff, };

static char truly_720p_cmd_on_cmd14[] = {
0x03, 0x00, 0x29, 0xc0,
0xb4, 0x11, 0x11, 0xff, };

static char truly_720p_cmd_on_cmd15[] = {
0x03, 0x00, 0x29, 0xc0,
0xb6, 0x05, 0x05, 0xff, };

static char truly_720p_cmd_on_cmd16[] = {
0x03, 0x00, 0x29, 0xc0,
0xb9, 0x45, 0x45, 0xff, };

static char truly_720p_cmd_on_cmd17[] = {
0x03, 0x00, 0x29, 0xc0,
0xba, 0x25, 0x25, 0xff, };

static char truly_720p_cmd_on_cmd18[] = {
0x03, 0x00, 0x29, 0xc0,
0xc4, 0x11, 0x11, 0xff, };

static char truly_720p_cmd_on_cmd19[] = {
0xc6, 0x66, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd20[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x02, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd21[] = {
0xee, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd22[] = {
0x11, 0x00, 0x29, 0xc0,
0xb0, 0x00, 0x37, 0x00,
0x48, 0x00, 0x69, 0x00,
0x8a, 0x00, 0xab, 0x00,
0xcb, 0x00, 0xeb, 0x01,
0x1c, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd23[] = {
0x11, 0x00, 0x29, 0xc0,
0xb1, 0x01, 0x41, 0x01,
0x7c, 0x01, 0xaa, 0x01,
0xf3, 0x02, 0x2d, 0x02,
0x2e, 0x02, 0x63, 0x02,
0x9d, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd24[] = {
0x11, 0x00, 0x29, 0xc0,
0xb2, 0x02, 0xc3, 0x02,
0xf6, 0x03, 0x19, 0x03,
0x54, 0x03, 0x85, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd25[] = {
0x05, 0x00, 0x29, 0xc0,
0xb3, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd26[] = {
0x11, 0x00, 0x29, 0xc0,
0xbc, 0x00, 0x37, 0x00,
0x48, 0x00, 0x69, 0x00,
0x8a, 0x00, 0xab, 0x00,
0xcb, 0x00, 0xeb, 0x01,
0x1c, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd27[] = {
0x11, 0x00, 0x29, 0xc0,
0xbd, 0x01, 0x41, 0x01,
0x7c, 0x01, 0xaa, 0x01,
0xf3, 0x02, 0x2d, 0x02,
0x2e, 0x02, 0x63, 0x02,
0x9d, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd28[] = {
0x11, 0x00, 0x29, 0xc0,
0xbe, 0x02, 0xc3, 0x02,
0xf6, 0x03, 0x19, 0x03,
0x54, 0x03, 0x85, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd29[] = {
0x05, 0x00, 0x29, 0xc0,
0xbf, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd30[] = {
0x11, 0x00, 0x29, 0xc0,
0xb4, 0x00, 0xd1, 0x00,
0xd7, 0x00, 0xe4, 0x00,
0xf1, 0x00, 0xfe, 0x01,
0x12, 0x01, 0x26, 0x01,
0x48, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd31[] = {
0x11, 0x00, 0x29, 0xc0,
0xb5, 0x01, 0x64, 0x01,
0x95, 0x01, 0xbd, 0x02,
0x01, 0x02, 0x36, 0x02,
0x38, 0x02, 0x6c, 0x02,
0xa7, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd32[] = {
0x11, 0x00, 0x29, 0xc0,
0xb6, 0x02, 0xce, 0x03,
0x04, 0x03, 0x2b, 0x03,
0x5b, 0x03, 0x89, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd33[] = {
0x05, 0x00, 0x29, 0xc0,
0xb7, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd34[] = {
0x11, 0x00, 0x29, 0xc0,
0xc0, 0x00, 0xd1, 0x00,
0xd7, 0x00, 0xe4, 0x00,
0xf1, 0x00, 0xfe, 0x01,
0x12, 0x01, 0x26, 0x01,
0x48, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd35[] = {
0x11, 0x00, 0x29, 0xc0,
0xc1, 0x01, 0x64, 0x01,
0x95, 0x01, 0xbd, 0x02,
0x01, 0x02, 0x36, 0x02,
0x38, 0x02, 0x6c, 0x02,
0xa7, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd36[] = {
0x11, 0x00, 0x29, 0xc0,
0xc2, 0x02, 0xce, 0x03,
0x04, 0x03, 0x2b, 0x03,
0x5b, 0x03, 0x89, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd37[] = {
0x05, 0x00, 0x29, 0xc0,
0xc3, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd38[] = {
0x11, 0x00, 0x29, 0xc0,
0xb8, 0x00, 0x37, 0x00,
0x45, 0x00, 0x61, 0x00,
0x7d, 0x00, 0x9a, 0x00,
0xbb, 0x00, 0xdc, 0x01,
0x0b, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd39[] = {
0x11, 0x00, 0x29, 0xc0,
0xb9, 0x01, 0x31, 0x01,
0x6e, 0x01, 0x9e, 0x01,
0xea, 0x02, 0x24, 0x02,
0x25, 0x02, 0x58, 0x02,
0x90, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd40[] = {
0x11, 0x00, 0x29, 0xc0,
0xba, 0x02, 0xb4, 0x02,
0xe4, 0x03, 0x04, 0x03,
0x44, 0x03, 0x7f, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd41[] = {
0x05, 0x00, 0x29, 0xc0,
0xbb, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd42[] = {
0x11, 0x00, 0x29, 0xc0,
0xc4, 0x00, 0x37, 0x00,
0x45, 0x00, 0x61, 0x00,
0x7d, 0x00, 0x9a, 0x00,
0xbb, 0x00, 0xdc, 0x01,
0x0b, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd43[] = {
0x11, 0x00, 0x29, 0xc0,
0xc5, 0x01, 0x31, 0x01,
0x6e, 0x01, 0x9e, 0x01,
0xea, 0x02, 0x24, 0x02,
0x25, 0x02, 0x58, 0x02,
0x90, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd44[] = {
0x11, 0x00, 0x29, 0xc0,
0xc6, 0x02, 0xb4, 0x02,
0xe4, 0x03, 0x04, 0x03,
0x44, 0x03, 0x7f, 0x03,
0xb2, 0x03, 0xc1, 0x03,
0xd1, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd45[] = {
0x05, 0x00, 0x29, 0xc0,
0xc7, 0x03, 0xe0, 0x03,
0xe8, 0xff, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd46[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x06, 0xff, 0xff,  };

static char truly_720p_cmd_on_cmd47[] = {
0x03, 0x00, 0x29, 0xc0,
0xb0, 0x29, 0x2a, 0xff, };

static char truly_720p_cmd_on_cmd48[] = {
0x03, 0x00, 0x29, 0xc0,
0xb1, 0x10, 0x12, 0xff, };

static char truly_720p_cmd_on_cmd49[] = {
0x03, 0x00, 0x29, 0xc0,
0xb2, 0x14, 0x16, 0xff, };

static char truly_720p_cmd_on_cmd50[] = {
0x03, 0x00, 0x29, 0xc0,
0xb3, 0x18, 0x1a, 0xff, };

static char truly_720p_cmd_on_cmd51[] = {
0x03, 0x00, 0x29, 0xc0,
0xb4, 0x02, 0x04, 0xff, };

static char truly_720p_cmd_on_cmd52[] = {
0x03, 0x00, 0x29, 0xc0,
0xb5, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd53[] = {
0x03, 0x00, 0x29, 0xc0,
0xb6, 0x34, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd54[] = {
0x03, 0x00, 0x29, 0xc0,
0xb7, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd55[] = {
0x03, 0x00, 0x29, 0xc0,
0xb8, 0x34, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd56[] = {
0x03, 0x00, 0x29, 0xc0,
0xb9, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd57[] = {
0x03, 0x00, 0x29, 0xc0,
0xba, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd58[] = {
0x03, 0x00, 0x29, 0xc0,
0xbb, 0x01, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd59[] = {
0x03, 0x00, 0x29, 0xc0,
0xbc, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd60[] = {
0x03, 0x00, 0x29, 0xc0,
0xbd, 0x2e, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd61[] = {
0x03, 0x00, 0x29, 0xc0,
0xbe, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd62[] = {
0x03, 0x00, 0x29, 0xc0,
0xbf, 0x05, 0x03, 0xff, };

static char truly_720p_cmd_on_cmd63[] = {
0x03, 0x00, 0x29, 0xc0,
0xc0, 0x1b, 0x19, 0xff, };

static char truly_720p_cmd_on_cmd64[] = {
0x03, 0x00, 0x29, 0xc0,
0xc1, 0x17, 0x15, 0xff, };

static char truly_720p_cmd_on_cmd65[] = {
0x03, 0x00, 0x29, 0xc0,
0xc2, 0x13, 0x11, 0xff, };

static char truly_720p_cmd_on_cmd66[] = {
0x03, 0x00, 0x29, 0xc0,
0xc3, 0x2a, 0x29, 0xff, };

static char truly_720p_cmd_on_cmd67[] = {
0x03, 0x00, 0x29, 0xc0,
0xe5, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd68[] = {
0x03, 0x00, 0x29, 0xc0,
0xc4, 0x29, 0x2a, 0xff, };

static char truly_720p_cmd_on_cmd69[] = {
0x03, 0x00, 0x29, 0xc0,
0xc5, 0x1b, 0x19, 0xff, };

static char truly_720p_cmd_on_cmd70[] = {
0x03, 0x00, 0x29, 0xc0,
0xc6, 0x17, 0x15, 0xff, };

static char truly_720p_cmd_on_cmd71[] = {
0x03, 0x00, 0x29, 0xc0,
0xc7, 0x13, 0x11, 0xff, };

static char truly_720p_cmd_on_cmd72[] = {
0x03, 0x00, 0x29, 0xc0,
0xc8, 0x01, 0x05, 0xff, };

static char truly_720p_cmd_on_cmd73[] = {
0x03, 0x00, 0x29, 0xc0,
0xc9, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd74[] = {
0x03, 0x00, 0x29, 0xc0,
0xca, 0x34, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd75[] = {
0x03, 0x00, 0x29, 0xc0,
0xcb, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd76[] = {
0x03, 0x00, 0x29, 0xc0,
0xcc, 0x34, 0x03, 0xff, };

static char truly_720p_cmd_on_cmd77[] = {
0x03, 0x00, 0x29, 0xc0,
0xcd, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd78[] = {
0x03, 0x00, 0x29, 0xc0,
0xce, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd79[] = {
0x03, 0x00, 0x29, 0xc0,
0xcf, 0x02, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd80[] = {
0x03, 0x00, 0x29, 0xc0,
0xd0, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd81[] = {
0x03, 0x00, 0x29, 0xc0,
0xd1, 0x2e, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd82[] = {
0x03, 0x00, 0x29, 0xc0,
0xd2, 0x34, 0x34, 0xff, };

static char truly_720p_cmd_on_cmd83[] = {
0x03, 0x00, 0x29, 0xc0,
0xd3, 0x04, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd84[] = {
0x03, 0x00, 0x29, 0xc0,
0xd4, 0x10, 0x12, 0xff, };

static char truly_720p_cmd_on_cmd85[] = {
0x03, 0x00, 0x29, 0xc0,
0xd5, 0x14, 0x16, 0xff, };

static char truly_720p_cmd_on_cmd86[] = {
0x03, 0x00, 0x29, 0xc0,
0xd6, 0x18, 0x1a, 0xff, };

static char truly_720p_cmd_on_cmd87[] = {
0x03, 0x00, 0x29, 0xc0,
0xd7, 0x2a, 0x29, 0xff, };

static char truly_720p_cmd_on_cmd88[] = {
0x03, 0x00, 0x29, 0xc0,
0xe6, 0x2e, 0x2e, 0xff, };

static char truly_720p_cmd_on_cmd89[] = {
0x06, 0x00, 0x29, 0xc0,
0xd8, 0x00, 0x00, 0x00,
0x54, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd90[] = {
0x06, 0x00, 0x29, 0xc0,
0xd9, 0x00, 0x15, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd91[] = {
0xe7, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd92[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x03, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd93[] = {
0x03, 0x00, 0x29, 0xc0,
0xb1, 0x00, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd94[] = {
0x03, 0x00, 0x29, 0xc0,
0xb0, 0x00, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd95[] = {
0x06, 0x00, 0x29, 0xc0,
0xb2, 0x05, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd96[] = {
0x06, 0x00, 0x29, 0xc0,
0xb3, 0x05, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd97[] = {
0x06, 0x00, 0x29, 0xc0,
0xb4, 0x05, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd98[] = {
0x06, 0x00, 0x29, 0xc0,
0xb5, 0x05, 0x00, 0x17,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd99[] = {
0x06, 0x00, 0x29, 0xc0,
0xb6, 0x12, 0x00, 0x19,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd100[] = {
0x06, 0x00, 0x29, 0xc0,
0xb7, 0x12, 0x00, 0x19,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd101[] = {
0x06, 0x00, 0x29, 0xc0,
0xb8, 0x12, 0x00, 0x19,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd102[] = {
0x06, 0x00, 0x29, 0xc0,
0xb9, 0x12, 0x00, 0x19,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd103[] = {
0x06, 0x00, 0x29, 0xc0,
0xba, 0x57, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd104[] = {
0x06, 0x00, 0x29, 0xc0,
0xbb, 0x57, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd105[] = {
0x06, 0x00, 0x29, 0xc0,
0xbc, 0x75, 0x00, 0x1a,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd106[] = {
0x06, 0x00, 0x29, 0xc0,
0xbd, 0x53, 0x00, 0x1a,
0x00, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd107[] = {
0x05, 0x00, 0x29, 0xc0,
0xc0, 0x00, 0x34, 0x00,
0x00, 0xff, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd108[] = {
0x05, 0x00, 0x29, 0xc0,
0xc1, 0x00, 0x34, 0x00,
0x00, 0xff, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd109[] = {
0x05, 0x00, 0x29, 0xc0,
0xc2, 0x00, 0x34, 0x00,
0x00, 0xff, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd110[] = {
0x05, 0x00, 0x29, 0xc0,
0xc3, 0x00, 0x34, 0x00,
0x00, 0xff, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd111[] = {
0xc4, 0x20, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd112[] = {
0xc5, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd113[] = {
0xc6, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd114[] = {
0xc7, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd115[] = {
0x06, 0x00, 0x29, 0xc0,
0xf0, 0x55, 0xaa, 0x52,
0x08, 0x05, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd116[] = {
0xed, 0x30, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd117[] = {
0x03, 0x00, 0x29, 0xc0,
0xb0, 0x17, 0x06, 0xff, };

static char truly_720p_cmd_on_cmd118[] = {
0xb8, 0x08, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd119[] = {
0x06, 0x00, 0x29, 0xc0,
0xbd, 0x03, 0x07, 0x00,
0x03, 0x00, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd120[] = {
0x03, 0x00, 0x29, 0xc0,
0xb1, 0x17, 0x06, 0xff, };

static char truly_720p_cmd_on_cmd121[] = {
0xb9, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd122[] = {
0x03, 0x00, 0x29, 0xc0,
0xb2, 0x00, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd123[] = {
0xba, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd124[] = {
0x03, 0x00, 0x29, 0xc0,
0xb3, 0x17, 0x06, 0xff, };

static char truly_720p_cmd_on_cmd125[] = {
0xbb, 0x0a, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd126[] = {
0x03, 0x00, 0x29, 0xc0,
0xb4, 0x17, 0x06, 0xff, };

static char truly_720p_cmd_on_cmd127[] = {
0x03, 0x00, 0x29, 0xc0,
0xb5, 0x17, 0x06, 0xff, };

static char truly_720p_cmd_on_cmd128[] = {
0x03, 0x00, 0x29, 0xc0,
0xb6, 0x14, 0x03, 0xff, };

static char truly_720p_cmd_on_cmd129[] = {
0x03, 0x00, 0x29, 0xc0,
0xb7, 0x00, 0x00, 0xff, };

static char truly_720p_cmd_on_cmd130[] = {
0xbc, 0x02, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd131[] = {
0xe5, 0x06, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd132[] = {
0xe6, 0x06, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd133[] = {
0xe7, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd134[] = {
0xe8, 0x06, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd135[] = {
0xe9, 0x06, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd136[] = {
0xea, 0x06, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd137[] = {
0xeb, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd138[] = {
0xec, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd139[] = {
0xc0, 0x07, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd140[] = {
0xc1, 0x80, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd141[] = {
0xc2, 0xa4, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd142[] = {
0xc3, 0x05, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd143[] = {
0xc4, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd144[] = {
0xc5, 0x02, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd145[] = {
0xc6, 0x22, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd146[] = {
0xc7, 0x03, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd147[] = {
0x03, 0x00, 0x29, 0xc0,
0xc8, 0x05, 0x30, 0xff, };

static char truly_720p_cmd_on_cmd148[] = {
0x03, 0x00, 0x29, 0xc0,
0xc9, 0x01, 0x31, 0xff, };

static char truly_720p_cmd_on_cmd149[] = {
0x03, 0x00, 0x29, 0xc0,
0xca, 0x03, 0x21, 0xff, };

static char truly_720p_cmd_on_cmd150[] = {
0x03, 0x00, 0x29, 0xc0,
0xcb, 0x01, 0x20, 0xff, };

static char truly_720p_cmd_on_cmd151[] = {
0x06, 0x00, 0x29, 0xc0,
0xd1, 0x00, 0x05, 0x09,
0x07, 0x10, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd152[] = {
0x06, 0x00, 0x29, 0xc0,
0xd2, 0x10, 0x05, 0x0e,
0x03, 0x10, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd153[] = {
0x06, 0x00, 0x29, 0xc0,
0xd3, 0x20, 0x00, 0x48,
0x07, 0x10, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd154[] = {
0x06, 0x00, 0x29, 0xc0,
0xd4, 0x30, 0x00, 0x43,
0x07, 0x10, 0xff, 0xff, };

static char truly_720p_cmd_on_cmd155[] = {
0xd0, 0x00, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd156[] = {
0x04, 0x00, 0x29, 0xc0,
0xcc, 0x00, 0x00, 0x3e, };

static char truly_720p_cmd_on_cmd157[] = {
0x04, 0x00, 0x29, 0xc0,
0xcd, 0x00, 0x00, 0x3e, };

static char truly_720p_cmd_on_cmd158[] = {
0x04, 0x00, 0x29, 0xc0,
0xce, 0x00, 0x00, 0x02, };

static char truly_720p_cmd_on_cmd159[] = {
0x04, 0x00, 0x29, 0xc0,
0xcf, 0x00, 0x00, 0x02, };

static char truly_720p_cmd_on_cmd160[] = {
0x6f, 0x11, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd161[] = {
0xf3, 0x01, 0x23, 0x80, };

static char truly_720p_cmd_on_cmd162[] = {
0x51, 0xff, 0x15, 0x80, };

static char truly_720p_cmd_on_cmd163[] = {
0x53, 0x2c, 0x15, 0x80, };

static char truly_720p_cmd_on_cmd164[] = {
0x55, 0x03, 0x15, 0x80, };

static char truly_720p_cmd_on_cmd165[] = {
0x35, 0x00, 0x15, 0x80, };

static char truly_720p_cmd_on_cmd166[] = {
0x11, 0x00, 0x05, 0x80, };

static char truly_720p_cmd_on_cmd167[] = {
0x29, 0x00, 0x05, 0x80, };


static struct mipi_dsi_cmd truly_720p_cmd_on_command[] = {
{ 0xc , truly_720p_cmd_on_cmd0, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd1, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd2, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd3, 0x00},
{ 0xc , truly_720p_cmd_on_cmd4, 0x00},
{ 0x10 , truly_720p_cmd_on_cmd5, 0x00},
{ 0x10 , truly_720p_cmd_on_cmd6, 0x00},
{ 0xc , truly_720p_cmd_on_cmd7, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd8, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd9, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd10, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd11, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd12, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd13, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd14, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd15, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd16, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd17, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd18, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd19, 0x00},
{ 0xc , truly_720p_cmd_on_cmd20, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd21, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd22, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd23, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd24, 0x00},
{ 0xc , truly_720p_cmd_on_cmd25, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd26, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd27, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd28, 0x00},
{ 0xc , truly_720p_cmd_on_cmd29, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd30, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd31, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd32, 0x00},
{ 0xc , truly_720p_cmd_on_cmd33, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd34, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd35, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd36, 0x00},
{ 0xc , truly_720p_cmd_on_cmd37, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd38, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd39, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd40, 0x00},
{ 0xc , truly_720p_cmd_on_cmd41, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd42, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd43, 0x00},
{ 0x18 , truly_720p_cmd_on_cmd44, 0x00},
{ 0xc , truly_720p_cmd_on_cmd45, 0x00},
{ 0xc , truly_720p_cmd_on_cmd46, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd47, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd48, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd49, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd50, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd51, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd52, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd53, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd54, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd55, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd56, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd57, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd58, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd59, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd60, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd61, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd62, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd63, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd64, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd65, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd66, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd67, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd68, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd69, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd70, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd71, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd72, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd73, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd74, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd75, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd76, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd77, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd78, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd79, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd80, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd81, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd82, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd83, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd84, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd85, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd86, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd87, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd88, 0x00},
{ 0xc , truly_720p_cmd_on_cmd89, 0x00},
{ 0xc , truly_720p_cmd_on_cmd90, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd91, 0x00},
{ 0xc , truly_720p_cmd_on_cmd92, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd93, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd94, 0x00},
{ 0xc , truly_720p_cmd_on_cmd95, 0x00},
{ 0xc , truly_720p_cmd_on_cmd96, 0x00},
{ 0xc , truly_720p_cmd_on_cmd97, 0x00},
{ 0xc , truly_720p_cmd_on_cmd98, 0x00},
{ 0xc , truly_720p_cmd_on_cmd99, 0x00},
{ 0xc , truly_720p_cmd_on_cmd100, 0x00},
{ 0xc , truly_720p_cmd_on_cmd101, 0x00},
{ 0xc , truly_720p_cmd_on_cmd102, 0x00},
{ 0xc , truly_720p_cmd_on_cmd103, 0x00},
{ 0xc , truly_720p_cmd_on_cmd104, 0x00},
{ 0xc , truly_720p_cmd_on_cmd105, 0x00},
{ 0xc , truly_720p_cmd_on_cmd106, 0x00},
{ 0xc , truly_720p_cmd_on_cmd107, 0x00},
{ 0xc , truly_720p_cmd_on_cmd108, 0x00},
{ 0xc , truly_720p_cmd_on_cmd109, 0x00},
{ 0xc , truly_720p_cmd_on_cmd110, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd111, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd112, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd113, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd114, 0x00},
{ 0xc , truly_720p_cmd_on_cmd115, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd116, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd117, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd118, 0x00},
{ 0xc , truly_720p_cmd_on_cmd119, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd120, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd121, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd122, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd123, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd124, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd125, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd126, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd127, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd128, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd129, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd130, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd131, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd132, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd133, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd134, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd135, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd136, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd137, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd138, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd139, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd140, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd141, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd142, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd143, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd144, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd145, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd146, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd147, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd148, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd149, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd150, 0x00},
{ 0xc , truly_720p_cmd_on_cmd151, 0x00},
{ 0xc , truly_720p_cmd_on_cmd152, 0x00},
{ 0xc , truly_720p_cmd_on_cmd153, 0x00},
{ 0xc , truly_720p_cmd_on_cmd154, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd155, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd156, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd157, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd158, 0x00},
{ 0x8 , truly_720p_cmd_on_cmd159, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd160, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd161, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd162, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd163, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd164, 0x00},
{ 0x4 , truly_720p_cmd_on_cmd165, 0xc8},
{ 0x4 , truly_720p_cmd_on_cmd166, 0x78},
{ 0x4 , truly_720p_cmd_on_cmd167, 0x0a},
};
#define TRULY_720P_CMD_ON_COMMAND 168


static char truly_720p_cmd_off_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char truly_720p_cmd_off_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };


static struct mipi_dsi_cmd truly_720p_cmd_off_command[] = {
{ 0x4 , truly_720p_cmd_off_cmd0, 0x0},
{ 0x4 , truly_720p_cmd_off_cmd1, 0x0}
};
#define TRULY_720P_CMD_OFF_COMMAND 2


static struct command_state truly_720p_cmd_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info truly_720p_cmd_command_panel = {
  1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info truly_720p_cmd_video_panel = {
  0, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration truly_720p_cmd_lane_config = {
  4, 0, 1, 1, 1, 1, 0
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t truly_720p_cmd_timings[] = {
  0x87, 0x2c, 0x12, 0x00, 0x40, 0x44, 0x16, 0x1e, 0x17, 0x03, 0x04, 0x00
};

static struct panel_timing truly_720p_cmd_timing_info = {
  0, 4, 0x04, 0x1b
};

static struct panel_reset_sequence truly_720p_cmd_panel_reset_seq = {
{ 1, 0, 1, }, { 200, 200, 200, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight truly_720p_cmd_backlight = {
  1, 1, 4095, 100, 1, "PMIC_8941"
};

#define TRULY_720P_CMD_SIGNATURE 0xFFFF

#endif /*_TRULY_720P_CMD_H_*/
