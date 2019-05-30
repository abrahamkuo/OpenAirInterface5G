# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# compile C with /usr/bin/cc
C_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)'    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)' -g -DMALLOC_CHECK_=3 -O2 -fPIC  

C_DEFINES = -DASN1_MINIMUM_VERSION=924 -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENB_MODE -DEXMIMO_IOT -DF1AP_RELEASE=R15 -DF1AP_VERSION=3873 -DFIRMWARE_VERSION="\"No svn information\"" -DFLPT_VERSION=V2 -DFSPT_VERSION=V2 -DJUMBO_FRAME -DLTE_RRC_VERSION=3696 -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNAS_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=2 -DNO_RRM -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOAI_USRP=1 -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"\" -DPACKAGE_VERSION="\"Branch: develop Abrev. Hash: 81d4202 Date: Fri Apr 26 16:17:41 2019 +0200\"" -DPHYSIM -DPHY_CONTEXT -DRel14=1 -DS1AP_RELEASE=R14 -DS1AP_VERSION=3664 -DTRACE_RLC_MUTEX -DT_TRACER -DX2AP_RELEASE=R14 -DX2AP_VERSION=3680 -DXFORMS -Drfsimulator_EXPORTS

C_INCLUDES = -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14 -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/S1AP -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/EXMIMO/DEFS -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/USRP/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/IRIS/USERSPACE/LIB -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/mobipass -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/ARCH/COMMON -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/COMMON -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LOG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/COMMON -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/UTILS -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/nfapi/public_inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/common/public_inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/pnf/public_inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/nfapi/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/sim_common/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/pnf_sim/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/openair1 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/TOOLS -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/ENB_APP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/RLC -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/PDCP_v10.1.0 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE -I/home/labuser/Desktop/openairinterface5g_f1ap/common/utils -I/home/labuser/Desktop/openairinterface5g_f1ap/common/utils/ocp_itti -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON/API/NETWORK -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON/EMM/MSG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON/ESM/MSG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/ESM -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/EMM -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/API/USER -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON/IES -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/COMMON/UTIL -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/SECU -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/SCTP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/UDP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/GTPV1-U -I/home/labuser/Desktop/openairinterface5g_f1ap/targets/COMMON -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/ENB_APP/CONTROL_MODULES/PHY -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/ENB_APP/CONTROL_MODULES/RRC -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OSA -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/LAYER2/PROTO_AGENT -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/MEM -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LISTS -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/FIFO -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OCG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/MATH -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/TIMER -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OMG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OTG -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/CLI -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OPT -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/OMV -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/GTPV1-U/nw-gtpv1u/include -I/home/labuser/Desktop/openairinterface5g_f1ap -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/FLPT_V2 -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/ASYNC_IF -I/home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/FSPT_V2 -I/home/labuser/Desktop/openairinterface5g_f1ap/common/utils/hashtable -I/home/labuser/Desktop/openairinterface5g_f1ap/common/utils/msc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/pnf/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/vnf/public_inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/open-nFAPI/vnf/inc -I/home/labuser/Desktop/openairinterface5g_f1ap/nfapi/oai_integration -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/API/USIM -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/EMM/SAP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair3/NAS/UE/ESM/SAP -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/labuser/Desktop/openairinterface5g_f1ap/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/atlas -I/usr/include/X11 -I/home/labuser/Desktop/openairinterface5g_f1ap/common/utils/T 

