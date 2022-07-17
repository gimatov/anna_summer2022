//---------------------------------------------------------------------------

#ifndef UnitSearchWindowH
#define UnitSearchWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TSearchWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TStringGrid *StringGrid2;
    TLabel *Label2;
private:	// User declarations
public:		// User declarations
	__fastcall TSearchWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSearchWindow *SearchWindow;
//---------------------------------------------------------------------------
#endif
