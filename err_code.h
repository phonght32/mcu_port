#ifndef __ERR_PORT_H__
#define __ERR_PORT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"

#define ERR_CODE_SUCCESS 	HAL_OK
#define ERR_CODE_FAIL 		HAL_ERROR
#define ERR_CODE_NULL_PTR 	(uint32_t)0xFFFE

typedef uint32_t err_code_t;

#ifdef __cplusplus
}
#endif

#endif  /* __ERR_PORT_H__ */




