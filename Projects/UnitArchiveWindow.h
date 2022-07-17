//---------------------------------------------------------------------------

#ifndef UnitArchiveWindowH
#define UnitArchiveWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TArchiveWindow : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TStringGrid *StringGrid2;
private:	// User declarations
public:		// User declarations
    __fastcall TArchiveWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TArchiveWindow *ArchiveWindow;
//---------------------------------------------------------------------------
#endif
