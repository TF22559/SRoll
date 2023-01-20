/******************************************************************************
 * "troll_parLoader.h"
 *
 * This file has been generated by the ParLoader.
 * 
 * author:  Christan Madsen
 * date:    2015-04-03 (initial)
 * version: BETA
 *****************************************************************************/

#ifndef _TROLL_PARLOADER_H_
#define _TROLL_PARLOADER_H_


// *** START INCLUDE GUARD ****************************************************
// The following is common to all parLoader 'instance'.
#ifndef _PARLOADER_H_GUARD
#define _PARLOADER_H_GUARD

#define _PAR_TRUE (1)
#define _PAR_FALSE (0)

#endif
// *** END INCLUDE GUARD ******************************************************


// Below we automaticaly include the appropriate header defining parContent
// structure
#include "troll_param.h"


/*
  Allow to read all parameters from specified 'filename' and store
  corresponding values in the 'param' structure (which is describe in the
  associated header file).

  @param param the structure to be filled with parameters values read from file.
  @param filename the full pathname to the parameters file to be parsed.

  @return non zero value in case of error.
*/

int troll_readParam(troll_parContent *param, char *filename);


#endif
