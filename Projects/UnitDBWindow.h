//---------------------------------------------------------------------------

#ifndef UnitDBWindowH
#define UnitDBWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TDBWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelBaseCr;
	TButton *ArchiveButton;
	TButton *DelButton;
	TStringGrid *DBCriminalGreed;
    TStringGrid *DBSquadGreed;
    TLabel *LabelBaseSquad;
private:	// User declarations
public:		// User declarations
	__fastcall TDBWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDBWindow *DBWindow;
//---------------------------------------------------------------------------
#endif
