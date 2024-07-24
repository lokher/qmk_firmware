/* Copyright 2020 Nick Brassel (tzarc)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include_next <board.h>

// Force B9 as input to align with qmk defaults
#undef VAL_GPIOB_MODER
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(0) |           \
                                     PIN_MODE_INPUT(1) |           \
                                     PIN_MODE_INPUT(2) |           \
                                     PIN_MODE_ALTERNATE(3) |        \
                                     PIN_MODE_INPUT(4) |           \
                                     PIN_MODE_INPUT(5) |           \
                                     PIN_MODE_INPUT(6) | \
                                     PIN_MODE_INPUT(7) |           \
                                     PIN_MODE_INPUT(8) |           \
                                     PIN_MODE_INPUT(7) | \
                                     PIN_MODE_ALTERNATE(8) |\
                                     PIN_MODE_INPUT(11) |          \
                                     PIN_MODE_INPUT(12) |          \
                                     PIN_MODE_INPUT(13) |          \
                                     PIN_MODE_INPUT(14) |          \
                                     PIN_MODE_INPUT(15))

#undef VAL_GPIOB_PUPDR
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(0) |         \
                                     PIN_PUPDR_PULLUP(1) |         \
                                     PIN_PUPDR_PULLUP(2) |         \
                                     PIN_PUPDR_PULLUP(3) |          \
                                     PIN_PUPDR_PULLUP(4) |         \
                                     PIN_PUPDR_PULLUP(5) |         \
                                     PIN_PUPDR_PULLUP(6) |\
                                     PIN_PUPDR_PULLUP(7) |         \
                                     PIN_PUPDR_PULLUP(8) |         \
                                     PIN_PUPDR_PULLUP(9) |\
                                     PIN_PUPDR_FLOATING(10) |\
                                     PIN_PUPDR_PULLUP(11) |        \
                                     PIN_PUPDR_PULLUP(12) |        \
                                     PIN_PUPDR_PULLUP(13) |        \
                                     PIN_PUPDR_PULLUP(14) |        \
                                     PIN_PUPDR_PULLUP(15))

#undef VAL_GPIOB_AFRL
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(0, 0U) |          \
                                     PIN_AFIO_AF(1, 0U) |          \
                                     PIN_AFIO_AF(2, 0U) |          \
                                     PIN_AFIO_AF(3, 0U) |           \
                                     PIN_AFIO_AF(4, 0U) |          \
                                     PIN_AFIO_AF(5, 0U) |          \
                                     PIN_AFIO_AF(6, 0) | \
                                     PIN_AFIO_AF(7, 0U))

#undef VAL_GPIOB_AFRH
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(8, 0U) |          \
                                     PIN_AFIO_AF(9, 0) | \
                                     PIN_AFIO_AF(10, 5U) |\
                                     PIN_AFIO_AF(11, 0U) |         \
                                     PIN_AFIO_AF(12, 0U) |         \
                                     PIN_AFIO_AF(13, 0U) |         \
                                     PIN_AFIO_AF(14, 0U) |         \
                                     PIN_AFIO_AF(15, 0U))

#undef STM32_HSE_BYPASS
