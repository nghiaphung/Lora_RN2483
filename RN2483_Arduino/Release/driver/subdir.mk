################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../driver/UART.cpp 

LINK_OBJ += \
./driver/UART.cpp.o 

CPP_DEPS += \
./driver/UART.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
driver/UART.cpp.o: ../driver/UART.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/nghia/Eclipse/eclipse/arduinoPlugin/tools/arduino/avr-gcc/4.8.1-arduino5/bin/avr-g++" -c -g -Os -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/nghia/Eclipse/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.9/cores/arduino" -I"/home/nghia/Eclipse/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.9/variants/standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


