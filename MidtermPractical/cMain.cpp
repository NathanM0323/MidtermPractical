#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(1, OnButtonOneClicked)
	EVT_BUTTON(2, OnButtonTwoClicked)
	EVT_BUTTON(3, OnButtonThreeClicked)
	EVT_BUTTON(4, OnButtonFourClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Nathan Minnick - Midterm Practical", wxPoint(30, 30), wxSize(730, 530))
{
	questionBox = new wxStaticText(this, wxID_ANY, "", wxPoint(10, 10), wxSize(100, 10));
	option1 = new wxButton(this, 1, "", wxPoint(10, 50), wxSize(690, 100));
	option2 = new wxButton(this, 2, "", wxPoint(10, 160), wxSize(690, 100));
	option3 = new wxButton(this, 3, "", wxPoint(10, 270), wxSize(690, 100));
	option4 = new wxButton(this, 4, "", wxPoint(10, 380), wxSize(690, 100));

	wxFont font(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	
	questionBox->SetFont(font);
	option1->SetFont(font);
	option2->SetFont(font);
	option3->SetFont(font);
	option4->SetFont(font);

	switch (randomQuestion)
	{
	case 1:
		questionBox->SetLabel("Question 1: What is the color system that uses values 0-255 with a mixture of three colors?");
		option1->SetLabel("Option 1: RYB");
		option2->SetLabel("Option 2: GBR");
		option3->SetLabel("Option 3: RGB");
		option4->SetLabel("Option 4: YRG");
		break;
	case 2:
		questionBox->SetLabel("Question 2: What was the name of the game we created for Lab 1.4?");
		option1->SetLabel("Option 1: Solitaire");
		option2->SetLabel("Option 2: Minesweeper");
		option3->SetLabel("Option 3: Sudoku");
		option4->SetLabel("Option 4: Snake");
		break;
	case 3:
		questionBox->SetLabel("Question 3: What is the library we have been using so far called?");
		option1->SetLabel("Option 1: wxWidgets");
		option2->SetLabel("Option 2: Widgets");
		option3->SetLabel("Option 3: Diagnotics");
		option4->SetLabel("Option 4: General Utilities");
		break;
	case 4:
		questionBox->SetLabel("Question 4: What is the file we needed to add to GitHub for this midterm?");
		option1->SetLabel("Option 1: Explanation.txt");
		option2->SetLabel("Option 2: .gitattributes");
		option3->SetLabel("Option 3: README");
		option4->SetLabel("Option 4: .gitignore");
		break;
	}
}

cMain::~cMain()
{

}

void cMain::OnButtonOneClicked(wxCommandEvent& evt)
{
	switch (randomQuestion)
	{
	case 1:
		wxMessageBox("Incorrect: (Correct Answer: RGB)");
		break;
	case 2:
		wxMessageBox("Incorrect: (Correct Answer: Minesweeper)");
		break;
	case 3:
		wxMessageBox("Correct!");
		break;
	case 4:
		wxMessageBox("Incorrect: (Correct Answer: .gitignore)");
		break;
	}

	evt.Skip();
}

void cMain::OnButtonTwoClicked(wxCommandEvent& evt)
{
	switch (randomQuestion)
	{
	case 1:
		wxMessageBox("Incorrect: (Correct Answer: RGB)");
		break;
	case 2:
		wxMessageBox("Correct!");
		break;
	case 3:
		wxMessageBox("Incorrect: (Correct Answer: wxWidgets)");
		break;
	case 4:
		wxMessageBox("Incorrect: (Correct Answer: .gitignore)");
		break;
	}

	evt.Skip();
}

void cMain::OnButtonThreeClicked(wxCommandEvent& evt)
{
	switch (randomQuestion)
	{
	case 1:
		wxMessageBox("Correct!");
		break;
	case 2:
		wxMessageBox("Incorrect: (Correct Answer: Minesweeper)");
		break;
	case 3:
		wxMessageBox("Incorrect: (Correct Answer: wxWidgets)");
		break;
	case 4:
		wxMessageBox("Incorrect: (Correct Answer: .gitignore)");
		break;
	}

	evt.Skip();
}

void cMain::OnButtonFourClicked(wxCommandEvent& evt)
{
	switch (randomQuestion)
	{
	case 1:
		wxMessageBox("Incorrect: (Correct Answer: RGB)");
		break;
	case 2:
		wxMessageBox("Incorrect: (Correct Answer: Minesweeper)");
		break;
	case 3:
		wxMessageBox("Incorrect: (Correct Answer: wxWidgets)");
		break;
	case 4:
		wxMessageBox("Correct!");
		break;
	}

	evt.Skip();
}