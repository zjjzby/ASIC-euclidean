#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReportNoSource1(const char *, const char *);

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */

#ifndef __VCS_IMPORT_DPI_STUB_gcdfunc
#define __VCS_IMPORT_DPI_STUB_gcdfunc
__attribute__((weak)) long long gcdfunc(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcdfunc");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcdfunc");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcdfunc */

#ifndef __VCS_IMPORT_DPI_STUB_gcd
#define __VCS_IMPORT_DPI_STUB_gcd
__attribute__((weak)) long long gcd(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcd");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcd");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcd */


#ifdef __cplusplus
}
#endif

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReportNoSource1(const char *, const char *);

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */

#ifndef __VCS_IMPORT_DPI_STUB_gcdfunc
#define __VCS_IMPORT_DPI_STUB_gcdfunc
__attribute__((weak)) long long gcdfunc(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcdfunc");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcdfunc");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcdfunc */

#ifndef __VCS_IMPORT_DPI_STUB_gcd
#define __VCS_IMPORT_DPI_STUB_gcd
__attribute__((weak)) long long gcd(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcd");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcd");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcd */


#ifdef __cplusplus
}
#endif

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReportNoSource1(const char *, const char *);

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */

#ifndef __VCS_IMPORT_DPI_STUB_gcdfunc
#define __VCS_IMPORT_DPI_STUB_gcdfunc
__attribute__((weak)) long long gcdfunc(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcdfunc");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcdfunc");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcdfunc */

#ifndef __VCS_IMPORT_DPI_STUB_gcd
#define __VCS_IMPORT_DPI_STUB_gcd
__attribute__((weak)) long long gcd(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "gcd");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        vcsMsgReportNoSource1("DPI-DIFNF", "gcd");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_gcd */


#ifdef __cplusplus
}
#endif

