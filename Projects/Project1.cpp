//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitCriminalWindow.cpp", CriminalWindow);
USEFORM("UnitGangSquadWindow.cpp", GangSquadWindow);
USEFORM("UnitMainWindow.cpp", MainWindow);
USEFORM("UnitSearchCriminalWindow.cpp", SearchCriminalWindow);
USEFORM("UnitAddCriminalWindow.cpp", AddCriminalWindow);
USEFORM("UnitAddGangSquadWindow.cpp", AddGangSquadWindow);
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
