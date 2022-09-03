#include "imguiRenderer.h"
#include <imgui.h>

void imguiRenderer::initialize() {
	
}

void imguiRenderer::draw() {
	if (ImGui::BeginTabItem("GAME TAB")) {
		
		ImGui::Text("This is game tab");
		
		ImGui::EndTabItem();
	}
	
	if (ImGui::BeginTabItem("PROFILE")) {
		
		ImGui::Text("This is profile tab");
		
		ImGui::EndTabItem();
	}
	
}
