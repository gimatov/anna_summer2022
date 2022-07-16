//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitHelp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THelpWindow *HelpWindow;
//---------------------------------------------------------------------------
__fastcall THelpWindow::THelpWindow(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
