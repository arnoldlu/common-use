#include <linux/module.h>
#include <linux/init.h>
#include <linux/list.h>
#include <linux/slab.h>

#include "hlist.h"

void dump_list(struct hlist_head *head)
{
    struct hlist_node *p; 

    printk("@@@@@@@@@@dump_list start@@@@@@@@@@\n");

    if(hlist_empty(head))
    {   
        printk("Empty list.\n");
        printk("@@@@@@@@@@dump_list end@@@@@@@@@@\n");
        return;
    }   

    hlist_for_each(p, head){
        struct stu_info *entry = hlist_entry(p, struct stu_info, node);
        printk("name=%s, description=%s\n", entry->name, entry->desc);
    }
    printk("@@@@@@@@@@dump_list end@@@@@@@@@@\n");
    return;
}


int hlist_init(void)
{
    struct hlist_node *node;
    struct stu_info stu1, stu2, stu3, stu4, stu5;
    HLIST_HEAD(head);
    HLIST_HEAD(head2);

    printk("%s\n", __func__);

    INIT_HLIST_NODE(&stu1.node);
    stu1.name = "stu1";
    stu1.desc = "hlist_add_head stu1";
    hlist_add_head(&stu1.node, &head);

    INIT_HLIST_NODE(&stu2.node);
    stu2.name = "stu2";
    stu2.desc = "hlist_add_head stu2";
    hlist_add_head(&stu2.node, &head);
    dump_list(&head);

    INIT_HLIST_NODE(&stu3.node);
    stu3.name = "stu3";
    stu3.desc = "hlist_add_before stu3";
    hlist_add_before(&stu3.node, &stu1.node);
    dump_list(&head);

    INIT_HLIST_NODE(&stu4.node);
    stu4.name = "stu4";
    stu4.desc = "hlist_add_behind stu4";
    hlist_add_behind(&stu4.node, &stu3.node);
    dump_list(&head);

    hlist_del_init(&stu3.node);
    dump_list(&head);

    INIT_HLIST_NODE(&stu5.node);
    stu5.name = "stu5";
    stu5.desc = "hlist_add_head stu5";
    hlist_add_head(&stu5.node, &head2);
    dump_list(&head2);

    hlist_move_list(&head, &head2);
    dump_list(&head);
    dump_list(&head2);
    return 0;
}

void hlist_exit(void)
{
    printk("%s\n", __func__);
}

module_init(hlist_init);
module_exit(hlist_exit);
MODULE_AUTHOR("Arnold Lu");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Linked list test");

