struct kmem_cache *
kmem_cache_create(const char *name, unsigned int size, 
  unsigned int align, slab_flags_t flags, void (*ctor)(void *))

void *kmem_cache_alloc(struct kmem_cache *s, gfp_t flags);

void kmem_cache_free(struct kmem_cache *s, void *objp);

void kmem_cache_destroy(struct kmem_cache *s);
