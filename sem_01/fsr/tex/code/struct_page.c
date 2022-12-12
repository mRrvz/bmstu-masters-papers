struct page {
	unsigned long flags;
	unsigned long private;
	atomic_t _refcount;
	atomic_t _mapcount;
	struct list_head lru; 
};
