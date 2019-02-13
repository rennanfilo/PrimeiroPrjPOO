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
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TFrmModeloCRUD : public TForm
{
__published:	// IDE-managed Components
	TToolBar *TlbCRUD;
	TImageList *ilsHabilitado;
	TImageList *ilsImagemQuente;
	TImageList *ilsDesabilitado;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	void __fastcall EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCRUD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCRUD *FrmModeloCRUD;
//---------------------------------------------------------------------------
#endif
