//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitDBWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDBWindow *DBWindow;
//---------------------------------------------------------------------------
__fastcall TDBWindow::TDBWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

