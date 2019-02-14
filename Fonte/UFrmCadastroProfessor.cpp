//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroProfessor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCRUD"
#pragma resource "*.dfm"
TFrmCadastroProfessor *FrmCadastroProfessor;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroProfessor::TFrmCadastroProfessor(TComponent* Owner)
	: TFrmModeloCRUD(Owner)
{
}
//---------------------------------------------------------------------------
