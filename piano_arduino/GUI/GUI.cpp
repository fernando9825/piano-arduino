///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

FormPrincipal::FormPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	btnDo = new wxButton( this, wxID_ANY, wxT("Do"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnDo, 0, wxALL|wxEXPAND, 5 );

	btnRe = new wxButton( this, wxID_ANY, wxT("Re"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnRe, 0, wxALL|wxEXPAND, 5 );

	btnMi = new wxButton( this, wxID_ANY, wxT("Mi"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnMi, 0, wxALL|wxEXPAND, 5 );

	btnFa = new wxButton( this, wxID_ANY, wxT("Fa"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnFa, 0, wxALL|wxEXPAND, 5 );

	btnSol = new wxButton( this, wxID_ANY, wxT("Sol"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnSol, 0, wxALL|wxEXPAND, 5 );

	btnLa = new wxButton( this, wxID_ANY, wxT("La"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnLa, 0, wxALL|wxEXPAND, 5 );

	btnSi = new wxButton( this, wxID_ANY, wxT("Si"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( btnSi, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

FormPrincipal::~FormPrincipal()
{
}
