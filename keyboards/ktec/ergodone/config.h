// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// TODO: handle matrix_size.cols and matrix_size.rows for custom matrix
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 6

#define QMK_ESC_OUTPUT B4 // usually COL
#define QMK_ESC_INPUT F4 // usually ROW
#define QMK_LED B5
