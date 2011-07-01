#ifndef GUARD_PLTU_h
#define GUARD_PLTU_h

// This is a namespace with some random utility function for PLT analysis.
// The kind of things I might put here are loosely related to the PLT
// but useful for many analysis..  a common space, for very general functions
// VERY GENERAL => translate: Don't put specific crap here, that crap goes elsewhere
//
// This is for function declarations


#include "TH1F.h"
#include "TH2F.h"
#include "TStyle.h"
#include "TROOT.h"


namespace PLTU
{
  extern const int FIRSTCOL;
  extern const int LASTCOL;
  extern const int FIRSTROW;
  extern const int LASTROW;
  extern const int NCOL;
  extern const int NROW;
  Double_t PoissonFit(Double_t* x, Double_t* par);
  void SetStyle ();

  TH1F* HistFrom2D(TH2F*, TString const NewName = "");
}






















#endif