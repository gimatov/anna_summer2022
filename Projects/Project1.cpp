//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitDBWindow.cpp", DBWindow);
USEFORM("UnitAddCriminalAndSquadWindow.cpp", AddCriminalAndSquadWindow);
USEFORM("UnitSearchWindow.cpp", SearchWindow);
USEFORM("UnitMainWindow.cpp", MainWindow);
USEFORM("UnitHelp.cpp", HelpWindow);
USEFORM("UnitArchiveWindow.cpp", ArchiveWindow);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainWindow), &MainWindow);
         Application->CreateForm(__classid(TDBWindow), &DBWindow);
         Application->CreateForm(__classid(TAddCriminalAndSquadWindow), &AddCriminalAndSquadWindow);
         Application->CreateForm(__classid(TSearchWindow), &SearchWindow);
         Application->CreateForm(__classid(THelpWindow), &HelpWindow);
         Application->CreateForm(__classid(TArchiveWindow), &ArchiveWindow);
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
