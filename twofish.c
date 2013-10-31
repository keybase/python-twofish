/*-
 * Copyright 2013 Keybase
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

 #include <Python.h>

 #include "twofish.h"

 #if !defined(DL_EXPORT)

 #if defined(HAVE_DECLSPEC_DLL)
 #define DL_EXPORT(type) __declspec(dllexport) type
 #else
 #define DL_EXPORT(type) type
 #endif

 #endif


 /* Exported trampolines */
 DL_EXPORT(void) exp_Twofish_initialise() {
     Twofish_initialise();
 }

 DL_EXPORT(void) exp_Twofish_prepare_key(uint8_t key[], int key_len, Twofish_key * xkey) {
     Twofish_prepare_key(key, key_len, xkey);
 }

 DL_EXPORT(void) exp_Twofish_encrypt(Twofish_key * xkey, uint8_t p[16], uint8_t c[16]) {
     Twofish_encrypt(xkey, p, c);
 }

 DL_EXPORT(void) exp_Twofish_decrypt(Twofish_key * xkey, uint8_t c[16], uint8_t p[16]) {
     Twofish_decrypt(xkey, c, p);
 }

 /*
   We need a stub init_twofish function so the module will link as a proper module.

   Do not import _twofish from python; it will not work since _twofish is not a *real* module
 */
 PyMODINIT_FUNC init_twofish(void) { }
 PyMODINIT_FUNC PyInit__twofish(void) { }
