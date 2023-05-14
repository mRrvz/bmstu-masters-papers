struct zs_pool {
	const char *name;

	struct size_class *size_class[ZS_SIZE_CLASSES];
	struct kmem_cache *handle_cachep;
	struct kmem_cache *zspage_cachep;

	atomic_long_t pages_allocated;

	struct zs_pool_stats stats;

	/* protect page/zspage migration */
	rwlock_t migrate_lock;
};
