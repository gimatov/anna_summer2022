//---------------------------------------------------------------------------

#ifndef UnitSearchCriminalWindowH
#define UnitSearchCriminalWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TSearchCriminalWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TStringGrid *StringGrid2;
private:	// User declarations
public:		// User declarations
	__fastcall TSearchCriminalWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSearchCriminalWindow *SearchCriminalWindow;
//---------------------------------------------------------------------------
#endif
