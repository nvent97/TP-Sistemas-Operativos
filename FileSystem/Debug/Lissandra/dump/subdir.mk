################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lissandra/dump/dump.c 

OBJS += \
./Lissandra/dump/dump.o 

C_DEPS += \
./Lissandra/dump/dump.d 


# Each subdirectory must supply rules for building sources it contributes
Lissandra/dump/%.o: ../Lissandra/dump/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/utnso/workspace/tp-2019-1c-Los-Sinequi/sharedLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


