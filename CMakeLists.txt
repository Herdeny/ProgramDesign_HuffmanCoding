cmake_minimum_required(VERSION 3.5)

project(ProgramDesign_HuffmanCoding VERSION 0.1 LANGUAGES CXX)

file(GLOB_RECURSE QRC_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.qrc)

set(CMAKE_PREFIX_PATH D:/Qt/6.5.0/mingw_64)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QRC_SOURCE_FILES "Resourse/image.qrc")

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt6 REQUIRED COMPONENTS Core5Compat)
set(PROJECT_SOURCES
        "Program/main.cpp"
        Program/Node.cpp Program/Node.h
        "UI/mainwindow.cpp"
        "UI/mainwindow.h"
        "UI/mainwindow.ui"
        Program/HuffmanTree.cpp
        Program/HuffmanTree.h
        Program/system.cpp
        Program/system.h
        UI/sender_interface.cpp
        UI/sender_interface.h
        UI/sender_interface.ui
        UI/receiver_interface.cpp
        UI/receiver_interface.h
        UI/receiver_interface.ui)

SOURCE_GROUP("Resource Files" FILES ${QRC_SOURCE_FILES})

if (${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ProgramDesign_HuffmanCoding
            MANUAL_FINALIZATION
            "Program/main.cpp"
            Program/Node.cpp
            Program/Node.h
            ${PROJECT_SOURCES}
            "UI/mainwindow.cpp"
            "UI/mainwindow.h"
            "UI/mainwindow.ui"
            Program/HuffmanTree.cpp
            Program/HuffmanTree.h
            Program/system.cpp
            Program/system.h
            UI/sender_interface.cpp
            UI/sender_interface.h
            UI/sender_interface.ui
            UI/receiver_interface.cpp
            UI/receiver_interface.h
            UI/receiver_interface.ui)
endif ()


target_link_libraries(ProgramDesign_HuffmanCoding PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(ProgramDesign_HuffmanCoding PRIVATE Qt6::Core5Compat)


#set_target_properties(ProgramDesign_HuffmanCoding PROPERTIES
#        MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#        MACOSX_BUNDLE TRUE
#        WIN32_EXECUTABLE TRUE
#        )

#install(TARGETS ProgramDesign_HuffmanCoding
#        BUNDLE DESTINATION .
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#        )

if (QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ProgramDesign_HuffmanCoding)
endif ()


