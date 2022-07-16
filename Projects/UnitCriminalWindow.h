//---------------------------------------------------------------------------

#ifndef UnitCriminalWindowH
#define UnitCriminalWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TCriminalWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelBaseCr;
	TButton *ArchiveButton;
	TButton *DelButton;
	TStringGrid *DBCriminalGreed;
	TButton *RefreshButton;
private:	// User declarations
public:		// User declarations
	__fastcall TCriminalWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCriminalWindow *CriminalWindow;
//---------------------------------------------------------------------------
#endif
