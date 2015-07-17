#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=MicroMouseMAIN.c SetupUART.c motorFunctions.c indicatorFunctions.c errorFunctions.c buttonFunctions.c navigationFunctions.c encoderFunctions.c testFunctions.c irFunctions.c batteryFunctions.c configFunctions.c menuFunctions.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/MicroMouseMAIN.o ${OBJECTDIR}/SetupUART.o ${OBJECTDIR}/motorFunctions.o ${OBJECTDIR}/indicatorFunctions.o ${OBJECTDIR}/errorFunctions.o ${OBJECTDIR}/buttonFunctions.o ${OBJECTDIR}/navigationFunctions.o ${OBJECTDIR}/encoderFunctions.o ${OBJECTDIR}/testFunctions.o ${OBJECTDIR}/irFunctions.o ${OBJECTDIR}/batteryFunctions.o ${OBJECTDIR}/configFunctions.o ${OBJECTDIR}/menuFunctions.o
POSSIBLE_DEPFILES=${OBJECTDIR}/MicroMouseMAIN.o.d ${OBJECTDIR}/SetupUART.o.d ${OBJECTDIR}/motorFunctions.o.d ${OBJECTDIR}/indicatorFunctions.o.d ${OBJECTDIR}/errorFunctions.o.d ${OBJECTDIR}/buttonFunctions.o.d ${OBJECTDIR}/navigationFunctions.o.d ${OBJECTDIR}/encoderFunctions.o.d ${OBJECTDIR}/testFunctions.o.d ${OBJECTDIR}/irFunctions.o.d ${OBJECTDIR}/batteryFunctions.o.d ${OBJECTDIR}/configFunctions.o.d ${OBJECTDIR}/menuFunctions.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/MicroMouseMAIN.o ${OBJECTDIR}/SetupUART.o ${OBJECTDIR}/motorFunctions.o ${OBJECTDIR}/indicatorFunctions.o ${OBJECTDIR}/errorFunctions.o ${OBJECTDIR}/buttonFunctions.o ${OBJECTDIR}/navigationFunctions.o ${OBJECTDIR}/encoderFunctions.o ${OBJECTDIR}/testFunctions.o ${OBJECTDIR}/irFunctions.o ${OBJECTDIR}/batteryFunctions.o ${OBJECTDIR}/configFunctions.o ${OBJECTDIR}/menuFunctions.o

# Source Files
SOURCEFILES=MicroMouseMAIN.c SetupUART.c motorFunctions.c indicatorFunctions.c errorFunctions.c buttonFunctions.c navigationFunctions.c encoderFunctions.c testFunctions.c irFunctions.c batteryFunctions.c configFunctions.c menuFunctions.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=33EP512MC806
MP_LINKER_FILE_OPTION=,--script=p33EP512MC806.gld
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/MicroMouseMAIN.o: MicroMouseMAIN.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/MicroMouseMAIN.o.d 
	@${RM} ${OBJECTDIR}/MicroMouseMAIN.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  MicroMouseMAIN.c  -o ${OBJECTDIR}/MicroMouseMAIN.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/MicroMouseMAIN.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/MicroMouseMAIN.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/SetupUART.o: SetupUART.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/SetupUART.o.d 
	@${RM} ${OBJECTDIR}/SetupUART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  SetupUART.c  -o ${OBJECTDIR}/SetupUART.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/SetupUART.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/SetupUART.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/motorFunctions.o: motorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/motorFunctions.o.d 
	@${RM} ${OBJECTDIR}/motorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  motorFunctions.c  -o ${OBJECTDIR}/motorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/motorFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/motorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/indicatorFunctions.o: indicatorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/indicatorFunctions.o.d 
	@${RM} ${OBJECTDIR}/indicatorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  indicatorFunctions.c  -o ${OBJECTDIR}/indicatorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/indicatorFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/indicatorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/errorFunctions.o: errorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/errorFunctions.o.d 
	@${RM} ${OBJECTDIR}/errorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  errorFunctions.c  -o ${OBJECTDIR}/errorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/errorFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/errorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/buttonFunctions.o: buttonFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/buttonFunctions.o.d 
	@${RM} ${OBJECTDIR}/buttonFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  buttonFunctions.c  -o ${OBJECTDIR}/buttonFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/buttonFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/buttonFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/navigationFunctions.o: navigationFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/navigationFunctions.o.d 
	@${RM} ${OBJECTDIR}/navigationFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  navigationFunctions.c  -o ${OBJECTDIR}/navigationFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/navigationFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/navigationFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/encoderFunctions.o: encoderFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/encoderFunctions.o.d 
	@${RM} ${OBJECTDIR}/encoderFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  encoderFunctions.c  -o ${OBJECTDIR}/encoderFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/encoderFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/encoderFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/testFunctions.o: testFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/testFunctions.o.d 
	@${RM} ${OBJECTDIR}/testFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  testFunctions.c  -o ${OBJECTDIR}/testFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/testFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/testFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/irFunctions.o: irFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/irFunctions.o.d 
	@${RM} ${OBJECTDIR}/irFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  irFunctions.c  -o ${OBJECTDIR}/irFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/irFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/irFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/batteryFunctions.o: batteryFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/batteryFunctions.o.d 
	@${RM} ${OBJECTDIR}/batteryFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  batteryFunctions.c  -o ${OBJECTDIR}/batteryFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/batteryFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/batteryFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/configFunctions.o: configFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configFunctions.o.d 
	@${RM} ${OBJECTDIR}/configFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  configFunctions.c  -o ${OBJECTDIR}/configFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/configFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/configFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/menuFunctions.o: menuFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/menuFunctions.o.d 
	@${RM} ${OBJECTDIR}/menuFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  menuFunctions.c  -o ${OBJECTDIR}/menuFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/menuFunctions.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -mno-eds-warn  -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/menuFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
else
${OBJECTDIR}/MicroMouseMAIN.o: MicroMouseMAIN.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/MicroMouseMAIN.o.d 
	@${RM} ${OBJECTDIR}/MicroMouseMAIN.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  MicroMouseMAIN.c  -o ${OBJECTDIR}/MicroMouseMAIN.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/MicroMouseMAIN.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/MicroMouseMAIN.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/SetupUART.o: SetupUART.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/SetupUART.o.d 
	@${RM} ${OBJECTDIR}/SetupUART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  SetupUART.c  -o ${OBJECTDIR}/SetupUART.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/SetupUART.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/SetupUART.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/motorFunctions.o: motorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/motorFunctions.o.d 
	@${RM} ${OBJECTDIR}/motorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  motorFunctions.c  -o ${OBJECTDIR}/motorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/motorFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/motorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/indicatorFunctions.o: indicatorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/indicatorFunctions.o.d 
	@${RM} ${OBJECTDIR}/indicatorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  indicatorFunctions.c  -o ${OBJECTDIR}/indicatorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/indicatorFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/indicatorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/errorFunctions.o: errorFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/errorFunctions.o.d 
	@${RM} ${OBJECTDIR}/errorFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  errorFunctions.c  -o ${OBJECTDIR}/errorFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/errorFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/errorFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/buttonFunctions.o: buttonFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/buttonFunctions.o.d 
	@${RM} ${OBJECTDIR}/buttonFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  buttonFunctions.c  -o ${OBJECTDIR}/buttonFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/buttonFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/buttonFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/navigationFunctions.o: navigationFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/navigationFunctions.o.d 
	@${RM} ${OBJECTDIR}/navigationFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  navigationFunctions.c  -o ${OBJECTDIR}/navigationFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/navigationFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/navigationFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/encoderFunctions.o: encoderFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/encoderFunctions.o.d 
	@${RM} ${OBJECTDIR}/encoderFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  encoderFunctions.c  -o ${OBJECTDIR}/encoderFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/encoderFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/encoderFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/testFunctions.o: testFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/testFunctions.o.d 
	@${RM} ${OBJECTDIR}/testFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  testFunctions.c  -o ${OBJECTDIR}/testFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/testFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/testFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/irFunctions.o: irFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/irFunctions.o.d 
	@${RM} ${OBJECTDIR}/irFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  irFunctions.c  -o ${OBJECTDIR}/irFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/irFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/irFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/batteryFunctions.o: batteryFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/batteryFunctions.o.d 
	@${RM} ${OBJECTDIR}/batteryFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  batteryFunctions.c  -o ${OBJECTDIR}/batteryFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/batteryFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/batteryFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/configFunctions.o: configFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configFunctions.o.d 
	@${RM} ${OBJECTDIR}/configFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  configFunctions.c  -o ${OBJECTDIR}/configFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/configFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/configFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/menuFunctions.o: menuFunctions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/menuFunctions.o.d 
	@${RM} ${OBJECTDIR}/menuFunctions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  menuFunctions.c  -o ${OBJECTDIR}/menuFunctions.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/menuFunctions.o.d"      -mno-eds-warn  -g -omf=elf -mlarge-data -msmall-scalar -mconst-in-data -menable-large-arrays -O0 -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/menuFunctions.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemblePreproc
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf  -mreserve=data@0x1000:0x101B -mreserve=data@0x101C:0x101D -mreserve=data@0x101E:0x101F -mreserve=data@0x1020:0x1021 -mreserve=data@0x1022:0x1023 -mreserve=data@0x1024:0x1027 -mreserve=data@0x1028:0x104F   -Wl,--local-stack,--defsym=__MPLAB_BUILD=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1,$(MP_LINKER_FILE_OPTION),--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--no-force-link,--smart-io,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem$(MP_EXTRA_LD_POST) 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -omf=elf -Wl,--local-stack,--defsym=__MPLAB_BUILD=1,$(MP_LINKER_FILE_OPTION),--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--no-force-link,--smart-io,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem$(MP_EXTRA_LD_POST) 
	${MP_CC_DIR}\\xc16-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/MM_2015.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -a  -omf=elf  
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
