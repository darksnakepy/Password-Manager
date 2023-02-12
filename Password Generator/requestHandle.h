#include <curl/curl.h>
#include <json/json.h>
#include "MainFrame.h"
#include <string>

/*class Requests {
    public:
        void requestHttp() {
            CURL* curl = curl_easy_init();
            CURLcode statusCode; 
            Json::Value data;
            data["username"] = inputUsername;
            data["password"] = inputPassword;
            Json::FastWriter writer;
            std::string jsonPayload = writer.writer(data)

            if (curl) {
                curl_easy_setopt(curl, CURLOPT_URL, "url/login.php");
                curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonPayload.c_str());
                curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
                curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
                curl_easy_setopt(curl, CURLOPT_HTTPHEADER, 
                                curl_slist_append(NULL, "Content-Type: application/json"));
                statusCode = curl_easy_perform(curl);
                if (statusCode != CURLE_OK) {
                    return;
                }
                curl_easy_cleanup(curl);
            }
        }
}
*/