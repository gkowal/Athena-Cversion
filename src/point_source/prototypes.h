#ifndef POINT_SOURCE_PROTOTYPES_H
#define POINT_SOURCE_PROTOTYPES_H 
#include "../copyright.h"
/*==============================================================================
 * FILE: prototypes.h
 *
 * PURPOSE: Prototypes for all public functions in the /src/point_source dir
 *============================================================================*/

#include <stdarg.h>
#include "../athena.h"
#include "../defs.h"
#include "../config.h"

#ifdef POINT_SOURCE

void init_point_source(MeshS *pM);
void build_source_trees(MeshS *pM);
void point_source_transfer(DomainS *pD);

#ifdef PHOTOIONIZATION
void init_photoionization(MeshS *pM);
void photoionization(MeshS *pM);
#endif /* PHOTOIONIZATION */
#endif /* POINT_SOURCE */
#endif /* POINT_SOURCE_PROTOTYPES_H */
