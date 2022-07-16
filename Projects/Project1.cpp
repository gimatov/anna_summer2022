//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitAddGangSquadWindow.cpp", AddGangSquadWindow);
USEFORM("UnitAddCriminalWindow.cpp", AddCriminalWindow);
USEFORM("UnitCriminalWindow.cpp", CriminalWindow);
USEFORM("UnitSearchCriminalWindow.cpp", SearchCriminalWindow);
USEFORM("UnitMainWindow.cpp", MainWindow);
USEFORM("UnitGangSquadWindow.cpp", GangSquadWindow);
USEFORM("UnitHelp.cpp", HelpWindow);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainWindow), &MainWindow);
         Application->CreateForm(__classid(TCriminalWindow), &CriminalWindow);
         Application->CreateForm(__classid(TGangSquadWindow), &GangSquadWindow);
         Application->CreateForm(__classid(TAddGangSquadWindow), &AddGangSquadWindow);
         Application->CreateForm(__classid(TAddCriminalWindow), &AddCriminalWindow);
         Application->CreateForm(__classid(TSearchCriminalWindow), &SearchCriminalWindow);
         Application->CreateForm(__classid(THelpWindow), &HelpWindow);
         Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
