/* begin simpleDSP_fft.h */
#ifndef _SIMPLEDSP_FFT_H
#define _SIMPLEDSP_FFT_H

#include "simpleDSP_Global.h"

#ifdef __cplusplus
 extern "C" {
#endif

void FFT(COMPLEX *Y, int N);
void IFFT(COMPLEX *Y, int N);

#ifdef __cplusplus
}
#endif

#endif /* end simpleDSP_fft.h */
