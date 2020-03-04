
/** @struct sl_tcramBase
*   @brief TCRAM Wrapper Register Frame Definition
*
*   This type is used to access the TCRAM Wrapper Registers.
*/
#ifndef __HAL_TCMRAM_H__
#define __HAL_TCMRAM_H__

#include <sl_reg_tcram.h>

#define TCRAM_RAMCTRL_ADDR_PARITY_OVER 				(uint32)(0xDu << 24u)
#define TCRAM_RAMCTRL_ADDR_PARITY_OVRRIDE_MASK 		(uint32)(0xFu << 24u)
/*macro names changed so as to adhere to misra rule MISRA-C:2004 5.1 */
#define TCRAM_RAMCTRL_ADDR_PAR_DIS_START 			(uint32)16u
/*macro names changed so as to adhere to misra rule MISRA-C:2004 5.1 */
#define TCRAM_RAMCTRL_ADDR_PAR_DIS_LENGTH 			(uint32)4u
#define TCRAM_RAMCTRL_ECC_DETECT_EN_START 			(uint32)0u
#define TCRAM_RAMCTRL_ECC_DETECT_EN_LENGTH 			(uint32)4u
#define TCRAM_RAMCTRL_ECCWREN 						(uint32)(1u << 8u)

#define TCRAM_RAMERRSTATUS_WADDR_PAR_FAIL 			(uint32)(1u << 9u)
#define TCRAM_RAMERRSTATUS_RADDR_PAR_FAIL 			(uint32)(1u << 8u)
#define TCRAM_RAMERRSTATUS_DER 						(uint32)(1u << 5u)
#define TCRAM_RAMERRSTATUS_ADDR_CMP_LG_FAIL 		(uint32)(1u << 4u)
#define TCRAM_RAMERRSTATUS_ADDR_DEC_FAIL 			(uint32)(1u << 2u)

#define TCRAM_RAMERRSTATUS_ADDR_SERR 				(uint32)(1u << 0u)
#define TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS

#define TCRAM_RAMUERRADDR_UNC_ERROR_ADDR 			(uint32)0x3FFFFU

#define SRAM_ADDR_PARITY_DISABLED 					(uint32)0xAU
#define SRAM_ECC_DISABLED 							(uint32)0x5U

#define TCRAM_SYN_1BIT_DATA_ECC    		       		((uint64)0xCECECECECECECECEU)/*this corrupts the ecc for data bit 0*/
#define TCRAM_SYN_2BIT_DATA_ECC  			 	 	((uint64)0x0303030303030303U)/* this corrupts the ecc for 2 bit error*/

#define TCRAM_RAMTHRESHOLD_FOR_TEST 				(uint32)5u


#define TCRAM_RAMTEST_TST_TRIGGER 					(uint32)((uint32)1u << 8u)

#endif /* __HAL_TCMRAM_H__ */
