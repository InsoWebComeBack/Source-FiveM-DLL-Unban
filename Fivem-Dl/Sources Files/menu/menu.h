#pragma once

#include "./extras/font_awesome.h"
#include "/Users/Administrator/Desktop/dll src/Updated dll/imgui/imgui_internal.h"
#include "/Users/Administrator/Desktop/dll src/Updated dll/imgui/imgui.h"

#include "./tabs/exec.h"
#include "./tabs/resources.h"

#include "./tabs/gui.h"


namespace Menu
{
	bool show;
	static int Tab = 1;
	bool IsMenuOpen = false;

	void Render()
	{

		ImGui::Begin("											OZIWARE [UPDATED] | Made by Komazyca#3171", &show, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollWithMouse); 
		ImGui::Columns(2, "##maincolumn", true);
		ImGui::SetColumnOffset(1, 220);
		
		ImGui::Spacing();
		ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
		if (ImGui::Button(ICON_FA_CODE" Lua Executor", ImVec2(200, 37))) //dont need to clic
		{
			Tab = 1;
		}
		ImGui::SetCursorPosY(86);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 0);
		if (ImGui::Button(ICON_FA_COGS" Config", ImVec2(200, 37)))
		{
			Tab = 2;
		}

		
		ImGui::SetCursorPosY(300);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 25);
		ImGui::Text("Omg i can add text with HxD :)");
		ImGui::SetCursorPosY(320);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 25);
		ImGui::Text("		DISCORD:");
		ImGui::Spacing();
		ImGui::SetCursorPosY(349);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 18);
		ImGui::Text("	 gg/tNDGXSjES7");

		ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 10); //Same here
		ImGui::Text(""); //Makes sure that the column goes the whole gui height, so don't remove :)

		ImGui::NextColumn();


		if (Tab == 1)
		{
			Executor::Render();
		}
		else if (Tab == 2)
		{
			Resources::Render();
		}


		ImGui::End();
	}
		
}