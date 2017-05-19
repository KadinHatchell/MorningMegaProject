################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Controller/FileController.cpp \
../Controller/Runner.cpp \
../Controller/StructureController.cpp 

OBJS += \
./Controller/FileController.o \
./Controller/Runner.o \
./Controller/StructureController.o 

CPP_DEPS += \
./Controller/FileController.d \
./Controller/Runner.d \
./Controller/StructureController.d 


# Each subdirectory must supply rules for building sources it contributes
Controller/%.o: ../Controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


