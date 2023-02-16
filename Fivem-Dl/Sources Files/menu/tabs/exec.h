#pragma once
#include "/Users/Administrator/Desktop/dll src/Updated dll/imgui/imgui.h"
#include "../editor/TextEditor.h"
#include "../extras/font_awesome.h"
#include <vector>

TextEditor editor;




namespace Executor
{
	void Render()
	{
		auto size = ImGui::GetWindowSize();
		editor.SetReadOnly(false);
		editor.SetShowWhitespaces(false);
		editor.SetPalette(TextEditor::GetDarkPalette());
		editor.Render("##Null", ImVec2(size.x - 210, size.y - 452), true);
		ImGui::NewLine();
		if (ImGui::Button(ICON_FA_CODE" Execute", ImVec2(100, 35)))
		{
			// nothing here = ud
		}

	}
}