

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "stm32f429xx.h"
#include "reg_util.h"

void System_Clock_Setup(void);

int main(void)
{
    /* Loop forever */
	for(;;);
}

void System_Clock_Setup(void)
{

}
