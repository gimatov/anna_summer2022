//---------------------------------------------------------------------------

#ifndef UnitMainWindowH
#define UnitMainWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TMainWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TImage *Image1;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
    TButton *Button6;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainWindow *MainWindow;
//---------------------------------------------------------------------------
#endif
