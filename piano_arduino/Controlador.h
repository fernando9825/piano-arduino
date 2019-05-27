#pragma once

#include "GUI/GUI.h"

class Controlador : public FormPrincipal {
public:
	Controlador(wxWindow* parent);
	~Controlador();

protected:

	// Virtual event handlers, overide them in your derived class
	virtual void btnDoOnEnterWindow(wxMouseEvent& event);
	virtual void btnDoOnLeaveWindow(wxMouseEvent& event);
	virtual void btnDoOnLeftDown(wxMouseEvent& event);

private:
	int counter;

};


