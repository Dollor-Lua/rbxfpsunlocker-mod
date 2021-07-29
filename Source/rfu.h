#pragma once

#define RFU_VERSION "2.2.0-4.3.0"
#define RFU_GITHUB_REPO "axstin/rbxfpsunlocker"
#define RFU_MGITHUB_REPO "Dollor-Lua/rbxfpsunlocker-mod"

#include <vector>;
#include <string>;

bool CheckForUpdates();
void SetFPSCapExternal(double value);
void AddToStartupPrograms();
void RemoveFromStartupPrograms();
std::vector<std::string> Split(std::string str, std::string split);