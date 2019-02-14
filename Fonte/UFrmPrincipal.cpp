//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmCadastroAluno.h"
#include "UFrmCadastroProfessor.h"
#include "UFrmDisciplina.h"
#include "UFrmCurso.h"
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

void __fastcall TFrmPrincipal::EvAtivarCadastroProfOnClick(TObject *Sender)
{
    new TFrmCadastroProfessor(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarDisciplinaOnClick(TObject *Sender)
{
    new TFrmDisciplina(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::Curso1Click(TObject *Sender)
{
    new TFrmCurso(this);
}
//---------------------------------------------------------------------------

