
#ifndef CPU_H
#define CPU_H

#define inline __inline

#if _MSC_VER < 1400
void __cpuid(int cpuInfo[], int eaxValue);
#endif

int cpu_rdtsc();

int cpu_rdtsc_force_vmexit();

int cpu_hv();

void cpu_write_vendor(char *);
void cpu_write_hv_vendor(char *);
void cpu_write_brand(char *);

int cpu_known_vm_vendors();

#endif
