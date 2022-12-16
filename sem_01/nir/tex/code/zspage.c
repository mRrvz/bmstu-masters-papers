struct zspage {
	struct {
		unsigned int huge:HUGE_BITS;
		unsigned int fullness:FULLNESS_BITS;
		unsigned int class:CLASS_BITS + 1;
		unsigned int isolated:ISOLATED_BITS;
		unsigned int magic:MAGIC_VAL_BITS;
	};
	unsigned int inuse;
	unsigned int freeobj;
	struct page *first_page;
	struct list_head list;
	struct zs_pool *pool;
};

