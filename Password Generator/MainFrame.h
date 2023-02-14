#pragma once
#include <curl/curl.h>
#include <json/json.h>
#include "MainFrame.h"
#include <string>
#include <wx/wx.h>
#include <random>
#include <ctime>

class MainFrame : public wxFrame {
public:
	MainFrame(const wxString& title);
private:

    wxTextCtrl* inputUser; 
    wxTextCtrl* inputPassword;
    
    // main widgets

    wxTextCtrl* pswLen;

    wxCheckBox uppercases;
    wxCheckBox symbols;
    wxCheckBox numbers;

	void OnButtonClicked(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();

    CURLcode login(wxString& inputUsername, wxString& inputPassword) {
        CURL* curl = curl_easy_init();
        CURLcode statusCode;
        Json::Value data;
        data["username"] = inputUsername; // inputUsername = string ( json requires strings )
        data["password"] = inputPassword; // inputPassword = string ( json requires strings )
        Json::FastWriter writer;
        std::string jsonPayload = writer.write(data);

        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, "login.php");
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonPayload.c_str());
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER,
                curl_slist_append(NULL, "Content-Type: application/json"));
            statusCode = curl_easy_perform(curl);
            if (statusCode != CURLE_OK) {
                return statusCode; //debugging statement
            }
            else
            {
                return CURLE_OK;
            }
            curl_easy_cleanup(curl);
        }
    }

    void generatePassword() {

        std::string lowercases = "abcdefghijklmnopqrstuvwxyz";
        std::string uppercases = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::string symbols = "!£$%&/()=?^*";
        std::string numbers = "0123456789";
        std::string completePass = lowercases;

        int len = sizeof(completePass) - 1;

        srand(time(0));

        if () // checkbox conditions
        {
            completePass += uppercases;
        }
        if ()
        {
            completePass += symbols;
        }
        if ()
        {
            completePass += numbers;
        }

        for (int i = 0; i < len; i++) {
            completePass = completePass[rand() % len];
        }
    }
};