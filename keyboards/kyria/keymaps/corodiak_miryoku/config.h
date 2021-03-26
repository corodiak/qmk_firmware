// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

// default but important
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD_PER_KEY

// Prevent accidental mod-taps when another key on the same hand is tapped during hold
#define BILATERAL_COMBINATIONS 500

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#define MASTER_RIGHT

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

#define XXX KC_NO

// #if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT_split_3x6_5( \
XXX, K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,   XXX,\
XXX, K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,   XXX,\
XXX, K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,   XXX,\
         XXX,   XXX,   K32,   K33,   K34,          K35,   K36,   K37,   XXX,   TG(GAME) \
)
