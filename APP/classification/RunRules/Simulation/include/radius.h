/**\file */
#ifndef SLIC_DECLARATIONS_radius_H
#define SLIC_DECLARATIONS_radius_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define radius_PCIE_ALIGNMENT (16)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] param_C Interface Parameter "C".
 * \param [in] param_N Interface Parameter "N".
 * \param [in] param_P Interface Parameter "P".
 * \param [in] param_R Interface Parameter "R".
 * \param [in] instream_a The stream should be of size ((param_N * param_P) * 4) bytes.
 * \param [out] outstream_c The stream should be of size ((param_C * param_P) * 4) bytes.
 * \param [in] inmem_radiusKernel_mappedRom000 Mapped ROM inmem_radiusKernel_mappedRom000, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom001 Mapped ROM inmem_radiusKernel_mappedRom001, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom002 Mapped ROM inmem_radiusKernel_mappedRom002, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom003 Mapped ROM inmem_radiusKernel_mappedRom003, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom004 Mapped ROM inmem_radiusKernel_mappedRom004, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom005 Mapped ROM inmem_radiusKernel_mappedRom005, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom006 Mapped ROM inmem_radiusKernel_mappedRom006, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom007 Mapped ROM inmem_radiusKernel_mappedRom007, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom008 Mapped ROM inmem_radiusKernel_mappedRom008, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom009 Mapped ROM inmem_radiusKernel_mappedRom009, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom010 Mapped ROM inmem_radiusKernel_mappedRom010, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom011 Mapped ROM inmem_radiusKernel_mappedRom011, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom012 Mapped ROM inmem_radiusKernel_mappedRom012, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom013 Mapped ROM inmem_radiusKernel_mappedRom013, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom014 Mapped ROM inmem_radiusKernel_mappedRom014, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom015 Mapped ROM inmem_radiusKernel_mappedRom015, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom016 Mapped ROM inmem_radiusKernel_mappedRom016, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom017 Mapped ROM inmem_radiusKernel_mappedRom017, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom018 Mapped ROM inmem_radiusKernel_mappedRom018, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom019 Mapped ROM inmem_radiusKernel_mappedRom019, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom020 Mapped ROM inmem_radiusKernel_mappedRom020, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom021 Mapped ROM inmem_radiusKernel_mappedRom021, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom022 Mapped ROM inmem_radiusKernel_mappedRom022, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom023 Mapped ROM inmem_radiusKernel_mappedRom023, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom024 Mapped ROM inmem_radiusKernel_mappedRom024, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom025 Mapped ROM inmem_radiusKernel_mappedRom025, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom026 Mapped ROM inmem_radiusKernel_mappedRom026, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom027 Mapped ROM inmem_radiusKernel_mappedRom027, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom028 Mapped ROM inmem_radiusKernel_mappedRom028, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom029 Mapped ROM inmem_radiusKernel_mappedRom029, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom030 Mapped ROM inmem_radiusKernel_mappedRom030, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom031 Mapped ROM inmem_radiusKernel_mappedRom031, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom032 Mapped ROM inmem_radiusKernel_mappedRom032, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom033 Mapped ROM inmem_radiusKernel_mappedRom033, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom034 Mapped ROM inmem_radiusKernel_mappedRom034, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom035 Mapped ROM inmem_radiusKernel_mappedRom035, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom036 Mapped ROM inmem_radiusKernel_mappedRom036, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom037 Mapped ROM inmem_radiusKernel_mappedRom037, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom038 Mapped ROM inmem_radiusKernel_mappedRom038, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom039 Mapped ROM inmem_radiusKernel_mappedRom039, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom040 Mapped ROM inmem_radiusKernel_mappedRom040, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom041 Mapped ROM inmem_radiusKernel_mappedRom041, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom042 Mapped ROM inmem_radiusKernel_mappedRom042, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom043 Mapped ROM inmem_radiusKernel_mappedRom043, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom044 Mapped ROM inmem_radiusKernel_mappedRom044, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom045 Mapped ROM inmem_radiusKernel_mappedRom045, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom046 Mapped ROM inmem_radiusKernel_mappedRom046, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom047 Mapped ROM inmem_radiusKernel_mappedRom047, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom048 Mapped ROM inmem_radiusKernel_mappedRom048, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom049 Mapped ROM inmem_radiusKernel_mappedRom049, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom050 Mapped ROM inmem_radiusKernel_mappedRom050, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom051 Mapped ROM inmem_radiusKernel_mappedRom051, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom052 Mapped ROM inmem_radiusKernel_mappedRom052, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom053 Mapped ROM inmem_radiusKernel_mappedRom053, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom054 Mapped ROM inmem_radiusKernel_mappedRom054, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom055 Mapped ROM inmem_radiusKernel_mappedRom055, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom056 Mapped ROM inmem_radiusKernel_mappedRom056, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom057 Mapped ROM inmem_radiusKernel_mappedRom057, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom058 Mapped ROM inmem_radiusKernel_mappedRom058, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom059 Mapped ROM inmem_radiusKernel_mappedRom059, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom060 Mapped ROM inmem_radiusKernel_mappedRom060, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom061 Mapped ROM inmem_radiusKernel_mappedRom061, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom062 Mapped ROM inmem_radiusKernel_mappedRom062, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom063 Mapped ROM inmem_radiusKernel_mappedRom063, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom064 Mapped ROM inmem_radiusKernel_mappedRom064, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom065 Mapped ROM inmem_radiusKernel_mappedRom065, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom066 Mapped ROM inmem_radiusKernel_mappedRom066, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom067 Mapped ROM inmem_radiusKernel_mappedRom067, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom068 Mapped ROM inmem_radiusKernel_mappedRom068, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom069 Mapped ROM inmem_radiusKernel_mappedRom069, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom070 Mapped ROM inmem_radiusKernel_mappedRom070, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom071 Mapped ROM inmem_radiusKernel_mappedRom071, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom072 Mapped ROM inmem_radiusKernel_mappedRom072, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom073 Mapped ROM inmem_radiusKernel_mappedRom073, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom074 Mapped ROM inmem_radiusKernel_mappedRom074, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom075 Mapped ROM inmem_radiusKernel_mappedRom075, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom076 Mapped ROM inmem_radiusKernel_mappedRom076, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom077 Mapped ROM inmem_radiusKernel_mappedRom077, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom078 Mapped ROM inmem_radiusKernel_mappedRom078, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom079 Mapped ROM inmem_radiusKernel_mappedRom079, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom080 Mapped ROM inmem_radiusKernel_mappedRom080, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom081 Mapped ROM inmem_radiusKernel_mappedRom081, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom082 Mapped ROM inmem_radiusKernel_mappedRom082, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom083 Mapped ROM inmem_radiusKernel_mappedRom083, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom084 Mapped ROM inmem_radiusKernel_mappedRom084, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom085 Mapped ROM inmem_radiusKernel_mappedRom085, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom086 Mapped ROM inmem_radiusKernel_mappedRom086, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom087 Mapped ROM inmem_radiusKernel_mappedRom087, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom088 Mapped ROM inmem_radiusKernel_mappedRom088, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom089 Mapped ROM inmem_radiusKernel_mappedRom089, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom090 Mapped ROM inmem_radiusKernel_mappedRom090, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom091 Mapped ROM inmem_radiusKernel_mappedRom091, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom092 Mapped ROM inmem_radiusKernel_mappedRom092, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom093 Mapped ROM inmem_radiusKernel_mappedRom093, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom094 Mapped ROM inmem_radiusKernel_mappedRom094, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom095 Mapped ROM inmem_radiusKernel_mappedRom095, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom096 Mapped ROM inmem_radiusKernel_mappedRom096, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom097 Mapped ROM inmem_radiusKernel_mappedRom097, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom098 Mapped ROM inmem_radiusKernel_mappedRom098, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom099 Mapped ROM inmem_radiusKernel_mappedRom099, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom100 Mapped ROM inmem_radiusKernel_mappedRom100, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom101 Mapped ROM inmem_radiusKernel_mappedRom101, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom102 Mapped ROM inmem_radiusKernel_mappedRom102, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom103 Mapped ROM inmem_radiusKernel_mappedRom103, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom104 Mapped ROM inmem_radiusKernel_mappedRom104, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom105 Mapped ROM inmem_radiusKernel_mappedRom105, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom106 Mapped ROM inmem_radiusKernel_mappedRom106, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom107 Mapped ROM inmem_radiusKernel_mappedRom107, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom108 Mapped ROM inmem_radiusKernel_mappedRom108, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom109 Mapped ROM inmem_radiusKernel_mappedRom109, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom110 Mapped ROM inmem_radiusKernel_mappedRom110, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom111 Mapped ROM inmem_radiusKernel_mappedRom111, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom112 Mapped ROM inmem_radiusKernel_mappedRom112, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom113 Mapped ROM inmem_radiusKernel_mappedRom113, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom114 Mapped ROM inmem_radiusKernel_mappedRom114, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom115 Mapped ROM inmem_radiusKernel_mappedRom115, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom116 Mapped ROM inmem_radiusKernel_mappedRom116, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom117 Mapped ROM inmem_radiusKernel_mappedRom117, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom118 Mapped ROM inmem_radiusKernel_mappedRom118, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom119 Mapped ROM inmem_radiusKernel_mappedRom119, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom120 Mapped ROM inmem_radiusKernel_mappedRom120, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom121 Mapped ROM inmem_radiusKernel_mappedRom121, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom122 Mapped ROM inmem_radiusKernel_mappedRom122, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom123 Mapped ROM inmem_radiusKernel_mappedRom123, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom124 Mapped ROM inmem_radiusKernel_mappedRom124, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom125 Mapped ROM inmem_radiusKernel_mappedRom125, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom126 Mapped ROM inmem_radiusKernel_mappedRom126, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom127 Mapped ROM inmem_radiusKernel_mappedRom127, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom128 Mapped ROM inmem_radiusKernel_mappedRom128, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom129 Mapped ROM inmem_radiusKernel_mappedRom129, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom130 Mapped ROM inmem_radiusKernel_mappedRom130, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom131 Mapped ROM inmem_radiusKernel_mappedRom131, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom132 Mapped ROM inmem_radiusKernel_mappedRom132, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom133 Mapped ROM inmem_radiusKernel_mappedRom133, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom134 Mapped ROM inmem_radiusKernel_mappedRom134, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom135 Mapped ROM inmem_radiusKernel_mappedRom135, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom136 Mapped ROM inmem_radiusKernel_mappedRom136, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom137 Mapped ROM inmem_radiusKernel_mappedRom137, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom138 Mapped ROM inmem_radiusKernel_mappedRom138, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom139 Mapped ROM inmem_radiusKernel_mappedRom139, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom140 Mapped ROM inmem_radiusKernel_mappedRom140, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom141 Mapped ROM inmem_radiusKernel_mappedRom141, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom142 Mapped ROM inmem_radiusKernel_mappedRom142, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom143 Mapped ROM inmem_radiusKernel_mappedRom143, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom144 Mapped ROM inmem_radiusKernel_mappedRom144, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom145 Mapped ROM inmem_radiusKernel_mappedRom145, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom146 Mapped ROM inmem_radiusKernel_mappedRom146, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom147 Mapped ROM inmem_radiusKernel_mappedRom147, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom148 Mapped ROM inmem_radiusKernel_mappedRom148, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom149 Mapped ROM inmem_radiusKernel_mappedRom149, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom150 Mapped ROM inmem_radiusKernel_mappedRom150, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom151 Mapped ROM inmem_radiusKernel_mappedRom151, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom152 Mapped ROM inmem_radiusKernel_mappedRom152, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom153 Mapped ROM inmem_radiusKernel_mappedRom153, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom154 Mapped ROM inmem_radiusKernel_mappedRom154, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom155 Mapped ROM inmem_radiusKernel_mappedRom155, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom156 Mapped ROM inmem_radiusKernel_mappedRom156, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom157 Mapped ROM inmem_radiusKernel_mappedRom157, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom158 Mapped ROM inmem_radiusKernel_mappedRom158, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom159 Mapped ROM inmem_radiusKernel_mappedRom159, should be of size (3128 * sizeof(double)).
 */
void radius(
	int64_t param_C,
	int64_t param_N,
	int64_t param_P,
	int64_t param_R,
	const float *instream_a,
	float *outstream_c,
	const double *inmem_radiusKernel_mappedRom000,
	const double *inmem_radiusKernel_mappedRom001,
	const double *inmem_radiusKernel_mappedRom002,
	const double *inmem_radiusKernel_mappedRom003,
	const double *inmem_radiusKernel_mappedRom004,
	const double *inmem_radiusKernel_mappedRom005,
	const double *inmem_radiusKernel_mappedRom006,
	const double *inmem_radiusKernel_mappedRom007,
	const double *inmem_radiusKernel_mappedRom008,
	const double *inmem_radiusKernel_mappedRom009,
	const double *inmem_radiusKernel_mappedRom010,
	const double *inmem_radiusKernel_mappedRom011,
	const double *inmem_radiusKernel_mappedRom012,
	const double *inmem_radiusKernel_mappedRom013,
	const double *inmem_radiusKernel_mappedRom014,
	const double *inmem_radiusKernel_mappedRom015,
	const double *inmem_radiusKernel_mappedRom016,
	const double *inmem_radiusKernel_mappedRom017,
	const double *inmem_radiusKernel_mappedRom018,
	const double *inmem_radiusKernel_mappedRom019,
	const double *inmem_radiusKernel_mappedRom020,
	const double *inmem_radiusKernel_mappedRom021,
	const double *inmem_radiusKernel_mappedRom022,
	const double *inmem_radiusKernel_mappedRom023,
	const double *inmem_radiusKernel_mappedRom024,
	const double *inmem_radiusKernel_mappedRom025,
	const double *inmem_radiusKernel_mappedRom026,
	const double *inmem_radiusKernel_mappedRom027,
	const double *inmem_radiusKernel_mappedRom028,
	const double *inmem_radiusKernel_mappedRom029,
	const double *inmem_radiusKernel_mappedRom030,
	const double *inmem_radiusKernel_mappedRom031,
	const double *inmem_radiusKernel_mappedRom032,
	const double *inmem_radiusKernel_mappedRom033,
	const double *inmem_radiusKernel_mappedRom034,
	const double *inmem_radiusKernel_mappedRom035,
	const double *inmem_radiusKernel_mappedRom036,
	const double *inmem_radiusKernel_mappedRom037,
	const double *inmem_radiusKernel_mappedRom038,
	const double *inmem_radiusKernel_mappedRom039,
	const double *inmem_radiusKernel_mappedRom040,
	const double *inmem_radiusKernel_mappedRom041,
	const double *inmem_radiusKernel_mappedRom042,
	const double *inmem_radiusKernel_mappedRom043,
	const double *inmem_radiusKernel_mappedRom044,
	const double *inmem_radiusKernel_mappedRom045,
	const double *inmem_radiusKernel_mappedRom046,
	const double *inmem_radiusKernel_mappedRom047,
	const double *inmem_radiusKernel_mappedRom048,
	const double *inmem_radiusKernel_mappedRom049,
	const double *inmem_radiusKernel_mappedRom050,
	const double *inmem_radiusKernel_mappedRom051,
	const double *inmem_radiusKernel_mappedRom052,
	const double *inmem_radiusKernel_mappedRom053,
	const double *inmem_radiusKernel_mappedRom054,
	const double *inmem_radiusKernel_mappedRom055,
	const double *inmem_radiusKernel_mappedRom056,
	const double *inmem_radiusKernel_mappedRom057,
	const double *inmem_radiusKernel_mappedRom058,
	const double *inmem_radiusKernel_mappedRom059,
	const double *inmem_radiusKernel_mappedRom060,
	const double *inmem_radiusKernel_mappedRom061,
	const double *inmem_radiusKernel_mappedRom062,
	const double *inmem_radiusKernel_mappedRom063,
	const double *inmem_radiusKernel_mappedRom064,
	const double *inmem_radiusKernel_mappedRom065,
	const double *inmem_radiusKernel_mappedRom066,
	const double *inmem_radiusKernel_mappedRom067,
	const double *inmem_radiusKernel_mappedRom068,
	const double *inmem_radiusKernel_mappedRom069,
	const double *inmem_radiusKernel_mappedRom070,
	const double *inmem_radiusKernel_mappedRom071,
	const double *inmem_radiusKernel_mappedRom072,
	const double *inmem_radiusKernel_mappedRom073,
	const double *inmem_radiusKernel_mappedRom074,
	const double *inmem_radiusKernel_mappedRom075,
	const double *inmem_radiusKernel_mappedRom076,
	const double *inmem_radiusKernel_mappedRom077,
	const double *inmem_radiusKernel_mappedRom078,
	const double *inmem_radiusKernel_mappedRom079,
	const double *inmem_radiusKernel_mappedRom080,
	const double *inmem_radiusKernel_mappedRom081,
	const double *inmem_radiusKernel_mappedRom082,
	const double *inmem_radiusKernel_mappedRom083,
	const double *inmem_radiusKernel_mappedRom084,
	const double *inmem_radiusKernel_mappedRom085,
	const double *inmem_radiusKernel_mappedRom086,
	const double *inmem_radiusKernel_mappedRom087,
	const double *inmem_radiusKernel_mappedRom088,
	const double *inmem_radiusKernel_mappedRom089,
	const double *inmem_radiusKernel_mappedRom090,
	const double *inmem_radiusKernel_mappedRom091,
	const double *inmem_radiusKernel_mappedRom092,
	const double *inmem_radiusKernel_mappedRom093,
	const double *inmem_radiusKernel_mappedRom094,
	const double *inmem_radiusKernel_mappedRom095,
	const double *inmem_radiusKernel_mappedRom096,
	const double *inmem_radiusKernel_mappedRom097,
	const double *inmem_radiusKernel_mappedRom098,
	const double *inmem_radiusKernel_mappedRom099,
	const double *inmem_radiusKernel_mappedRom100,
	const double *inmem_radiusKernel_mappedRom101,
	const double *inmem_radiusKernel_mappedRom102,
	const double *inmem_radiusKernel_mappedRom103,
	const double *inmem_radiusKernel_mappedRom104,
	const double *inmem_radiusKernel_mappedRom105,
	const double *inmem_radiusKernel_mappedRom106,
	const double *inmem_radiusKernel_mappedRom107,
	const double *inmem_radiusKernel_mappedRom108,
	const double *inmem_radiusKernel_mappedRom109,
	const double *inmem_radiusKernel_mappedRom110,
	const double *inmem_radiusKernel_mappedRom111,
	const double *inmem_radiusKernel_mappedRom112,
	const double *inmem_radiusKernel_mappedRom113,
	const double *inmem_radiusKernel_mappedRom114,
	const double *inmem_radiusKernel_mappedRom115,
	const double *inmem_radiusKernel_mappedRom116,
	const double *inmem_radiusKernel_mappedRom117,
	const double *inmem_radiusKernel_mappedRom118,
	const double *inmem_radiusKernel_mappedRom119,
	const double *inmem_radiusKernel_mappedRom120,
	const double *inmem_radiusKernel_mappedRom121,
	const double *inmem_radiusKernel_mappedRom122,
	const double *inmem_radiusKernel_mappedRom123,
	const double *inmem_radiusKernel_mappedRom124,
	const double *inmem_radiusKernel_mappedRom125,
	const double *inmem_radiusKernel_mappedRom126,
	const double *inmem_radiusKernel_mappedRom127,
	const double *inmem_radiusKernel_mappedRom128,
	const double *inmem_radiusKernel_mappedRom129,
	const double *inmem_radiusKernel_mappedRom130,
	const double *inmem_radiusKernel_mappedRom131,
	const double *inmem_radiusKernel_mappedRom132,
	const double *inmem_radiusKernel_mappedRom133,
	const double *inmem_radiusKernel_mappedRom134,
	const double *inmem_radiusKernel_mappedRom135,
	const double *inmem_radiusKernel_mappedRom136,
	const double *inmem_radiusKernel_mappedRom137,
	const double *inmem_radiusKernel_mappedRom138,
	const double *inmem_radiusKernel_mappedRom139,
	const double *inmem_radiusKernel_mappedRom140,
	const double *inmem_radiusKernel_mappedRom141,
	const double *inmem_radiusKernel_mappedRom142,
	const double *inmem_radiusKernel_mappedRom143,
	const double *inmem_radiusKernel_mappedRom144,
	const double *inmem_radiusKernel_mappedRom145,
	const double *inmem_radiusKernel_mappedRom146,
	const double *inmem_radiusKernel_mappedRom147,
	const double *inmem_radiusKernel_mappedRom148,
	const double *inmem_radiusKernel_mappedRom149,
	const double *inmem_radiusKernel_mappedRom150,
	const double *inmem_radiusKernel_mappedRom151,
	const double *inmem_radiusKernel_mappedRom152,
	const double *inmem_radiusKernel_mappedRom153,
	const double *inmem_radiusKernel_mappedRom154,
	const double *inmem_radiusKernel_mappedRom155,
	const double *inmem_radiusKernel_mappedRom156,
	const double *inmem_radiusKernel_mappedRom157,
	const double *inmem_radiusKernel_mappedRom158,
	const double *inmem_radiusKernel_mappedRom159);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_C Interface Parameter "C".
 * \param [in] param_N Interface Parameter "N".
 * \param [in] param_P Interface Parameter "P".
 * \param [in] param_R Interface Parameter "R".
 * \param [in] instream_a The stream should be of size ((param_N * param_P) * 4) bytes.
 * \param [out] outstream_c The stream should be of size ((param_C * param_P) * 4) bytes.
 * \param [in] inmem_radiusKernel_mappedRom000 Mapped ROM inmem_radiusKernel_mappedRom000, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom001 Mapped ROM inmem_radiusKernel_mappedRom001, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom002 Mapped ROM inmem_radiusKernel_mappedRom002, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom003 Mapped ROM inmem_radiusKernel_mappedRom003, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom004 Mapped ROM inmem_radiusKernel_mappedRom004, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom005 Mapped ROM inmem_radiusKernel_mappedRom005, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom006 Mapped ROM inmem_radiusKernel_mappedRom006, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom007 Mapped ROM inmem_radiusKernel_mappedRom007, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom008 Mapped ROM inmem_radiusKernel_mappedRom008, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom009 Mapped ROM inmem_radiusKernel_mappedRom009, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom010 Mapped ROM inmem_radiusKernel_mappedRom010, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom011 Mapped ROM inmem_radiusKernel_mappedRom011, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom012 Mapped ROM inmem_radiusKernel_mappedRom012, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom013 Mapped ROM inmem_radiusKernel_mappedRom013, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom014 Mapped ROM inmem_radiusKernel_mappedRom014, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom015 Mapped ROM inmem_radiusKernel_mappedRom015, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom016 Mapped ROM inmem_radiusKernel_mappedRom016, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom017 Mapped ROM inmem_radiusKernel_mappedRom017, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom018 Mapped ROM inmem_radiusKernel_mappedRom018, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom019 Mapped ROM inmem_radiusKernel_mappedRom019, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom020 Mapped ROM inmem_radiusKernel_mappedRom020, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom021 Mapped ROM inmem_radiusKernel_mappedRom021, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom022 Mapped ROM inmem_radiusKernel_mappedRom022, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom023 Mapped ROM inmem_radiusKernel_mappedRom023, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom024 Mapped ROM inmem_radiusKernel_mappedRom024, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom025 Mapped ROM inmem_radiusKernel_mappedRom025, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom026 Mapped ROM inmem_radiusKernel_mappedRom026, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom027 Mapped ROM inmem_radiusKernel_mappedRom027, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom028 Mapped ROM inmem_radiusKernel_mappedRom028, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom029 Mapped ROM inmem_radiusKernel_mappedRom029, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom030 Mapped ROM inmem_radiusKernel_mappedRom030, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom031 Mapped ROM inmem_radiusKernel_mappedRom031, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom032 Mapped ROM inmem_radiusKernel_mappedRom032, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom033 Mapped ROM inmem_radiusKernel_mappedRom033, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom034 Mapped ROM inmem_radiusKernel_mappedRom034, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom035 Mapped ROM inmem_radiusKernel_mappedRom035, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom036 Mapped ROM inmem_radiusKernel_mappedRom036, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom037 Mapped ROM inmem_radiusKernel_mappedRom037, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom038 Mapped ROM inmem_radiusKernel_mappedRom038, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom039 Mapped ROM inmem_radiusKernel_mappedRom039, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom040 Mapped ROM inmem_radiusKernel_mappedRom040, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom041 Mapped ROM inmem_radiusKernel_mappedRom041, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom042 Mapped ROM inmem_radiusKernel_mappedRom042, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom043 Mapped ROM inmem_radiusKernel_mappedRom043, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom044 Mapped ROM inmem_radiusKernel_mappedRom044, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom045 Mapped ROM inmem_radiusKernel_mappedRom045, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom046 Mapped ROM inmem_radiusKernel_mappedRom046, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom047 Mapped ROM inmem_radiusKernel_mappedRom047, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom048 Mapped ROM inmem_radiusKernel_mappedRom048, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom049 Mapped ROM inmem_radiusKernel_mappedRom049, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom050 Mapped ROM inmem_radiusKernel_mappedRom050, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom051 Mapped ROM inmem_radiusKernel_mappedRom051, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom052 Mapped ROM inmem_radiusKernel_mappedRom052, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom053 Mapped ROM inmem_radiusKernel_mappedRom053, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom054 Mapped ROM inmem_radiusKernel_mappedRom054, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom055 Mapped ROM inmem_radiusKernel_mappedRom055, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom056 Mapped ROM inmem_radiusKernel_mappedRom056, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom057 Mapped ROM inmem_radiusKernel_mappedRom057, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom058 Mapped ROM inmem_radiusKernel_mappedRom058, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom059 Mapped ROM inmem_radiusKernel_mappedRom059, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom060 Mapped ROM inmem_radiusKernel_mappedRom060, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom061 Mapped ROM inmem_radiusKernel_mappedRom061, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom062 Mapped ROM inmem_radiusKernel_mappedRom062, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom063 Mapped ROM inmem_radiusKernel_mappedRom063, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom064 Mapped ROM inmem_radiusKernel_mappedRom064, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom065 Mapped ROM inmem_radiusKernel_mappedRom065, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom066 Mapped ROM inmem_radiusKernel_mappedRom066, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom067 Mapped ROM inmem_radiusKernel_mappedRom067, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom068 Mapped ROM inmem_radiusKernel_mappedRom068, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom069 Mapped ROM inmem_radiusKernel_mappedRom069, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom070 Mapped ROM inmem_radiusKernel_mappedRom070, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom071 Mapped ROM inmem_radiusKernel_mappedRom071, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom072 Mapped ROM inmem_radiusKernel_mappedRom072, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom073 Mapped ROM inmem_radiusKernel_mappedRom073, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom074 Mapped ROM inmem_radiusKernel_mappedRom074, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom075 Mapped ROM inmem_radiusKernel_mappedRom075, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom076 Mapped ROM inmem_radiusKernel_mappedRom076, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom077 Mapped ROM inmem_radiusKernel_mappedRom077, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom078 Mapped ROM inmem_radiusKernel_mappedRom078, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom079 Mapped ROM inmem_radiusKernel_mappedRom079, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom080 Mapped ROM inmem_radiusKernel_mappedRom080, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom081 Mapped ROM inmem_radiusKernel_mappedRom081, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom082 Mapped ROM inmem_radiusKernel_mappedRom082, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom083 Mapped ROM inmem_radiusKernel_mappedRom083, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom084 Mapped ROM inmem_radiusKernel_mappedRom084, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom085 Mapped ROM inmem_radiusKernel_mappedRom085, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom086 Mapped ROM inmem_radiusKernel_mappedRom086, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom087 Mapped ROM inmem_radiusKernel_mappedRom087, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom088 Mapped ROM inmem_radiusKernel_mappedRom088, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom089 Mapped ROM inmem_radiusKernel_mappedRom089, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom090 Mapped ROM inmem_radiusKernel_mappedRom090, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom091 Mapped ROM inmem_radiusKernel_mappedRom091, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom092 Mapped ROM inmem_radiusKernel_mappedRom092, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom093 Mapped ROM inmem_radiusKernel_mappedRom093, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom094 Mapped ROM inmem_radiusKernel_mappedRom094, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom095 Mapped ROM inmem_radiusKernel_mappedRom095, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom096 Mapped ROM inmem_radiusKernel_mappedRom096, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom097 Mapped ROM inmem_radiusKernel_mappedRom097, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom098 Mapped ROM inmem_radiusKernel_mappedRom098, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom099 Mapped ROM inmem_radiusKernel_mappedRom099, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom100 Mapped ROM inmem_radiusKernel_mappedRom100, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom101 Mapped ROM inmem_radiusKernel_mappedRom101, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom102 Mapped ROM inmem_radiusKernel_mappedRom102, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom103 Mapped ROM inmem_radiusKernel_mappedRom103, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom104 Mapped ROM inmem_radiusKernel_mappedRom104, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom105 Mapped ROM inmem_radiusKernel_mappedRom105, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom106 Mapped ROM inmem_radiusKernel_mappedRom106, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom107 Mapped ROM inmem_radiusKernel_mappedRom107, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom108 Mapped ROM inmem_radiusKernel_mappedRom108, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom109 Mapped ROM inmem_radiusKernel_mappedRom109, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom110 Mapped ROM inmem_radiusKernel_mappedRom110, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom111 Mapped ROM inmem_radiusKernel_mappedRom111, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom112 Mapped ROM inmem_radiusKernel_mappedRom112, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom113 Mapped ROM inmem_radiusKernel_mappedRom113, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom114 Mapped ROM inmem_radiusKernel_mappedRom114, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom115 Mapped ROM inmem_radiusKernel_mappedRom115, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom116 Mapped ROM inmem_radiusKernel_mappedRom116, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom117 Mapped ROM inmem_radiusKernel_mappedRom117, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom118 Mapped ROM inmem_radiusKernel_mappedRom118, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom119 Mapped ROM inmem_radiusKernel_mappedRom119, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom120 Mapped ROM inmem_radiusKernel_mappedRom120, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom121 Mapped ROM inmem_radiusKernel_mappedRom121, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom122 Mapped ROM inmem_radiusKernel_mappedRom122, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom123 Mapped ROM inmem_radiusKernel_mappedRom123, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom124 Mapped ROM inmem_radiusKernel_mappedRom124, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom125 Mapped ROM inmem_radiusKernel_mappedRom125, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom126 Mapped ROM inmem_radiusKernel_mappedRom126, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom127 Mapped ROM inmem_radiusKernel_mappedRom127, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom128 Mapped ROM inmem_radiusKernel_mappedRom128, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom129 Mapped ROM inmem_radiusKernel_mappedRom129, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom130 Mapped ROM inmem_radiusKernel_mappedRom130, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom131 Mapped ROM inmem_radiusKernel_mappedRom131, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom132 Mapped ROM inmem_radiusKernel_mappedRom132, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom133 Mapped ROM inmem_radiusKernel_mappedRom133, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom134 Mapped ROM inmem_radiusKernel_mappedRom134, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom135 Mapped ROM inmem_radiusKernel_mappedRom135, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom136 Mapped ROM inmem_radiusKernel_mappedRom136, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom137 Mapped ROM inmem_radiusKernel_mappedRom137, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom138 Mapped ROM inmem_radiusKernel_mappedRom138, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom139 Mapped ROM inmem_radiusKernel_mappedRom139, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom140 Mapped ROM inmem_radiusKernel_mappedRom140, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom141 Mapped ROM inmem_radiusKernel_mappedRom141, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom142 Mapped ROM inmem_radiusKernel_mappedRom142, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom143 Mapped ROM inmem_radiusKernel_mappedRom143, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom144 Mapped ROM inmem_radiusKernel_mappedRom144, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom145 Mapped ROM inmem_radiusKernel_mappedRom145, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom146 Mapped ROM inmem_radiusKernel_mappedRom146, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom147 Mapped ROM inmem_radiusKernel_mappedRom147, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom148 Mapped ROM inmem_radiusKernel_mappedRom148, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom149 Mapped ROM inmem_radiusKernel_mappedRom149, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom150 Mapped ROM inmem_radiusKernel_mappedRom150, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom151 Mapped ROM inmem_radiusKernel_mappedRom151, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom152 Mapped ROM inmem_radiusKernel_mappedRom152, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom153 Mapped ROM inmem_radiusKernel_mappedRom153, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom154 Mapped ROM inmem_radiusKernel_mappedRom154, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom155 Mapped ROM inmem_radiusKernel_mappedRom155, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom156 Mapped ROM inmem_radiusKernel_mappedRom156, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom157 Mapped ROM inmem_radiusKernel_mappedRom157, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom158 Mapped ROM inmem_radiusKernel_mappedRom158, should be of size (3128 * sizeof(double)).
 * \param [in] inmem_radiusKernel_mappedRom159 Mapped ROM inmem_radiusKernel_mappedRom159, should be of size (3128 * sizeof(double)).
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *radius_nonblock(
	int64_t param_C,
	int64_t param_N,
	int64_t param_P,
	int64_t param_R,
	const float *instream_a,
	float *outstream_c,
	const double *inmem_radiusKernel_mappedRom000,
	const double *inmem_radiusKernel_mappedRom001,
	const double *inmem_radiusKernel_mappedRom002,
	const double *inmem_radiusKernel_mappedRom003,
	const double *inmem_radiusKernel_mappedRom004,
	const double *inmem_radiusKernel_mappedRom005,
	const double *inmem_radiusKernel_mappedRom006,
	const double *inmem_radiusKernel_mappedRom007,
	const double *inmem_radiusKernel_mappedRom008,
	const double *inmem_radiusKernel_mappedRom009,
	const double *inmem_radiusKernel_mappedRom010,
	const double *inmem_radiusKernel_mappedRom011,
	const double *inmem_radiusKernel_mappedRom012,
	const double *inmem_radiusKernel_mappedRom013,
	const double *inmem_radiusKernel_mappedRom014,
	const double *inmem_radiusKernel_mappedRom015,
	const double *inmem_radiusKernel_mappedRom016,
	const double *inmem_radiusKernel_mappedRom017,
	const double *inmem_radiusKernel_mappedRom018,
	const double *inmem_radiusKernel_mappedRom019,
	const double *inmem_radiusKernel_mappedRom020,
	const double *inmem_radiusKernel_mappedRom021,
	const double *inmem_radiusKernel_mappedRom022,
	const double *inmem_radiusKernel_mappedRom023,
	const double *inmem_radiusKernel_mappedRom024,
	const double *inmem_radiusKernel_mappedRom025,
	const double *inmem_radiusKernel_mappedRom026,
	const double *inmem_radiusKernel_mappedRom027,
	const double *inmem_radiusKernel_mappedRom028,
	const double *inmem_radiusKernel_mappedRom029,
	const double *inmem_radiusKernel_mappedRom030,
	const double *inmem_radiusKernel_mappedRom031,
	const double *inmem_radiusKernel_mappedRom032,
	const double *inmem_radiusKernel_mappedRom033,
	const double *inmem_radiusKernel_mappedRom034,
	const double *inmem_radiusKernel_mappedRom035,
	const double *inmem_radiusKernel_mappedRom036,
	const double *inmem_radiusKernel_mappedRom037,
	const double *inmem_radiusKernel_mappedRom038,
	const double *inmem_radiusKernel_mappedRom039,
	const double *inmem_radiusKernel_mappedRom040,
	const double *inmem_radiusKernel_mappedRom041,
	const double *inmem_radiusKernel_mappedRom042,
	const double *inmem_radiusKernel_mappedRom043,
	const double *inmem_radiusKernel_mappedRom044,
	const double *inmem_radiusKernel_mappedRom045,
	const double *inmem_radiusKernel_mappedRom046,
	const double *inmem_radiusKernel_mappedRom047,
	const double *inmem_radiusKernel_mappedRom048,
	const double *inmem_radiusKernel_mappedRom049,
	const double *inmem_radiusKernel_mappedRom050,
	const double *inmem_radiusKernel_mappedRom051,
	const double *inmem_radiusKernel_mappedRom052,
	const double *inmem_radiusKernel_mappedRom053,
	const double *inmem_radiusKernel_mappedRom054,
	const double *inmem_radiusKernel_mappedRom055,
	const double *inmem_radiusKernel_mappedRom056,
	const double *inmem_radiusKernel_mappedRom057,
	const double *inmem_radiusKernel_mappedRom058,
	const double *inmem_radiusKernel_mappedRom059,
	const double *inmem_radiusKernel_mappedRom060,
	const double *inmem_radiusKernel_mappedRom061,
	const double *inmem_radiusKernel_mappedRom062,
	const double *inmem_radiusKernel_mappedRom063,
	const double *inmem_radiusKernel_mappedRom064,
	const double *inmem_radiusKernel_mappedRom065,
	const double *inmem_radiusKernel_mappedRom066,
	const double *inmem_radiusKernel_mappedRom067,
	const double *inmem_radiusKernel_mappedRom068,
	const double *inmem_radiusKernel_mappedRom069,
	const double *inmem_radiusKernel_mappedRom070,
	const double *inmem_radiusKernel_mappedRom071,
	const double *inmem_radiusKernel_mappedRom072,
	const double *inmem_radiusKernel_mappedRom073,
	const double *inmem_radiusKernel_mappedRom074,
	const double *inmem_radiusKernel_mappedRom075,
	const double *inmem_radiusKernel_mappedRom076,
	const double *inmem_radiusKernel_mappedRom077,
	const double *inmem_radiusKernel_mappedRom078,
	const double *inmem_radiusKernel_mappedRom079,
	const double *inmem_radiusKernel_mappedRom080,
	const double *inmem_radiusKernel_mappedRom081,
	const double *inmem_radiusKernel_mappedRom082,
	const double *inmem_radiusKernel_mappedRom083,
	const double *inmem_radiusKernel_mappedRom084,
	const double *inmem_radiusKernel_mappedRom085,
	const double *inmem_radiusKernel_mappedRom086,
	const double *inmem_radiusKernel_mappedRom087,
	const double *inmem_radiusKernel_mappedRom088,
	const double *inmem_radiusKernel_mappedRom089,
	const double *inmem_radiusKernel_mappedRom090,
	const double *inmem_radiusKernel_mappedRom091,
	const double *inmem_radiusKernel_mappedRom092,
	const double *inmem_radiusKernel_mappedRom093,
	const double *inmem_radiusKernel_mappedRom094,
	const double *inmem_radiusKernel_mappedRom095,
	const double *inmem_radiusKernel_mappedRom096,
	const double *inmem_radiusKernel_mappedRom097,
	const double *inmem_radiusKernel_mappedRom098,
	const double *inmem_radiusKernel_mappedRom099,
	const double *inmem_radiusKernel_mappedRom100,
	const double *inmem_radiusKernel_mappedRom101,
	const double *inmem_radiusKernel_mappedRom102,
	const double *inmem_radiusKernel_mappedRom103,
	const double *inmem_radiusKernel_mappedRom104,
	const double *inmem_radiusKernel_mappedRom105,
	const double *inmem_radiusKernel_mappedRom106,
	const double *inmem_radiusKernel_mappedRom107,
	const double *inmem_radiusKernel_mappedRom108,
	const double *inmem_radiusKernel_mappedRom109,
	const double *inmem_radiusKernel_mappedRom110,
	const double *inmem_radiusKernel_mappedRom111,
	const double *inmem_radiusKernel_mappedRom112,
	const double *inmem_radiusKernel_mappedRom113,
	const double *inmem_radiusKernel_mappedRom114,
	const double *inmem_radiusKernel_mappedRom115,
	const double *inmem_radiusKernel_mappedRom116,
	const double *inmem_radiusKernel_mappedRom117,
	const double *inmem_radiusKernel_mappedRom118,
	const double *inmem_radiusKernel_mappedRom119,
	const double *inmem_radiusKernel_mappedRom120,
	const double *inmem_radiusKernel_mappedRom121,
	const double *inmem_radiusKernel_mappedRom122,
	const double *inmem_radiusKernel_mappedRom123,
	const double *inmem_radiusKernel_mappedRom124,
	const double *inmem_radiusKernel_mappedRom125,
	const double *inmem_radiusKernel_mappedRom126,
	const double *inmem_radiusKernel_mappedRom127,
	const double *inmem_radiusKernel_mappedRom128,
	const double *inmem_radiusKernel_mappedRom129,
	const double *inmem_radiusKernel_mappedRom130,
	const double *inmem_radiusKernel_mappedRom131,
	const double *inmem_radiusKernel_mappedRom132,
	const double *inmem_radiusKernel_mappedRom133,
	const double *inmem_radiusKernel_mappedRom134,
	const double *inmem_radiusKernel_mappedRom135,
	const double *inmem_radiusKernel_mappedRom136,
	const double *inmem_radiusKernel_mappedRom137,
	const double *inmem_radiusKernel_mappedRom138,
	const double *inmem_radiusKernel_mappedRom139,
	const double *inmem_radiusKernel_mappedRom140,
	const double *inmem_radiusKernel_mappedRom141,
	const double *inmem_radiusKernel_mappedRom142,
	const double *inmem_radiusKernel_mappedRom143,
	const double *inmem_radiusKernel_mappedRom144,
	const double *inmem_radiusKernel_mappedRom145,
	const double *inmem_radiusKernel_mappedRom146,
	const double *inmem_radiusKernel_mappedRom147,
	const double *inmem_radiusKernel_mappedRom148,
	const double *inmem_radiusKernel_mappedRom149,
	const double *inmem_radiusKernel_mappedRom150,
	const double *inmem_radiusKernel_mappedRom151,
	const double *inmem_radiusKernel_mappedRom152,
	const double *inmem_radiusKernel_mappedRom153,
	const double *inmem_radiusKernel_mappedRom154,
	const double *inmem_radiusKernel_mappedRom155,
	const double *inmem_radiusKernel_mappedRom156,
	const double *inmem_radiusKernel_mappedRom157,
	const double *inmem_radiusKernel_mappedRom158,
	const double *inmem_radiusKernel_mappedRom159);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	int64_t param_C; /**<  [in] Interface Parameter "C". */
	int64_t param_N; /**<  [in] Interface Parameter "N". */
	int64_t param_P; /**<  [in] Interface Parameter "P". */
	int64_t param_R; /**<  [in] Interface Parameter "R". */
	const float *instream_a; /**<  [in] The stream should be of size ((param_N * param_P) * 4) bytes. */
	float *outstream_c; /**<  [out] The stream should be of size ((param_C * param_P) * 4) bytes. */
	const double *inmem_radiusKernel_mappedRom000; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom000, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom001; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom001, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom002; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom002, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom003; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom003, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom004; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom004, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom005; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom005, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom006; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom006, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom007; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom007, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom008; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom008, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom009; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom009, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom010; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom010, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom011; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom011, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom012; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom012, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom013; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom013, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom014; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom014, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom015; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom015, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom016; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom016, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom017; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom017, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom018; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom018, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom019; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom019, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom020; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom020, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom021; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom021, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom022; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom022, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom023; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom023, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom024; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom024, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom025; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom025, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom026; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom026, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom027; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom027, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom028; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom028, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom029; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom029, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom030; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom030, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom031; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom031, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom032; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom032, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom033; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom033, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom034; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom034, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom035; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom035, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom036; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom036, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom037; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom037, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom038; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom038, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom039; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom039, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom040; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom040, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom041; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom041, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom042; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom042, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom043; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom043, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom044; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom044, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom045; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom045, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom046; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom046, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom047; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom047, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom048; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom048, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom049; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom049, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom050; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom050, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom051; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom051, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom052; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom052, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom053; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom053, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom054; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom054, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom055; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom055, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom056; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom056, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom057; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom057, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom058; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom058, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom059; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom059, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom060; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom060, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom061; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom061, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom062; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom062, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom063; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom063, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom064; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom064, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom065; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom065, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom066; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom066, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom067; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom067, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom068; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom068, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom069; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom069, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom070; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom070, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom071; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom071, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom072; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom072, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom073; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom073, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom074; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom074, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom075; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom075, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom076; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom076, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom077; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom077, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom078; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom078, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom079; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom079, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom080; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom080, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom081; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom081, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom082; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom082, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom083; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom083, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom084; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom084, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom085; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom085, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom086; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom086, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom087; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom087, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom088; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom088, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom089; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom089, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom090; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom090, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom091; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom091, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom092; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom092, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom093; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom093, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom094; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom094, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom095; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom095, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom096; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom096, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom097; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom097, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom098; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom098, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom099; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom099, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom100; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom100, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom101; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom101, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom102; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom102, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom103; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom103, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom104; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom104, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom105; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom105, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom106; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom106, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom107; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom107, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom108; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom108, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom109; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom109, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom110; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom110, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom111; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom111, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom112; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom112, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom113; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom113, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom114; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom114, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom115; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom115, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom116; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom116, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom117; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom117, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom118; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom118, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom119; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom119, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom120; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom120, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom121; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom121, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom122; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom122, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom123; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom123, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom124; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom124, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom125; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom125, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom126; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom126, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom127; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom127, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom128; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom128, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom129; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom129, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom130; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom130, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom131; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom131, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom132; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom132, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom133; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom133, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom134; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom134, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom135; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom135, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom136; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom136, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom137; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom137, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom138; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom138, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom139; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom139, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom140; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom140, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom141; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom141, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom142; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom142, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom143; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom143, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom144; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom144, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom145; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom145, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom146; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom146, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom147; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom147, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom148; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom148, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom149; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom149, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom150; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom150, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom151; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom151, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom152; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom152, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom153; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom153, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom154; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom154, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom155; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom155, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom156; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom156, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom157; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom157, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom158; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom158, should be of size (3128 * sizeof(double)). */
	const double *inmem_radiusKernel_mappedRom159; /**<  [in] Mapped ROM inmem_radiusKernel_mappedRom159, should be of size (3128 * sizeof(double)). */
} radius_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void radius_run(
	max_engine_t *engine,
	radius_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'default'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *radius_run_nonblock(
	max_engine_t *engine,
	radius_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void radius_run_group(max_group_t *group, radius_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *radius_run_group_nonblock(max_group_t *group, radius_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void radius_run_array(max_engarray_t *engarray, radius_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *radius_run_array_nonblock(max_engarray_t *engarray, radius_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* radius_convert(max_file_t *maxfile, radius_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* radius_init(void);

/* Error handling functions */
int radius_has_errors(void);
const char* radius_get_errors(void);
void radius_clear_errors(void);
/* Free statically allocated maxfile data */
void radius_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int radius_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int radius_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_radius_H */

