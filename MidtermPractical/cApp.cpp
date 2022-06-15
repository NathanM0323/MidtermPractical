#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}

cApp::~cApp()
{

}

bool cApp::OnInit()
{
	srand(time(0));
	m_frame1 = new cMain();
	m_frame1->Show();

	return true;
}