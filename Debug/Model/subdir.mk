################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Model/CrimeData.cpp \
../Model/IntNode.cpp \
../Model/IntNodeArray.cpp \
../Model/Meme.cpp \
../Model/Timer.cpp 

OBJS += \
./Model/CrimeData.o \
./Model/IntNode.o \
./Model/IntNodeArray.o \
./Model/Meme.o \
./Model/Timer.o 

CPP_DEPS += \
./Model/CrimeData.d \
./Model/IntNode.d \
./Model/IntNodeArray.d \
./Model/Meme.d \
./Model/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
Model/%.o: ../Model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


