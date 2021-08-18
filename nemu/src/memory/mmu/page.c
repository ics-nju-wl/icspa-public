#include "cpu/cpu.h"
#include "memory/memory.h"

// translate from linear address to physical address
paddr_t page_translate(laddr_t laddr)
{
#ifndef TLB_ENABLED
	printf("\nPlease implement page_translate()\n");
	fflush(stdout);
	assert(0);
#else
	return tlb_read(laddr) | (laddr & PAGE_MASK);
#endif
}
