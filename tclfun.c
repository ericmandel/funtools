#include <tclmainlib.h>


int funcalc_main _PRx((int argc, char **argv));
int funcen_main _PRx((int argc, char **argv));
int funcnts_main _PRx((int argc, char **argv));
int funcone_main _PRx((int argc, char **argv));
int fundisp_main _PRx((int argc, char **argv));
int funhead_main _PRx((int argc, char **argv));
int funhist_main _PRx((int argc, char **argv));
int funimage_main _PRx((int argc, char **argv));
int funmerge_main _PRx((int argc, char **argv));
int funtable_main _PRx((int argc, char **argv));
int funjoin_main _PRx((int argc, char **argv));

#include <tcl.h>

int Tclfun_Init (void *vinterp)
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;

  Tcl_CreateObjCommand(interp, "funcalc", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funcen", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funcnts", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funcone", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "fundisp", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funhead", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funhist", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funimage", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funmerge", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funtable", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funjoin", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "mainlib", MainLibProcess_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "mainlibcleanup", MainLibProcessCleanup_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "mainlibload", MainLibLoad_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_PkgProvide(interp, "tclfun", "1.0");
  return(TCL_OK);
}

