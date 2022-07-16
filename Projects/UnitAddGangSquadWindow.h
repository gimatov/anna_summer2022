//---------------------------------------------------------------------------

#ifndef UnitAddGangSquadWindowH
#define UnitAddGangSquadWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TAddGangSquadWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelAddBaseSquad;
	TStringGrid *StringGrid1;
	TImage *Image1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TAddGangSquadWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddGangSquadWindow *AddGangSquadWindow;
//---------------------------------------------------------------------------
#endif
