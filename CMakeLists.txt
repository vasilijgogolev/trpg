cmake_minimum_required(VERSION 3.9.0)

project(trpg)

if (POLICY CMP0025)
	cmake_policy(SET CMP0025 NEW)
endif ()

set(CMAKE_CXX_STANDARD 17)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
	add_compile_options("/std:c++17")
	add_compile_options("/bigobj")
endif()

file(GLOB_RECURSE SOURCES "src/*.*")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(modules)

target_link_libraries(${PROJECT_NAME} 
	PUBLIC 
		"-framework OpenGL"
		glfw
		imgui
)