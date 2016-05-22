/*
 * Copyright (C) 2005-2011 Amazon Technologies, Inc.
 *
 *  This file is subject to the terms and conditions of the GNU General Public
 *  License. See the file COPYING in the main directory of this archive for
 *  more details.
 *
 */
#ifndef __CMAP_LAB126_INCLUDED__
#define __CMAP_LAB126_INCLUDED__

#if 0
/** Inverted Shasta style */
static unsigned short einkfb_8bpp_gray[256] =
{
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, // 0x00 Black
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, //
    0xFFFF,                                                         // 0x10
    
    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, // 0x11
    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, //
    0x1111,                                                         // 0x21

    0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, // 0x11
    0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, //
    0xEEEE,                                                         // 0x21
    
    0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, // 0x22
    0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, //
    0xDDDD,                                                         // 0x32
    
    0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, // 0x33
    0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, //
    0xCCCC,                                                         // 0x43
    
    0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, // 0x44
    0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, //
    0xBBBB,                                                         // 0x54
    
    0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, // 0x55
    0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, //
    0xAAAA,                                                         // 0x65
    
    0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, // 0x66
    0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, //
    0x9999,                                                         // 0x76
    
    0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, // 0x77
    0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, //
    0x8888,                                                         // 0x87
    
    0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, // 0x88
    0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, //
    0x7777,                                                         // 0x98
    
    0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, // 0x99
    0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, //
    0x6666,                                                         // 0xA9
    
    0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, // 0xAA
    0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, //
    0x5555,                                                         // 0xBA
    
    0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, // 0xBB
    0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, //
    0x4444,                                                         // 0xCB
    
    0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, // 0xCC
    0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, //
    0x3333,                                                         // 0xDC
    
    0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, // 0xDD
    0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, //
    0x2222,                                                         // 0xED
    
    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, // 0xEE
    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, //
    0x1111,                                                         // 0xEF
    
    0x0000                                                          // 0xFF White
};

#else

static unsigned short einkfb_8bpp_gray[256] =
{

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00 Black
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, //
    0x0000,                                                         // 0x10

    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, // 0x11
    0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, 0x1111, //
    0x1111,                                                         // 0x21

    0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, // 0x22
    0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, 0x2222, //
    0x2222,                                                         // 0x32

    0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, // 0x33
    0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, 0x3333, //
    0x3333,                                                         // 0x43

    0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, // 0x44
    0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, 0x4444, //
    0x4444,                                                         // 0x54

    0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, // 0x55
    0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, //
    0x5555,                                                         // 0x65

    0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, // 0x66
    0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, 0x6666, //
    0x6666,                                                         // 0x76

    0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, // 0x77
    0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, 0x7777, //
    0x7777,                                                         // 0x87

    0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, // 0x88
    0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, 0x8888, //
    0x8888,                                                         // 0x98

    0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, // 0x99
    0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, 0x9999, //
    0x9999,                                                         // 0xA9

    0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, // 0xAA
    0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, //
    0xAAAA,                                                         // 0xBA

    0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, // 0xBB
    0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB, //
    0xBBBB,                                                         // 0xCB

    0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, // 0xCC
    0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, 0xCCCC, //
    0xCCCC,                                                         // 0xDC

    0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, // 0xDD
    0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, 0xDDDD, //
    0xDDDD,                                                         // 0xED

    0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, // 0xEE
    0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, 0xEEEE, //
    0xEEEE,                                                         // 0xFE

    0xFFFF                                                          // 0xFF White
};

#endif

struct fb_cmap einkfb_8bpp_cmap =
{
    .len    = 256,
    .start  = 0,
    .red    = einkfb_8bpp_gray,
    .green  = einkfb_8bpp_gray,
    .blue   = einkfb_8bpp_gray,
    .transp = NULL
};

#endif //__CMAP_LAB126_INCLUDED__