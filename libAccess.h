 /* 
  * Copyright (C) FrSky Electronic Co., Ltd. - All Rights Reserved 
  * 
  * This library is only allowed to run on FrSky products.
  * Any other product needing this library file must obtain FrSky's permission first.
  *
  */

#ifndef _ACCESS_LIB_H_
#define _ACCESS_LIB_H_

#include <inttypes.h>

extern "C" uint8_t accessCRL(uint8_t mode, const uint8_t * input, uint8_t * output);

#endif // _ACCESS_LIB_H_
