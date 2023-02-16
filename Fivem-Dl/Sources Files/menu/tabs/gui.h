#pragma once

#include "/Users/Administrator/Desktop/dll src/Updated dll/imgui/imgui.h"
#include "/Users/Administrator/Desktop/dll src/Updated dll/imgui/imgui_internal.h"

#include "../extras/font_awesome.h"

#include <Windows.h>
#include <iostream>
#include <vector>

static int selectedResource = NULL;
std::vector<const char*> resources = {
	"_cfx_internal","fivem","Antyban ON","BlackWare | Komazyca",
	"Not Working Anymore","adhesive.dll"
};

namespace Gui
{
	void Seperator(const std::string id, float width = ImGui::GetContentRegionAvail().x, float height = 1, bool visible = true)
	{		
		ImGui::BeginChild(id.c_str(), ImVec2(width, height), visible); 
		ImGui::EndChild();
	}


}