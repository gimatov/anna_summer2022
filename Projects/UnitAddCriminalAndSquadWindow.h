//---------------------------------------------------------------------------

#ifndef UnitAddCriminalAndSquadWindowH
#define UnitAddCriminalAndSquadWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TAddCriminalAndSquadWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TButton *Button1;
    TLabel *Label2;
    TStringGrid *StringGrid2;
    TButton *Button2;
private:	// User declarations
public:		// User declarations
	__fastcall TAddCriminalAndSquadWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddCriminalAndSquadWindow *AddCriminalAndSquadWindow;
//---------------------------------------------------------------------------
#endif
