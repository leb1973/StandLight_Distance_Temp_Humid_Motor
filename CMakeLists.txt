cmake_minimum_required(VERSION 3.0.0)

project(StandLight)

add_executable(${PROJECT_NAME}
    ./src/hw/LCD/LCD.cpp
    ./src/app/Controller/controller.cpp
    ./src/main.cpp
    ./src/app/Listener/Listener.cpp
    ./src/hw/Button/Button.cpp
    ./src/hw/Led/Led.cpp
    ./src/app/View/View.cpp
    ./src/hw/ClockCheck/ClockCheck.cpp
    ./src/app/service/Service.cpp
    ./src/app/service/ClockService.cpp
    ./src/app/View/ClockView.cpp
    ./src/hw/I2C/I2C.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./src/app/service
    ./src/app/Controller
    ./src/app/Listener
    ./src/hw/Button
    ./src/hw/Led
    ./src/app/View
    ./src/hw/ClockCheck
    ./src/hw/LCD
    ./src/hw/I2C

)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)

target_compile_options(${PROJECT_NAME}  PUBLIC
    -Wall
)