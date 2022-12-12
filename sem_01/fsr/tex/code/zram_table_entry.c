struct zram_table_entry {
	union {
		unsigned long handle;
		unsigned long element;
	};
	unsigned long flags;
}
