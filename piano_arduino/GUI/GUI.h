///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once
#include <wx/msgdlg.h> // for wxMessageBoxes
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
#include <wx/statusbr.h>
#include <wx/menu.h>
#include <wx/frame.h>

//#include <string.h>
///////////////////////////////////////////////////////////////////////////
#include "../Controlador/SerialPort.h"

#define wxFormPrincipal 1000
const wxString statusBarDefaultMessage = wxT("Piano en Arduino Universidad de El Salvador (FMO)");




///////////////////////////////////////////////////////////////////////////////
/// Class FormPrincipal
///////////////////////////////////////////////////////////////////////////////
class FormPrincipal : public wxFrame
{
private:
	void teclado(wxKeyEvent & event);
	void tecladoSoltar(wxKeyEvent & event);
	SerialPort *arduino;
	/*puerto serie*/
	const char *port_name = "\\\\.\\COM3";

	//cadena para ingresar 
	char incomingData[MAX_LOGINTUD_DATOS];
	

protected:
	wxMenuBar* m_menubar3;
	wxMenu* CancionesDEMO;

	// Virtual event handlers, overide them in your derived class
	virtual void FormPrincipalOnKeyDown(wxKeyEvent& event);
	virtual void btnDoOnEnterWindow(wxMouseEvent& event);
	virtual void btnDoOnKeyDown(wxKeyEvent& event);
	virtual void btnDoOnKeyUp(wxKeyEvent& event);
	virtual void btnDoOnLeaveWindow(wxMouseEvent& event);
	virtual void btnReOnEnterWindow(wxMouseEvent& event);
	virtual void btnReOnKeyDown(wxKeyEvent& event);
	virtual void btnReOnKeyUp(wxKeyEvent& event);
	virtual void btnReOnLeaveWindow(wxMouseEvent& event);
	virtual void btnMiOnEnterWindow(wxMouseEvent& event);
	virtual void btnMiOnKeyDown(wxKeyEvent& event);
	virtual void btnMiOnKeyUp(wxKeyEvent& event);
	virtual void btnMiOnLeaveWindow(wxMouseEvent& event);
	virtual void btnFaOnEnterWindow(wxMouseEvent& event);
	virtual void btnFaOnKeyDown(wxKeyEvent& event);
	virtual void btnFaOnKeyUp(wxKeyEvent& event);
	virtual void btnFaOnLeaveWindow(wxMouseEvent& event);
	virtual void btnSolOnEnterWindow(wxMouseEvent& event);
	virtual void btnSolOnKeyDown(wxKeyEvent& event);
	virtual void btnSolOnKeyUp(wxKeyEvent& event);
	virtual void btnSolOnLeaveWindow(wxMouseEvent& event);
	virtual void btnLaOnEnterWindow(wxMouseEvent& event);
	virtual void btnLaOnKeyDown(wxKeyEvent& event);
	virtual void btnLaOnKeyUp(wxKeyEvent& event);
	virtual void btnLaOnLeaveWindow(wxMouseEvent& event);
	virtual void btnSiOnEnterWindow(wxMouseEvent& event);
	virtual void btnSiOnKeyDown(wxKeyEvent& event);
	virtual void btnSiOnKeyUp(wxKeyEvent& event);
	virtual void btnSiOnLeaveWindow(wxMouseEvent& event);
	virtual void m_menuItemHarryPotterOnMenuSelection(wxCommandEvent& event);
	virtual void m_menuItemPiratesOfTheCaribbeanOnMenuSelection(wxCommandEvent& event);
	virtual void m_menuItemStarWarsOnMenuSelection(wxCommandEvent& event);
	virtual void m_menuItemDesarrolladoresOnMenuSelection(wxCommandEvent& event);


public:
	wxButton* btnDo;
	wxButton* btnRe;
	wxButton* btnMi;
	wxButton* btnFa;
	wxButton* btnSol;
	wxButton* btnLa;
	wxButton* btnSi;
	wxStatusBar* m_statusBar1;

	FormPrincipal(wxWindow* parent, wxWindowID id = wxFormPrincipal, const wxString& title = wxT("Piano en Arduino UES-FMO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(694, 300), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~FormPrincipal();

};