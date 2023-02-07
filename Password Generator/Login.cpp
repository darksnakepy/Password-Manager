#include <wx/wx.h>
#include "App.h"
#include "MainFrame.h"
#include <curl/curl.h>
#include <json/json.h>

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

bool requestHttp() {
	Json::Value data;

	CURL* curl = curl_easy_init();;
	CURLcode statusCode;

	data["username"] = "";
	data["password"] = "";

	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "login.php");
		statusCode = curl_easy_perform(curl);
		if (statusCode != CURLE_OK) {
			return false;
		}
		curl_easy_cleanup(curl);
		return true;
	}
}


bool MyApp::OnInit()
{	
	MainFrame* mainFrame = new MainFrame("Login");
	mainFrame->Show();
	mainFrame->SetClientSize(420, 585);
	return true;
}

wxIMPLEMENT_APP(MyApp);