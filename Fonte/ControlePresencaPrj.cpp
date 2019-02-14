//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UFrmPrincipal.cpp", FrmPrincipal);
USEFORM("UFrmModeloCRUD.cpp", FrmModeloCRUD);
USEFORM("UFrmCadastroAluno.cpp", FrmCadastroAluno);
USEFORM("UFrmCadastroProfessor.cpp", FrmCadastroProfessor);
USEFORM("UFrmDisciplina.cpp", FrmDisciplina);
USEFORM("UFrmCurso.cpp", FrmCurso);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFrmPrincipal), &FrmPrincipal);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
