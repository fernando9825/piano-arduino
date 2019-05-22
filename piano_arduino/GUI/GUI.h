///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define wxFormPrincipal 1000

///////////////////////////////////////////////////////////////////////////////
/// Class FormPrincipal
///////////////////////////////////////////////////////////////////////////////
class FormPrincipal : public wxFrame
{
	private:

	protected:

	public:
		wxButton* btnDo;
		wxButton* btnRe;
		wxButton* btnMi;
		wxButton* btnFa;
		wxButton* btnSol;
		wxButton* btnLa;
		wxButton* btnSi;

		FormPrincipal( wxWindow* parent, wxWindowID id = wxFormPrincipal, const wxString& title = wxT("Piano en Arduino UES-FMO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 694,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormPrincipal();

};

