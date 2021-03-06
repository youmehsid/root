// @(#)root/gpad:$Id$
// Author: Rene Brun   01/07/96

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TGroupButton
#define ROOT_TGroupButton


#ifndef ROOT_TButton
#include "TButton.h"
#endif

class TGroupButton : public TButton {

private:
   TGroupButton(const TGroupButton &org);  // no copy, use TObject::Clone()
   TGroupButton &operator=(const TGroupButton &rhs);  // idem

public:
   TGroupButton();
   TGroupButton(const char *groupname, const char *title, const char *method, Double_t x1, Double_t y1,Double_t x2 ,Double_t y2);
   virtual ~TGroupButton();
   virtual void  DisplayColorTable(const char *action, Double_t x0, Double_t y0, Double_t wc, Double_t hc);
   virtual void  ExecuteAction();
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void  SavePrimitive(std::ostream &out, Option_t *option = "");
   ClassDef(TGroupButton,0)  //A user interface button in a group of buttons.
};

#endif

