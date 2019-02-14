//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCurso.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCRUD"
#pragma resource "*.dfm"
TFrmCurso *FrmCurso;
//---------------------------------------------------------------------------
__fastcall TFrmCurso::TFrmCurso(TComponent* Owner)
	: TFrmModeloCRUD(Owner)
{
}
//---------------------------------------------------------------------------
