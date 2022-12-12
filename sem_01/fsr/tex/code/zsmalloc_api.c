struct zs_pool *zs_create_pool(const char *name);
void zs_destroy_pool(struct zs_pool *pool);

unsigned long zs_malloc(struct zs_pool *pool, size_t size, gfp_t flags);
void zs_free(struct zs_pool *pool, unsigned long obj);

void *zs_map_object(struct zs_pool *pool, unsigned long handle,
			enum zs_mapmode mm);
void zs_unmap_object(struct zs_pool *pool, unsigned long handle);
