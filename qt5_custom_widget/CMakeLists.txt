cmake_minimum_required(VERSION 3.5)

project(qt5_custom_widget)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

set(QT5_LIBS Qt5::Core Qt5::Gui Qt5::Widgets)

add_library(custom_widget
    src/custom_widget/CanvasWidget/canvaswidget.cpp)
target_link_libraries(custom_widget ${QT5_LIBS})
set(QT5_LIBS ${QT5_LIBS} custom_widget)

set(TARGET_WIDGET qt5_custom_widget_widget)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/custom_widget/CanvasWidget/
    ${CMAKE_CURRENT_BINARY_DIR}/${TARGET_WIDGET}_autogen/include
)
add_library(${TARGET_WIDGET}
    src/widget/qt5_custom_widget.ui 
    src/widget/widget.cpp
    ${WIDGETS}
)
target_link_libraries(${TARGET_WIDGET} ${QT5_LIBS})
set(QT5_LIBS ${QT5_LIBS} ${TARGET_WIDGET})

add_library(qt5_custom_widget_mainwindow
    src/mainwindow/mainwindow.cpp)
target_link_libraries(qt5_custom_widget_mainwindow ${QT5_LIBS})
set(QT5_LIBS ${QT5_LIBS} qt5_custom_widget_mainwindow)

add_executable(qt5_custom_widget_exec
    src/main.cpp)
target_link_libraries(qt5_custom_widget_exec ${QT5_LIBS})