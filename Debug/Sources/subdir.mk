################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Alimentation.c \
../Sources/BB_Projet.c \
../Sources/Events.c \
../Sources/RTC.c \
../Sources/Temperature.c \
../Sources/alerteGSM.c \
../Sources/main.c \
../Sources/stockage_information.c 

OBJS += \
./Sources/Alimentation.o \
./Sources/BB_Projet.o \
./Sources/Events.o \
./Sources/RTC.o \
./Sources/Temperature.o \
./Sources/alerteGSM.o \
./Sources/main.o \
./Sources/stockage_information.o 

C_DEPS += \
./Sources/Alimentation.d \
./Sources/BB_Projet.d \
./Sources/Events.d \
./Sources/RTC.d \
./Sources/Temperature.d \
./Sources/alerteGSM.d \
./Sources/main.d \
./Sources/stockage_information.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"D:/Tempprojet/cartesd_temperature_gsm_ok01/Static_Code/System" -I"D:/Tempprojet/cartesd_temperature_gsm_ok01/Static_Code/PDD" -I"D:/Tempprojet/cartesd_temperature_gsm_ok01/Static_Code/IO_Map" -I"C:\Freescale\KDS_v3\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"D:/Tempprojet/cartesd_temperature_gsm_ok01/Sources" -I"D:/Tempprojet/cartesd_temperature_gsm_ok01/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


