#include <wx/wx.h>
#include "App.h"

/*class mainWindow : public wxApp {
public:
	bool onInit() {
		wxFrame* frame = new wxFrame(NULL, wxID_ANY, "Password Manager", wxDefaultPosition, wxSize(600, 400));
		wxBoxSizer* boxsizer = new wxBoxSizer(wxHORIZONTAL);
		wxStaticText* text = new wxStaticText(frame, wxID_ANY, "Working", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);

		text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL));
		boxsizer->Add(text, 1, wxALIGN_CENTER);
		frame->SetSizer(boxsizer);
		frame->Show();

		return true;
	}
};

wxIMPLEMENT_APP(mainWindow);*/

/*class Labels : public wxStaticText {
public:
	wxStaticText* passwordLabel = new wxStaticText(nullptr, wxID_ANY, "Working", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
};
*/


bool MyApp::OnInit()
{	
	//mainFrame* mainFrame = new mainFrame("pswManager", wxPoint(800, 600), wxSize(wxDefaultSize));
	wxFrame* mainFrame = new wxFrame(NULL, wxID_ANY, "Password Manager", wxDefaultPosition, wxSize(800, 600));
	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
	wxPanel* panel = new wxPanel(mainFrame, wxID_ANY, wxDefaultPosition, wxSize(800, 600));

	//wxStaticText* passwordLabel = new wxStaticText(panel, wxID_ANY, "PASSWORD", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
	wxCheckBox* checkbox1 = new wxCheckBox(panel, wxID_ANY, "", wxPoint(500, 500), wxSize(50,50));
	wxStaticBox* groupboxPass = new wxStaticBox(panel, wxID_ANY, "StaticBox", wxPoint(400, 300), wxDefaultSize);
	
	panel->SetBackgroundColour(wxColour(*wxWHITE));
	//passwordLabel->SetFont(wxFont(12, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	mainFrame->Show();
	sizer->Add(groupboxPass, 50);
	return true;
}

wxIMPLEMENT_APP(MyApp);