//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitCriminalWindow.h"
#include "UnitGangSquadWindow.h"
#include "UnitAddGangSquadWindow.h"
#include "UnitAddCriminalWindow.h"
#include "UnitSearchCriminalWindow.h"
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
void __fastcall TMainWindow::Button2Click(TObject *Sender)
{
  GangSquadWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button3Click(TObject *Sender)
{
  AddGangSquadWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button4Click(TObject *Sender)
{
  AddCriminalWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button1Click(TObject *Sender)
{
  CriminalWindow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::Button5Click(TObject *Sender)
{
  HelpWindow->Show();
}
//---------------------------------------------------------------------------
