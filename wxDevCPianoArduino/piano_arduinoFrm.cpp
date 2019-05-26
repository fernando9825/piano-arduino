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

//libreria serialPort
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SerialPort.h"

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
	EVT_MENU(ID_MNU_CANCI_N1_1010, piano_arduinoFrm::cancion1Click)
	EVT_MENU(ID_MNU_MENUITEM4_1012, piano_arduinoFrm::cancion2Click)
	EVT_MENU(ID_MNU_CANCI_N3_1013, piano_arduinoFrm::cancion3Click)
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

/*puerto serie*/
    //char *port_name; // adelante se pregunta por este valor

    //cadena para ingresar 
    char incomingData[MAX_LOGINTUD_DATOS];	

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

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_MENUITEM1_1009_Mnu_Obj = new wxMenu();
	ID_MNU_MENUITEM1_1009_Mnu_Obj->Append(ID_MNU_CANCI_N1_1010, _("Canción 1"), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1009_Mnu_Obj->Append(ID_MNU_MENUITEM4_1012, _("Canción 2"), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1009_Mnu_Obj->Append(ID_MNU_CANCI_N3_1013, _("Canción 3"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_MENUITEM1_1009_Mnu_Obj, _("Canciones DEMO"));
	SetMenuBar(WxMenuBar1);

	SetTitle(_("Piano Arduino UES-FMO"));
	SetIcon(piano_arduinoFrm_frmNewForm_XPM);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	
	// todo el codigo del main va aqui
    // hacer un bucle de tres intentos mientras se conecta el arduino
    int intentos = 0;
    bool puertoInvalido = false;
    
    // variables del mensaje input
    const wxString message = "¿Cuál es el puerto?";
    const wxString caption=wxGetTextFromUserPromptStr;
    const wxString default_value="";
    wxWindow *parent=NULL;
    int x=wxDefaultCoord;
    int y=wxDefaultCoord; 
    bool centre=true;
    do {
        // solicitando el puerto al ususario    
    wxString puerto = wxGetTextFromUser (message, caption, default_value, NULL, x, y, centre);
    int numPuerto;
    numPuerto = wxAtoi(puerto);
    
    //wxMessageBox(wxString(puerto)); // este es solo comprobacion del valor ingresado
    
    SerialPort arduino(numPuerto);
    if (arduino.estaConectado()){
         	wxMessageBox( "Se ha establecido conexión con el arduino" );
         	puertoInvalido = false;
             }
    else 	{
        wxMessageBox( "Error, verifica si es el puerto correcto" );
        intentos++;
    }
  
    if(intentos == 3) {
        wxMessageBox( "Se han superado los intentos se conexión, revisar todo y volver a intentarlo" );
        break;
    }
    
    // si todo va bien, el arduino esta conectado y se ejecuta el while
     while (arduino.estaConectado()){
    
        int read_result = arduino.leerPuertoSerie(incomingData, MAX_LOGINTUD_DATOS);
        //imprime 
        puts(incomingData);
        //espera
        Sleep(10);
    }   
         
    } while(puertoInvalido);
    
    // si todo sale mal, matar el proceso
    if(intentos == 3){
        Destroy();
    }
     
    
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

/*
 * Mnucancin11012Click
 */
void piano_arduinoFrm::Mnucancin11012Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * cancion1Click
 */
void piano_arduinoFrm::cancion1Click(wxCommandEvent& event)
{
	// insert your code here
	wxMessageBox("Poner el codigo de la canción 1 aquí");
}

/*
 * cancion2Click
 */
void piano_arduinoFrm::cancion2Click(wxCommandEvent& event)
{
	// insert your code here
		wxMessageBox("Poner el codigo de la canción 2 aquí");
}

/*
 * cancion3Click
 */
void piano_arduinoFrm::cancion3Click(wxCommandEvent& event)
{
	// insert your code here
		wxMessageBox("Poner el codigo de la canción 3 aquí");
}
