struct size_class {
	spinlock_t lock;
	struct list_head fullness_list[NR_ZS_FULLNESS];
	int size;
	int objs_per_zspage;
	int pages_per_zspage;

	unsigned int index;
	struct zs_size_stat stats;
};

