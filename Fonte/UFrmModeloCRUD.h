//---------------------------------------------------------------------------

#ifndef UFrmModeloCRUDH
#define UFrmModeloCRUDH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmModeloCRUD : public TForm
{
__published:	// IDE-managed Components
	TToolBar *TlbCRUD;
	void __fastcall EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCRUD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCRUD *FrmModeloCRUD;
//---------------------------------------------------------------------------
#endif
