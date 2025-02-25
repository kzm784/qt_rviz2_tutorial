cmake_minimum_required(VERSION 3.5)

project(qt5_hello_world)

set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(qt5_hello_world_exec
    src/qt5_hello_world.ui
    src/main.cpp
)

target_link_libraries(qt5_hello_world_exec
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)