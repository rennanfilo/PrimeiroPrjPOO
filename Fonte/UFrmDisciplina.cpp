//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmDisciplina.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCRUD"
#pragma resource "*.dfm"
TFrmDisciplina *FrmDisciplina;
//---------------------------------------------------------------------------
__fastcall TFrmDisciplina::TFrmDisciplina(TComponent* Owner)
	: TFrmModeloCRUD(Owner)
{
}
//---------------------------------------------------------------------------
