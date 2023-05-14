struct hash_table {
	struct hlist_head *table;
	struct kmem_cache *cachep;
	size_t size;
};
