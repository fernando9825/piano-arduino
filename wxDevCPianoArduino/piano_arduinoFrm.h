///-----------------------------------------------------------------
///
/// @file      piano_arduinoFrm.h
/// @author    Fernando Alvarado
/// Created:   5/25/2019 10:10:53 PM
/// @section   DESCRIPTION
///            piano_arduinoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __PIANO_ARDUINOFRM_H__
#define __PIANO_ARDUINOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/button.h>
#include <wx/sizer.h>
////Header Include End

// mis includes
#include <wx/msgdlg.h> // para el messageBox

////Dialog Style Start
#undef piano_arduinoFrm_STYLE
#define piano_arduinoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class piano_arduinoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		piano_arduinoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("piano_arduino"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = piano_arduinoFrm_STYLE);
		virtual ~piano_arduinoFrm();
		void WxButton3Click(wxCommandEvent& event);
		void DoClick(wxCommandEvent& event);
		void ReClick(wxCommandEvent& event);
		void MiClick(wxCommandEvent& event);
		void FaClick(wxCommandEvent& event);
		void SolClick(wxCommandEvent& event);
		void LaClick(wxCommandEvent& event);
		void Mnucancin11012Click(wxCommandEvent& event);
		void SiClick(wxCommandEvent& event);
		void cancion1Click(wxCommandEvent& event);
		void cancion2Click(wxCommandEvent& event);
		void cancion3Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *WxMenuBar1;
		wxButton *Si;
		wxButton *La;
		wxButton *Sol;
		wxButton *Fa;
		wxButton *Mi;
		wxButton *Re;
		wxButton *Do;
		wxBoxSizer *WxBoxSizer1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_MNU_MENUITEM1_1009 = 1009,
			ID_MNU_CANCI_N1_1010 = 1010,
			ID_MNU_MENUITEM4_1012 = 1012,
			ID_MNU_CANCI_N3_1013 = 1013,
			
			ID_SI = 1008,
			ID_LA = 1007,
			ID_SOL = 1006,
			ID_FA = 1005,
			ID_MI = 1004,
			ID_RE = 1003,
			ID_DO = 1002,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
