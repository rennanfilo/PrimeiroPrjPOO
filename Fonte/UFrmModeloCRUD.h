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
	TToolButton *btnNovo;
	TToolButton *btnCriar;
	TToolButton *btnAtualizar;
	TToolButton *ToolButton4;
	TToolButton *btnDeletar;
	TToolButton *ToolButton6;
	TToolButton *btnCancelar;
	TToolButton *ToolButton9;
	TToolButton *btnSair;
	TGroupBox *grpDados;
	void __fastcall EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action);
	void __fastcall EvSairOnClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCRUD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCRUD *FrmModeloCRUD;
//---------------------------------------------------------------------------
#endif
