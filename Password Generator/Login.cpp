#include <wx/wx.h>
#include "App.h"
#include "MainFrame.h"
#include <curl/curl.h>
#include <json/json.h>
#include <string>


bool MyApp::OnInit()
{	
	MainFrame* mainFrame = new MainFrame("Login"); 
	mainFrame->Show();
	mainFrame->SetClientSize(420, 585);
	return true;
}

wxIMPLEMENT_APP(MyApp);