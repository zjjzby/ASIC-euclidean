#include "svdpi.h"
#include "DirectC.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifndef _IMPORT_DPI_PROTOTYPE_gcd_
#define _IMPORT_DPI_PROTOTYPE_gcd_
extern long long int  gcd(long long int A0,
	 long long int A1);
#endif
#ifdef __cplusplus
} /*extern "C" */
#endif
#ifndef _DPI_WRAPPER_DPICW__VCSgd_testbench_1_gcd_0x2a
#define _DPI_WRAPPER_DPICW__VCSgd_testbench_1_gcd_0x2a
#ifdef __cplusplus
extern "C" {
#endif
void  DPICW__VCSgd_testbench_1_gcd_0x2a(U* res,U*  A0,U*  A1)
{

long long int gcd_LLI_res;
long long int A0_LLI;
long long int A1_LLI;

A0_LLI = ConvUP2LLI(A0);
A1_LLI = ConvUP2LLI(A1);

gcd_LLI_res = gcd(A0_LLI,A1_LLI);

if (res) ConvLLI2UP(gcd_LLI_res, res);


}
#ifdef __cplusplus
} /*extern "C" */
#endif
#endif
