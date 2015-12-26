/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "`$INSTANCE_NAME`.h"

#define `$INSTANCE_NAME`_CR_MASK (`$INSTANCE_NAME`__LPF_15KHZ | `$INSTANCE_NAME`__LPF_30KHZ | `$INSTANCE_NAME`__LPF_76KHZ | `$INSTANCE_NAME`__LPF_153KHZ)

void `$INSTANCE_NAME`_Start() {
	`$INSTANCE_NAME`_SetCutoffFreq((enum `$INSTANCE_NAME`_CUTOFF_FREQ)`$CutOffFreq`);
}

void `$INSTANCE_NAME`_SetCutoffFreq(const enum `$INSTANCE_NAME`_CUTOFF_FREQ cutoff) {
	const void CYFAR *pCR = (void CYFAR*)`$INSTANCE_NAME`_lpf_1__CR0;
	const uint8 nextCR = (CY_GET_XTND_REG8(pCR) & ~`$INSTANCE_NAME`_CR_MASK) | cutoff;
	CY_SET_XTND_REG8(pCR, nextCR);
}

/* [] END OF FILE */
