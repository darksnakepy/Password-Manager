#include "MainFrame.h"
#include <wx/wx.h>

enum IDs {

};


MainFrame::MainFrame(const wxString& title) :wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxStaticBox* groupboxPass = new wxStaticBox(panel, wxID_ANY, "Login Panel", wxPoint(20, 10), wxSize(381, 551));
	wxButton* loginButton = new wxButton(panel, wxID_ANY, "Login", wxPoint(48, 341), wxSize(321, 41));
	wxTextCtrl* inputUser = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(48, 120), wxSize(321, 41));
	wxTextCtrl* inputPass = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(48, 210), wxSize(321, 41));
	//wxStaticText* userText = new wxStaticText(panel, wxID_ANY, wxPoint(48, 100), wxDefaultSize, );
	//wxStaticText* passText = new wxStaticText(panel, wxID_ANY, wxPoint(48, 100), wxDefaultSize, );

}