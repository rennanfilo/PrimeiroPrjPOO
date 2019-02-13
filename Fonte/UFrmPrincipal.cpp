//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmCadastroAluno.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
__fastcall TFrmPrincipal::TFrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvEncerrarOnClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarOnClick(TObject *Sender)
{
    new TFrmCadastroAluno(this);
}
//---------------------------------------------------------------------------

