//---------------------------------------------------------------------------
//
// Name:        piano_arduinoApp.cpp
// Author:      Fernando Alvarado
// Created:     5/25/2019 10:10:53 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "piano_arduinoApp.h"
#include "piano_arduinoFrm.h"

IMPLEMENT_APP(piano_arduinoFrmApp)

bool piano_arduinoFrmApp::OnInit()
{
    piano_arduinoFrm* frame = new piano_arduinoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int piano_arduinoFrmApp::OnExit()
{
	return 0;
}
