//---------------------------------------------------------------------------

#ifndef UnitGangSquadWindowH
#define UnitGangSquadWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TGangSquadWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelBaseSquad;
	TStringGrid *DBSquadGreed;
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TGangSquadWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGangSquadWindow *GangSquadWindow;
//---------------------------------------------------------------------------
#endif
