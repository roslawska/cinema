cmake_minimum_required(VERSION 3.4)

project(Program)

#specify set of project's source files
set(SOURCE_FILES
        src/main.cpp
        ../library/src/Bilet.cpp ../library/include/Bilet.hpp ../library/src/Film.cpp ../library/include/Film.hpp ../library/src/Normalny2D.cpp ../library/include/Normalny2D.hpp ../library/src/Normalny3D.cpp ../library/include/Normalny3D.hpp ../library/include/Repozytorium.hpp ../library/include/RBilet.hpp ../library/src/Sala.cpp ../library/include/Sala.hpp ../library/src/Ulgowy2D.cpp ../library/include/Ulgowy2D.hpp ../library/src/Ulgowy3D.cpp ../library/include/Ulgowy3D.hpp ../library/include/RSala.hpp ../library/include/RFilm.hpp)
#add following files to executable file 'Program'
add_executable(Program ${SOURCE_FILES})

#add libraries from 'Library' project
target_link_libraries(Program Library)

#add header files from 'include' directory of main project
target_include_directories(Program PUBLIC include)
