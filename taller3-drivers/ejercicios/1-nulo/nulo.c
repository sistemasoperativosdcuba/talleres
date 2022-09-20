#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/device.h>

static ssize_t nulo_read(struct file *filp, char __user *data, size_t s, loff_t *off) {
	// Completar
}

static ssize_t nulo_write(struct file *filp, const char __user *data, size_t s, loff_t *off) {
	// Completar
}

static struct file_operations nulo_operaciones = {
	// Completar
	.owner = ?,
	.read = ?,
	.write = ?
};

static int __init nulo_init(void) {
	// Completar
}

static void __exit nulo_exit(void) {
	// Completar
}

// Completar
module_init(?);
module_exit(?);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("La banda de SO");
MODULE_DESCRIPTION("Una suerte de '/dev/null'");