/*
 * Copyright (C) 2011, British Broadcasting Corporation
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the British Broadcasting Corporation nor the names
 *       of its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <cstring>

#include <libMXF++/MXFTypes.h>

using namespace std;



bool operator == (const mxfKey &left, const mxfKey &right)
{
    return memcmp(&left, &right, sizeof(left)) == 0;
}

bool operator != (const mxfKey &left, const mxfKey &right)
{
    return memcmp(&left, &right, sizeof(left)) != 0;
}

bool operator < (const mxfKey &left, const mxfKey &right)
{
    return memcmp(&left, &right, sizeof(left)) < 0;
}

bool operator == (const mxfUUID &left, const mxfUUID &right)
{
    return memcmp(&left, &right, sizeof(left)) == 0;
}

bool operator != (const mxfUUID &left, const mxfUUID &right)
{
    return memcmp(&left, &right, sizeof(left)) != 0;
}

bool operator < (const mxfUUID &left, const mxfUUID &right)
{
    return memcmp(&left, &right, sizeof(left)) < 0;
}

bool operator == (const mxfRational &left, const mxfRational &right)
{
    if (left.numerator == 0)
        return (right.numerator == 0);
    else if (right.numerator == 0)
        return (left.numerator == 0);
    else
        return (int64_t)left.numerator * right.denominator == (int64_t)right.numerator * left.denominator;
}

bool operator != (const mxfRational &left, const mxfRational &right)
{
    return !(left == right);
}

bool operator == (const mxfUMID &left, const mxfUMID &right)
{
    return memcmp(&left, &right, sizeof(left)) == 0;
}

bool operator != (const mxfUMID &left, const mxfUMID &right)
{
    return memcmp(&left, &right, sizeof(left)) != 0;
}

bool operator < (const mxfUMID &left, const mxfUMID &right)
{
    return memcmp(&left, &right, sizeof(left)) < 0;
}

bool operator == (const mxfExtendedUMID &left, const mxfExtendedUMID &right)
{
    return memcmp(left.bytes, right.bytes, sizeof(left.bytes)) == 0;
}

bool operator != (const mxfExtendedUMID &left, const mxfExtendedUMID &right)
{
    return memcmp(left.bytes, right.bytes, sizeof(left.bytes)) != 0;
}

bool operator < (const mxfExtendedUMID &left, const mxfExtendedUMID &right)
{
    return memcmp(left.bytes, right.bytes, sizeof(left.bytes)) < 0;
}

