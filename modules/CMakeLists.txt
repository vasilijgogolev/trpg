#check cmake version
cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)
set(GLFW_INSTALL OFF)
add_subdirectory(glfw)
set_target_properties(glfw PROPERTIES FOLDER "3rd-party/GLFW3")
set_target_properties(update_mappings PROPERTIES FOLDER "3rd-party/GLFW3")

set(IMGUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/imgui)
add_library(imgui STATIC)

target_sources( imgui
	PRIVATE
		${IMGUI_DIR}/imgui_demo.cpp
		${IMGUI_DIR}/imgui_draw.cpp
		${IMGUI_DIR}/imgui_tables.cpp
		${IMGUI_DIR}/imgui_widgets.cpp
		${IMGUI_DIR}/imgui.cpp

	PRIVATE
		${IMGUI_DIR}/backends/imgui_impl_opengl2.cpp
		${IMGUI_DIR}/backends/imgui_impl_glfw.cpp

	PRIVATE
		${IMGUI_DIR}/misc/cpp/imgui_stdlib.cpp
)

target_include_directories( imgui
	PUBLIC ${IMGUI_DIR}
	PUBLIC ${IMGUI_DIR}/backends
	PUBLIC ${IMGUI_DIR}/misc/cpp
)

target_link_libraries(imgui PUBLIC glfw)