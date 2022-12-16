typedef struct mempool_s {
	spinlock_t lock;
	int min_nr;
	int curr_nr;
	void **elements;

	void *pool_data;
	mempool_alloc_t *alloc;
	mempool_free_t *free;
	wait_queue_head_t wait;
} mempool_t;
