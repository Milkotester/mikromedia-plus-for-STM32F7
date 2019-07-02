/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.32.                      *
*        Compiled Oct  8 2015, 11:58:22                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: touch                                                 *
* Dimensions:  48 * 48                                               *
* NumColors:   None, only alpha channel                              *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmtouch;

static GUI_CONST_STORAGE unsigned char _actouch[] = {
  /* RLE: 015 Pixels @ 000,000 */ 15, 0xFF, 
  /* ABS: 018 Pixels @ 015,000 */ 0, 18, 0xF9, 0xE5, 0xCF, 0xAD, 0x7E, 0x58, 0x36, 0x24, 0x1A, 0x1C, 0x24, 0x38, 0x58, 0x7E, 0xAB, 0xCF, 0xE5, 0xF9, 
  /* RLE: 028 Pixels @ 033,000 */ 28, 0xFF, 
  /* ABS: 005 Pixels @ 013,001 */ 0, 5, 0xF3, 0xC1, 0x7C, 0x4C, 0x20, 
  /* RLE: 012 Pixels @ 018,001 */ 12, 0x00, 
  /* ABS: 005 Pixels @ 030,001 */ 0, 5, 0x1E, 0x4A, 0x7C, 0xC1, 0xF3, 
  /* RLE: 024 Pixels @ 035,001 */ 24, 0xFF, 
  /* ABS: 005 Pixels @ 011,002 */ 0, 5, 0xFD, 0xB1, 0x50, 0x20, 0x04, 
  /* RLE: 005 Pixels @ 016,002 */ 5, 0x00, 
  /* ABS: 006 Pixels @ 021,002 */ 0, 6, 0x02, 0x08, 0x0E, 0x0E, 0x08, 0x02, 
  /* RLE: 005 Pixels @ 027,002 */ 5, 0x00, 
  /* ABS: 005 Pixels @ 032,002 */ 0, 5, 0x04, 0x20, 0x50, 0xAF, 0xFD, 
  /* RLE: 020 Pixels @ 037,002 */ 20, 0xFF, 
  /* ABS: 030 Pixels @ 009,003 */ 0, 30, 0xF1, 0xB3, 0x44, 0x00, 0x00, 0x00, 0x06, 0x1E, 0x3A, 0x74, 0xA9, 0xD1, 0xF1, 0xFD, 0xFF, 0xFF, 0xFF, 0xF3, 0xD1, 0xA5, 0x72, 0x3A, 0x20, 0x08, 0x00, 0x00, 0x00, 0x44, 0xB3, 0xF1, 
  /* RLE: 017 Pixels @ 039,003 */ 17, 0xFF, 
  /* ABS: 010 Pixels @ 008,004 */ 0, 10, 0xDF, 0x68, 0x18, 0x00, 0x00, 0x08, 0x36, 0x85, 0xBD, 0xED, 
  /* RLE: 012 Pixels @ 018,004 */ 12, 0xFF, 
  /* ABS: 010 Pixels @ 030,004 */ 0, 10, 0xEF, 0xBF, 0x87, 0x3A, 0x08, 0x00, 0x00, 0x18, 0x68, 0xDF, 
  /* RLE: 014 Pixels @ 040,004 */ 14, 0xFF, 
  /* ABS: 010 Pixels @ 006,005 */ 0, 10, 0xFD, 0xC3, 0x42, 0x04, 0x00, 0x00, 0x2A, 0x99, 0xD9, 0xFB, 
  /* RLE: 004 Pixels @ 016,005 */ 4, 0xFF, 
  /* ABS: 008 Pixels @ 020,005 */ 0, 8, 0xFD, 0xE3, 0xCF, 0xC5, 0xC5, 0xCF, 0xE5, 0xFD, 
  /* RLE: 004 Pixels @ 028,005 */ 4, 0xFF, 
  /* ABS: 010 Pixels @ 032,005 */ 0, 10, 0xFB, 0xDB, 0x9D, 0x2E, 0x00, 0x00, 0x04, 0x44, 0xC3, 0xFD, 
  /* RLE: 011 Pixels @ 042,005 */ 11, 0xFF, 
  /* ABS: 016 Pixels @ 005,006 */ 0, 16, 0xF7, 0x93, 0x14, 0x00, 0x02, 0x20, 0x7E, 0xF7, 0xFF, 0xFF, 0xFB, 0xE1, 0xBF, 0x76, 0x3C, 0x10, 
  /* RLE: 006 Pixels @ 021,006 */ 6, 0x00, 
  /* ABS: 016 Pixels @ 027,006 */ 0, 16, 0x10, 0x3C, 0x76, 0xBF, 0xDF, 0xF9, 0xFF, 0xFF, 0xF9, 0x85, 0x24, 0x04, 0x00, 0x16, 0x95, 0xF9, 
  /* RLE: 009 Pixels @ 043,006 */ 9, 0xFF, 
  /* ABS: 014 Pixels @ 004,007 */ 0, 14, 0xF5, 0x95, 0x0C, 0x00, 0x00, 0x4A, 0xBB, 0xF9, 0xFF, 0xFD, 0xD9, 0x85, 0x42, 0x0E, 
  /* RLE: 012 Pixels @ 018,007 */ 12, 0x00, 
  /* ABS: 014 Pixels @ 030,007 */ 0, 14, 0x0E, 0x40, 0x81, 0xD9, 0xFD, 0xFF, 0xF9, 0xBF, 0x4E, 0x00, 0x00, 0x0E, 0x99, 0xF5, 
  /* RLE: 007 Pixels @ 044,007 */ 7, 0xFF, 
  /* ABS: 025 Pixels @ 003,008 */ 0, 25, 0xF9, 0x99, 0x18, 0x00, 0x02, 0x54, 0xE1, 0xFD, 0xFF, 0xF1, 0x93, 0x34, 0x08, 0x00, 0x00, 0x00, 0x02, 0x18, 0x44, 0x5C, 0x68, 0x68, 0x5A, 0x42, 0x16, 
  /* RLE: 004 Pixels @ 028,008 */ 4, 0x00, 
  /* ABS: 013 Pixels @ 032,008 */ 0, 13, 0x06, 0x32, 0x8F, 0xF1, 0xFF, 0xFF, 0xE3, 0x58, 0x02, 0x00, 0x18, 0x99, 0xF9, 
  /* RLE: 006 Pixels @ 045,008 */ 6, 0xFF, 
  /* ABS: 018 Pixels @ 003,009 */ 0, 18, 0x9B, 0x0E, 0x00, 0x0E, 0x7C, 0xF1, 0xFF, 0xF9, 0xC9, 0x32, 0x00, 0x00, 0x04, 0x1C, 0x46, 0x9F, 0xDF, 0xFD, 
  /* RLE: 006 Pixels @ 021,009 */ 6, 0xFF, 
  /* ABS: 018 Pixels @ 027,009 */ 0, 18, 0xFB, 0xDD, 0x9D, 0x46, 0x1C, 0x04, 0x00, 0x00, 0x30, 0xC5, 0xF7, 0xFF, 0xF1, 0x7E, 0x10, 0x00, 0x0E, 0x9B, 
  /* RLE: 005 Pixels @ 045,009 */ 5, 0xFF, 
  /* ABS: 016 Pixels @ 002,010 */ 0, 16, 0xF9, 0x1C, 0x00, 0x02, 0x7A, 0xED, 0xFF, 0xF3, 0x9D, 0x26, 0x00, 0x00, 0x10, 0x6A, 0xB9, 0xF3, 
  /* RLE: 012 Pixels @ 018,010 */ 12, 0xFF, 
  /* ABS: 016 Pixels @ 030,010 */ 0, 16, 0xF3, 0xB9, 0x6A, 0x10, 0x00, 0x00, 0x24, 0x9B, 0xF3, 0xFF, 0xEF, 0x7E, 0x02, 0x00, 0x1E, 0xF7, 
  /* RLE: 004 Pixels @ 046,010 */ 4, 0xFF, 
  /* ABS: 014 Pixels @ 002,011 */ 0, 14, 0xFB, 0x1C, 0x00, 0x56, 0xEF, 0xFF, 0xFF, 0x8D, 0x16, 0x00, 0x00, 0x30, 0xAB, 0xF1, 
  /* RLE: 016 Pixels @ 016,011 */ 16, 0xFF, 
  /* ABS: 014 Pixels @ 032,011 */ 0, 14, 0xF1, 0xAB, 0x32, 0x02, 0x00, 0x16, 0x8B, 0xFF, 0xFF, 0xF1, 0x58, 0x00, 0x18, 0xF9, 
  /* RLE: 005 Pixels @ 046,011 */ 5, 0xFF, 
  /* ABS: 011 Pixels @ 003,012 */ 0, 11, 0xE3, 0xC5, 0xF3, 0xFF, 0xF5, 0x8F, 0x00, 0x00, 0x08, 0x6A, 0xE7, 
  /* RLE: 020 Pixels @ 014,012 */ 20, 0xFF, 
  /* ABS: 011 Pixels @ 034,012 */ 0, 11, 0xE9, 0x6E, 0x08, 0x00, 0x00, 0x8D, 0xF5, 0xFF, 0xF3, 0xC5, 0xE3, 
  /* RLE: 009 Pixels @ 045,012 */ 9, 0xFF, 
  /* ABS: 007 Pixels @ 006,013 */ 0, 7, 0xF9, 0xA3, 0x18, 0x00, 0x0C, 0x6E, 0xF3, 
  /* RLE: 022 Pixels @ 013,013 */ 22, 0xFF, 
  /* ABS: 007 Pixels @ 035,013 */ 0, 7, 0xF5, 0x72, 0x0E, 0x00, 0x16, 0xA1, 0xF9, 
  /* RLE: 012 Pixels @ 042,013 */ 12, 0xFF, 
  /* ABS: 006 Pixels @ 006,014 */ 0, 6, 0xCF, 0x2A, 0x00, 0x08, 0x6E, 0xEB, 
  /* RLE: 024 Pixels @ 012,014 */ 24, 0xFF, 
  /* ABS: 006 Pixels @ 036,014 */ 0, 6, 0xEB, 0x70, 0x08, 0x00, 0x2A, 0xCD, 
  /* RLE: 011 Pixels @ 042,014 */ 11, 0xFF, 
  /* ABS: 006 Pixels @ 005,015 */ 0, 6, 0xF5, 0x3E, 0x00, 0x00, 0x64, 0xF1, 
  /* RLE: 026 Pixels @ 011,015 */ 26, 0xFF, 
  /* ABS: 006 Pixels @ 037,015 */ 0, 6, 0xF3, 0x68, 0x00, 0x00, 0x3E, 0xF5, 
  /* RLE: 010 Pixels @ 043,015 */ 10, 0xFF, 
  /* ABS: 005 Pixels @ 005,016 */ 0, 5, 0xA5, 0x02, 0x00, 0x26, 0xE3, 
  /* RLE: 011 Pixels @ 010,016 */ 11, 0xFF, 
  /* ABS: 006 Pixels @ 021,016 */ 0, 6, 0xF9, 0xE3, 0xD7, 0xD9, 0xE5, 0xF9, 
  /* RLE: 011 Pixels @ 027,016 */ 11, 0xFF, 
  /* ABS: 005 Pixels @ 038,016 */ 0, 5, 0xE5, 0x2A, 0x00, 0x00, 0xA3, 
  /* RLE: 009 Pixels @ 043,016 */ 9, 0xFF, 
  /* ABS: 005 Pixels @ 004,017 */ 0, 5, 0xE5, 0x3E, 0x00, 0x08, 0x9F, 
  /* RLE: 010 Pixels @ 009,017 */ 10, 0xFF, 
  /* ABS: 010 Pixels @ 019,017 */ 0, 10, 0xE3, 0x91, 0x44, 0x32, 0x2C, 0x2C, 0x32, 0x46, 0x8F, 0xE1, 
  /* RLE: 010 Pixels @ 029,017 */ 10, 0xFF, 
  /* ABS: 005 Pixels @ 039,017 */ 0, 5, 0xA1, 0x0A, 0x00, 0x3E, 0xE5, 
  /* RLE: 007 Pixels @ 044,017 */ 7, 0xFF, 
  /* ABS: 006 Pixels @ 003,018 */ 0, 6, 0xFD, 0x95, 0x0E, 0x02, 0x5A, 0xEB, 
  /* RLE: 008 Pixels @ 009,018 */ 8, 0xFF, 
  /* ABS: 003 Pixels @ 017,018 */ 0, 3, 0xF1, 0x85, 0x16, 
  /* RLE: 008 Pixels @ 020,018 */ 8, 0x00, 
  /* ABS: 003 Pixels @ 028,018 */ 0, 3, 0x12, 0x7E, 0xEF, 
  /* RLE: 008 Pixels @ 031,018 */ 8, 0xFF, 
  /* ABS: 006 Pixels @ 039,018 */ 0, 6, 0xEB, 0x5C, 0x02, 0x0E, 0x95, 0xFD, 
  /* RLE: 006 Pixels @ 045,018 */ 6, 0xFF, 
  /* ABS: 006 Pixels @ 003,019 */ 0, 6, 0xEB, 0x56, 0x00, 0x14, 0xA5, 0xFD, 
  /* RLE: 007 Pixels @ 009,019 */ 7, 0xFF, 
  /* ABS: 003 Pixels @ 016,019 */ 0, 3, 0xEF, 0x7C, 0x04, 
  /* RLE: 010 Pixels @ 019,019 */ 10, 0x00, 
  /* ABS: 003 Pixels @ 029,019 */ 0, 3, 0x02, 0x76, 0xED, 
  /* RLE: 008 Pixels @ 032,019 */ 8, 0xFF, 
  /* ABS: 005 Pixels @ 040,019 */ 0, 5, 0xA9, 0x14, 0x00, 0x56, 0xE9, 
  /* RLE: 006 Pixels @ 045,019 */ 6, 0xFF, 
  /* ABS: 005 Pixels @ 003,020 */ 0, 5, 0xCF, 0x20, 0x00, 0x34, 0xE5, 
  /* RLE: 007 Pixels @ 008,020 */ 7, 0xFF, 
  /* ABS: 018 Pixels @ 015,020 */ 0, 18, 0xF9, 0x93, 0x10, 0x00, 0x04, 0x2E, 0x72, 0x97, 0xA9, 0xA9, 0x95, 0x70, 0x2A, 0x02, 0x00, 0x0E, 0x8F, 0xF9, 
  /* RLE: 007 Pixels @ 033,020 */ 7, 0xFF, 
  /* ABS: 005 Pixels @ 040,020 */ 0, 5, 0xE7, 0x36, 0x00, 0x20, 0xCF, 
  /* RLE: 006 Pixels @ 045,020 */ 6, 0xFF, 
  /* ABS: 004 Pixels @ 003,021 */ 0, 4, 0x9D, 0x00, 0x00, 0x78, 
  /* RLE: 008 Pixels @ 007,021 */ 8, 0xFF, 
  /* ABS: 006 Pixels @ 015,021 */ 0, 6, 0xC1, 0x1C, 0x06, 0x56, 0xC9, 0xFB, 
  /* RLE: 006 Pixels @ 021,021 */ 6, 0xFF, 
  /* ABS: 006 Pixels @ 027,021 */ 0, 6, 0xFB, 0xC3, 0x52, 0x06, 0x1C, 0xC1, 
  /* RLE: 008 Pixels @ 033,021 */ 8, 0xFF, 
  /* ABS: 004 Pixels @ 041,021 */ 0, 4, 0x7C, 0x00, 0x00, 0x9B, 
  /* RLE: 006 Pixels @ 045,021 */ 6, 0xFF, 
  /* ABS: 004 Pixels @ 003,022 */ 0, 4, 0x64, 0x00, 0x00, 0xB9, 
  /* RLE: 008 Pixels @ 007,022 */ 8, 0xFF, 
  /* ABS: 004 Pixels @ 015,022 */ 0, 4, 0x60, 0x08, 0x66, 0xEF, 
  /* RLE: 010 Pixels @ 019,022 */ 10, 0xFF, 
  /* ABS: 004 Pixels @ 029,022 */ 0, 4, 0xEF, 0x66, 0x08, 0x60, 
  /* RLE: 008 Pixels @ 033,022 */ 8, 0xFF, 
  /* ABS: 004 Pixels @ 041,022 */ 0, 4, 0xBB, 0x00, 0x00, 0x62, 
  /* RLE: 006 Pixels @ 045,022 */ 6, 0xFF, 
  /* ABS: 004 Pixels @ 003,023 */ 0, 4, 0x36, 0x00, 0x02, 0xEB, 
  /* RLE: 007 Pixels @ 007,023 */ 7, 0xFF, 
  /* ABS: 004 Pixels @ 014,023 */ 0, 4, 0xE9, 0x0E, 0x42, 0xDB, 
  /* RLE: 012 Pixels @ 018,023 */ 12, 0xFF, 
  /* ABS: 004 Pixels @ 030,023 */ 0, 4, 0xD9, 0x40, 0x0E, 0xE9, 
  /* RLE: 007 Pixels @ 034,023 */ 7, 0xFF, 
  /* ABS: 004 Pixels @ 041,023 */ 0, 4, 0xED, 0x02, 0x00, 0x36, 
  /* RLE: 006 Pixels @ 045,023 */ 6, 0xFF, 
  /* ABS: 003 Pixels @ 003,024 */ 0, 3, 0x10, 0x00, 0x1C, 
  /* RLE: 008 Pixels @ 006,024 */ 8, 0xFF, 
  /* ABS: 004 Pixels @ 014,024 */ 0, 4, 0x8F, 0x00, 0x5A, 0xED, 
  /* RLE: 012 Pixels @ 018,024 */ 12, 0xFF, 
  /* ABS: 004 Pixels @ 030,024 */ 0, 4, 0xED, 0x5C, 0x00, 0x91, 
  /* RLE: 008 Pixels @ 034,024 */ 8, 0xFF, 
  /* ABS: 003 Pixels @ 042,024 */ 0, 3, 0x1E, 0x00, 0x10, 
  /* RLE: 005 Pixels @ 045,024 */ 5, 0xFF, 
  /* ABS: 004 Pixels @ 002,025 */ 0, 4, 0xF7, 0x02, 0x00, 0x36, 
  /* RLE: 007 Pixels @ 006,025 */ 7, 0xFF, 
  /* ABS: 005 Pixels @ 013,025 */ 0, 5, 0xF7, 0x4E, 0x00, 0x56, 0xEB, 
  /* RLE: 012 Pixels @ 018,025 */ 12, 0xFF, 
  /* ABS: 005 Pixels @ 030,025 */ 0, 5, 0xEB, 0x58, 0x00, 0x4E, 0xF9, 
  /* RLE: 007 Pixels @ 035,025 */ 7, 0xFF, 
  /* ABS: 004 Pixels @ 042,025 */ 0, 4, 0x36, 0x00, 0x02, 0xF7, 
  /* RLE: 004 Pixels @ 046,025 */ 4, 0xFF, 
  /* ABS: 004 Pixels @ 002,026 */ 0, 4, 0xEF, 0x00, 0x00, 0x4A, 
  /* RLE: 007 Pixels @ 006,026 */ 7, 0xFF, 
  /* ABS: 005 Pixels @ 013,026 */ 0, 5, 0xD9, 0x2C, 0x00, 0x4A, 0xE5, 
  /* RLE: 012 Pixels @ 018,026 */ 12, 0xFF, 
  /* ABS: 005 Pixels @ 030,026 */ 0, 5, 0xE5, 0x4C, 0x00, 0x2C, 0xD9, 
  /* RLE: 007 Pixels @ 035,026 */ 7, 0xFF, 
  /* ABS: 004 Pixels @ 042,026 */ 0, 4, 0x4A, 0x00, 0x00, 0xEB, 
  /* RLE: 004 Pixels @ 046,026 */ 4, 0xFF, 
  /* ABS: 004 Pixels @ 002,027 */ 0, 4, 0xFB, 0x3C, 0x20, 0x93, 
  /* RLE: 007 Pixels @ 006,027 */ 7, 0xFF, 
  /* ABS: 005 Pixels @ 013,027 */ 0, 5, 0xAD, 0x16, 0x00, 0x30, 0xD7, 
  /* RLE: 012 Pixels @ 018,027 */ 12, 0xFF, 
  /* ABS: 005 Pixels @ 030,027 */ 0, 5, 0xD7, 0x2E, 0x00, 0x18, 0xAF, 
  /* RLE: 007 Pixels @ 035,027 */ 7, 0xFF, 
  /* ABS: 004 Pixels @ 042,027 */ 0, 4, 0x91, 0x22, 0x42, 0xFD, 
  /* RLE: 005 Pixels @ 046,027 */ 5, 0xFF, 
  /* ABS: 003 Pixels @ 003,028 */ 0, 3, 0xDF, 0xC1, 0xF1, 
  /* RLE: 007 Pixels @ 006,028 */ 7, 0xFF, 
  /* ABS: 005 Pixels @ 013,028 */ 0, 5, 0x8F, 0x08, 0x00, 0x10, 0xC1, 
  /* RLE: 012 Pixels @ 018,028 */ 12, 0xFF, 
  /* ABS: 005 Pixels @ 030,028 */ 0, 5, 0xBF, 0x0E, 0x00, 0x08, 0x8F, 
  /* RLE: 007 Pixels @ 035,028 */ 7, 0xFF, 
  /* ABS: 003 Pixels @ 042,028 */ 0, 3, 0xF1, 0xC3, 0xDF, 
  /* RLE: 015 Pixels @ 045,028 */ 15, 0xFF, 
  /* ABS: 006 Pixels @ 012,029 */ 0, 6, 0xF9, 0x74, 0x00, 0x00, 0x00, 0x85, 
  /* RLE: 012 Pixels @ 018,029 */ 12, 0xFF, 
  /* ABS: 006 Pixels @ 030,029 */ 0, 6, 0x81, 0x00, 0x00, 0x00, 0x74, 0xF9, 
  /* RLE: 024 Pixels @ 036,029 */ 24, 0xFF, 
  /* ABS: 007 Pixels @ 012,030 */ 0, 7, 0xEB, 0x58, 0x00, 0x00, 0x00, 0x16, 0xE7, 
  /* RLE: 010 Pixels @ 019,030 */ 10, 0xFF, 
  /* ABS: 007 Pixels @ 029,030 */ 0, 7, 0xE3, 0x14, 0x00, 0x00, 0x00, 0x58, 0xEB, 
  /* RLE: 024 Pixels @ 036,030 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,031 */ 0, 2, 0xE3, 0x46, 
  /* RLE: 004 Pixels @ 014,031 */ 4, 0x00, 
  /* ABS: 002 Pixels @ 018,031 */ 0, 2, 0x6A, 0xEB, 
  /* RLE: 008 Pixels @ 020,031 */ 8, 0xFF, 
  /* ABS: 002 Pixels @ 028,031 */ 0, 2, 0xE9, 0x62, 
  /* RLE: 004 Pixels @ 030,031 */ 4, 0x00, 
  /* ABS: 002 Pixels @ 034,031 */ 0, 2, 0x44, 0xE1, 
  /* RLE: 024 Pixels @ 036,031 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,032 */ 0, 2, 0xD9, 0x34, 
  /* RLE: 004 Pixels @ 014,032 */ 4, 0x00, 
  /* ABS: 003 Pixels @ 018,032 */ 0, 3, 0x0C, 0x6A, 0xE5, 
  /* RLE: 006 Pixels @ 021,032 */ 6, 0xFF, 
  /* ABS: 003 Pixels @ 027,032 */ 0, 3, 0xE3, 0x66, 0x0C, 
  /* RLE: 004 Pixels @ 030,032 */ 4, 0x00, 
  /* ABS: 002 Pixels @ 034,032 */ 0, 2, 0x32, 0xD9, 
  /* RLE: 024 Pixels @ 036,032 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,033 */ 0, 2, 0xD1, 0x24, 
  /* RLE: 006 Pixels @ 014,033 */ 6, 0x00, 
  /* ABS: 008 Pixels @ 020,033 */ 0, 8, 0x14, 0x74, 0xAB, 0xBD, 0xBD, 0xAD, 0x74, 0x12, 
  /* RLE: 006 Pixels @ 028,033 */ 6, 0x00, 
  /* ABS: 002 Pixels @ 034,033 */ 0, 2, 0x22, 0xD1, 
  /* RLE: 024 Pixels @ 036,033 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,034 */ 0, 2, 0xCB, 0x18, 
  /* RLE: 009 Pixels @ 014,034 */ 9, 0x00, 
  /* ABS: 002 Pixels @ 023,034 */ 0, 2, 0x04, 0x04, 
  /* RLE: 009 Pixels @ 025,034 */ 9, 0x00, 
  /* ABS: 002 Pixels @ 034,034 */ 0, 2, 0x14, 0xC9, 
  /* RLE: 024 Pixels @ 036,034 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,035 */ 0, 2, 0xC7, 0x0E, 
  /* RLE: 020 Pixels @ 014,035 */ 20, 0x00, 
  /* ABS: 002 Pixels @ 034,035 */ 0, 2, 0x0A, 0xC5, 
  /* RLE: 024 Pixels @ 036,035 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,036 */ 0, 2, 0xBF, 0x06, 
  /* RLE: 020 Pixels @ 014,036 */ 20, 0x00, 
  /* ABS: 002 Pixels @ 034,036 */ 0, 2, 0x04, 0xBB, 
  /* RLE: 024 Pixels @ 036,036 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,037 */ 0, 2, 0xB9, 0x02, 
  /* RLE: 021 Pixels @ 014,037 */ 21, 0x00, 
  /* RLE: 001 Pixels @ 035,037 */ 1, 0xB3, 
  /* RLE: 024 Pixels @ 036,037 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,038 */ 1, 0xB3, 
  /* RLE: 022 Pixels @ 013,038 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,038 */ 1, 0xAB, 
  /* RLE: 024 Pixels @ 036,038 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,039 */ 1, 0xA9, 
  /* RLE: 022 Pixels @ 013,039 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,039 */ 1, 0xA3, 
  /* RLE: 024 Pixels @ 036,039 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,040 */ 1, 0xA5, 
  /* RLE: 022 Pixels @ 013,040 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,040 */ 1, 0x9F, 
  /* RLE: 024 Pixels @ 036,040 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,041 */ 1, 0xA1, 
  /* RLE: 022 Pixels @ 013,041 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,041 */ 1, 0x9B, 
  /* RLE: 024 Pixels @ 036,041 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,042 */ 1, 0x9D, 
  /* RLE: 022 Pixels @ 013,042 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,042 */ 1, 0x99, 
  /* RLE: 024 Pixels @ 036,042 */ 24, 0xFF, 
  /* RLE: 001 Pixels @ 012,043 */ 1, 0x9B, 
  /* RLE: 022 Pixels @ 013,043 */ 22, 0x00, 
  /* RLE: 001 Pixels @ 035,043 */ 1, 0x97, 
  /* RLE: 024 Pixels @ 036,043 */ 24, 0xFF, 
  /* ABS: 002 Pixels @ 012,044 */ 0, 2, 0xAF, 0x12, 
  /* RLE: 020 Pixels @ 014,044 */ 20, 0x00, 
  /* ABS: 002 Pixels @ 034,044 */ 0, 2, 0x10, 0xAF, 
  /* RLE: 025 Pixels @ 036,044 */ 25, 0xFF, 
  /* ABS: 004 Pixels @ 013,045 */ 0, 4, 0xD7, 0x6A, 0x20, 0x06, 
  /* RLE: 014 Pixels @ 017,045 */ 14, 0x00, 
  /* ABS: 005 Pixels @ 031,045 */ 0, 5, 0x06, 0x20, 0x68, 0xD5, 0xFD, 
  /* RLE: 026 Pixels @ 036,045 */ 26, 0xFF, 
  /* ABS: 005 Pixels @ 014,046 */ 0, 5, 0xFD, 0xBF, 0x7E, 0x44, 0x0E, 
  /* RLE: 010 Pixels @ 019,046 */ 10, 0x00, 
  /* ABS: 005 Pixels @ 029,046 */ 0, 5, 0x0E, 0x44, 0x7C, 0xBF, 0xFD, 
  /* RLE: 030 Pixels @ 034,046 */ 30, 0xFF, 
  /* ABS: 016 Pixels @ 016,047 */ 0, 16, 0xF9, 0xE1, 0xC1, 0x95, 0x66, 0x3C, 0x26, 0x1A, 0x1A, 0x26, 0x3C, 0x66, 0x95, 0xC1, 0xE1, 0xF9, 
  /* RLE: 016 Pixels @ 032,047 */ 16, 0xFF, 
  0
};  // 1220 bytes for 2304 pixels

GUI_CONST_STORAGE GUI_BITMAP bmtouch = {
  48, // xSize
  48, // ySize
  48, // BytesPerLine
  GUI_COMPRESS_RLE8, // BitsPerPixel
  (unsigned char *)_actouch,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_RLEALPHA
};

/*************************** End of file ****************************/