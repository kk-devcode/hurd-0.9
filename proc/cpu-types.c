/* Printable names for Mach CPU types and subtypes.
   Information culled from <mach/machine.h>.  */

#include <mach/machine.h>

const char *const mach_cpu_types[] =
  {
    [CPU_TYPE_VAX] = "vax",
    [CPU_TYPE_ROMP] = "romp",
    [CPU_TYPE_MC68020] = "mc68020",
    [CPU_TYPE_NS32032] = "ns32032",
    [CPU_TYPE_NS32332] = "ns32332",
    [CPU_TYPE_NS32532] = "ns32532",
    [CPU_TYPE_I386] = "i386",
    [CPU_TYPE_MIPS] = "mips",
    [CPU_TYPE_MC68030] = "mc68030",
    [CPU_TYPE_MC68040] = "mc68040",
    [CPU_TYPE_HPPA] = "hppa",
    [CPU_TYPE_ARM] = "arm",
    [CPU_TYPE_MC88000] = "mc88000",
    [CPU_TYPE_SPARC] = "sparc",
    [CPU_TYPE_I860] = "i860",
    [CPU_TYPE_ALPHA] = "alpha",
#ifdef CPU_TYPE_I486
    [CPU_TYPE_I486] = "i486",
#endif
#ifdef CPU_TYPE_PENTIUM
    [CPU_TYPE_PENTIUM] = "i586",
#endif
#ifdef CPU_TYPE_PENTIUMPRO
    [CPU_TYPE_PENTIUMPRO] = "i686",
#endif
#ifdef CPU_TYPE_POWERPC
    [CPU_TYPE_POWERPC] = "powerpc",
#endif
  };

const char *const mach_cpu_subtypes[][32] =
  {
    [CPU_TYPE_VAX] =
      {
	[CPU_SUBTYPE_VAX780] = "VAX780",
	[CPU_SUBTYPE_VAX785] = "VAX785",
	[CPU_SUBTYPE_VAX750] = "VAX750",
	[CPU_SUBTYPE_VAX730] = "VAX730",
	[CPU_SUBTYPE_UVAXI] = "UVAXI",
	[CPU_SUBTYPE_UVAXII] = "UVAXII",
	[CPU_SUBTYPE_VAX8200] = "VAX8200",
	[CPU_SUBTYPE_VAX8500] = "VAX8500",
	[CPU_SUBTYPE_VAX8600] = "VAX8600",
	[CPU_SUBTYPE_VAX8650] = "VAX8650",
	[CPU_SUBTYPE_VAX8800] = "VAX8800",
	[CPU_SUBTYPE_UVAXIII] = "UVAXIII",
      },
    [CPU_TYPE_ROMP] =
      {
	[CPU_SUBTYPE_RT_PC] = "RT_PC",
	[CPU_SUBTYPE_RT_APC] = "RT_APC",
	[CPU_SUBTYPE_RT_135] = "RT_135",
      },
    [CPU_TYPE_MC68020] =
      {
	[CPU_SUBTYPE_SUN3_50] = "SUN3_50",
	[CPU_SUBTYPE_SUN3_160] = "SUN3_160",
	[CPU_SUBTYPE_SUN3_260] = "SUN3_260",
	[CPU_SUBTYPE_SUN3_110] = "SUN3_110",
	[CPU_SUBTYPE_SUN3_60] = "SUN3_60",

	[CPU_SUBTYPE_HP_320] = "HP_320",
	[CPU_SUBTYPE_HP_330] = "HP_330",
	[CPU_SUBTYPE_HP_350] = "HP_350",
      },
    [CPU_TYPE_NS32032] =
      {
	[CPU_SUBTYPE_MMAX_DPC] = "MMAX_DPC",
	[CPU_SUBTYPE_SQT] = "SQT",
	[CPU_SUBTYPE_MMAX_APC_FPU] = "MMAX_APC_FPU",
	[CPU_SUBTYPE_MMAX_APC_FPA] = "MMAX_APC_FPA",
	[CPU_SUBTYPE_MMAX_XPC] = "MMAX_XPC",
	[CPU_SUBTYPE_PC532] = "PC532",
      },
#define Ix86_SUBTYPES							    \
      {									    \
	[CPU_SUBTYPE_AT386] = "AT386",					    \
	[CPU_SUBTYPE_EXL] = "EXL",					    \
	[CPU_SUBTYPE_iPSC386] = "iPSC386",				    \
	[CPU_SUBTYPE_SYMMETRY] = "SYMMETRY",				    \
	[CPU_SUBTYPE_PS2] = "PS2",					    \
      }
    [CPU_TYPE_I386] = Ix86_SUBTYPES,
#ifdef CPU_TYPE_I486
    [CPU_TYPE_I486] = Ix86_SUBTYPES,
#endif
#ifdef CPU_TYPE_PENTIUM
    [CPU_TYPE_PENTIUM] = Ix86_SUBTYPES,
#endif
#ifdef CPU_TYPE_PENTIUMPRO
    [CPU_TYPE_PENTIUMPRO] = Ix86_SUBTYPES,
#endif
    [CPU_TYPE_MIPS] =
      {
	[CPU_SUBTYPE_MIPS_R2300] = "R2300",
	[CPU_SUBTYPE_MIPS_R2600] = "R2600",
	[CPU_SUBTYPE_MIPS_R2800] = "R2800",
	[CPU_SUBTYPE_MIPS_R2000a] = "R2000a",
	[CPU_SUBTYPE_MIPS_R2000] = "R2000",
	[CPU_SUBTYPE_MIPS_R3000a] = "R3000a",
	[CPU_SUBTYPE_MIPS_R3000] = "R3000",
      },
    [CPU_TYPE_MC68030] =
      {
	[CPU_SUBTYPE_NeXT] = "NeXT",
	[CPU_SUBTYPE_HP_340] = "HP_340",
	[CPU_SUBTYPE_HP_360] = "HP_360",
	[CPU_SUBTYPE_HP_370] = "HP_370",
      },
    [CPU_TYPE_HPPA] =
      {
	[CPU_SUBTYPE_HPPA_825] = "825",
	[CPU_SUBTYPE_HPPA_835] = "835",
	[CPU_SUBTYPE_HPPA_840] = "840",
	[CPU_SUBTYPE_HPPA_850] = "850",
	[CPU_SUBTYPE_HPPA_855] = "855",
      },
    [CPU_TYPE_ARM] =
      {
	[CPU_SUBTYPE_ARM_A500_ARCH] = "A500_ARCH",
	[CPU_SUBTYPE_ARM_A500] = "A500",
	[CPU_SUBTYPE_ARM_A440] = "A440",
	[CPU_SUBTYPE_ARM_M4] = "M4",
	[CPU_SUBTYPE_ARM_A680] = "A680",
      },
    [CPU_TYPE_MC88000] =
      {
	[CPU_SUBTYPE_MMAX_JPC] = "MMAX_JPC",
	[CPU_SUBTYPE_LUNA88K] = "LUNA88K",
      },
    [CPU_TYPE_SPARC] =
      {
	[CPU_SUBTYPE_SUN4_260] = "SUN4_260",
	[CPU_SUBTYPE_SUN4_110] = "SUN4_110",
	[CPU_SUBTYPE_SUN4_330] = "SUN4_330",
	[CPU_SUBTYPE_SUN4C_60] = "SUN4C_60",
	[CPU_SUBTYPE_SUN4C_65] = "SUN4C_65",
	[CPU_SUBTYPE_SUN4C_20] = "SUN4C_20",
	[CPU_SUBTYPE_SUN4C_30] = "SUN4C_30",
	[CPU_SUBTYPE_SUN4C_40] = "SUN4C_40",
	[CPU_SUBTYPE_SUN4C_50] = "SUN4C_50",
	[CPU_SUBTYPE_SUN4C_75] = "SUN4C_75",
      },
    [CPU_TYPE_I860] =
      {
	[CPU_SUBTYPE_iPSC860] = "iPSC860",
	[CPU_SUBTYPE_OKI860] = "OKI860",
      },
    [CPU_TYPE_ALPHA] =
      {
	[CPU_SUBTYPE_ALPHA_EV3] = "ALPHA_EV3",
	[CPU_SUBTYPE_ALPHA_EV4] = "ALPHA_EV4",
	[CPU_SUBTYPE_ALPHA_ISP] = "ALPHA_ISP",
	[CPU_SUBTYPE_ALPHA_21064] = "ALPHA_21064",
      },
  };
