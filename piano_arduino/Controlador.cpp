#include "Controlador.h"

Controlador::Controlador(wxWindow * parent) : FormPrincipal(parent)
{
	counter = 0;
}

Controlador::~Controlador()
{
}

void Controlador::btnDoOnEnterWindow(wxMouseEvent & event)
{
}

void Controlador::btnDoOnLeaveWindow(wxMouseEvent & event)
{
}

void Controlador::btnDoOnLeftDown(wxMouseEvent & event)
{
	counter++;
	m_statusBar1->SetStatusText("Contador" + counter);

}
