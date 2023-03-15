set (CMAKE_CXX_STANDARD 20)
cmake_minimum_required(VERSION 3.22.0)
project(console_race_simulator_)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
include_directories(transport)
add_library(Transport SHARED
transport/Menu.cpp
transport/Menu.h
transport/All_Transport.h
transport/Air_Transport.cpp
transport/Air_Transport.h
transport/Metla.cpp
transport/Metla.h           
transport/Orel.cpp
transport/Orel.h  
transport/Bot_skorohod.cpp                   
transport/Bot_skorohod.h                     
transport/Transport.cpp                  
transport/Transport.h
transport/Earth_Transport.cpp                
transport/Earth_Transport.h 
transport/Verblud.cpp                 
transport/Verblud.h                    
transport/Verblud_fast.cpp                  
transport/Verblud_fast.h
transport/Kentavr.cpp                        
transport/Kentavr.h                        
transport/Kover_Samolet.cpp                  
transport/Kover_Samolet.h
)
add_executable(NeedForSpeenOnMinimals main.cpp)
target_link_libraries(NeedForSpeenOnMinimals Transport)