#pragma once

#include <string>
#include <curl/curl.h>
#include <iostream>

namespace UtilityNamespace {

    // Function declarations
    std::string sendPostRequest(const std::string& url, const std::string& postFields);
    std::string sendPostRequestWithAuth(const std::string& url, const std::string& postFields, const std::string& token);
    std::string sendGetRequest(const std::string& url);
    std::string authenticate();
    std::string getOrderBook(const std::string& symbol);
    
    // New function declarations
    std::string getInstruments(); // Function to get available instruments
    std::string getInstrumentOrderbook(const std::string& instrumentName); // Function to get order book for a specific instrument

    void logMessage(const std::string& message);

    // Callback function to write data received from cURL to a string
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s);
}