/*            */ /* device_pm_callback_start: mmcblk mmc0:0001, parent: mmc0, bus [suspend] */
/*            */   mmc_bus_suspend() {
/*            */     pm_generic_suspend() {
/*            */       mmc_blk_suspend() {
/*            */         mmc_queue_suspend() {
/*            */           _raw_spin_lock_irqsave() {
/*  0.937 us  */             preempt_count_add();
/*  5.469 us  */           }
/*            */           blk_stop_queue() {
/*            */             cancel_delayed_work() {
/*            */               try_to_grab_pending() {
/*  1.042 us  */                 del_timer();
/*  5.990 us  */               }
/*+ 10.833 us */             }
/*+ 18.385 us */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  0.989 us  */             preempt_count_sub();
/*  5.417 us  */           }
/*            */           down() {
/*            */             _raw_spin_lock_irqsave() {
/*  0.938 us  */               preempt_count_add();
/*  5.416 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  0.937 us  */               preempt_count_sub();
/*  5.469 us  */             }
/*+ 19.167 us */           }
/*+ 64.635 us */         }
/*            */         mmc_queue_suspend() {
/*            */           _raw_spin_lock_irqsave() {
/*  1.407 us  */             preempt_count_add();
/*  7.709 us  */           }
/*            */           blk_stop_queue() {
/*            */             cancel_delayed_work() {
/*            */               try_to_grab_pending() {
/*  1.563 us  */                 del_timer();
/*  8.073 us  */               }
/*+ 14.427 us */             }
/*+ 20.937 us */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  1.458 us  */             preempt_count_sub();
/*  8.021 us  */           }
/*            */           down() {
/*            */             _raw_spin_lock_irqsave() {
/*  1.407 us  */               preempt_count_add();
/*  7.813 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  0.990 us  */               preempt_count_sub();
/*  5.521 us  */             }
/*+ 22.760 us */           }
/*+ 79.792 us */         }
/*            */         mmc_queue_suspend() {
/*            */           _raw_spin_lock_irqsave() {
/*  0.989 us  */             preempt_count_add();
/*  5.417 us  */           }
/*            */           blk_stop_queue() {
/*            */             cancel_delayed_work() {
/*            */               try_to_grab_pending() {
/*  1.041 us  */                 del_timer();
/*  5.729 us  */               }
/*+ 10.365 us */             }
/*+ 15.000 us */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  0.937 us  */             preempt_count_sub();
/*  5.365 us  */           }
/*            */           down() {
/*            */             _raw_spin_lock_irqsave() {
/*  0.989 us  */               preempt_count_add();
/*  5.469 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  0.938 us  */               preempt_count_sub();
/*  5.521 us  */             }
/*+ 18.907 us */           }
/*+ 60.156 us */         }
/*            */         mmc_queue_suspend() {
/*            */           _raw_spin_lock_irqsave() {
/*  0.938 us  */             preempt_count_add();
/*  6.093 us  */           }
/*            */           blk_stop_queue() {
/*            */             cancel_delayed_work() {
/*            */               try_to_grab_pending() {
/*  1.562 us  */                 del_timer();
/*  8.177 us  */               }
/*+ 14.479 us */             }
/*+ 20.677 us */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  1.458 us  */             preempt_count_sub();
/*  7.917 us  */           }
/*            */           down() {
/*            */             _raw_spin_lock_irqsave() {
/*  1.407 us  */               preempt_count_add();
/*  7.656 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  1.198 us  */               preempt_count_sub();
/*  8.958 us  */             }
/*+ 27.135 us */           }
/*+ 81.667 us */         }
/*! 302.395 us*/       }
/*! 307.552 us*/     }
/*            */     mmc_suspend() {
/*            */       _mmc_suspend() {
/*            */         __mmc_claim_host() {
/*            */           add_wait_queue() {
/*            */             _raw_spin_lock_irqsave() {
/*  0.989 us  */               preempt_count_add();
/*  5.469 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  0.938 us  */               preempt_count_sub();
/*  5.886 us  */             }
/*+ 19.323 us */           }
/*            */           _raw_spin_lock_irqsave() {
/*  0.937 us  */             preempt_count_add();
/*  5.677 us  */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  0.990 us  */             preempt_count_sub();
/*  5.416 us  */           }
/*            */           remove_wait_queue() {
/*            */             _raw_spin_lock_irqsave() {
/*  0.989 us  */               preempt_count_add();
/*  5.469 us  */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  0.990 us  */               preempt_count_sub();
/*  5.417 us  */             }
/*+ 19.011 us */           }
/*            */           __pm_runtime_resume() {
/*            */             _raw_spin_lock_irqsave() {
/*  1.407 us  */               preempt_count_add();
/*  7.917 us  */             }
/*  2.240 us  */             rpm_resume();
/*            */             _raw_spin_unlock_irqrestore() {
/*  1.459 us  */               preempt_count_sub();
/*  7.760 us  */             }
/*+ 34.583 us */           }
/*! 106.614 us*/         }
/*            */         mmc_flush_cache() {
/*            */           mmc_switch() {
/*            */             __mmc_switch() {
/*  1.510 us  */               mmc_retune_hold();
/*            */               mmc_wait_for_cmd() {
/*  0.781 us  */                 __init_waitqueue_head();
/*            */                 mmc_start_request() {
/*  0.833 us  */                   mmc_retune_hold();
/*            */                   led_trigger_event() {
/*            */                     _raw_read_lock() {
/*  0.990 us  */                       preempt_count_add();
/*  5.625 us  */                     }
/*            */                     led_set_brightness() {
/*            */                       gpio_led_set() {
/*            */                         gpiod_set_value() {
/*            */                           _gpiod_set_raw_value() {
/*  1.875 us  */                             pl061_set_value();
/*  6.927 us  */                           }
/*+ 11.771 us */                         }
/*+ 16.771 us */                       }
/*+ 22.031 us */                     }
/*            */                     _raw_read_unlock() {
/*  0.990 us  */                       preempt_count_sub();
/*  5.468 us  */                     }
/*+ 45.469 us */                   }
/*            */                   __mmc_start_request() {
/*  0.989 us  */                     mmc_retune();
/*            */                     dw_mci_request() {
/*            */                       _raw_spin_lock_bh() {
/*  1.354 us  */                         __local_bh_disable_ip();
/*  6.875 us  */                       }
/*            */                       __dw_mci_start_request() {
/*            */                         dw_mci_prepare_command() {
/*  1.250 us  */                           dw_mci_hi6220_prepare_command();
/*  8.750 us  */                         }
/*            */                         dw_mci_start_command() {
/*  1.459 us  */                           dw_mci_wait_while_busy.isra.17();
/*  8.282 us  */                         }
/*  ==========>*/
/*            */                         gic_handle_irq() {
/*            */                           __handle_domain_irq() {
/*            */                             irq_enter() {
/*  1.042 us  */                               rcu_irq_enter();
/*  0.833 us  */                               preempt_count_add();
/*+ 12.813 us */                             }
/*  1.406 us  */                             irq_find_mapping();
/*            */                             generic_handle_irq() {
/*            */                               handle_percpu_devid_irq() {
/*            */                                 arch_timer_handler_phys() {
/*            */                                   hrtimer_interrupt() {
/*            */                                     _raw_spin_lock() {
/*  0.833 us  */                                       preempt_count_add();
/*  5.261 us  */                                     }
/*            */                                     ktime_get_update_offsets_now() {
/*  0.833 us  */                                       arch_counter_read();
/*  5.990 us  */                                     }
/*            */                                     __hrtimer_run_queues() {
/*  0.990 us  */                                       __remove_hrtimer();
/*            */                                       _raw_spin_unlock() {
/*  0.834 us  */                                         preempt_count_sub();
/*  5.260 us  */                                       }
/*            */                                       tick_sched_timer() {
/*            */                                         ktime_get() {
/*  0.833 us  */                                           arch_counter_read();
/*  5.365 us  */                                         }
/*            */                                         tick_do_update_jiffies64() {
/*            */                                           _raw_spin_lock() {
/*  0.834 us  */                                             preempt_count_add();
/*  5.677 us  */                                           }
/*            */                                           do_timer() {
/*  1.510 us  */                                             calc_global_load();
/*  6.146 us  */                                           }
/*            */                                           _raw_spin_unlock() {
/*  0.833 us  */                                             preempt_count_sub();
/*  5.313 us  */                                           }
/*            */                                           update_wall_time() {
/*            */                                             _raw_spin_lock_irqsave() {
/*  0.781 us  */                                               preempt_count_add();
/*  5.468 us  */                                             }
/*  0.834 us  */                                             arch_counter_read();
/*  1.041 us  */                                             ntp_tick_length();
/*  0.782 us  */                                             ntp_tick_length();
/*  0.781 us  */                                             ntp_tick_length();
/*            */                                             timekeeping_update() {
/*  0.990 us  */                                               ntp_get_next_leap();
/*  2.084 us  */                                               update_vsyscall();
/*  1.198 us  */                                               raw_notifier_call_chain();
/*  1.042 us  */                                               update_fast_timekeeper();
/*+ 21.875 us */                                             }
/*            */                                             _raw_spin_unlock_irqrestore() {
/*  0.781 us  */                                               preempt_count_sub();
/*  5.209 us  */                                             }
/*+ 65.625 us */                                           }
/*+ 99.375 us */                                         }
/*            */                                         update_process_times() {
/*            */                                           account_process_tick() {
/*            */                                             account_system_time() {
/*            */                                               cpuacct_account_field() {
/*  1.250 us  */                                                 __rcu_read_lock();
/*  1.458 us  */                                                 __rcu_read_unlock();
/*+ 16.146 us */                                               }
/*            */                                               acct_account_cputime() {
/*            */                                                 __acct_update_integrals() {
/*  1.510 us  */                                                   jiffies_to_timeval();
/*  8.750 us  */                                                 }
/*+ 15.937 us */                                               }
/*+ 45.000 us */                                             }
/*+ 51.614 us */                                           }
/*  0.886 us  */                                           hrtimer_run_queues();
/*            */                                           raise_softirq() {
/*  0.937 us  */                                             __raise_softirq_irqoff();
/*  5.469 us  */                                           }
/*            */                                           rcu_check_callbacks() {
/*  0.833 us  */                                             rcu_preempt_qs();
/*  0.989 us  */                                             cpu_needs_another_gp();
/*  0.937 us  */                                             cpu_needs_another_gp();
/*  0.886 us  */                                             cpu_needs_another_gp();
/*+ 22.395 us */                                           }
/*            */                                           scheduler_tick() {
/*            */                                             _raw_spin_lock() {
/*  0.781 us  */                                               preempt_count_add();
/*  5.313 us  */                                             }
/*  1.458 us  */                                             update_rq_clock.part.83();
/*            */                                             task_tick_fair() {
/*            */                                               update_curr() {
/*            */                                                 cpuacct_charge() {
/*  0.833 us  */                                                   __rcu_read_lock();
/*  0.833 us  */                                                   __rcu_read_unlock();
/*+ 10.781 us */                                                 }
/*+ 15.833 us */                                               }
/*  0.886 us  */                                               __compute_runnable_contrib();
/*  1.563 us  */                                               __compute_runnable_contrib();
/*            */                                               update_cfs_shares() {
/*            */                                                 update_curr() {
/*  1.667 us  */                                                   __calc_delta();
/*  8.282 us  */                                                 }
/*+ 15.573 us */                                               }
/*  1.667 us  */                                               hrtimer_active();
/*  1.250 us  */                                               update_curr();
/*  1.250 us  */                                               __compute_runnable_contrib();
/*  1.302 us  */                                               __compute_runnable_contrib();
/*  1.510 us  */                                               update_cfs_shares();
/*  0.834 us  */                                               hrtimer_active();
/*+ 94.947 us */                                             }
/*            */                                             update_cpu_load_active() {
/*            */                                               __update_cpu_load() {
/*  0.885 us  */                                                 sched_avg_update();
/*  5.521 us  */                                               }
/*+ 10.104 us */                                             }
/*  0.886 us  */                                             calc_global_load_tick();
/*            */                                             _raw_spin_unlock() {
/*  0.781 us  */                                               preempt_count_sub();
/*  5.261 us  */                                             }
/*            */                                             trigger_load_balance() {
/*            */                                               raise_softirq() {
/*  0.885 us  */                                                 __raise_softirq_irqoff();
/*  5.365 us  */                                               }
/*  0.781 us  */                                               __rcu_read_lock();
/*  0.834 us  */                                               __rcu_read_unlock();
/*  0.834 us  */                                               __rcu_read_lock();
/*  0.834 us  */                                               __rcu_read_unlock();
/*+ 29.583 us */                                             }
/*! 175.000 us*/                                           }
/*  1.354 us  */                                           run_posix_cpu_timers();
/*! 284.844 us*/                                         }
/*  0.989 us  */                                         profile_tick();
/*  0.938 us  */                                         hrtimer_forward();
/*! 412.552 us*/                                       }
/*            */                                       _raw_spin_lock() {
/*  1.250 us  */                                         preempt_count_add();
/*  7.761 us  */                                       }
/*  1.354 us  */                                       enqueue_hrtimer();
/*! 452.031 us*/                                     }
/*  1.354 us  */                                     __hrtimer_get_next_event();
/*            */                                     _raw_spin_unlock() {
/*  1.354 us  */                                       preempt_count_sub();
/*  7.552 us  */                                     }
/*            */                                     tick_program_event() {
/*            */                                       clockevents_program_event() {
/*            */                                         ktime_get() {
/*  1.355 us  */                                           arch_counter_read();
/*  7.709 us  */                                         }
/*  1.145 us  */                                         arch_timer_set_next_event_phys();
/*+ 19.219 us */                                       }
/*+ 24.583 us */                                     }
/*! 524.115 us*/                                   }
/*! 528.854 us*/                                 }
/*  0.886 us  */                                 gic_eoimode1_eoi_irq();
/*! 541.771 us*/                               }
/*! 547.604 us*/                             }
/*            */                             irq_exit() {
/*  0.781 us  */                               preempt_count_sub();
/*  0.833 us  */                               idle_cpu();
/*  0.938 us  */                               rcu_irq_exit();
/*+ 14.323 us */                             }
/*! 592.969 us*/                           }
/*! 597.864 us*/                         }
/*  <==========*/
/*! 631.771 us*/                       }
/*            */                       _raw_spin_unlock_bh() {
/*            */                         __local_bh_enable_ip() {
/*  0.833 us  */                           preempt_count_sub();
/*            */                           do_softirq() {
/*            */                             __do_softirq() {
/*  0.886 us  */                               __local_bh_disable_ip();
/*            */                               run_timer_softirq() {
/*            */                                 _raw_spin_lock_irq() {
/*  0.781 us  */                                   preempt_count_add();
/*  5.312 us  */                                 }
/*            */                                 _raw_spin_unlock_irq() {
/*  0.833 us  */                                   preempt_count_sub();
/*  5.938 us  */                                 }
/*+ 21.094 us */                               }
/*            */                               run_rebalance_domains() {
/*            */                                 rebalance_domains() {
/*            */                                   update_blocked_averages() {
/*            */                                     _raw_spin_lock_irqsave() {
/*  1.302 us  */                                       preempt_count_add();
/*  7.708 us  */                                     }
/*  2.343 us  */                                     update_rq_clock();
/*  1.198 us  */                                     __compute_runnable_contrib();
/*  1.094 us  */                                     __compute_runnable_contrib();
/*  0.833 us  */                                     __compute_runnable_contrib();
/*  0.833 us  */                                     __compute_runnable_contrib();
/*            */                                     _raw_spin_unlock_irqrestore() {
/*  0.834 us  */                                       preempt_count_sub();
/*  5.417 us  */                                     }
/*+ 51.666 us */                                   }
/*  0.781 us  */                                   __rcu_read_lock();
/*  1.042 us  */                                   __msecs_to_jiffies();
/*  0.834 us  */                                   __msecs_to_jiffies();
/*  0.885 us  */                                   __rcu_read_unlock();
/*+ 76.303 us */                                 }
/*+ 82.031 us */                               }
/*  0.885 us  */                               rcu_bh_qs();
/*            */                               __local_bh_enable() {
/*  0.834 us  */                                 preempt_count_sub();
/*  5.469 us  */                               }
/*! 132.291 us*/                             }
/*! 136.927 us*/                           }
/*  1.146 us  */                           preempt_count_sub();
/*! 151.146 us*/                         }
/*! 155.989 us*/                       }
/*! 807.240 us*/                     }
/*! 816.927 us*/                   }
/*! 875.521 us*/                 }
/*            */                 mmc_wait_for_req_done() {
/*            */                   wait_for_completion() {
/*            */                     wait_for_common() {
/*            */                       _raw_spin_lock_irq() {
/*  1.093 us  */                         preempt_count_add();
/*  5.833 us  */                       }
/*            */                       _raw_spin_unlock_irq() {
/*  0.989 us  */                         preempt_count_sub();
/*  5.521 us  */                       }
/*+ 19.323 us */                     }
/*+ 23.907 us */                   }
/*  0.833 us  */                   mmc_retune_release();
/*+ 33.229 us */                 }
/*! 921.979 us*/               }
/*            */               mmc_wait_for_cmd() {
/*  0.833 us  */                 __init_waitqueue_head();
/*            */                 mmc_start_request() {
/*  0.781 us  */                   mmc_retune_hold();
/*            */                   led_trigger_event() {
/*            */                     _raw_read_lock() {
/*  1.042 us  */                       preempt_count_add();
/*  5.625 us  */                     }
/*            */                     led_set_brightness() {
/*            */                       gpio_led_set() {
/*            */                         gpiod_set_value() {
/*            */                           _gpiod_set_raw_value() {
/*  1.355 us  */                             pl061_set_value();
/*  5.833 us  */                           }
/*+ 10.260 us */                         }
/*+ 14.688 us */                       }
/*+ 19.323 us */                     }
/*            */                     _raw_read_unlock() {
/*  0.990 us  */                       preempt_count_sub();
/*  5.468 us  */                     }
/*+ 41.927 us */                   }
/*            */                   __mmc_start_request() {
/*  0.834 us  */                     mmc_retune();
/*            */                     dw_mci_request() {
/*            */                       _raw_spin_lock_bh() {
/*  1.094 us  */                         __local_bh_disable_ip();
/*  5.781 us  */                       }
/*            */                       __dw_mci_start_request() {
/*            */                         dw_mci_prepare_command() {
/*  1.302 us  */                           dw_mci_hi6220_prepare_command();
/*  7.031 us  */                         }
/*            */                         dw_mci_start_command() {
/*  1.302 us  */                           dw_mci_wait_while_busy.isra.17();
/*  8.073 us  */                         }
/*+ 25.469 us */                       }
/*            */                       _raw_spin_unlock_bh() {
/*            */                         __local_bh_enable_ip() {
/*  0.834 us  */                           preempt_count_sub();
/*  0.989 us  */                           preempt_count_sub();
/*+ 10.052 us */                         }
/*+ 14.531 us */                       }
/*+ 58.073 us */                     }
/*+ 67.031 us */                   }
/*! 121.406 us*/                 }
/*            */                 mmc_wait_for_req_done() {
/*            */                   wait_for_completion() {
/*            */                     wait_for_common() {
/*            */                       _raw_spin_lock_irq() {
/*  0.990 us  */                         preempt_count_add();
/*  5.416 us  */                       }
/*            */                       _raw_spin_unlock_irq() {
/*  0.937 us  */                         preempt_count_sub();
/*  5.417 us  */                       }
/*            */                       schedule_timeout() {
/*            */                         schedule() {
/*  0.990 us  */                           preempt_count_add();
/*            */                           rcu_note_context_switch() {
/*  0.833 us  */                             rcu_sched_qs();
/*  0.833 us  */                             rcu_preempt_qs();
/*  9.739 us  */                           }
/*            */                           _raw_spin_lock_irq() {
/*  0.833 us  */                             preempt_count_add();
/*  5.365 us  */                           }
/*            */                           deactivate_task() {
/*  1.406 us  */                             update_rq_clock.part.83();
/*            */                             dequeue_task_fair() {
/*            */                               update_curr() {
/*            */                                 cpuacct_charge() {
/*  0.781 us  */                                   __rcu_read_lock();
/*  0.833 us  */                                   __rcu_read_unlock();
/*  9.896 us  */                                 }
/*+ 14.323 us */                               }
/*  0.833 us  */                               clear_buddies();
/*            */                               update_cfs_shares() {
/*            */                                 update_curr() {
/*  0.834 us  */                                   __calc_delta();
/*  5.364 us  */                                 }
/*  9.896 us  */                               }
/*  0.886 us  */                               update_curr();
/*  0.834 us  */                               __compute_runnable_contrib();
/*  0.833 us  */                               clear_buddies();
/*  0.886 us  */                               update_cfs_shares();
/*  0.989 us  */                               hrtick_update();
/*+ 66.146 us */                             }
/*+ 76.354 us */                           }
/*            */                           pick_next_task_fair() {
/*  0.990 us  */                             __rcu_read_lock();
/*  0.833 us  */                             __msecs_to_jiffies();
/*  0.885 us  */                             __rcu_read_unlock();
/*+ 14.740 us */                           }
/*            */                           pick_next_task_idle() {
/*            */                             put_prev_task_fair() {
/*  1.302 us  */                               put_prev_entity();
/*  1.302 us  */                               put_prev_entity();
/*+ 13.750 us */                             }
/*+ 19.323 us */                           }
/*            */                           __switch_to() {
/*  1.250 us  */                             fpsimd_thread_switch();
/*  1.250 us  */                             hw_breakpoint_thread_switch();
 ------------------------------------------
 0)  Binder:-2683  =>    sh-4511    
 ------------------------------------------

/*+ 91.719 us */                           } /* __switch_to */
/*            */                           finish_task_switch() {
/*            */                             _raw_spin_unlock_irq() {
/*  0.833 us  */                               preempt_count_sub();
/*  5.625 us  */                             }
/*+ 14.427 us */                           }
/*  1.042 us  */                           preempt_count_sub();
/*! 278.906 us*/                         } /* schedule */
/*! 283.958 us*/                       } /* schedule_timeout */
/*            */                       _raw_spin_lock_irq() {
/*  1.666 us  */                         preempt_count_add();
/*  6.094 us  */                       }
/*            */                       _raw_spin_unlock_irq() {
/*  0.990 us  */                         preempt_count_sub();
/*  5.364 us  */                       }
/*! 325.990 us*/                     } /* wait_for_common */
/*! 330.885 us*/                   } /* wait_for_completion */
/*  1.250 us  */                   mmc_retune_release();
/*! 340.833 us*/                 } /* mmc_wait_for_req_done */
/*! 477.605 us*/               } /* mmc_wait_for_cmd */
/*            */               mmc_wait_for_cmd() {
/*  0.781 us  */                 __init_waitqueue_head();
/*            */                 mmc_start_request() {
/*  0.833 us  */                   mmc_retune_hold();
/*            */                   led_trigger_event() {
/*            */                     _raw_read_lock() {
/*  0.937 us  */                       preempt_count_add();
/*  5.417 us  */                     }
/*            */                     led_set_brightness() {
/*            */                       gpio_led_set() {
/*            */                         gpiod_set_value() {
/*            */                           _gpiod_set_raw_value() {
/*  1.354 us  */                             pl061_set_value();
/*  6.041 us  */                           }
/*+ 10.677 us */                         }
/*+ 15.260 us */                       }
/*+ 19.844 us */                     }
/*            */                     _raw_read_unlock() {
/*  0.990 us  */                       preempt_count_sub();
/*  5.416 us  */                     }
/*+ 42.188 us */                   }
/*            */                   __mmc_start_request() {
/*  1.042 us  */                     mmc_retune();
/*            */                     dw_mci_request() {
/*            */                       _raw_spin_lock_bh() {
/*  1.198 us  */                         __local_bh_disable_ip();
/*  6.146 us  */                       }
/*            */                       __dw_mci_start_request() {
/*            */                         dw_mci_prepare_command() {
/*  0.833 us  */                           dw_mci_hi6220_prepare_command();
/*  6.354 us  */                         }
/*            */                         dw_mci_start_command() {
/*  0.989 us  */                           dw_mci_wait_while_busy.isra.17();
/*  5.938 us  */                         }
/*  ==========>*/
/*            */                         gic_handle_irq() {
/*            */                           __handle_domain_irq() {
/*            */                             irq_enter() {
/*  0.937 us  */                               rcu_irq_enter();
/*  0.834 us  */                               preempt_count_add();
/*+ 10.365 us */                             }
/*  0.833 us  */                             irq_find_mapping();
/*            */                             generic_handle_irq() {
/*            */                               handle_fasteoi_irq() {
/*            */                                 _raw_spin_lock() {
/*  0.833 us  */                                   preempt_count_add();
/*  5.261 us  */                                 }
/*            */                                 handle_irq_event() {
/*            */                                   _raw_spin_unlock() {
/*  1.302 us  */                                     preempt_count_sub();
/*  7.552 us  */                                   }
/*            */                                   handle_irq_event_percpu() {
/*            */                                     dw_mci_interrupt() {
/*            */                                       __tasklet_schedule() {
/*  1.302 us  */                                         __raise_softirq_irqoff();
/*+ 12.135 us */                                       }
/*+ 19.375 us */                                     }
/*  1.458 us  */                                     add_interrupt_randomness();
/*  1.407 us  */                                     note_interrupt();
/*+ 38.541 us */                                   }
/*            */                                   _raw_spin_lock() {
/*  1.302 us  */                                     preempt_count_add();
/*  7.709 us  */                                   }
/*+ 69.271 us */                                 }
/*  0.834 us  */                                 gic_eoimode1_eoi_irq();
/*            */                                 _raw_spin_unlock() {
/*  0.833 us  */                                   preempt_count_sub();
/*  5.417 us  */                                 }
/*+ 97.291 us */                               }
/*! 101.979 us*/                             }
/*            */                             irq_exit() {
/*  0.781 us  */                               preempt_count_sub();
/*  0.834 us  */                               idle_cpu();
/*  0.938 us  */                               rcu_irq_exit();
/*+ 14.687 us */                             }
/*! 143.542 us*/                           }
/*! 148.125 us*/                         }
/*  <==========*/
/*! 173.959 us*/                       }
/*            */                       _raw_spin_unlock_bh() {
/*            */                         __local_bh_enable_ip() {
/*  0.781 us  */                           preempt_count_sub();
/*            */                           do_softirq() {
/*            */                             __do_softirq() {
/*  0.833 us  */                               __local_bh_disable_ip();
/*            */                               tasklet_action() {
/*            */                                 dw_mci_tasklet_func() {
/*            */                                   _raw_spin_lock() {
/*  0.834 us  */                                     preempt_count_add();
/*  5.468 us  */                                   }
/*  1.042 us  */                                   dw_mci_command_complete();
/*            */                                   dw_mci_request_end() {
/*            */                                     _raw_spin_unlock() {
/*  1.250 us  */                                       preempt_count_sub();
/*  7.500 us  */                                     }
/*            */                                     mmc_request_done() {
/*            */                                       led_trigger_event() {
/*            */                                         _raw_read_lock() {
/*  1.302 us  */                                           preempt_count_add();
/*  7.760 us  */                                         }
/*            */                                         led_set_brightness() {
/*            */                                           gpio_led_set() {
/*            */                                             gpiod_set_value() {
/*            */                                               _gpiod_set_raw_value() {
/*  1.823 us  */                                                 pl061_set_value();
/*  8.073 us  */                                               }
/*+ 14.531 us */                                             }
/*+ 20.730 us */                                           }
/*+ 27.084 us */                                         }
/*            */                                         _raw_read_unlock() {
/*  0.833 us  */                                           preempt_count_sub();
/*  5.312 us  */                                         }
/*+ 55.104 us */                                       }
/*            */                                       mmc_wait_done() {
/*            */                                         complete() {
/*            */                                           _raw_spin_lock_irqsave() {
/*  0.833 us  */                                             preempt_count_add();
/*  5.417 us  */                                           }
/*            */                                           __wake_up_locked() {
/*  0.833 us  */                                             __wake_up_common();
/*  5.313 us  */                                           }
/*            */                                           _raw_spin_unlock_irqrestore() {
/*  0.782 us  */                                             preempt_count_sub();
/*  5.208 us  */                                           }
/*+ 27.553 us */                                         }
/*+ 31.927 us */                                       }
/*+ 96.250 us */                                     }
/*            */                                     _raw_spin_lock() {
/*  0.781 us  */                                       preempt_count_add();
/*  5.209 us  */                                     }
/*! 123.020 us*/                                   }
/*            */                                   _raw_spin_unlock() {
/*  0.833 us  */                                     preempt_count_sub();
/*  5.313 us  */                                   }
/*! 150.104 us*/                                 }
/*! 157.291 us*/                               }
/*  0.886 us  */                               rcu_bh_qs();
/*            */                               __local_bh_enable() {
/*  0.833 us  */                                 preempt_count_sub();
/*  5.938 us  */                               }
/*! 181.823 us*/                             }
/*! 187.240 us*/                           }
/*  1.510 us  */                           preempt_count_sub();
/*! 204.427 us*/                         }
/*! 210.885 us*/                       }
/*! 404.219 us*/                     }
/*! 414.636 us*/                   }
/*! 470.573 us*/                 }
/*            */                 mmc_wait_for_req_done() {
/*            */                   wait_for_completion() {
/*            */                     wait_for_common() {
/*            */                       _raw_spin_lock_irq() {
/*  1.510 us  */                         preempt_count_add();
/*  7.864 us  */                       }
/*            */                       _raw_spin_unlock_irq() {
/*  1.458 us  */                         preempt_count_sub();
/*  7.917 us  */                       }
/*+ 26.302 us */                     }
/*+ 31.823 us */                   }
/*  0.833 us  */                   mmc_retune_release();
/*+ 41.823 us */                 }
/*! 526.979 us*/               }
/*            */               mmc_wait_for_cmd() {
/*  0.782 us  */                 __init_waitqueue_head();
/*            */                 mmc_start_request() {
/*  0.781 us  */                   mmc_retune_hold();
/*            */                   led_trigger_event() {
/*            */                     _raw_read_lock() {
/*  1.041 us  */                       preempt_count_add();
/*  5.573 us  */                     }
/*            */                     led_set_brightness() {
/*            */                       gpio_led_set() {
/*            */                         gpiod_set_value() {
/*            */                           _gpiod_set_raw_value() {
/*  1.354 us  */                             pl061_set_value();
/*  5.729 us  */                           }
/*+ 10.156 us */                         }
/*+ 14.532 us */                       }
/*+ 18.958 us */                     }
/*            */                     _raw_read_unlock() {
/*  0.990 us  */                       preempt_count_sub();
/*  5.416 us  */                     }
/*+ 41.563 us */                   }
/*            */                   __mmc_start_request() {
/*  0.834 us  */                     mmc_retune();
/*            */                     dw_mci_request() {
/*            */                       _raw_spin_lock_bh() {
/*  1.563 us  */                         __local_bh_disable_ip();
/*  7.188 us  */                       }
/*            */                       __dw_mci_start_request() {
/*            */                         dw_mci_prepare_command() {
/*  1.302 us  */                           dw_mci_hi6220_prepare_command();
/*  7.709 us  */                         }
/*            */                         dw_mci_start_command() {
/*  1.302 us  */                           dw_mci_wait_while_busy.isra.17();
/*  7.917 us  */                         }
/*  ==========>*/
/*            */                         gic_handle_irq() {
/*            */                           __handle_domain_irq() {
/*            */                             irq_enter() {
/*  1.406 us  */                               rcu_irq_enter();
/*  1.354 us  */                               preempt_count_add();
/*+ 14.063 us */                             }
/*  1.354 us  */                             irq_find_mapping();
/*            */                             generic_handle_irq() {
/*            */                               handle_fasteoi_irq() {
/*            */                                 _raw_spin_lock() {
/*  0.833 us  */                                   preempt_count_add();
/*  5.261 us  */                                 }
/*            */                                 handle_irq_event() {
/*            */                                   _raw_spin_unlock() {
/*  0.833 us  */                                     preempt_count_sub();
/*  5.313 us  */                                   }
/*            */                                   handle_irq_event_percpu() {
/*            */                                     dw_mci_interrupt() {
/*            */                                       __tasklet_schedule() {
/*  0.834 us  */                                         __raise_softirq_irqoff();
/*  7.604 us  */                                       }
/*+ 12.761 us */                                     }
/*  0.990 us  */                                     add_interrupt_randomness();
/*  0.885 us  */                                     note_interrupt();
/*+ 26.355 us */                                   }
/*            */                                   _raw_spin_lock() {
/*  0.833 us  */                                     preempt_count_add();
/*  5.313 us  */                                   }
/*+ 48.541 us */                                 }
/*  0.834 us  */                                 gic_eoimode1_eoi_irq();
/*            */                                 _raw_spin_unlock() {
/*  0.833 us  */                                   preempt_count_sub();
/*  5.573 us  */                                 }
/*+ 75.938 us */                               }
/*+ 80.625 us */                             }
/*            */                             irq_exit() {
/*  1.198 us  */                               preempt_count_sub();
/*  1.302 us  */                               idle_cpu();
/*  1.406 us  */                               rcu_irq_exit();
/*+ 20.313 us */                             }
/*! 135.677 us*/                           }
/*! 142.083 us*/                         }
/*  <==========*/
/*! 174.062 us*/                       }
/*            */                       _raw_spin_unlock_bh() {
/*            */                         __local_bh_enable_ip() {
/*  1.302 us  */                           preempt_count_sub();
/*            */                           do_softirq() {
/*            */                             __do_softirq() {
/*  1.354 us  */                               __local_bh_disable_ip();
/*            */                               tasklet_action() {
/*            */                                 dw_mci_tasklet_func() {
/*            */                                   _raw_spin_lock() {
/*  0.833 us  */                                     preempt_count_add();
/*  5.313 us  */                                   }
/*  1.094 us  */                                   dw_mci_command_complete();
/*            */                                   dw_mci_request_end() {
/*            */                                     _raw_spin_unlock() {
/*  0.833 us  */                                       preempt_count_sub();
/*  5.208 us  */                                     }
/*            */                                     mmc_request_done() {
/*            */                                       led_trigger_event() {
/*            */                                         _raw_read_lock() {
/*  0.833 us  */                                           preempt_count_add();
/*  5.261 us  */                                         }
/*            */                                         led_set_brightness() {
/*            */                                           gpio_led_set() {
/*            */                                             gpiod_set_value() {
/*            */                                               _gpiod_set_raw_value() {
/*  1.302 us  */                                                 pl061_set_value();
/*  5.834 us  */                                               }
/*+ 10.156 us */                                             }
/*+ 14.531 us */                                           }
/*+ 18.959 us */                                         }
/*            */                                         _raw_read_unlock() {
/*  0.834 us  */                                           preempt_count_sub();
/*  5.313 us  */                                         }
/*+ 41.146 us */                                       }
/*            */                                       mmc_wait_done() {
/*            */                                         complete() {
/*            */                                           _raw_spin_lock_irqsave() {
/*  0.834 us  */                                             preempt_count_add();
/*  5.364 us  */                                           }
/*            */                                           __wake_up_locked() {
/*  1.302 us  */                                             __wake_up_common();
/*  7.604 us  */                                           }
/*            */                                           _raw_spin_unlock_irqrestore() {
/*  1.250 us  */                                             preempt_count_sub();
/*  7.552 us  */                                           }
/*+ 35.052 us */                                         }
/*+ 40.417 us */                                       }
/*+ 90.625 us */                                     }
/*            */                                     _raw_spin_lock() {
/*  1.302 us  */                                       preempt_count_add();
/*  7.604 us  */                                     }
/*! 117.188 us*/                                   }
/*            */                                   _raw_spin_unlock() {
/*  1.302 us  */                                     preempt_count_sub();
/*  7.604 us  */                                   }
/*! 148.698 us*/                                 }
/*! 157.761 us*/                               }
/*  0.886 us  */                               rcu_bh_qs();
/*            */                               __local_bh_enable() {
/*  0.833 us  */                                 preempt_count_sub();
/*  5.364 us  */                               }
/*! 183.334 us*/                             }
/*! 188.750 us*/                           }
/*  1.041 us  */                           preempt_count_sub();
/*! 205.156 us*/                         }
/*! 210.521 us*/                       }
/*! 406.302 us*/                     }
/*! 415.469 us*/                   }
/*! 469.375 us*/                 }
/*            */                 mmc_wait_for_req_done() {
/*            */                   wait_for_completion() {
/*            */                     wait_for_common() {
/*            */                       _raw_spin_lock_irq() {
/*  1.042 us  */                         preempt_count_add();
/*  5.521 us  */                       }
/*            */                       _raw_spin_unlock_irq() {
/*  0.989 us  */                         preempt_count_sub();
/*  5.417 us  */                       }
/*+ 18.958 us */                     }
/*+ 23.333 us */                   }
/*  0.833 us  */                   mmc_retune_release();
/*+ 32.136 us */                 }
/*! 513.906 us*/               }
/*  0.833 us  */               mmc_switch_status_error();
/*  0.834 us  */               mmc_retune_release();
/*# 2474.583 us*/              } /* __mmc_switch */
/*# 2480.521 us*/            } /* mmc_switch */
/*# 2488.229 us*/          } /* mmc_flush_cache */
/*  1.302 us  */         mmc_retune_hold();
/*            */         mmc_deselect_cards() {
/*            */           mmc_wait_for_cmd() {
/*  1.303 us  */             __init_waitqueue_head();
/*            */             mmc_start_request() {
/*  1.302 us  */               mmc_retune_hold();
/*            */               led_trigger_event() {
/*            */                 _raw_read_lock() {
/*  1.511 us  */                   preempt_count_add();
/*  7.865 us  */                 }
/*            */                 led_set_brightness() {
/*            */                   gpio_led_set() {
/*            */                     gpiod_set_value() {
/*            */                       _gpiod_set_raw_value() {
/*  1.354 us  */                         pl061_set_value();
/*  6.458 us  */                       }
/*+ 12.032 us */                     }
/*+ 17.396 us */                   }
/*+ 22.916 us */                 }
/*            */                 _raw_read_unlock() {
/*  0.990 us  */                   preempt_count_sub();
/*  5.677 us  */                 }
/*+ 50.729 us */               }
/*            */               __mmc_start_request() {
/*  0.781 us  */                 mmc_retune();
/*            */                 dw_mci_request() {
/*            */                   _raw_spin_lock_bh() {
/*  1.146 us  */                     __local_bh_disable_ip();
/*  5.729 us  */                   }
/*            */                   __dw_mci_start_request() {
/*            */                     dw_mci_prepare_command() {
/*  0.833 us  */                       dw_mci_hi6220_prepare_command();
/*  5.521 us  */                     }
/*            */                     dw_mci_start_command() {
/*  0.781 us  */                       dw_mci_wait_while_busy.isra.17();
/*  5.729 us  */                     }
/*  ==========>*/
/*            */                     gic_handle_irq() {
/*            */                       __handle_domain_irq() {
/*            */                         irq_enter() {
/*  0.938 us  */                           rcu_irq_enter();
/*  0.833 us  */                           preempt_count_add();
/*  9.791 us  */                         }
/*  0.833 us  */                         irq_find_mapping();
/*            */                         generic_handle_irq() {
/*            */                           handle_fasteoi_irq() {
/*            */                             _raw_spin_lock() {
/*  1.302 us  */                               preempt_count_add();
/*+ 10.990 us */                             }
/*            */                             handle_irq_event() {
/*            */                               _raw_spin_unlock() {
/*  1.355 us  */                                 preempt_count_sub();
/*  7.709 us  */                               }
/*            */                               handle_irq_event_percpu() {
/*            */                                 dw_mci_interrupt() {
/*            */                                   __tasklet_schedule() {
/*  1.354 us  */                                     __raise_softirq_irqoff();
/*  7.812 us  */                                   }
/*+ 14.948 us */                                 }
/*  1.406 us  */                                 add_interrupt_randomness();
/*  0.885 us  */                                 note_interrupt();
/*+ 31.250 us */                               }
/*            */                               _raw_spin_lock() {
/*  0.781 us  */                                 preempt_count_add();
/*  5.365 us  */                               }
/*+ 58.333 us */                             }
/*  0.886 us  */                             gic_eoimode1_eoi_irq();
/*            */                             _raw_spin_unlock() {
/*  0.833 us  */                               preempt_count_sub();
/*  5.313 us  */                             }
/*+ 93.333 us */                           }
/*+ 98.698 us */                         }
/*            */                         irq_exit() {
/*  0.833 us  */                           preempt_count_sub();
/*  0.781 us  */                           idle_cpu();
/*  0.938 us  */                           rcu_irq_exit();
/*+ 14.219 us */                         }
/*! 139.792 us*/                       }
/*! 144.531 us*/                     }
/*  <==========*/
/*! 167.917 us*/                   }
/*            */                   _raw_spin_unlock_bh() {
/*            */                     __local_bh_enable_ip() {
/*  0.781 us  */                       preempt_count_sub();
/*            */                       do_softirq() {
/*            */                         __do_softirq() {
/*  0.886 us  */                           __local_bh_disable_ip();
/*            */                           tasklet_action() {
/*            */                             dw_mci_tasklet_func() {
/*            */                               _raw_spin_lock() {
/*  1.250 us  */                                 preempt_count_add();
/*  7.552 us  */                               }
/*  1.354 us  */                               dw_mci_command_complete();
/*            */                               dw_mci_request_end() {
/*            */                                 _raw_spin_unlock() {
/*  1.302 us  */                                   preempt_count_sub();
/*  7.500 us  */                                 }
/*            */                                 mmc_request_done() {
/*            */                                   led_trigger_event() {
/*            */                                     _raw_read_lock() {
/*  1.302 us  */                                       preempt_count_add();
/*  7.604 us  */                                     }
/*            */                                     led_set_brightness() {
/*            */                                       gpio_led_set() {
/*            */                                         gpiod_set_value() {
/*            */                                           _gpiod_set_raw_value() {
/*  1.355 us  */                                             pl061_set_value();
/*  6.510 us  */                                           }
/*+ 11.927 us */                                         }
/*+ 17.292 us */                                       }
/*+ 22.656 us */                                     }
/*            */                                     _raw_read_unlock() {
/*  0.834 us  */                                       preempt_count_sub();
/*  5.260 us  */                                     }
/*+ 49.532 us */                                   }
/*            */                                   mmc_wait_done() {
/*            */                                     complete() {
/*            */                                       _raw_spin_lock_irqsave() {
/*  0.833 us  */                                         preempt_count_add();
/*  5.261 us  */                                       }
/*            */                                       __wake_up_locked() {
/*  0.833 us  */                                         __wake_up_common();
/*  5.261 us  */                                       }
/*            */                                       _raw_spin_unlock_irqrestore() {
/*  0.781 us  */                                         preempt_count_sub();
/*  5.261 us  */                                       }
/*+ 27.291 us */                                     }
/*+ 31.823 us */                                   }
/*+ 90.365 us */                                 }
/*            */                                 _raw_spin_lock() {
/*  0.833 us  */                                   preempt_count_add();
/*  5.313 us  */                                 }
/*! 119.271 us*/                               }
/*            */                               _raw_spin_unlock() {
/*  0.782 us  */                                 preempt_count_sub();
/*  5.208 us  */                               }
/*! 151.614 us*/                             }
/*! 156.302 us*/                           }
/*  1.302 us  */                           rcu_bh_qs();
/*            */                           __local_bh_enable() {
/*  1.302 us  */                             preempt_count_sub();
/*  7.761 us  */                           }
/*! 185.104 us*/                         }
/*! 190.521 us*/                       }
/*  1.510 us  */                       preempt_count_sub();
/*! 206.823 us*/                     }
/*! 212.136 us*/                   }
/*! 398.230 us*/                 }
/*! 407.917 us*/               }
/*! 475.000 us*/             }
/*            */             mmc_wait_for_req_done() {
/*            */               wait_for_completion() {
/*            */                 wait_for_common() {
/*            */                   _raw_spin_lock_irq() {
/*  1.459 us  */                     preempt_count_add();
/*  7.135 us  */                   }
/*            */                   _raw_spin_unlock_irq() {
/*  0.990 us  */                     preempt_count_sub();
/*  5.469 us  */                   }
/*+ 21.562 us */                 }
/*+ 26.927 us */               }
/*  0.834 us  */               mmc_retune_release();
/*+ 36.719 us */             }
/*! 528.438 us*/           }
/*! 534.062 us*/         }
/*            */         mmc_wait_for_cmd() {
/*  0.833 us  */           __init_waitqueue_head();
/*            */           mmc_start_request() {
/*  0.833 us  */             mmc_retune_hold();
/*            */             led_trigger_event() {
/*            */               _raw_read_lock() {
/*  1.042 us  */                 preempt_count_add();
/*  5.468 us  */               }
/*            */               led_set_brightness() {
/*            */                 gpio_led_set() {
/*            */                   gpiod_set_value() {
/*            */                     _gpiod_set_raw_value() {
/*  1.354 us  */                       pl061_set_value();
/*  5.834 us  */                     }
/*+ 10.260 us */                   }
/*+ 14.635 us */                 }
/*+ 19.063 us */               }
/*            */               _raw_read_unlock() {
/*  0.989 us  */                 preempt_count_sub();
/*  5.625 us  */               }
/*+ 41.771 us */             }
/*            */             __mmc_start_request() {
/*  1.250 us  */               mmc_retune();
/*            */               dw_mci_request() {
/*            */                 _raw_spin_lock_bh() {
/*  1.562 us  */                   __local_bh_disable_ip();
/*  7.864 us  */                 }
/*            */                 __dw_mci_start_request() {
/*            */                   dw_mci_prepare_command() {
/*  1.250 us  */                     dw_mci_hi6220_prepare_command();
/*  7.865 us  */                   }
/*            */                   dw_mci_start_command() {
/*  1.302 us  */                     dw_mci_wait_while_busy.isra.17();
/*  8.125 us  */                   }
/*  ==========>*/
/*            */                   gic_handle_irq() {
/*            */                     __handle_domain_irq() {
/*            */                       irq_enter() {
/*  0.937 us  */                         rcu_irq_enter();
/*  0.885 us  */                         preempt_count_add();
/*  9.896 us  */                       }
/*  0.833 us  */                       irq_find_mapping();
/*            */                       generic_handle_irq() {
/*            */                         handle_fasteoi_irq() {
/*            */                           _raw_spin_lock() {
/*  0.781 us  */                             preempt_count_add();
/*  7.760 us  */                           }
/*            */                           handle_irq_event() {
/*            */                             _raw_spin_unlock() {
/*  0.834 us  */                               preempt_count_sub();
/*  5.260 us  */                             }
/*            */                             handle_irq_event_percpu() {
/*            */                               dw_mci_interrupt() {
/*            */                                 __tasklet_schedule() {
/*  0.833 us  */                                   __raise_softirq_irqoff();
/*  5.417 us  */                                 }
/*+ 10.625 us */                               }
/*  0.990 us  */                               add_interrupt_randomness();
/*  0.885 us  */                               note_interrupt();
/*+ 24.219 us */                             }
/*            */                             _raw_spin_lock() {
/*  0.781 us  */                               preempt_count_add();
/*  5.417 us  */                             }
/*+ 46.667 us */                           }
/*  0.833 us  */                           gic_eoimode1_eoi_irq();
/*            */                           _raw_spin_unlock() {
/*  1.355 us  */                             preempt_count_sub();
/*  7.604 us  */                           }
/*+ 80.468 us */                         }
/*+ 85.885 us */                       }
/*            */                       irq_exit() {
/*  1.250 us  */                         preempt_count_sub();
/*  1.302 us  */                         idle_cpu();
/*  1.407 us  */                         rcu_irq_exit();
/*+ 20.365 us */                       }
/*! 135.729 us*/                     }
/*! 142.188 us*/                   }
/*  <==========*/
/*! 174.688 us*/                 }
/*            */                 _raw_spin_unlock_bh() {
/*            */                   __local_bh_enable_ip() {
/*  1.302 us  */                     preempt_count_sub();
/*            */                     do_softirq() {
/*            */                       __do_softirq() {
/*  0.885 us  */                         __local_bh_disable_ip();
/*            */                         tasklet_action() {
/*            */                           dw_mci_tasklet_func() {
/*            */                             _raw_spin_lock() {
/*  0.833 us  */                               preempt_count_add();
/*  5.261 us  */                             }
/*  1.042 us  */                             dw_mci_command_complete();
/*            */                             dw_mci_request_end() {
/*            */                               _raw_spin_unlock() {
/*  0.781 us  */                                 preempt_count_sub();
/*  5.261 us  */                               }
/*            */                               mmc_request_done() {
/*            */                                 led_trigger_event() {
/*            */                                   _raw_read_lock() {
/*  0.834 us  */                                     preempt_count_add();
/*  5.208 us  */                                   }
/*            */                                   led_set_brightness() {
/*            */                                     gpio_led_set() {
/*            */                                       gpiod_set_value() {
/*            */                                         _gpiod_set_raw_value() {
/*  1.355 us  */                                           pl061_set_value();
/*  5.781 us  */                                         }
/*+ 10.156 us */                                       }
/*+ 14.532 us */                                     }
/*+ 18.854 us */                                   }
/*            */                                   _raw_read_unlock() {
/*  0.782 us  */                                     preempt_count_sub();
/*  5.208 us  */                                   }
/*+ 40.938 us */                                 }
/*            */                                 mmc_wait_done() {
/*            */                                   complete() {
/*            */                                     _raw_spin_lock_irqsave() {
/*  1.303 us  */                                       preempt_count_add();
/*  7.656 us  */                                     }
/*            */                                     __wake_up_locked() {
/*  1.302 us  */                                       __wake_up_common();
/*  7.552 us  */                                     }
/*            */                                     _raw_spin_unlock_irqrestore() {
/*  1.302 us  */                                       preempt_count_sub();
/*  7.709 us  */                                     }
/*+ 39.010 us */                                   }
/*+ 45.416 us */                                 }
/*+ 96.042 us */                               }
/*            */                               _raw_spin_lock() {
/*  1.302 us  */                                 preempt_count_add();
/*  7.344 us  */                               }
/*! 124.583 us*/                             }
/*            */                             _raw_spin_unlock() {
/*  0.834 us  */                               preempt_count_sub();
/*  5.260 us  */                             }
/*! 151.093 us*/                           }
/*! 155.781 us*/                         }
/*  0.834 us  */                         rcu_bh_qs();
/*            */                         __local_bh_enable() {
/*  0.834 us  */                           preempt_count_sub();
/*  5.312 us  */                         }
/*! 178.282 us*/                       }
/*! 182.708 us*/                     }
/*  1.041 us  */                     preempt_count_sub();
/*! 198.229 us*/                   }
/*! 203.594 us*/                 }
/*! 401.511 us*/               }
/*! 413.229 us*/             }
/*! 468.906 us*/           }
/*            */           mmc_wait_for_req_done() {
/*            */             wait_for_completion() {
/*            */               wait_for_common() {
/*            */                 _raw_spin_lock_irq() {
/*  1.041 us  */                   preempt_count_add();
/*  5.573 us  */                 }
/*            */                 _raw_spin_unlock_irq() {
/*  0.990 us  */                   preempt_count_sub();
/*  5.416 us  */                 }
/*+ 18.959 us */               }
/*+ 23.333 us */             }
/*  0.833 us  */             mmc_retune_release();
/*+ 32.188 us */           }
/*! 513.750 us*/         }
/*            */         msleep() {
/*  1.562 us  */           __msecs_to_jiffies();
/*            */           schedule_timeout() {
/*  1.562 us  */             init_timer_key();
/*            */             lock_timer_base.isra.34() {
/*            */               _raw_spin_lock_irqsave() {
/*  1.459 us  */                 preempt_count_add();
/*  8.177 us  */               }
/*+ 15.000 us */             }
/*  1.563 us  */             detach_if_pending();
/*  1.562 us  */             get_nohz_timer_target();
/*            */             internal_add_timer() {
/*  1.563 us  */               __internal_add_timer();
/*  0.990 us  */               wake_up_nohz_cpu();
/*+ 12.708 us */             }
/*            */             _raw_spin_unlock_irqrestore() {
/*  1.042 us  */               preempt_count_sub();
/*  5.521 us  */             }
/*            */             schedule() {
/*  0.938 us  */               preempt_count_add();
/*            */               rcu_note_context_switch() {
/*  0.833 us  */                 rcu_sched_qs();
/*  0.886 us  */                 rcu_preempt_qs();
/*  9.896 us  */               }
/*            */               _raw_spin_lock_irq() {
/*  0.781 us  */                 preempt_count_add();
/*  5.313 us  */               }
/*            */               deactivate_task() {
/*  1.615 us  */                 update_rq_clock.part.83();
/*            */                 dequeue_task_fair() {
/*            */                   update_curr() {
/*            */                     cpuacct_charge() {
/*  0.833 us  */                       __rcu_read_lock();
/*  0.834 us  */                       __rcu_read_unlock();
/*+ 12.135 us */                     }
/*+ 17.708 us */                   }
/*  1.042 us  */                   __compute_runnable_contrib();
/*  1.250 us  */                   __compute_runnable_contrib();
/*  1.354 us  */                   clear_buddies();
/*            */                   update_cfs_shares() {
/*            */                     update_curr() {
/*  1.875 us  */                       __calc_delta();
/*  9.271 us  */                     }
/*+ 16.250 us */                   }
/*  1.302 us  */                   update_curr();
/*  1.250 us  */                   __compute_runnable_contrib();
/*  1.303 us  */                   __compute_runnable_contrib();
/*  1.302 us  */                   clear_buddies();
/*  1.146 us  */                   update_cfs_shares();
/*  0.833 us  */                   hrtick_update();
/*! 102.656 us*/                 }
/*! 113.438 us*/               }
/*            */               pick_next_task_fair() {
/*  0.834 us  */                 __rcu_read_lock();
/*  0.834 us  */                 __msecs_to_jiffies();
/*  0.833 us  */                 __rcu_read_unlock();
/*+ 14.740 us */               }
/*            */               pick_next_task_idle() {
/*            */                 put_prev_task_fair() {
/*  0.833 us  */                   put_prev_entity();
/*  0.833 us  */                   put_prev_entity();
/*  10.000 us */                 }
/*+ 14.791 us */               }
/*            */               __switch_to() {
/*  0.885 us  */                 fpsimd_thread_switch();
/*  0.834 us  */                 hw_breakpoint_thread_switch();
/** 16771.40 us*/                }
/*            */               finish_task_switch() {
/*            */                 _raw_spin_unlock_irq() {
/*  0.834 us  */                   preempt_count_sub();
/*  5.625 us  */                 }
/*+ 11.459 us */               }
/*  1.042 us  */               preempt_count_sub();
/** 16991.35 us*/              }
/*            */             del_timer_sync() {
/*            */               lock_timer_base.isra.34() {
/*            */                 _raw_spin_lock_irqsave() {
/*  1.615 us  */                   preempt_count_add();
/*  6.771 us  */                 }
/*+ 12.343 us */               }
/*  1.250 us  */               detach_if_pending();
/*            */               _raw_spin_unlock_irqrestore() {
/*  1.510 us  */                 preempt_count_sub();
/*  7.760 us  */               }
/*+ 37.448 us */             }
/** 17106.77 us*/            }
/** 17120.52 us*/          }
/*  1.562 us  */         mmc_retune_release();
/*            */         mmc_power_off() {
/*  1.458 us  */           mmc_pwrseq_power_off();
/*            */           mmc_retune_disable() {
/*            */             del_timer_sync() {
/*            */               lock_timer_base.isra.34() {
/*            */                 _raw_spin_lock_irqsave() {
/*  1.042 us  */                   preempt_count_add();
/*  5.729 us  */                 }
/*+ 11.146 us */               }
/*  0.833 us  */               detach_if_pending();
/*            */               _raw_spin_unlock_irqrestore() {
/*  0.990 us  */                 preempt_count_sub();
/*  5.468 us  */               }
/*+ 29.948 us */             }
/*+ 35.312 us */           }
/*            */           dw_mci_set_ios() {
/*            */             dw_mci_hi6220_set_ios() {
/*            */               clk_set_rate() {
/*            */                 clk_prepare_lock() {
/*  1.406 us  */                   mutex_trylock();
/*  6.354 us  */                 }
/*            */                 clk_core_set_rate_nolock() {
/*            */                   clk_calc_new_rates() {
/*            */                     clk_calc_new_rates() {
/*            */                       __clk_mux_determine_rate() {
/*            */                         clk_mux_determine_rate_flags.isra.23() {
/*            */                           clk_core_round_rate_nolock() {
/*            */                             clk_factor_round_rate() {
/*  1.042 us  */                               clk_hw_get_flags();
/*  9.115 us  */                             }
/*+ 14.218 us */                           }
/*            */                           clk_core_round_rate_nolock() {
/*            */                             hi6220_clkdiv_round_rate() {
/*            */                               divider_round_rate() {
/*            */                                 clk_divider_bestdiv() {
/*  2.188 us  */                                   _get_maxdiv();
/*  1.302 us  */                                   clk_hw_get_flags();
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.511 us  */                                       clk_core_round_rate_nolock();
/*  8.125 us  */                                     }
/*+ 15.053 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  6.198 us  */                                     }
/*+ 11.615 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.313 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.635 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.740 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.250 us  */                                       clk_core_round_rate_nolock();
/*  7.291 us  */                                     }
/*+ 12.656 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.855 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.802 us */                                   }
/*  1.094 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.584 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.781 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*+ 11.979 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.635 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.209 us  */                                     }
/*  9.896 us  */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.250 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.906 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.553 us  */                                     }
/*+ 13.802 us */                                   }
/*  1.354 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*+ 10.625 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.782 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.635 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.636 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.781 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.687 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.584 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.250 us  */                                       clk_core_round_rate_nolock();
/*  7.605 us  */                                     }
/*+ 13.906 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.354 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.750 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.605 us  */                                     }
/*+ 13.802 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.584 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.782 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.583 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.584 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.688 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.094 us  */                                       clk_core_round_rate_nolock();
/*  6.406 us  */                                     }
/*+ 11.719 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.657 us  */                                     }
/*+ 13.802 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.656 us  */                                     }
/*+ 13.906 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.636 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.313 us  */                                     }
/*  9.739 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.635 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.584 us  */                                   }
/*  1.303 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.605 us  */                                     }
/*+ 13.854 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.708 us  */                                     }
/*+ 13.958 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.625 us  */                                     }
/*+ 10.937 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.312 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.313 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.781 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.854 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.604 us  */                                     }
/*+ 13.906 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.604 us  */                                     }
/*+ 13.854 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.739 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.782 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.687 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  7.500 us  */                                     }
/*+ 11.979 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.187 us  */                                     }
/*+ 12.500 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.604 us  */                                     }
/*+ 13.802 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.656 us  */                                     }
/*+ 13.958 us */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.261 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.886 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.635 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.834 us  */                                       clk_core_round_rate_nolock();
/*  5.260 us  */                                     }
/*  9.688 us  */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.792 us  */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.656 us  */                                     }
/*+ 13.854 us */                                   }
/*  1.302 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  1.302 us  */                                       clk_core_round_rate_nolock();
/*  7.552 us  */                                     }
/*+ 13.802 us */                                   }
/*  1.250 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.312 us  */                                     }
/*+ 10.469 us */                                   }
/*  0.834 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.313 us  */                                     }
/*  9.740 us  */                                   }
/*  0.833 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.208 us  */                                     }
/*  9.584 us  */                                   }
/*  0.781 us  */                                   clk_hw_get_parent();
/*            */                                   clk_hw_round_rate() {
/*            */                                     clk_core_round_rate_nolock() {
/*  0.833 us  */                                       clk_core_round_rate_nolock();
/*  5.209 us  */                                     }
/*  9.636 us  */                                   }
/*# 1345.938 us*/                                  }
/*# 1351.979 us*/                                }
/*# 1357.761 us*/                              }
/*# 1363.490 us*/                            }
/*# 1387.291 us*/                          }
/*# 1391.875 us*/                        }
/*            */                       clk_calc_new_rates() {
/*            */                         hi6220_clkdiv_round_rate() {
/*            */                           divider_round_rate() {
/*            */                             clk_divider_bestdiv() {
/*  1.511 us  */                               _get_maxdiv();
/*  1.302 us  */                               clk_hw_get_flags();
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.303 us  */                                   clk_core_round_rate_nolock();
/*  7.656 us  */                                 }
/*+ 14.010 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.500 us  */                                 }
/*+ 13.698 us */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.636 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.261 us  */                                 }
/*  9.635 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.209 us  */                                 }
/*  9.583 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.635 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*+ 10.469 us */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.354 us  */                                   clk_core_round_rate_nolock();
/*  7.656 us  */                                 }
/*+ 13.854 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.354 us  */                                   clk_core_round_rate_nolock();
/*  7.656 us  */                                 }
/*+ 13.854 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.261 us  */                                 }
/*  9.687 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.636 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.261 us  */                                 }
/*  9.635 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.583 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.532 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.552 us  */                                 }
/*+ 13.906 us */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.354 us  */                                   clk_core_round_rate_nolock();
/*  7.657 us  */                                 }
/*+ 13.854 us */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.604 us  */                                 }
/*+ 13.489 us */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.312 us  */                                 }
/*  9.740 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.782 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.635 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.313 us  */                                 }
/*  9.688 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.635 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  6.250 us  */                                 }
/*+ 11.562 us */                               }
/*  1.303 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.250 us  */                                   clk_core_round_rate_nolock();
/*  7.604 us  */                                 }
/*+ 13.907 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.354 us  */                                   clk_core_round_rate_nolock();
/*  7.553 us  */                                 }
/*+ 13.802 us */                               }
/*  1.198 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.312 us  */                                 }
/*  9.688 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.635 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.261 us  */                                 }
/*  9.687 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.209 us  */                                 }
/*  9.636 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.583 us  */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.552 us  */                                 }
/*+ 13.854 us */                               }
/*  1.355 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.500 us  */                                 }
/*+ 13.803 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  6.042 us  */                                 }
/*+ 11.354 us */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.885 us  */                                   clk_core_round_rate_nolock();
/*  5.313 us  */                                 }
/*  9.687 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.584 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  7.500 us  */                                 }
/*+ 11.823 us */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.636 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.656 us  */                                 }
/*+ 13.854 us */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.604 us  */                                 }
/*+ 13.854 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.448 us  */                                 }
/*+ 13.594 us */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.636 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.740 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  5.261 us  */                                 }
/*  9.688 us  */                               }
/*  0.834 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.781 us  */                                   clk_core_round_rate_nolock();
/*  5.208 us  */                                 }
/*  9.584 us  */                               }
/*  0.833 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.833 us  */                                   clk_core_round_rate_nolock();
/*  6.250 us  */                                 }
/*+ 11.563 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.250 us  */                                   clk_core_round_rate_nolock();
/*  7.500 us  */                                 }
/*+ 13.802 us */                               }
/*  1.302 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  1.302 us  */                                   clk_core_round_rate_nolock();
/*  7.552 us  */                                 }
/*+ 13.802 us */                               }
/*  1.250 us  */                               clk_hw_get_parent();
/*            */                               clk_hw_round_rate() {
/*            */                                 clk_core_round_rate_nolock() {
/*  0.834 us  */                                   clk_core_round_rate_nolock();
/*  5.260 us  */                                 }
/*  9.635 us  */                               }
/*! 991.719 us*/                             }
/*! 997.292 us*/                           }
/*# 1004.531 us*/                          }
/*            */                         clk_calc_subtree() {
/*            */                           clk_calc_subtree() {
/*  0.781 us  */                             clk_calc_subtree();
/*  5.261 us  */                           }
/*  9.844 us  */                         }
/*# 1023.281 us*/                        }
/*            */                       clk_calc_subtree() {
/*  0.833 us  */                         clk_calc_subtree();
/*  5.260 us  */                       }
/*# 2434.011 us*/                      }
/*  0.833 us  */                     clk_calc_subtree();
/*# 2444.584 us*/                    }
/*            */                   clk_propagate_rate_change() {
/*            */                     clk_propagate_rate_change() {
/*  1.302 us  */                       clk_propagate_rate_change();
/*  6.093 us  */                     }
/*+ 10.781 us */                   }
/*            */                   clk_change_rate() {
/*            */                     hi6220_clkdiv_set_rate() {
/*  1.667 us  */                       divider_get_val();
/*            */                       _raw_spin_lock_irqsave() {
/*  1.458 us  */                         preempt_count_add();
/*  7.396 us  */                       }
/*            */                       _raw_spin_unlock_irqrestore() {
/*  1.406 us  */                         preempt_count_sub();
/*  7.760 us  */                       }
/*+ 31.406 us */                     }
/*            */                     hi6220_clkdiv_recalc_rate() {
/*  1.927 us  */                       divider_recalc_rate();
/*  8.750 us  */                     }
/*            */                     clk_change_rate() {
/*  1.823 us  */                       clk_change_rate();
/*  8.282 us  */                     }
/*+ 65.417 us */                   }
/*# 2534.062 us*/                  }
/*            */                 clk_prepare_unlock() {
/*  1.250 us  */                   mutex_unlock();
/*  7.344 us  */                 }
/*# 2561.094 us*/                }
/*            */               clk_get_rate() {
/*            */                 clk_prepare_lock() {
/*  0.833 us  */                   mutex_trylock();
/*  5.261 us  */                 }
/*            */                 clk_prepare_unlock() {
/*  0.833 us  */                   mutex_unlock();
/*  5.261 us  */                 }
/*+ 18.437 us */               }
/*# 2588.020 us*/              }
/*            */             dw_mci_setup_bus() {
/*            */               mci_send_cmd.isra.18.constprop.24() {
/*  1.250 us  */                 dw_mci_wait_while_busy.isra.17();
/*  6.667 us  */               }
/*+ 11.927 us */             }
/*            */             mmc_regulator_set_ocr() {
/*            */               regulator_disable() {
/*  1.042 us  */                 mutex_lock();
/*            */                 _regulator_disable() {
/*  1.250 us  */                   blocking_notifier_call_chain();
/*            */                   _regulator_do_disable() {
/*            */                     hi655x_disable() {
/*  0.833 us  */                       rdev_get_drvdata();
/*            */                       regmap_write() {
/*            */                         regmap_lock_spinlock() {
/*            */                           _raw_spin_lock_irqsave() {
/*  0.989 us  */                             preempt_count_add();
/*  6.459 us  */                           }
/*+ 11.822 us */                         }
/*            */                         _regmap_write() {
/*            */                           _regmap_bus_raw_write() {
/*  1.250 us  */                             regmap_format_8();
/*            */                             _regmap_raw_write() {
/*  1.302 us  */                               regmap_format_32_native();
/*            */                               regmap_mmio_write() {
/*  4.427 us  */                                 regmap_mmio_gather_write();
/*+ 11.146 us */                               }
/*+ 26.458 us */                             }
/*+ 39.948 us */                           }
/*+ 46.875 us */                         }
/*            */                         regmap_unlock_spinlock() {
/*            */                           _raw_spin_unlock_irqrestore() {
/*  1.042 us  */                             preempt_count_sub();
/*  7.760 us  */                           }
/*+ 13.021 us */                         }
/*+ 87.135 us */                       }
/*+ 96.614 us */                     }
/*! 102.969 us*/                   }
/*  0.885 us  */                   blocking_notifier_call_chain();
/*! 118.489 us*/                 }
/*  0.833 us  */                 mutex_unlock();
/*! 132.761 us*/               }
/*! 137.552 us*/             }
/*# 2751.927 us*/            }
/*  0.833 us  */           _cond_resched();
/*  ==========>*/
/*            */           gic_handle_irq() {
/*            */             __handle_domain_irq() {
/*            */               irq_enter() {
/*  0.938 us  */                 rcu_irq_enter();
/*  1.042 us  */                 preempt_count_add();
/*+ 10.156 us */               }
/*  1.093 us  */               irq_find_mapping();
/*            */               generic_handle_irq() {
/*            */                 handle_percpu_devid_irq() {
/*            */                   arch_timer_handler_phys() {
/*            */                     hrtimer_interrupt() {
/*            */                       _raw_spin_lock() {
/*  1.250 us  */                         preempt_count_add();
/*  7.709 us  */                       }
/*            */                       ktime_get_update_offsets_now() {
/*  1.302 us  */                         arch_counter_read();
/*  7.656 us  */                       }
/*            */                       __hrtimer_run_queues() {
/*  1.458 us  */                         __remove_hrtimer();
/*            */                         _raw_spin_unlock() {
/*  1.302 us  */                           preempt_count_sub();
/*  7.604 us  */                         }
/*            */                         tick_sched_timer() {
/*            */                           ktime_get() {
/*  0.834 us  */                             arch_counter_read();
/*  5.260 us  */                           }
/*            */                           tick_do_update_jiffies64() {
/*            */                             _raw_spin_lock() {
/*  0.782 us  */                               preempt_count_add();
/*  5.312 us  */                             }
/*            */                             do_timer() {
/*  0.885 us  */                               calc_global_load();
/*  5.260 us  */                             }
/*            */                             _raw_spin_unlock() {
/*  0.833 us  */                               preempt_count_sub();
/*  5.209 us  */                             }
/*            */                             update_wall_time() {
/*            */                               _raw_spin_lock_irqsave() {
/*  0.833 us  */                                 preempt_count_add();
/*  5.365 us  */                               }
/*  0.834 us  */                               arch_counter_read();
/*  0.833 us  */                               ntp_tick_length();
/*  0.833 us  */                               ntp_tick_length();
/*  0.833 us  */                               ntp_tick_length();
/*            */                               timekeeping_update() {
/*  0.781 us  */                                 ntp_get_next_leap();
/*  0.938 us  */                                 update_vsyscall();
/*  0.834 us  */                                 raw_notifier_call_chain();
/*  0.833 us  */                                 update_fast_timekeeper();
/*+ 19.480 us */                               }
/*            */                               _raw_spin_unlock_irqrestore() {
/*  1.250 us  */                                 preempt_count_sub();
/*  7.656 us  */                               }
/*+ 65.052 us */                             }
/*+ 97.135 us */                           }
/*            */                           update_process_times() {
/*            */                             account_process_tick() {
/*            */                               account_system_time() {
/*            */                                 cpuacct_account_field() {
/*  1.250 us  */                                   __rcu_read_lock();
/*  1.302 us  */                                   __rcu_read_unlock();
/*+ 15.990 us */                                 }
/*            */                                 acct_account_cputime() {
/*            */                                   __acct_update_integrals() {
/*  1.093 us  */                                     jiffies_to_timeval();
/*  6.823 us  */                                   }
/*+ 12.448 us */                                 }
/*+ 43.334 us */                               }
/*+ 48.750 us */                             }
/*  0.885 us  */                             hrtimer_run_queues();
/*            */                             raise_softirq() {
/*  0.885 us  */                               __raise_softirq_irqoff();
/*  5.417 us  */                             }
/*            */                             rcu_check_callbacks() {
/*  0.833 us  */                               rcu_bh_qs();
/*  0.833 us  */                               rcu_preempt_qs();
/*  0.833 us  */                               cpu_needs_another_gp();
/*  0.885 us  */                               cpu_needs_another_gp();
/*  0.833 us  */                               cpu_needs_another_gp();
/*+ 24.011 us */                             }
/*            */                             scheduler_tick() {
/*            */                               _raw_spin_lock() {
/*  0.834 us  */                                 preempt_count_add();
/*  5.208 us  */                               }
/*  1.458 us  */                               update_rq_clock.part.83();
/*            */                               task_tick_fair() {
/*            */                                 update_curr() {
/*            */                                   cpuacct_charge() {
/*  0.782 us  */                                     __rcu_read_lock();
/*  1.302 us  */                                     __rcu_read_unlock();
/*+ 12.448 us */                                   }
/*+ 18.542 us */                                 }
/*  1.302 us  */                                 __compute_runnable_contrib();
/*  1.250 us  */                                 __compute_runnable_contrib();
/*            */                                 update_cfs_shares() {
/*            */                                   update_curr() {
/*  1.823 us  */                                     __calc_delta();
/*  8.385 us  */                                   }
/*+ 14.792 us */                                 }
/*  1.615 us  */                                 hrtimer_active();
/*  1.354 us  */                                 update_curr();
/*  1.250 us  */                                 __compute_runnable_contrib();
/*  0.833 us  */                                 __compute_runnable_contrib();
/*  0.833 us  */                                 update_cfs_shares();
/*  0.833 us  */                                 hrtimer_active();
/*+ 93.021 us */                               }
/*            */                               update_cpu_load_active() {
/*            */                                 __update_cpu_load() {
/*  0.833 us  */                                   sched_avg_update();
/*  5.416 us  */                                 }
/*  9.896 us  */                               }
/*  0.834 us  */                               calc_global_load_tick();
/*            */                               _raw_spin_unlock() {
/*  0.834 us  */                                 preempt_count_sub();
/*  5.313 us  */                               }
/*            */                               trigger_load_balance() {
/*  0.833 us  */                                 __rcu_read_lock();
/*  0.833 us  */                                 __rcu_read_unlock();
/*  0.782 us  */                                 __rcu_read_lock();
/*  0.833 us  */                                 __rcu_read_unlock();
/*+ 19.896 us */                               }
/*! 162.031 us*/                             }
/*  1.042 us  */                             run_posix_cpu_timers();
/*! 266.042 us*/                           }
/*  0.937 us  */                           profile_tick();
/*  0.886 us  */                           hrtimer_forward();
/*! 391.146 us*/                         }
/*            */                         _raw_spin_lock() {
/*  1.198 us  */                           preempt_count_add();
/*  7.500 us  */                         }
/*  1.458 us  */                         enqueue_hrtimer();
/*! 438.333 us*/                       }
/*  1.354 us  */                       __hrtimer_get_next_event();
/*            */                       _raw_spin_unlock() {
/*  1.303 us  */                         preempt_count_sub();
/*  7.552 us  */                       }
/*            */                       tick_program_event() {
/*            */                         clockevents_program_event() {
/*            */                           ktime_get() {
/*  1.302 us  */                             arch_counter_read();
/*  7.604 us  */                           }
/*  0.833 us  */                           arch_timer_set_next_event_phys();
/*+ 18.855 us */                         }
/*+ 24.219 us */                       }
/*! 517.708 us*/                     }
/*! 523.438 us*/                   }
/*  0.886 us  */                   gic_eoimode1_eoi_irq();
/*! 534.166 us*/                 }
/*! 540.417 us*/               }
/*            */               irq_exit() {
/*  1.146 us  */                 preempt_count_sub();
/*            */                 __do_softirq() {
/*  1.302 us  */                   __local_bh_disable_ip();
/*            */                   run_timer_softirq() {
/*            */                     _raw_spin_lock_irq() {
/*  0.781 us  */                       preempt_count_add();
/*  5.261 us  */                     }
/*            */                     _raw_spin_unlock_irq() {
/*  0.782 us  */                       preempt_count_sub();
/*  5.364 us  */                     }
/*+ 18.958 us */                   }
/*  0.885 us  */                   rcu_bh_qs();
/*            */                   __local_bh_enable() {
/*  0.990 us  */                     preempt_count_sub();
/*  5.469 us  */                   }
/*+ 42.760 us */                 }
/*  0.834 us  */                 idle_cpu();
/*  0.938 us  */                 rcu_irq_exit();
/*+ 60.989 us */               }
/*! 628.750 us*/             }
/*! 633.854 us*/           }
/*  <==========*/
/*# 4079.166 us*/          }
/*            */         mmc_release_host() {
/*            */           _raw_spin_lock_irqsave() {
/*  1.510 us  */             preempt_count_add();
/*  7.708 us  */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  1.406 us  */             preempt_count_sub();
/*  7.865 us  */           }
/*            */           __wake_up() {
/*            */             _raw_spin_lock_irqsave() {
/*  1.406 us  */               preempt_count_add();
/*  7.968 us  */             }
/*  1.562 us  */             __wake_up_common();
/*            */             _raw_spin_unlock_irqrestore() {
/*  1.250 us  */               preempt_count_sub();
/*  6.823 us  */             }
/*+ 31.927 us */           }
/*  1.093 us  */           __pm_runtime_suspend();
/*+ 68.229 us */         }
/** 24960.05 us*/        } /* _mmc_suspend */
/*            */       __pm_runtime_disable() {
/*            */         _raw_spin_lock_irq() {
/*  0.990 us  */           preempt_count_add();
/*  5.677 us  */         }
/*  1.145 us  */         __pm_runtime_barrier();
/*            */         _raw_spin_unlock_irq() {
/*  0.989 us  */           preempt_count_sub();
/*  5.469 us  */         }
/*+ 24.583 us */       }
/*            */       __pm_runtime_set_status() {
/*            */         _raw_spin_lock_irqsave() {
/*  0.990 us  */           preempt_count_add();
/*  5.521 us  */         }
/*            */         _raw_spin_unlock_irqrestore() {
/*  0.937 us  */           preempt_count_sub();
/*  7.760 us  */         }
/*            */         __pm_runtime_idle() {
/*            */           _raw_spin_lock_irqsave() {
/*  0.990 us  */             preempt_count_add();
/*  5.416 us  */           }
/*            */           rpm_idle() {
/*  1.302 us  */             rpm_check_suspend_allowed();
/*  7.239 us  */           }
/*            */           _raw_spin_unlock_irqrestore() {
/*  1.459 us  */             preempt_count_sub();
/*  7.865 us  */           }
/*+ 34.844 us */         }
/*+ 62.500 us */       }
/** 25060.78 us*/      } /* mmc_suspend */
/** 25378.28 us*/    } /* mmc_bus_suspend */
/*  1.563 us  */   dev_driver_string();
/*  1.302 us  */   dev_driver_string();
/*            */ /* device_pm_callback_end: mmcblk mmc0:0001, err=0 */