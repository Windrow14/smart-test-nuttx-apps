/****************************************************************************
 * apps/crypto/openssl_mbedtls_wrapper/include/openssl/mem.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 ****************************************************************************/

#ifndef OPENSSL_MBEDTLS_WRAPPER_MEM_H
#define OPENSSL_MBEDTLS_WRAPPER_MEM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <openssl/base.h>

#ifdef __cplusplus
extern "C"
{
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/* CRYPTO_memcmp returns zero iff the |len| bytes at
 * |a| and |b| are equal. It takes an amount of time
 * dependent on |len|, but independent of the contents
 * of |a| and |b|. Unlike memcmp, it cannot be used to
 * put elements into a defined order as the return value
 * when a != b is undefined, other than to be non-zero.
 */

int CRYPTO_memcmp(const void *a, const void *b, size_t len);

void OPENSSL_free(void *ptr);

#ifdef __cplusplus
}
#endif

#endif /* OPENSSL_MBEDTLS_WRAPPER_MEM_H */