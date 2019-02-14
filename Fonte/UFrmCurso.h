//---------------------------------------------------------------------------

#ifndef UFrmCursoH
#define UFrmCursoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCRUD.h"
#include <System.ImageList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmCurso : public TFrmModeloCRUD
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCurso(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCurso *FrmCurso;
//---------------------------------------------------------------------------
#endif
