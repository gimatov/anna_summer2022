//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitArchiveWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TArchiveWindow *ArchiveWindow;
//---------------------------------------------------------------------------
__fastcall TArchiveWindow::TArchiveWindow(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
