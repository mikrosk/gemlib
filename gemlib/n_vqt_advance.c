
#include "gemx.h"


void
vqt_advance (short handle, short ch, short *advx, short *advy, short *xrem, short *yrem)
{
	vdi_intin[0] = ch;

	vdi_control[0] = 247;
	vdi_control[1] = 0;
	vdi_control[3] = 1;
	vdi_control[5] = 0;
	vdi_control[6] = handle;

	vdi (&vdi_params);

	*advx = vdi_ptsout[0];
	*advy = vdi_ptsout[1];
	*xrem = vdi_ptsout[2];
	*yrem = vdi_ptsout[3];
}

/*
 * * NOTE: requires NVDI version 3.x or higher
 */