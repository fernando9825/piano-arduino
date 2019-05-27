#include <wx/wxprec.h>
#include "GUI/GUI.h"
#include <string.h>


using namespace std;

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyApp : public wxApp
{
private:
	wxWindowID id = wxFormPrincipal;
	const wxString& title = wxT("Piano en Arduino UES-FMO");
	const wxPoint& pos = wxDefaultPosition;
	const wxSize& size = wxSize(694, 300);
	long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL;
	int contador = 0;

public:
	FormPrincipal *frame = new FormPrincipal(NULL, id, title, pos, size, style);
	virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
	frame->Show(true);

	return true;
}















