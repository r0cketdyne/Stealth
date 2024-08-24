////////////////////////////////////////////////////////////////////////////////
// core-hashes.hpp
//
// Copyright (c) 2024 Stealth R&D LLC
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
////////////////////////////////////////////////////////////////////////////////

/******************************************************************************
 * The intent of core-hashes is to provide a standard interface for hashes
 *    sha256, sha1, and ripemd160, to mitigate breakage resulting from
 *    OpenSSL's ever-changing lower-level APIs.
 *
 * Parameters:
 *    `pdata` : pointer to data
 *    `nbytes` : length of data at `pdata`
 *    `pdigest` : pointer to digest, which must have at least 20 bytes of space
 *
 * Returns:
 *    size of the digest in bytes (`size_t`)
 ******************************************************************************/

#pragma once

#include <stddef.h>

// sizes in bytes
#define SHA256_SIZE 32
#define SHA1_SIZE 20
#define RIPEMD160_SIZE 20

namespace CoreHashes
{


unsigned int SHA256(const unsigned char* pdata,
                    unsigned int nbytes,
                    unsigned char* pdigest);

unsigned int SHA1(const unsigned char* pdata,
                  unsigned int nbytes,
                  unsigned char* pdigest);

unsigned int RIPEMD160(const unsigned char* pdata,
                       unsigned int nbytes,
                       unsigned char* pdigest);

}  // namespace CoreHashes

