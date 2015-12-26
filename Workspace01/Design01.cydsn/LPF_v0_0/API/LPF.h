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

#ifndef LPF_`$INSTANCE_NAME`_H
#define LPF_`$INSTANCE_NAME`_H

#include "cytypes.h"
#include "cyfitter.h"

`#DECLARE_ENUM LPF_CUT_OFF`
enum `$INSTANCE_NAME`_CUTOFF_FREQ {
	`$INSTANCE_NAME`_15kHz = `$INSTANCE_NAME`__LPF_15KHZ,
	`$INSTANCE_NAME`_30kHz = `$INSTANCE_NAME`__LPF_30KHZ,
	`$INSTANCE_NAME`_76kHz = `$INSTANCE_NAME`__LPF_76KHZ,
	`$INSTANCE_NAME`_153kHz = `$INSTANCE_NAME`__LPF_153KHZ
};

void `$INSTANCE_NAME`_Start();
void `$INSTANCE_NAME`_SetCutoffFreq(enum `$INSTANCE_NAME`_CUTOFF_FREQ);

#endif // LPF_`$INSTANCE_NAME`_H

/* [] END OF FILE */
