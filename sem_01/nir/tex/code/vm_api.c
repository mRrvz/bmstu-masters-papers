void *vmalloc(unsigned long size);

void vfree(const void *addr);

void *vmap(struct page **pages, unsigned int count,
  unsigned long flags, pgprot_t prot);

void vunmap(const void *addr);
