struct fold_rbtree_node {
	struct rb_node node;
	unsigned long key;
	unsigned int cnt;
};
