#ifndef INTEGRATORS_PROTOTYPES_H
#define INTEGRATORS_PROTOTYPES_H 
#include "../copyright.h"
/*==============================================================================
 * FILE: prototypes.h
 *
 * PURPOSE: Prototypes for all public functions in the /src/integrators dir
 *============================================================================*/
#include <stdio.h>
#include <stdarg.h>
#include "../athena.h"
#include "../defs.h"

#include "../config.h"

/* integrate.c */
VDFun_t integrate_init(MeshS *pM);
void integrate_destruct(void);

/* Only used for rad_hydro integrators */
#ifdef rad_hydro
void rad_hydro_init_1d(int Ngrids, MeshS *pM);
void rad_hydro_destruct_1d(int Ngrids);
/* General LU decomposition functions */
void ludcmp(Real **a, int n, int *indx, Real *d);
void lubksb(Real **a, int n, int *indx, Real b[]);
/* Matrix solver for band diagnol equations */
void bandec(Real **a, unsigned long n, int m1, int m2, Real **al,
	unsigned long indx[], Real *d);
void banbks(Real **a, unsigned long n, int m1, int m2, Real **al,
	unsigned long indx[], Real b[]);
#endif

/* integrate_1d_ctu.c and integrate_1d_vl.c */
void integrate_destruct_1d(void);
void integrate_init_1d(MeshS *pM);
void integrate_1d_ctu(DomainS *pD);
void integrate_1d_vl(DomainS *pD);

#ifdef rad_hydro
void integrate_1d_radMHD(DomainS *pD);
void BackEuler(MeshS *pM);
#endif

/* integrate_2d_ctu.c and integrate_2d_vl.c */
void integrate_destruct_2d(void);
void integrate_init_2d(MeshS *pM);
void integrate_2d_ctu(DomainS *pD);
void integrate_2d_vl(DomainS *pD);
void integrate_2d_radMHD(DomainS *pD);

/* integrate_3d_ctu.c and integrate_3d_vl.c */
void integrate_destruct_3d(void);
void integrate_init_3d(MeshS *pM);
void integrate_3d_ctu(DomainS *pD);
void integrate_3d_vl(DomainS *pD);
void integrate_3d_radMHD(DomainS *pD);

#endif /* INTEGRATORS_PROTOTYPES_H */
