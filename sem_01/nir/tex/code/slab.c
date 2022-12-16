struct slab {
	union {
		struct list_head slab_list;
		struct rcu_head rcu_head;
	};

	struct kmem_cache *slab_cache;
	void *freelist;
	void *s_mem;

	struct {
		unsigned inuse:16;
		unsigned objects:15;
		unsigned frozen:1;
	};
};
