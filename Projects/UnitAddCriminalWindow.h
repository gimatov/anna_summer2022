//---------------------------------------------------------------------------

#ifndef UnitAddCriminalWindowH
#define UnitAddCriminalWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TAddCriminalWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TAddCriminalWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddCriminalWindow *AddCriminalWindow;
//---------------------------------------------------------------------------
#endif
