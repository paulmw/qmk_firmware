/* Copyright 2021 Paul Wilkinson
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k11, k21, k31, k41, k51, k54, k44, k34, k24, k14, \
    k12, k22, k32, k42, k52, k55, k45, k35, k25, k15, \
    k13, k23, k33, k43, k53, k57, k47, k37, k27, k17, \
    k16, k26, k36, k46, k56, k58, k48, k38, k28, k18 \
) { \
    { k11, k21, k31, k41, k51 }, \
    { k12, k22, k32, k42, k52 }, \
    { k13, k23, k33, k43, k53 }, \
    { k14, k24, k34, k44, k54 }, \
    { k15, k25, k35, k45, k55 }, \
    { k16, k26, k36, k46, k56 }, \
    { k17, k27, k37, k47, k57 }, \
    { k18, k28, k38, k48, k58 } \
}
