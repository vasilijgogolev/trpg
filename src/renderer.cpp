#include "renderer.h"
#include <imgui.h>

void renderer::initialize() {
	
}

void renderer::draw() {
	if (ImGui::BeginTabItem("GAME TAB")) {
		
		ImGui::Text("This is game tab");
		
		ImGui::EndTabItem();
	}
	
	if (ImGui::BeginTabItem("PROFILE")) {
		
		ImGui::Text("This is profile tab");
		
		ImGui::EndTabItem();
	}
	
}
