/*
 * Copyright (c) 2017 Fastly, Kazuho Oku
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */
#ifndef quicly_error_h
#define quicly_error_h

#include <stddef.h>

#define QUICLY_TRANSPORT_ERROR_BASE 1024
#define QUICLY_TRANSPORT_ERROR_CODE(n) (QUICLY_TRANSPORT_ERROR_BASE + (n))
#define QUICLY_ERROR_INVALID_PACKET_HEADER QUICLY_TRANSPORT_ERROR_CODE(0x3)
#define QUICLY_ERROR_INVALID_FRAME_DATA QUICLY_TRANSPORT_ERROR_CODE(0x4)
#define QUICLY_ERROR_CLOSED_CRITICAL_STREAM QUICLY_TRANSPORT_ERROR_CODE(0x7)
#define QUICLY_ERROR_MISSING_PAYLOAD QUICLY_TRANSPORT_ERROR_CODE(0x30)
#define QUICLY_ERROR_INVALID_STREAM_DATA QUICLY_TRANSPORT_ERROR_CODE(0x2e)
#define QUICLY_ERROR_UNENCRYPTED_STREAM_DATA QUICLY_TRANSPORT_ERROR_CODE(0x3d)
#define QUICLY_ERROR_DECRYPTION_FAILURE QUICLY_TRANSPORT_ERROR_CODE(0xc)
#define QUICLY_ERROR_TOO_MANY_OPEN_STREAMS QUICLY_TRANSPORT_ERROR_CODE(0x12)
#define QUICLY_ERROR_INVALID_VERSION QUICLY_TRANSPORT_ERROR_CODE(0x14)
#define QUICLY_ERROR_EMPTY_STREAM_FRAME_NO_FIN QUICLY_TRANSPORT_ERROR_CODE(0x32)
#define QUICLY_ERROR_VERSION_NEGOTIATION_MISMATCH (0x37)
#define QUICLY_ERROR_TBD (99999999)

#define QUICLY_INTERNAL_ERROR_BASE 1280
#define QUICLY_INTERNAL_ERROR_CODE(n) (QUICLY_INTERNAL_ERROR_BASE + (n))
#define QUICLY_ERROR_HANDSHAKE_TOO_LARGE QUICLY_INTERNAL_ERROR_CODE(1)
#define QUICLY_ERROR_PACKET_IGNORED QUICLY_INTERNAL_ERROR_CODE(2)

#define QUICLY_BUILD_ASSERT(condition) ((void)sizeof(char[2 * !!(!__builtin_constant_p(condition) || (condition)) - 1]))

#endif
