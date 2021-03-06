/* Tests for aarch64 vector math routines.
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include "test-float-vlen4.h"

#define VEC_TYPE __Float32x4_t

VECTOR_WRAPPER (WRAPPER_NAME (cosf), _ZGVnN4v_cosf)
VECTOR_WRAPPER (WRAPPER_NAME (expf), _ZGVnN4v_expf)
VECTOR_WRAPPER (WRAPPER_NAME (exp2f), _ZGVnN4v_exp2f)
VECTOR_WRAPPER (WRAPPER_NAME (exp10f), _ZGVnN4v_exp10f)
VECTOR_WRAPPER (WRAPPER_NAME (logf), _ZGVnN4v_logf)
VECTOR_WRAPPER (WRAPPER_NAME (log2f), _ZGVnN4v_log2f)
VECTOR_WRAPPER (WRAPPER_NAME (log10f), _ZGVnN4v_log10f)
VECTOR_WRAPPER (WRAPPER_NAME (sinf), _ZGVnN4v_sinf)
VECTOR_WRAPPER_ff (WRAPPER_NAME (powf), _ZGVnN4vv_powf)
