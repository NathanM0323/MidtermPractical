#pragma once

#include "wx/wx.h"
#include <iostream>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	int randomQuestion = rand() % 4 + 1;
	wxStaticText* questionBox;
	wxButton* option1;
	wxButton* option2;
	wxButton* option3;
	wxButton* option4;
	
	void OnButtonOneClicked(wxCommandEvent& evt);
	void OnButtonTwoClicked(wxCommandEvent& evt);
	void OnButtonThreeClicked(wxCommandEvent& evt);
	void OnButtonFourClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};