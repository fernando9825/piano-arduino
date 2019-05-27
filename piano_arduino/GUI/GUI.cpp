


///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"


///////////////////////////////////////////////////////////////////////////

FormPrincipal::FormPrincipal(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	
	// intentar conectarse al arduino
	arduino = new SerialPort(port_name);
	if (arduino->estaConectado())
	{
		wxMessageBox("Arduino está conectado");
	}
	else {
		wxMessageBox("No se ha detectado el arduino");
		Destroy(); // matar proceso
	}

	// continuar con la creacion de los elementos





	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	btnDo = new wxButton(this, wxID_ANY, wxT("Do"), wxDefaultPosition, wxDefaultSize, 0);
	btnDo->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnDo, 0, wxALL | wxEXPAND, 5);

	btnRe = new wxButton(this, wxID_ANY, wxT("Re"), wxDefaultPosition, wxDefaultSize, 0);
	btnRe->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnRe, 0, wxALL | wxEXPAND, 5);

	btnMi = new wxButton(this, wxID_ANY, wxT("Mi"), wxDefaultPosition, wxDefaultSize, 0);
	btnMi->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnMi, 0, wxALL | wxEXPAND, 5);

	btnFa = new wxButton(this, wxID_ANY, wxT("Fa"), wxDefaultPosition, wxDefaultSize, 0);
	btnFa->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnFa, 0, wxALL | wxEXPAND, 5);

	btnSol = new wxButton(this, wxID_ANY, wxT("Sol"), wxDefaultPosition, wxDefaultSize, 0);
	btnSol->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnSol, 0, wxALL | wxEXPAND, 5);

	btnLa = new wxButton(this, wxID_ANY, wxT("La"), wxDefaultPosition, wxDefaultSize, 0);
	btnLa->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnLa, 0, wxALL | wxEXPAND, 5);

	btnSi = new wxButton(this, wxID_ANY, wxT("Si"), wxDefaultPosition, wxDefaultSize, 0);
	btnSi->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(btnSi, 0, wxALL | wxEXPAND, 5);


	this->SetSizer(bSizer1);
	this->Layout();
	m_statusBar1 = this->CreateStatusBar(1, wxSTB_SIZEGRIP, wxID_ANY);
	m_menubar3 = new wxMenuBar(0);
	CancionesDEMO = new wxMenu();
	wxMenuItem* m_menuItemHarryPotter;
	m_menuItemHarryPotter = new wxMenuItem(CancionesDEMO, wxID_ANY, wxString(wxT("Harry Potter Theme")), wxEmptyString, wxITEM_NORMAL);
	CancionesDEMO->Append(m_menuItemHarryPotter);

	wxMenuItem* m_menuItemPiratesOfTheCaribbean;
	m_menuItemPiratesOfTheCaribbean = new wxMenuItem(CancionesDEMO, wxID_ANY, wxString(wxT("Pirates Of The Caribbean Theme")), wxEmptyString, wxITEM_NORMAL);
	CancionesDEMO->Append(m_menuItemPiratesOfTheCaribbean);

	wxMenuItem* m_menuItemStarWars;
	m_menuItemStarWars = new wxMenuItem(CancionesDEMO, wxID_ANY, wxString(wxT("Star Wars Theme")), wxEmptyString, wxITEM_NORMAL);
	CancionesDEMO->Append(m_menuItemStarWars);

	wxMenuItem* m_menuItemDesarrolladores;
	m_menuItemDesarrolladores = new wxMenuItem(CancionesDEMO, wxID_ANY, wxString(wxT("Desarrolladores")), wxEmptyString, wxITEM_NORMAL);
	CancionesDEMO->Append(m_menuItemDesarrolladores);

	m_menubar3->Append(CancionesDEMO, wxT("Canciones DEMO"));

	this->SetMenuBar(m_menubar3);


	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::FormPrincipalOnKeyDown));
	btnDo->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnDoOnEnterWindow), NULL, this);
	btnDo->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnDoOnKeyDown), NULL, this);
	btnDo->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnDoOnKeyUp), NULL, this);
	btnDo->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnDoOnLeaveWindow), NULL, this);
	btnRe->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnReOnEnterWindow), NULL, this);
	btnRe->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnReOnKeyDown), NULL, this);
	btnRe->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnReOnKeyUp), NULL, this);
	btnRe->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnReOnLeaveWindow), NULL, this);
	btnMi->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnMiOnEnterWindow), NULL, this);
	btnMi->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnMiOnKeyDown), NULL, this);
	btnMi->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnMiOnKeyUp), NULL, this);
	btnMi->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnMiOnLeaveWindow), NULL, this);
	btnFa->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnFaOnEnterWindow), NULL, this);
	btnFa->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnFaOnKeyDown), NULL, this);
	btnFa->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnFaOnKeyUp), NULL, this);
	btnFa->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnFaOnLeaveWindow), NULL, this);
	btnSol->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnSolOnEnterWindow), NULL, this);
	btnSol->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnSolOnKeyDown), NULL, this);
	btnSol->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnSolOnKeyUp), NULL, this);
	btnSol->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnSolOnLeaveWindow), NULL, this);
	btnLa->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnLaOnEnterWindow), NULL, this);
	btnLa->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnLaOnKeyDown), NULL, this);
	btnLa->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnLaOnKeyUp), NULL, this);
	btnLa->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnLaOnLeaveWindow), NULL, this);
	btnSi->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnSiOnEnterWindow), NULL, this);
	btnSi->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnSiOnKeyDown), NULL, this);
	btnSi->Connect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnSiOnKeyUp), NULL, this);
	btnSi->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnSiOnLeaveWindow), NULL, this);
	CancionesDEMO->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FormPrincipal::m_menuItemHarryPotterOnMenuSelection), this, m_menuItemHarryPotter->GetId());
	CancionesDEMO->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FormPrincipal::m_menuItemPiratesOfTheCaribbeanOnMenuSelection), this, m_menuItemPiratesOfTheCaribbean->GetId());
	CancionesDEMO->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FormPrincipal::m_menuItemStarWarsOnMenuSelection), this, m_menuItemStarWars->GetId());
	CancionesDEMO->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FormPrincipal::m_menuItemDesarrolladoresOnMenuSelection), this, m_menuItemDesarrolladores->GetId());

	
}

FormPrincipal::~FormPrincipal()
{
	// Disconnect Events
	this->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::FormPrincipalOnKeyDown));
	btnDo->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnDoOnEnterWindow), NULL, this);
	btnDo->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnDoOnKeyDown), NULL, this);
	btnDo->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnDoOnKeyUp), NULL, this);
	btnDo->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnDoOnLeaveWindow), NULL, this);
	btnRe->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnReOnEnterWindow), NULL, this);
	btnRe->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnReOnKeyDown), NULL, this);
	btnRe->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnReOnKeyUp), NULL, this);
	btnRe->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnReOnLeaveWindow), NULL, this);
	btnMi->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnMiOnEnterWindow), NULL, this);
	btnMi->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnMiOnKeyDown), NULL, this);
	btnMi->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnMiOnKeyUp), NULL, this);
	btnMi->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnMiOnLeaveWindow), NULL, this);
	btnFa->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnFaOnEnterWindow), NULL, this);
	btnFa->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnFaOnKeyDown), NULL, this);
	btnFa->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnFaOnKeyUp), NULL, this);
	btnFa->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnFaOnLeaveWindow), NULL, this);
	btnSol->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnSolOnEnterWindow), NULL, this);
	btnSol->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnSolOnKeyDown), NULL, this);
	btnSol->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnSolOnKeyUp), NULL, this);
	btnSol->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnSolOnLeaveWindow), NULL, this);
	btnLa->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnLaOnEnterWindow), NULL, this);
	btnLa->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnLaOnKeyDown), NULL, this);
	btnLa->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnLaOnKeyUp), NULL, this);
	btnLa->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnLaOnLeaveWindow), NULL, this);
	btnSi->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(FormPrincipal::btnSiOnEnterWindow), NULL, this);
	btnSi->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(FormPrincipal::btnSiOnKeyDown), NULL, this);
	btnSi->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(FormPrincipal::btnSiOnKeyUp), NULL, this);
	btnSi->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(FormPrincipal::btnSiOnLeaveWindow), NULL, this);

}




void FormPrincipal::FormPrincipalOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

// Implementación de los metodos del header
void FormPrincipal::teclado(wxKeyEvent & event)
{
	wxChar teclaPulsada = event.GetUnicodeKey();
	const wxColor colorPulsado(118, 75, 142);

	switch (teclaPulsada)
	{
	case 'A':
		btnDo->SetBackgroundColour(colorPulsado);

		break;
	case 'S':
		btnRe->SetBackgroundColour(colorPulsado);
		break;
	case 'D':
		btnMi->SetBackgroundColour(colorPulsado);
		break;
	case 'F':
		btnFa->SetBackgroundColour(colorPulsado);
		break;
	case 'G':
		btnSol->SetBackgroundColour(colorPulsado);
		break;
	case 'H':
		btnLa->SetBackgroundColour(colorPulsado);
		break;
	case 'J':
		btnSi->SetBackgroundColour(colorPulsado);
		break;
	default:
		break;
	}
}

void FormPrincipal::tecladoSoltar(wxKeyEvent & event)
{
	// aqui debo programar el evento para detener el sonido de cierta tecla
	wxChar teclaPulsada = event.GetUnicodeKey();
	const wxColor colorPorDefecto(240, 240, 240);
	switch (teclaPulsada)
	{
	case 'A':
		btnDo->SetBackgroundColour(colorPorDefecto);
		break;
	case 'S':
		btnRe->SetBackgroundColour(colorPorDefecto);
		break;
	case 'D':
		btnMi->SetBackgroundColour(colorPorDefecto);
		break;
	case 'F':
		btnFa->SetBackgroundColour(colorPorDefecto);
		break;
	case 'G':
		btnSol->SetBackgroundColour(colorPorDefecto);
		break;
	case 'H':
		btnLa->SetBackgroundColour(colorPorDefecto);
		break;
	case 'J':
		btnSi->SetBackgroundColour(colorPorDefecto);
		break;
	default:
		break;
	}
}


// ########## EVENTOS ##########

// DO
void FormPrincipal::btnDoOnEnterWindow(wxMouseEvent& event) {
	m_statusBar1->SetStatusText("Presiona la tecla A para tocar la nota Do");
}

void FormPrincipal::btnDoOnLeaveWindow(wxMouseEvent& event) {
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}


void FormPrincipal::btnDoOnKeyDown(wxKeyEvent & event)
{ teclado(event); }

void FormPrincipal::btnDoOnKeyUp(wxKeyEvent & event)
{ tecladoSoltar(event); }

// RE
void FormPrincipal::btnReOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla S para tocar la nota Re");
}


void FormPrincipal::btnReOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}



void FormPrincipal::btnReOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnReOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// MI
void FormPrincipal::btnMiOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla D para tocar la nota Mi");
}


void FormPrincipal::btnMiOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}



void FormPrincipal::btnMiOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnMiOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// Fa
void FormPrincipal::btnFaOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla F para tocar la nota Fa");
}


void FormPrincipal::btnFaOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}


void FormPrincipal::btnFaOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnFaOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// Sol

void FormPrincipal::btnSolOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla G para tocar la nota Sol");
}



void FormPrincipal::btnSolOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}



void FormPrincipal::btnSolOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnSolOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// La
void FormPrincipal::btnLaOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla H para tocar la nota La");
}



void FormPrincipal::btnLaOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}


void FormPrincipal::btnLaOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnLaOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// Si
void FormPrincipal::btnSiOnEnterWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText("Presiona la tecla J para tocar la nota Si");
}


void FormPrincipal::btnSiOnLeaveWindow(wxMouseEvent & event)
{
	m_statusBar1->SetStatusText(statusBarDefaultMessage);
}


void FormPrincipal::btnSiOnKeyDown(wxKeyEvent & event)
{
	teclado(event);
}

void FormPrincipal::btnSiOnKeyUp(wxKeyEvent & event)
{
	tecladoSoltar(event);
}

// EVENTOS DEL MENU
void FormPrincipal::m_menuItemHarryPotterOnMenuSelection(wxCommandEvent & event)
{
	event.Skip();
}

void FormPrincipal::m_menuItemPiratesOfTheCaribbeanOnMenuSelection(wxCommandEvent & event)
{
	event.Skip();
}

void FormPrincipal::m_menuItemStarWarsOnMenuSelection(wxCommandEvent & event)
{
	event.Skip();
}

void FormPrincipal::m_menuItemDesarrolladoresOnMenuSelection(wxCommandEvent & event)
{
	wxString desarrolladores = "Fernando Roman Ventura Alvarado\n"
		"Roberto Herberth Maltez Guardado\n"
		"Roberto Antonio Ortiz Acevedo.";
	wxMessageBox(desarrolladores);
}



























