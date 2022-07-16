//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitDBWindow.h"
#include "UnitAddCriminalAndSquadWindow.h"
#include "UnitSearchWindow.h"
#include "UnitArchiveWindow.h"
#include "UnitHelp.h"

#include "UnitMainWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainWindow *MainWindow;
//---------------------------------------------------------------------------
__fastcall TMainWindow::TMainWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button1Click(TObject *Sender)
{
  ArchiveWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button2Click(TObject *Sender)
{
  DBWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button3Click(TObject *Sender)
{
  AddCriminalAndSquadWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button4Click(TObject *Sender)
{
  SearchWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button5Click(TObject *Sender)
{
  HelpWindow->Show();
}
//---------------------------------------------------------------------------
