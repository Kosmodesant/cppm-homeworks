cmake_minimum_required(VERSION 3.22.0)
project(console_race_simulator)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Transport SHARED
Menu.cpp
Menu.h
All_Transport.h
Air_Transport.cpp
Air_Transport.h
Metla.cpp
Metla.h           
Orel.cpp
Orel.h  
Bot_skorohod.cpp                   
Bot_skorohod.h                     
Transport.cpp                  
Transport.h
Earth_Transport.cpp                
Earth_Transport.h 
Verblud.cpp                 
Verblud.h                    
Verblud_fast.cpp                  
Verblud_fast.h
Kentavr.cpp                        
Kentavr.h                        
Kover_Samolet.cpp                  
Kover_Samolet.h
)
add_executable(NeedForSpeenOnMinimals main.cpp)
target_link_libraries(NeedForSpeenOnMinimals Transport)