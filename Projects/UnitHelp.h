//---------------------------------------------------------------------------

#ifndef UnitHelpH
#define UnitHelpH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class THelpWindow : public TForm
{
__published:	// IDE-managed Components
    TStaticText *StaticText1;
private:	// User declarations
public:		// User declarations
    __fastcall THelpWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THelpWindow *HelpWindow;
//---------------------------------------------------------------------------
#endif
