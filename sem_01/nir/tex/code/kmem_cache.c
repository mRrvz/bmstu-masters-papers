struct kmem_cache {
	unsigned int size;
	slab_flags_t flags;
	unsigned int num;

	const char *name;
	struct list_head list;
	int refcount;
	int object_size;
	int align;

	struct kmem_cache_node *node[MAX_NUMNODES];
};
