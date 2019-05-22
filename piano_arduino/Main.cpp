#include <wx/wxprec.h>
#include "GUI/GUI.h"

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{

	//wxWindow* parent = NULL; 
	wxWindowID id = wxFormPrincipal;
	const wxString& title = wxT("Piano en Arduino UES-FMO");
	const wxPoint& pos = wxDefaultPosition;
	const wxSize& size = wxSize(694, 300);
	long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL;

	FormPrincipal *frame = new FormPrincipal(NULL, id, title, pos, size, style);
	frame->Show(true);

	
	return true;
}



