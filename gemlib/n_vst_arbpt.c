
#include "gemx.h"


short
vst_arbpt (short handle, short point, short *wchar, short *hchar, short *wcell,
	   short *hcell)
{
	vdi_intin[0] = point;
	vdi_control[0] = 246;
	vdi_control[1] = 0;
	vdi_control[3] = 1;
	vdi_control[5] = 0;
	vdi_control[6] = handle;

	vdi (&vdi_params);

	*wchar = vdi_ptsout[0];
	*hchar = vdi_ptsout[1];
	*wcell = vdi_ptsout[2];
	*hcell = vdi_ptsout[3];
	return vdi_intout[0];
}

/*
 * * NOTE: requires NVDI version 3.x or higher
 */