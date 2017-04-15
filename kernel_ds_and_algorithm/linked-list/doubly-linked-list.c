#include <linux/module.h>
#include <linux/init.h>
#include <linux/list.h>
#include <linux/slab.h>

#include "doubly-linked-list.h"

void dump_list(struct list_head *head)
{
    struct list_head *p;

    printk("@@@@@@@@@@dump_list start@@@@@@@@@@\n");

    if(list_empty(head))
    {
        printk("Empty list.\n");
        printk("@@@@@@@@@@dump_list end@@@@@@@@@@\n");
        return;
    }

    list_for_each(p, head){
        struct stu_info *entry = list_entry(p, struct stu_info, list);
        printk("name=%s, description=%s\n", entry->name, entry->desc);
    }
    printk("@@@@@@@@@@dump_list end@@@@@@@@@@\n");
    return;
}

int doubly_linked_list_init(void)
{
    struct list_head list_head, list_head2;
    struct stu_info stu1, stu2, stu3, stu4, stu5;
    struct stu_info *p;
    struct list_head *pos, *temp;

    printk("%s\n", __func__);

    INIT_LIST_HEAD(&list_head);
    INIT_LIST_HEAD(&list_head2);

    stu1.name = "stu1";
    stu1.desc = "list_add stu1";
    list_add(&stu1.list, &list_head);

    stu2.name = "stu2";
    stu2.desc = "list_add stu2";
    list_add(&stu2.list, &list_head);

    stu3.name = "stu3";
    stu3.desc = "list_add_tail stu3";
    list_add_tail(&stu3.list, &list_head);
    dump_list(&list_head);

    stu4.name = "stu4";
    stu4.desc = "list_replace stu1 with stu4";
    list_replace(&stu1.list, &stu4.list);
    dump_list(&list_head);

    stu5.name = "stu5";
    stu5.desc = "list_add stu5";
    list_add(&stu5.list, &list_head);
    dump_list(&list_head);
    list_move_tail(&stu5.list, &list_head);
    dump_list(&list_head);
    list_del(&stu2.list);
    dump_list(&list_head);

    list_move(&stu4.list, &list_head2);
    dump_list(&list_head);
    dump_list(&list_head2);

    list_splice_init(&list_head2, &list_head);
    dump_list(&list_head);
    dump_list(&list_head2);

    list_rotate_left(&list_head);
    dump_list(&list_head);

    list_for_each_safe(pos, temp, &list_head)
    {
        list_del(pos);
        p = list_entry(pos, struct stu_info, list);
    }
    dump_list(&list_head);

    return 0;
}

void doubly_linked_list_exit(void)
{
    printk("%s\n", __func__);
}

module_init(doubly_linked_list_init);
module_exit(doubly_linked_list_exit);
MODULE_AUTHOR("Arnold Lu");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Linked list test");
