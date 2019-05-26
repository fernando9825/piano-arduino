///-----------------------------------------------------------------
///
/// @file      piano_arduinoFrm.cpp
/// @author    Fernando Alvarado
/// Created:   5/25/2019 10:10:53 PM
/// @section   DESCRIPTION
///            piano_arduinoFrm class implementation
///
///------------------------------------------------------------------

#include "piano_arduinoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "C:/Users/Fernando9825/Documents/wxDevCPianoArduino/Images/piano_arduinoFrm_frmNewForm_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// piano_arduinoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(piano_arduinoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(piano_arduinoFrm::OnClose)
	EVT_BUTTON(ID_SI,piano_arduinoFrm::SiClick)
	EVT_BUTTON(ID_LA,piano_arduinoFrm::LaClick)
	EVT_BUTTON(ID_SOL,piano_arduinoFrm::SolClick)
	EVT_BUTTON(ID_FA,piano_arduinoFrm::FaClick)
	EVT_BUTTON(ID_MI,piano_arduinoFrm::MiClick)
	EVT_BUTTON(ID_RE,piano_arduinoFrm::ReClick)
	EVT_BUTTON(ID_DO,piano_arduinoFrm::DoClick)
END_EVENT_TABLE()
////Event Table End

piano_arduinoFrm::piano_arduinoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

piano_arduinoFrm::~piano_arduinoFrm()
{
}

void piano_arduinoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	Do = new wxButton(this, ID_DO, _("Do"), wxPoint(5, 5), wxSize(75, 283), 0, wxDefaultValidator, _("Do"));
	WxBoxSizer1->Add(Do, 0, wxALIGN_CENTER | wxALL, 5);

	Re = new wxButton(this, ID_RE, _("Re"), wxPoint(90, 5), wxSize(75, 282), 0, wxDefaultValidator, _("Re"));
	WxBoxSizer1->Add(Re, 0, wxALIGN_CENTER | wxALL, 5);

	Mi = new wxButton(this, ID_MI, _("Mi"), wxPoint(175, 6), wxSize(75, 281), 0, wxDefaultValidator, _("Mi"));
	WxBoxSizer1->Add(Mi, 0, wxALIGN_CENTER | wxALL, 5);

	Fa = new wxButton(this, ID_FA, _("Fa"), wxPoint(260, 6), wxSize(75, 280), 0, wxDefaultValidator, _("Fa"));
	WxBoxSizer1->Add(Fa, 0, wxALIGN_CENTER | wxALL, 5);

	Sol = new wxButton(this, ID_SOL, _("Sol"), wxPoint(345, 8), wxSize(75, 277), 0, wxDefaultValidator, _("Sol"));
	WxBoxSizer1->Add(Sol, 0, wxALIGN_CENTER | wxALL, 5);

	La = new wxButton(this, ID_LA, _("La"), wxPoint(430, 8), wxSize(75, 277), 0, wxDefaultValidator, _("La"));
	WxBoxSizer1->Add(La, 0, wxALIGN_CENTER | wxALL, 5);

	Si = new wxButton(this, ID_SI, _("Si"), wxPoint(515, 10), wxSize(75, 273), 0, wxDefaultValidator, _("Si"));
	WxBoxSizer1->Add(Si, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("Piano Arduino UES-FMO"));
	SetIcon(piano_arduinoFrm_frmNewForm_XPM);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
}

void piano_arduinoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}


/*
 * DoClick
 */
void piano_arduinoFrm::DoClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Do") );
}

/*
 * ReClick
 */
void piano_arduinoFrm::ReClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Re") );
}

/*
 * MiClick
 */
void piano_arduinoFrm::MiClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Mi") );
}

/*
 * FaClick
 */
void piano_arduinoFrm::FaClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Fa") );
}

/*
 * SolClick
 */
void piano_arduinoFrm::SolClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Sol") );
}

/*
 * LaClick
 */
void piano_arduinoFrm::LaClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("La") );
}

/*
 * SiClick
 */
void piano_arduinoFrm::SiClick(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox( wxT("Si") );
}
