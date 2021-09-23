//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES.
//

/***
*string.h - declarations for string manipulation functions
*
*Purpose:
*       This file contains the function declarations for the string
*       manipulation functions.
*       [ANSI/System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_STRING
#define _INC_STRING

#include <stdlib.h> // STDLIB is included for legacy reasons.  It contains the "old" function declarations.

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef _NLSCMP_DEFINED
#define _NLSCMPERROR    2147483647  /* currently == INT_MAX */
#define _NLSCMP_DEFINED
#endif

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

/* For backwards compatibility */
#define _WConst_return _CONST_RETURN

/* Function prototypes */

#if __STDC_WANT_SECURE_LIB__
_CRTIMP   errno_t  __cdecl memcpy_s(__out_bcount_part_opt(_DstSize, _MaxCount) void * _Dst, __in rsize_t _DstSize, __in_bcount_opt(_MaxCount) const void * _Src, __in rsize_t _MaxCount);
#endif

_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl _strset_s(__inout_ecount_z(_DstSize) char * _Dst, __in size_t _DstSize, __in int _Value);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strcpy_s(__out_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, strcpy_s, __out_ecount_z(_Size) char, _Dest, __in_z const char *, _Source)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strcat_s(__inout_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, strcat_s, __inout_ecount_z(_Size) char, _Dest, __in_z const char *, _Source)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(char *, __RETURN_POLICY_DST, __EMPTY_DECLSPEC, strcat, __inout_z char, _Dest, __in_z const char *, _Source)
_CRTIMP __checkReturn size_t  __cdecl strnlen(__in_ecount_z(_MaxCount)  const char * _Str, __in size_t _MaxCount);
#if __STDC_WANT_SECURE_LIB__ && !defined (__midl)
static __inline __checkReturn size_t  __CRTDECL strnlen_s(__in_ecount_z(_MaxCount)  const char * _Str, __in size_t _MaxCount)
{
    return strnlen(_Str, _MaxCount);
}
#endif
#if __STDC_WANT_SECURE_LIB__
_CRTIMP __checkReturn_wat errno_t __cdecl memmove_s(__out_bcount_part_opt(_DstSize,_MaxCount) void * _Dst, __in rsize_t _DstSize, __in_bcount_opt(_MaxCount) const void * _Src, __in rsize_t _MaxCount);
#endif

_CRTIMP __checkReturn_wat errno_t __cdecl _strlwr_s(__inout_ecount_z(_Size) char * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strlwr_s, __inout_ecount_z(_Size) char, _String)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strncat_s(__inout_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, strncat_s, __inout_ecount_z(_Size) char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strncpy_s(__out_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z_opt const char * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, strncpy_s, __out_ecount(_Size) char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl _strnset_s(__inout_ecount_z(_Size) char * _Str, __in size_t _Size, __in int _Val, __in size_t _MaxCount);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn char *  __cdecl strtok_s(__inout_z_opt char * _Str, __in_z const char * _Delim, __deref_inout_z_opt char ** _Context);
#endif
_CRTIMP __checkReturn_wat errno_t __cdecl _strupr_s(__inout_ecount_z(_Size) char * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strupr_s, __inout_ecount_z(_Size) char, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _strupr, __inout_z char, _String)

/* wide function prototypes */

#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcscat_s(__inout_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, const wchar_t * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, wcscat_s, __inout_ecount_z(_Size) wchar_t, _Dest, __in_z const wchar_t *, _Source)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcscpy_s(__out_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, wcscpy_s, __out_ecount(_Size) wchar_t, _Dest, __in_z const wchar_t *, _Source)
_CRTIMP __checkReturn size_t __cdecl wcsnlen(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount);
#if __STDC_WANT_SECURE_LIB__ && !defined (__midl)
static __inline __checkReturn size_t __CRTDECL wcsnlen_s(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount)
{
    return wcsnlen(_Src, _MaxCount);
}
#endif
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcsncat_s(__inout_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, wcsncat_s, __inout_ecount_z(_Size) wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcsncpy_s(__out_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, wcsncpy_s, __out_ecount(_Size) wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn wchar_t * __cdecl wcstok_s(__inout_z_opt wchar_t * _Str, __in_z const wchar_t * _Delim, __deref_inout_z_opt wchar_t ** _Context);
#endif

_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl _wcsnset_s(__inout_ecount_z(_DstSizeInWords) wchar_t * _Dst, __in size_t _DstSizeInWords, wchar_t _Val, __in size_t _MaxCount);
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl _wcsset_s(__inout_ecount_z(_SizeInWords) wchar_t * _Str, __in size_t _SizeInWords, wchar_t _Val);

_CRTIMP __checkReturn_wat errno_t __cdecl _wcslwr_s(__inout_ecount_z(_SizeInWords) wchar_t * _Str, __in size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wcslwr_s, __inout_ecount_z(_Size) wchar_t, _String)
_CRTIMP __checkReturn_wat errno_t __cdecl _wcsupr_s(__inout_ecount_z(_Size) wchar_t * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wcsupr_s, __inout_ecount_z(_Size) wchar_t, _String)

#ifdef  __cplusplus
}
#endif

#endif  /* _INC_STRING */

