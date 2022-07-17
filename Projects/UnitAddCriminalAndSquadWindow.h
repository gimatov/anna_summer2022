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
    TLabel *LabelBaseCr;
    TLabel *Label1;
    TButton *ArchiveButton;
    TButton *Button1;
    TStringGrid *StringGrid1;
    TStringGrid *DBSquadGreed;
private:	// User declarations
public:		// User declarations
    __fastcall TAddCriminalAndSquadWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddCriminalAndSquadWindow *AddCriminalAndSquadWindow;
//---------------------------------------------------------------------------
#endif
