################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/src/SysTick.c \
../src/src/gpio.c \
../src/src/irq.c 

OBJS += \
./src/src/SysTick.o \
./src/src/gpio.o \
./src/src/irq.o 

C_DEPS += \
./src/src/SysTick.d \
./src/src/gpio.d \
./src/src/irq.d 


# Each subdirectory must supply rules for building sources it contributes
src/src/%.o: ../src/src/%.c
	arm-atollic-eabi-gcc -c "$<" -mthumb -mcpu=cortex-m3 -std=gnu11 -DSTM32F10X_MD -DHSE_VALUE=8000000 -I"C:\IoT\STM32\Blue Pill - STM32F103C8T6\NVIC_Example\src\inc" -I"C:\IoT\STM32\Blue Pill - STM32F103C8T6\NVIC_Example\Libraries\System_stm32f10x\inc" -I../Libraries/CMSIS/Include -I"C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.0.1\ARMTools\arm-atollic-eabi\include" -O0 -ffunction-sections -fdata-sections -g -fstack-usage -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -specs=nano.specs -o "$@"

