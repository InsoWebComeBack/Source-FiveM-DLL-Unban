#pragma once

#include <direct.h> //mkdir

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include <filesystem>
#include <nlohmann/json.hpp>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <fstream>

#include "exec.h"
#include "font_awesome.h"
#include "TextEditor.h"
#include "gui.h"




void CopyToClipBoard(HWND hwnd, const std::string& s) {
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hGlobe = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
	if (!hGlobe) {
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hGlobe), s.c_str(), s.size() + 1);
	GlobalUnlock(hGlobe);
	SetClipboardData(CF_TEXT, hGlobe);
	CloseClipboard();
	GlobalFree(hGlobe);
}

namespace Resources
{


	void Render()
	{


		ImGui::SetCursorPosY(50);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 25);
		ImGui::Text("							Made by Komazyca#3171");
		ImGui::SetCursorPosY(93);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 0);
		ImGui::Text("I make this Executor as a Christmas gift");
		ImGui::SetCursorPosY(125);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 0);
		ImGui::Text("Buying an Exec = You've Been Scammed");
		ImGui::NewLine();
		if (ImGui::Button("Discord Executor ?", ImVec2(180, 35)))
		{
			system("start https://discord.gg/tNDGXSjES7");
		}



		class Client
		{
		public:

			void Execute(std::string script)
			{


				std::string Antyban = "Antyban ON";
				std::string BlackWare = "BlackWare | Komazyca";
			}
		};
		
	}
}