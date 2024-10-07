#include <iostream>
#include <json/json.h>
#include "../include/lcu/lcu.h"

int main() {
    // Initialize the LCU class
    LCU lcu;

    // Define the endpoint
    std::string endpoint = "https://127.0.0.1:59284/lol-summoner/v1/current-summoner/icon";

    cpr::Header headers{
        {"accept", "application/json"},
        {"Authorization", ""},
        {"Content-Type", "application/json"}
    };

    std::string jsonPayload = R"(
        {
            "inventoryToken": "string",
            "profileIconId": 29
        }
    )";

    // Make the GET request using the LCU class
    std::string response = lcu.Request("PUT", endpoint, headers, jsonPayload);
    std::cout << response << std::endl;
    //// Parse the JSON response
    //Json::CharReaderBuilder reader;
    //Json::Value root;
    //std::istringstream response_stream(response);
    //Json::parseFromStream(reader, response_stream, &root, nullptr);

    //// Check if the request was successful
    //if (root.isObject() && root.isMember("gameName") && root.isMember("summonerId")) {
    //    // Access the parsed data and print the "name" and "id" fields
    //    std::cout << "Summoner Name: " << root["gameName"].asString() << std::endl;
    //    std::cout << "Summoner Id: " << root["summonerId"].asString() << std::endl;
    //}
    //else {
    //    std::cerr << "Invalid JSON response." << std::endl;
    //}

    return 0;
}
