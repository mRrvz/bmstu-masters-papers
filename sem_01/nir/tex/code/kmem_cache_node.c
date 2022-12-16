struct kmem_cache_node {
	spinlock_t list_lock;

	struct list_head slabs_partial;
	struct list_head slabs_full;
	struct list_head slabs_free;
	unsigned long total_slabs;
	unsigned long free_slabs;
	unsigned long free_objects;
};
