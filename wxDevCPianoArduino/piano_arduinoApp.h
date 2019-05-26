//---------------------------------------------------------------------------
//
// Name:        piano_arduinoApp.h
// Author:      Fernando Alvarado
// Created:     5/25/2019 10:10:53 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PIANO_ARDUINOFRMApp_h__
#define __PIANO_ARDUINOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class piano_arduinoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
