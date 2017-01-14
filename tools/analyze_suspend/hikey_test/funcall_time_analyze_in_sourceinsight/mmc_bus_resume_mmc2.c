/*              */  /* device_pm_callback_start: mmc mmc2:0001, parent: mmc2, bus [resume] */
/*              */    mmc_bus_resume() {

/*              */      mmc_sdio_resume() {

/*              */        __mmc_claim_host() {
/*              */          add_wait_queue() {

/*              */            _raw_spin_lock_irqsave() {

/*   0.989 us   */              preempt_count_add();

/*   5.573 us   */            }

/*              */            _raw_spin_unlock_irqrestore() {

/*   0.989 us   */              preempt_count_sub();

/*   5.521 us   */            }


/* + 19.687 us  */          }
/*              */          _raw_spin_lock_irqsave() {

/*   0.990 us   */            preempt_count_add();

/*   5.990 us   */          }
/*              */          _raw_spin_unlock_irqrestore() {

/*   0.938 us   */            preempt_count_sub();

/*   5.573 us   */          }
/*              */          remove_wait_queue() {

/*              */            _raw_spin_lock_irqsave() {

/*   1.042 us   */              preempt_count_add();
/*   5.677 us   */            }
/*              */            _raw_spin_unlock_irqrestore() {


/*   0.937 us   */              preempt_count_sub();


/*   5.989 us   */            }
/* + 20.521 us  */          }
/*              */          __pm_runtime_resume() {


/*              */            _raw_spin_lock_irqsave() {

/*   1.354 us   */              preempt_count_add();

/*   7.761 us   */            }
/*   2.136 us   */            rpm_resume();



/*              */            _raw_spin_unlock_irqrestore() {

/*   1.458 us   */              preempt_count_sub();

/*   8.125 us   */            }

/* + 35.729 us  */          }

/* ! 110.157 us */        }
/*              */        mmc_power_up() {

/*              */          mmc_power_up.part.15() {

/*   1.666 us   */            mmc_pwrseq_pre_power_on();

/*              */            mmc_set_initial_state() {

/*              */              mmc_retune_disable() {

/*              */                del_timer_sync() {

/*              */                  lock_timer_base.isra.34() {

/*              */                    _raw_spin_lock_irqsave() {

/*   0.990 us   */                      preempt_count_add();

/*   5.833 us   */                    }

/* + 10.573 us  */                  }
/*   0.990 us   */                  detach_if_pending();


/*              */                  _raw_spin_unlock_irqrestore() {
/*   0.938 us   */                    preempt_count_sub();


/*   5.782 us   */                  }

/* + 29.792 us  */                }

/* + 34.323 us  */              }
/*              */              dw_mci_set_ios() {


/*              */                dw_mci_hi6220_set_ios() {
/*              */                  clk_set_rate() {

/*              */                    clk_prepare_lock() {
/*   0.834 us   */                      mutex_trylock();


/*   5.520 us   */                    }

/*              */                    clk_core_set_rate_nolock() {
/*              */                      clk_calc_new_rates() {

/*              */                        clk_calc_new_rates() {

/*              */                          __clk_mux_determine_rate() {
/*              */                            clk_mux_determine_rate_flags.isra.23() {


/*              */                              clk_core_round_rate_nolock() {


/*              */                                clk_factor_round_rate() {

/*   0.938 us   */                                  clk_hw_get_flags();

/*   5.729 us   */                                }

/* + 11.355 us  */                              }
/*              */                              clk_core_round_rate_nolock() {

/*              */                                hi6220_clkdiv_round_rate() {

/*              */                                  divider_round_rate() {
/*              */                                    clk_divider_bestdiv() {


/*   2.188 us   */                                      _get_maxdiv();

/*   1.354 us   */                                      clk_hw_get_flags();


/*   1.406 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   1.406 us   */                                          clk_core_round_rate_nolock();


/*   9.271 us   */                                        }

/* + 16.198 us  */                                      }

/*   1.354 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();


/*   5.573 us   */                                        }


/* + 12.188 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.416 us   */                                        }

/*   9.844 us   */                                      }

/*   1.041 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {


/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.521 us   */                                        }

/* + 10.052 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();



/*   5.677 us   */                                        }
/* + 10.312 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.573 us   */                                        }
/* + 11.406 us  */                                      }
/*   1.406 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   1.406 us   */                                          clk_core_round_rate_nolock();


/*   8.230 us   */                                        }

/* + 14.479 us  */                                      }
/*   1.823 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   1.406 us   */                                          clk_core_round_rate_nolock();

/*   7.917 us   */                                        }

/* + 14.583 us  */                                      }

/*   1.354 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {


/*              */                                        clk_core_round_rate_nolock() {

/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }

/*   9.531 us   */                                      }

/*   0.834 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.261 us   */                                        }

/*   9.843 us   */                                      }
/*   0.781 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.209 us   */                                        }
/*   9.687 us   */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {


/*   1.042 us   */                                          clk_core_round_rate_nolock();

/*   5.833 us   */                                        }

/* + 10.312 us  */                                      }

/*   1.041 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();


/*   5.260 us   */                                        }

/*   9.636 us   */                                      }
/*   1.459 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.406 us   */                                          clk_core_round_rate_nolock();


/*   8.021 us   */                                        }
/* + 14.479 us  */                                      }

/*   1.510 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/* + 10.730 us  */                                        }
/* + 17.084 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.687 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.636 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.583 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.312 us   */                                        }
/*   9.740 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.573 us   */                                        }
/*   9.948 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.844 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.364 us   */                                        }
/*   9.844 us   */                                      }
/*   0.885 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.583 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.312 us   */                                        }
/*   9.896 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.416 us   */                                        }
/*   9.792 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.635 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
 ------------------------------------------

 ------------------------------------------



/*   5.208 us   */                                        }
/*   9.792 us   */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.834 us   */                                          clk_core_round_rate_nolock();

/*   5.625 us   */                                        }

/* + 10.209 us  */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();



/*   5.521 us   */                                        }
/* + 10.521 us  */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();



/*   5.365 us   */                                        }

/*   10.000 us  */                                      }
/*   0.886 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.990 us   */                                          clk_core_round_rate_nolock();


/*   5.417 us   */                                        }

/*   9.896 us   */                                      }

/*   0.781 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   1.041 us   */                                          clk_core_round_rate_nolock();


/*   5.833 us   */                                        }

/* + 10.261 us  */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   1.667 us   */                                          clk_core_round_rate_nolock();


/*   8.073 us   */                                        }

/* + 14.375 us  */                                      }
/*   1.667 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   1.666 us   */                                          clk_core_round_rate_nolock();



/*   8.750 us   */                                        }
/* + 15.313 us  */                                      }
/*   1.354 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   1.406 us   */                                          clk_core_round_rate_nolock();


/*   7.760 us   */                                        }

/* + 14.062 us  */                                      }
/*   1.458 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();


/*   5.573 us   */                                        }

/* + 10.729 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.782 us   */                                          clk_core_round_rate_nolock();

/*   5.260 us   */                                        }

/*   9.896 us   */                                      }

/*   0.938 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.313 us   */                                        }
/*   9.896 us   */                                      }

/*   0.834 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.782 us   */                                          clk_core_round_rate_nolock();


/*   5.208 us   */                                        }

/*   9.583 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.781 us   */                                          clk_core_round_rate_nolock();

/*   5.209 us   */                                        }

/*   9.688 us   */                                      }

/*   1.927 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   1.406 us   */                                          clk_core_round_rate_nolock();

/*   7.760 us   */                                        }


/* + 14.531 us  */                                      }
/*   1.718 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*              */                                          clk_core_round_rate_nolock() {


/*   ==========>*/
/*              */                                            gic_handle_irq() {

/*              */                                              __handle_domain_irq() {
/*              */                                                irq_enter() {

/*   1.406 us   */                                                  rcu_irq_enter();

/*   0.834 us   */                                                  preempt_count_add();


/* + 12.605 us  */                                                }

/*   1.094 us   */                                                irq_find_mapping();


/*              */                                                generic_handle_irq() {
/*              */                                                  handle_percpu_devid_irq() {

/*              */                                                    arch_timer_handler_phys() {

/*              */                                                      hrtimer_interrupt() {
/*              */                                                        _raw_spin_lock() {

/*   1.094 us   */                                                          preempt_count_add();

/*   6.198 us   */                                                        }
/*              */                                                        ktime_get_update_offsets_now() {


/*   0.885 us   */                                                          arch_counter_read();

/*   5.521 us   */                                                        }

/*              */                                                        __hrtimer_run_queues() {

/*   0.989 us   */                                                          __remove_hrtimer();

/*              */                                                          _raw_spin_unlock() {

/*   0.833 us   */                                                            preempt_count_sub();

/*   5.261 us   */                                                          }

/*              */                                                          tick_sched_timer() {

/*              */                                                            ktime_get() {
/*   0.833 us   */                                                              arch_counter_read();

/*   5.416 us   */                                                            }
/*              */                                                            tick_do_update_jiffies64() {
/*              */                                                              _raw_spin_lock() {

/*   0.833 us   */                                                                preempt_count_add();

/*   5.313 us   */                                                              }
/*              */                                                              do_timer() {

/*   1.407 us   */                                                                calc_global_load();


/*   7.656 us   */                                                              }

/*              */                                                              _raw_spin_unlock() {
/*   1.459 us   */                                                                preempt_count_sub();


/*   8.021 us   */                                                              }

/*              */                                                              update_wall_time() {

/*              */                                                                _raw_spin_lock_irqsave() {

/*   1.406 us   */                                                                  preempt_count_add();

/*   8.281 us   */                                                                }
/*   1.406 us   */                                                                arch_counter_read();


/*   1.354 us   */                                                                ntp_tick_length();


/*   1.511 us   */                                                                ntp_tick_length();

/*   1.406 us   */                                                                ntp_tick_length();


/*              */                                                                timekeeping_update() {
/*   1.042 us   */                                                                  ntp_get_next_leap();


/*   0.938 us   */                                                                  update_vsyscall();

/*   0.885 us   */                                                                  raw_notifier_call_chain();


/*   0.886 us   */                                                                  update_fast_timekeeper();


/* + 20.000 us  */                                                                }

/*              */                                                                _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                                                                  preempt_count_sub();


/*   5.573 us   */                                                                }


/* + 76.198 us  */                                                              }

/* ! 116.562 us */                                                            }

/*              */                                                            update_process_times() {

/*              */                                                              account_process_tick() {
/*              */                                                                account_system_time() {

/*              */                                                                  cpuacct_account_field() {
/*   0.834 us   */                                                                    __rcu_read_lock();


/*   0.834 us   */                                                                    __rcu_read_unlock();

/* + 10.468 us  */                                                                  }

/*              */                                                                  acct_account_cputime() {

/*              */                                                                    __acct_update_integrals() {

/*   0.834 us   */                                                                      jiffies_to_timeval();


/*   5.729 us   */                                                                    }
/* + 10.260 us  */                                                                  }


/* + 29.427 us  */                                                                }

/* + 36.614 us  */                                                              }
/*   0.937 us   */                                                              hrtimer_run_queues();


/*              */                                                              raise_softirq() {

/*   1.406 us   */                                                                __raise_softirq_irqoff();

/*   8.177 us   */                                                              }

/*              */                                                              rcu_check_callbacks() {
/*   1.458 us   */                                                                rcu_bh_qs();


/*   1.562 us   */                                                                rcu_preempt_qs();


/*   1.354 us   */                                                                cpu_needs_another_gp();
/*   1.771 us   */                                                                cpu_needs_another_gp();



/*   1.354 us   */                                                                cpu_needs_another_gp();


/* + 36.407 us  */                                                              }

/*              */                                                              scheduler_tick() {
/*              */                                                                _raw_spin_lock() {

/*   1.355 us   */                                                                  preempt_count_add();

/*   7.240 us   */                                                                }

/*   1.459 us   */                                                                update_rq_clock.part.83();

/*              */                                                                task_tick_fair() {

/*              */                                                                  update_curr() {

/*              */                                                                    cpuacct_charge() {

/*   1.094 us   */                                                                      __rcu_read_lock();

/*   0.833 us   */                                                                      __rcu_read_unlock();


/* + 10.260 us  */                                                                    }
/* + 14.844 us  */                                                                  }

/*   0.833 us   */                                                                  __compute_runnable_contrib();


/*   0.834 us   */                                                                  __compute_runnable_contrib();

/*              */                                                                  update_cfs_shares() {
/*   0.885 us   */                                                                    update_curr();

/*   5.781 us   */                                                                  }
/*   1.146 us   */                                                                  hrtimer_active();


/*   0.833 us   */                                                                  update_curr();

/*   0.886 us   */                                                                  __compute_runnable_contrib();


/*   0.833 us   */                                                                  __compute_runnable_contrib();


/*   0.833 us   */                                                                  update_cfs_shares();


/*   0.833 us   */                                                                  hrtimer_active();

/* + 67.500 us  */                                                                }

/*              */                                                                update_cpu_load_active() {
/*              */                                                                  __update_cpu_load() {

/*   1.562 us   */                                                                    sched_avg_update();



/*   8.125 us   */                                                                  }
/* + 14.115 us  */                                                                }
/*   1.510 us   */                                                                calc_global_load_tick();

/*              */                                                                _raw_spin_unlock() {

/*   1.407 us   */                                                                  preempt_count_sub();


/*   7.813 us   */                                                                }
/*              */                                                                trigger_load_balance() {

/*   1.406 us   */                                                                  __rcu_read_lock();

/*   1.354 us   */                                                                  __rcu_read_unlock();

/*   1.771 us   */                                                                  __rcu_read_lock();

/*   1.407 us   */                                                                  __rcu_read_unlock();


/* + 28.229 us  */                                                                }

/* ! 162.343 us */                                                              }

/*   1.145 us   */                                                              run_posix_cpu_timers();

/* ! 273.802 us */                                                            }
/*   0.938 us   */                                                            profile_tick();



/*   0.834 us   */                                                            hrtimer_forward();

/* ! 417.240 us */                                                          }

/*              */                                                          _raw_spin_lock() {
/*   0.781 us   */                                                            preempt_count_add();


/*   5.313 us   */                                                          }

/*   0.937 us   */                                                          enqueue_hrtimer();

/* ! 450.625 us */                                                        }

/*   0.885 us   */                                                        __hrtimer_get_next_event();

/*              */                                                        _raw_spin_unlock() {

/*   0.833 us   */                                                          preempt_count_sub();

/*   5.261 us   */                                                        }
/*              */                                                        tick_program_event() {

/*              */                                                          clockevents_program_event() {

/*              */                                                            ktime_get() {

/*   0.781 us   */                                                              arch_counter_read();


/*   5.313 us   */                                                            }
/*   0.834 us   */                                                            arch_timer_set_next_event_phys();


/* + 14.271 us  */                                                          }

/* + 18.750 us  */                                                        }
/* ! 513.125 us */                                                      }

/* ! 517.916 us */                                                    }

/*   0.885 us   */                                                    gic_eoimode1_eoi_irq();


/* ! 527.708 us */                                                  }

/* ! 532.864 us */                                                }

/*              */                                                irq_exit() {

/*   0.781 us   */                                                  preempt_count_sub();

/*              */                                                  __do_softirq() {

/*   0.885 us   */                                                    __local_bh_disable_ip();

/*              */                                                    run_timer_softirq() {
/*              */                                                      _raw_spin_lock_irq() {


/*   0.990 us   */                                                        preempt_count_add();

/*   5.625 us   */                                                      }

/*              */                                                      _raw_spin_unlock_irq() {

/*   0.781 us   */                                                        preempt_count_sub();

/*   5.469 us   */                                                      }

/* + 20.208 us  */                                                    }
/*   0.885 us   */                                                    rcu_bh_qs();


/*              */                                                    __local_bh_enable() {
/*   0.833 us   */                                                      preempt_count_sub();


/*   5.417 us   */                                                    }

/* + 44.531 us  */                                                  }

/*   1.406 us   */                                                  idle_cpu();

/*   0.938 us   */                                                  rcu_irq_exit();

/* + 65.156 us  */                                                }

/* ! 628.750 us */                                              }
/* ! 634.636 us */                                            }
/*   <==========*/

/*   1.719 us   */                                          }

/* ! 646.823 us */                                        }

/* ! 652.344 us */                                      }

/*   0.834 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.834 us   */                                          clk_core_round_rate_nolock();


/*   5.261 us   */                                        }
/*   9.583 us   */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.094 us   */                                          clk_core_round_rate_nolock();

/*   5.886 us   */                                        }

/* + 10.573 us  */                                      }

/*   1.094 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {


/*   0.833 us   */                                          clk_core_round_rate_nolock();


/*   5.261 us   */                                        }

/* + 10.157 us  */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();


/*   5.312 us   */                                        }
/* + 11.562 us  */                                      }

/*   1.614 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.354 us   */                                          clk_core_round_rate_nolock();


/*   8.542 us   */                                        }

/* + 16.302 us  */                                      }
/*   1.354 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.406 us   */                                          clk_core_round_rate_nolock();



/*   8.385 us   */                                        }
/* + 15.260 us  */                                      }
/*   0.937 us   */                                      clk_hw_get_parent();



/*              */                                      clk_hw_round_rate() {


/*              */                                        clk_core_round_rate_nolock() {

/*   0.834 us   */                                          clk_core_round_rate_nolock();

/*   5.364 us   */                                        }
/*   9.791 us   */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.312 us   */                                        }
/*   9.948 us   */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.469 us   */                                        }

/*   10.000 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.261 us   */                                        }
/*   9.895 us   */                                      }
/*   1.094 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();


/*   5.417 us   */                                        }

/* + 10.208 us  */                                      }
/*   0.990 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.990 us   */                                          clk_core_round_rate_nolock();



/*   5.781 us   */                                        }
/* + 10.417 us  */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.313 us   */                                        }
/*   9.739 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.417 us   */                                        }

/* + 10.781 us  */                                      }


/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();


/*   5.261 us   */                                        }
/* + 10.365 us  */                                      }

/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.573 us   */                                        }

/* + 10.156 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.313 us   */                                        }
/*   9.739 us   */                                      }

/*   0.834 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {

/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.312 us   */                                        }

/*   9.740 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {


/*   0.834 us   */                                          clk_core_round_rate_nolock();

/*   5.937 us   */                                        }

/* + 11.510 us  */                                      }

/*   1.355 us   */                                      clk_hw_get_parent();


/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.406 us   */                                          clk_core_round_rate_nolock();

/*   8.021 us   */                                        }

/* + 14.323 us  */                                      }
/*   1.459 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {

/*   1.614 us   */                                          clk_core_round_rate_nolock();

/*   8.073 us   */                                        }

/* + 14.063 us  */                                      }

/*   0.834 us   */                                      clk_hw_get_parent();

/*              */                                      clk_hw_round_rate() {

/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();

/*   5.521 us   */                                        }

/* + 10.312 us  */                                      }
/* # 1994.844 us*/                                    }

/* # 2000.625 us*/                                  }
/* # 2006.042 us*/                                }

/* # 2012.760 us*/                              }

/* # 2036.250 us*/                            }
/* # 2041.094 us*/                          }

/*              */                          clk_calc_subtree() {

/*   0.833 us   */                            clk_calc_subtree();

/*   5.990 us   */                          }


/* # 2058.959 us*/                        }
/*   0.833 us   */                        clk_calc_subtree();

/* # 2069.791 us*/                      }
/*   1.093 us   */                      clk_propagate_rate_change();


/*              */                      clk_change_rate() {



/*   1.146 us   */                        clk_change_rate();


/*   7.344 us   */                      }

/* # 2091.510 us*/                    }

/*              */                    clk_prepare_unlock() {

/*   0.833 us   */                      mutex_unlock();


/*   5.521 us   */                    }

/* # 2114.635 us*/                  }
/*              */                  clk_get_rate() {

/*              */                    clk_prepare_lock() {

/*   1.458 us   */                      mutex_trylock();

/*   8.229 us   */                    }

/*              */                    clk_prepare_unlock() {
/*   1.458 us   */                      mutex_unlock();

/*   7.864 us   */                    }

/* + 27.968 us  */                  }

/* # 2155.313 us*/                }

/*              */                mmc_regulator_set_ocr() {

/*              */                  regulator_set_voltage() {
/*   1.511 us   */                    mutex_lock();


/*   1.719 us   */                    regulator_set_voltage_unlocked();

/*   1.355 us   */                    mutex_unlock();


/* + 21.719 us  */                  }

/*              */                  regulator_enable() {

/*   0.833 us   */                    mutex_lock();

/*              */                    _regulator_enable() {

/*              */                      _regulator_do_enable() {


/*              */                        gpiod_set_value_cansleep() {
/*              */                          _gpiod_set_raw_value() {
/*   1.823 us   */                            pl061_set_value();



/*   6.510 us   */                          }
/* + 11.094 us  */                        }

/*              */                        _regulator_enable_delay() {

/*              */                          msleep() {

/*   0.834 us   */                            __msecs_to_jiffies();

/*              */                            schedule_timeout() {
/*   1.042 us   */                              init_timer_key();


/*              */                              lock_timer_base.isra.34() {

/*              */                                _raw_spin_lock_irqsave() {
/*   1.146 us   */                                  preempt_count_add();


/*   5.573 us   */                                }
/*   10.000 us  */                              }
/*   0.834 us   */                              detach_if_pending();
/*   0.886 us   */                              get_nohz_timer_target();
/*              */                              internal_add_timer() {
/*   1.042 us   */                                __internal_add_timer();
/*   0.886 us   */                                wake_up_nohz_cpu();
/* + 12.187 us  */                              }
/*              */                              _raw_spin_unlock_irqrestore() {
/*   1.093 us   */                                preempt_count_sub();
/*   5.573 us   */                              }
/*              */                              schedule() {
/*   0.990 us   */                                preempt_count_add();
/*              */                                rcu_note_context_switch() {
/*   0.781 us   */                                  rcu_sched_qs();
/*   0.833 us   */                                  rcu_preempt_qs();
/*   9.739 us   */                                }
/*              */                                _raw_spin_lock_irq() {
/*   0.833 us   */                                  preempt_count_add();
/*   5.365 us   */                                }
/*              */                                deactivate_task() {
/*   1.459 us   */                                  update_rq_clock.part.83();
/*              */                                  dequeue_task_fair() {
/*              */                                    update_curr() {
/*              */                                      cpuacct_charge() {
/*   0.834 us   */                                        __rcu_read_lock();
/*   0.834 us   */                                        __rcu_read_unlock();
/* + 10.105 us  */                                      }
/* + 15.625 us  */                                    }
/*   0.833 us   */                                    __compute_runnable_contrib();
/*   0.885 us   */                                    clear_buddies();
/*              */                                    update_cfs_shares() {
/*   0.885 us   */                                      update_curr();
/*   5.521 us   */                                    }
/*   0.833 us   */                                    update_curr();
/*   0.834 us   */                                    __compute_runnable_contrib();
/*   0.833 us   */                                    __compute_runnable_contrib();
/*   0.833 us   */                                    clear_buddies();
/*   0.833 us   */                                    update_cfs_shares();
/*   0.834 us   */                                    hrtick_update();
/* + 66.666 us  */                                  }
/* + 76.406 us  */                                }
/*              */                                pick_next_task_fair() {
/*              */                                  _raw_spin_unlock() {
/*   0.833 us   */                                    preempt_count_sub();
/*   5.261 us   */                                  }
/*              */                                  update_blocked_averages() {
/*              */                                    _raw_spin_lock_irqsave() {
/*   0.781 us   */                                      preempt_count_add();
/*   5.261 us   */                                    }
/*   1.459 us   */                                    update_rq_clock();
 ------------------------------------------

 ------------------------------------------

 4022.891267*/   1)   */   0.885 us   */  dpm_run_callback();
/*   0.834 us   */                                    __compute_runnable_contrib();
/*   0.833 us   */                                    __compute_runnable_contrib();
/*   1.302 us   */                                    __compute_runnable_contrib();
/*              */                                    _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                      preempt_count_sub();
/*   5.260 us   */                                    }
/* + 40.104 us  */                                  }
/*   0.833 us   */                                  __rcu_read_lock();
/*              */                                  load_balance() {
/*              */                                    find_busiest_group() {
/*              */                                      update_group_capacity() {
/*   0.782 us   */                                        __msecs_to_jiffies();
/*   5.312 us   */                                      }
/*   0.834 us   */                                      idle_cpu();
/*   0.833 us   */                                      idle_cpu();
/*   0.834 us   */                                      idle_cpu();
/*   0.833 us   */                                      idle_cpu();
/* + 29.219 us  */                                    }
/* + 34.375 us  */                                  }
/*   0.834 us   */                                  __msecs_to_jiffies();
/*              */                                  load_balance() {
/*              */                                    find_busiest_group() {
/*   0.885 us   */                                      idle_cpu();
/*   0.834 us   */                                      idle_cpu();
/*   0.833 us   */                                      idle_cpu();
/*   0.833 us   */                                      idle_cpu();
/*   0.886 us   */                                      idle_cpu();
/*   1.093 us   */                                      idle_cpu();
/*   0.834 us   */                                      idle_cpu();
/*   0.833 us   */                                      idle_cpu();
/* + 40.938 us  */                                    }
/* + 46.146 us  */                                  }
/*   0.833 us   */                                  __msecs_to_jiffies();
/*   0.833 us   */                                  __rcu_read_unlock();
/*              */                                  _raw_spin_lock() {
/*   0.781 us   */                                    preempt_count_add();
/*   5.208 us   */                                  }
/* ! 171.354 us */                                }
/*              */                                pick_next_task_idle() {
/*              */                                  put_prev_task_fair() {
/*   0.781 us   */                                    put_prev_entity();
/*   0.834 us   */                                    put_prev_entity();
/*   9.740 us   */                                  }
/* + 14.218 us  */                                }
/*              */                                __switch_to() {
/*   0.886 us   */                                  fpsimd_thread_switch();
/*   1.094 us   */                                  hw_breakpoint_thread_switch();
 ------------------------------------------

 ------------------------------------------


/* * 74895.99 us*/                                }
/*              */                                finish_task_switch() {
/*              */                                  _raw_spin_unlock_irq() {
/*   0.833 us   */                                    preempt_count_sub();
/*   5.573 us   */                                  }
/* + 11.146 us  */                                }
/*   1.042 us   */                                preempt_count_sub();
/* * 75231.71 us*/                              }
/*              */                              del_timer_sync() {
/*              */                                lock_timer_base.isra.34() {
/*              */                                  _raw_spin_lock_irqsave() {
/*   1.823 us   */                                    preempt_count_add();
/*   6.250 us   */                                  }
/* + 10.730 us  */                                }
/*   0.833 us   */                                detach_if_pending();
/*              */                                _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                                  preempt_count_sub();
/*   5.417 us   */                                }
/* + 29.427 us  */                              }
/* * 75322.13 us*/                            }
/* * 75331.82 us*/                          }
/*   1.406 us   */                          __udelay();
/* * 75342.03 us*/                        }
/* * 75364.32 us*/                      }
/* * 75369.89 us*/                    }
/*   1.875 us   */                    mutex_unlock();
/* * 75387.91 us*/                  }
/* * 75420.73 us*/                }
/* * 77589.79 us*/              }
/* * 77634.94 us*/            }
/*              */            dw_mci_switch_voltage() {
/*   1.562 us   */              dw_mci_hi6220_switch_voltage();
/*   8.698 us   */            }
/*              */            msleep() {
/*   1.302 us   */              __msecs_to_jiffies();
/*              */              schedule_timeout() {
/*   1.563 us   */                init_timer_key();
/*              */                lock_timer_base.isra.34() {
/*              */                  _raw_spin_lock_irqsave() {
/*   0.989 us   */                    preempt_count_add();
/*   5.573 us   */                  }
/* + 10.937 us  */                }
/*   0.834 us   */                detach_if_pending();
/*   1.042 us   */                get_nohz_timer_target();
/*              */                internal_add_timer() {
/*   0.989 us   */                  __internal_add_timer();
/*   0.885 us   */                  wake_up_nohz_cpu();
/* + 13.698 us  */                }
/*              */                _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                  preempt_count_sub();
/*   5.625 us   */                }
/*              */                schedule() {
/*   0.990 us   */                  preempt_count_add();
/*              */                  rcu_note_context_switch() {
/*   0.833 us   */                    rcu_sched_qs();
/*   0.834 us   */                    rcu_preempt_qs();
/*   9.844 us   */                  }
/*              */                  _raw_spin_lock_irq() {
/*   0.833 us   */                    preempt_count_add();
/*   5.313 us   */                  }
/*              */                  deactivate_task() {
/*   1.407 us   */                    update_rq_clock.part.83();
/*              */                    dequeue_task_fair() {
/*              */                      update_curr() {
/*              */                        cpuacct_charge() {
/*   1.302 us   */                          __rcu_read_lock();
/*   1.303 us   */                          __rcu_read_unlock();
/* + 16.667 us  */                        }
/* + 24.010 us  */                      }
/*   1.250 us   */                      clear_buddies();
/*              */                      update_cfs_shares() {
/*   1.563 us   */                        update_curr();
/*   8.281 us   */                      }
/*   1.302 us   */                      update_curr();
/*   1.563 us   */                      __compute_runnable_contrib();
/*   0.834 us   */                      __compute_runnable_contrib();
/*   0.833 us   */                      clear_buddies();
/*   0.833 us   */                      update_cfs_shares();
/*   0.834 us   */                      hrtick_update();
/* + 86.510 us  */                    }
/* + 96.770 us  */                  }
/*              */                  pick_next_task_fair() {
/*   0.834 us   */                    __rcu_read_lock();
/*   0.782 us   */                    __msecs_to_jiffies();
/*   0.834 us   */                    __rcu_read_unlock();
/* + 15.000 us  */                  }
/*              */                  pick_next_task_idle() {
/*              */                    put_prev_task_fair() {
/*   0.833 us   */                      put_prev_entity();
/*   0.833 us   */                      put_prev_entity();
/*   9.948 us   */                    }
/* + 14.687 us  */                  }
/*              */                  __switch_to() {
/*   0.834 us   */                    fpsimd_thread_switch();
/*   0.833 us   */                    hw_breakpoint_thread_switch();
/* * 15641.30 us*/                  }
/*              */                  finish_task_switch() {
/*              */                    _raw_spin_unlock_irq() {
/*   0.834 us   */                      preempt_count_sub();
/*   5.729 us   */                    }
/* + 11.094 us  */                  }
/*   1.250 us   */                  preempt_count_sub();
/* * 15842.29 us*/                }
/*              */                del_timer_sync() {
/*              */                  lock_timer_base.isra.34() {
/*              */                    _raw_spin_lock_irqsave() {
/*   1.563 us   */                      preempt_count_add();
/*   5.989 us   */                    }
/* + 10.625 us  */                  }
/*   0.834 us   */                  detach_if_pending();
/*              */                  _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/* + 29.323 us  */                }
/* * 15939.63 us*/              }
/* * 15953.43 us*/            }
/*   1.459 us   */            mmc_pwrseq_post_power_on();
/*              */            dw_mci_set_ios() {
/*              */              dw_mci_hi6220_set_ios() {
/*              */                clk_set_rate() {
/*              */                  clk_prepare_lock() {
/*   1.718 us   */                    mutex_trylock();
/*   8.958 us   */                  }
/*              */                  clk_core_set_rate_nolock() {
/*              */                    clk_calc_new_rates() {
/*              */                      clk_calc_new_rates() {
/*              */                        __clk_mux_determine_rate() {
/*              */                          clk_mux_determine_rate_flags.isra.23() {
/*              */                            clk_core_round_rate_nolock() {
/*              */                              clk_factor_round_rate() {
/*   1.042 us   */                                clk_hw_get_flags();
/*   5.678 us   */                              }
/* + 10.938 us  */                            }
/*              */                            clk_core_round_rate_nolock() {
/*              */                              hi6220_clkdiv_round_rate() {
/*              */                                divider_round_rate() {
/*              */                                  clk_divider_bestdiv() {
/*   1.615 us   */                                    _get_maxdiv();
/*   0.834 us   */                                    clk_hw_get_flags();
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.042 us   */                                        clk_core_round_rate_nolock();
/*   5.834 us   */                                      }
/* + 10.833 us  */                                    }
/*   0.781 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.729 us   */                                      }
/* + 10.990 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.303 us   */                                        clk_core_round_rate_nolock();
/*   7.709 us   */                                      }
/* + 14.010 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.803 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   10.000 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.739 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.740 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 14.114 us  */                                    }
/*   1.355 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.697 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.021 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.041 us   */                                        clk_core_round_rate_nolock();
/*   6.458 us   */                                      }
/* + 11.823 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.906 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.531 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/* + 11.980 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.636 us   */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.855 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.678 us   */                                      }
/* + 11.042 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.156 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.855 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.553 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.303 us   */                                        clk_core_round_rate_nolock();
/*   7.709 us   */                                      }
/* + 13.854 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 11.875 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.156 us   */                                      }
/*   9.479 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   6.875 us   */                                      }
/* + 12.188 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.355 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.583 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.907 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.906 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/* + 10.417 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.531 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.344 us   */                                      }
/* + 12.657 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.448 us   */                                      }
/* + 13.646 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.959 us  */                                    }
/* # 1350.938 us*/                                  }
/* # 1355.677 us*/                                }
/* # 1360.208 us*/                              }
/* # 1365.313 us*/                            }
/* # 1385.833 us*/                          }
/* # 1391.562 us*/                        }
/*              */                        clk_calc_subtree() {
/*   0.834 us   */                          clk_calc_subtree();
/*   5.417 us   */                        }
/* # 1408.333 us*/                      }
/*   0.833 us   */                      clk_calc_subtree();
/* # 1419.323 us*/                    }
/*   1.093 us   */                    clk_propagate_rate_change();
/*              */                    clk_change_rate() {
/*   1.302 us   */                      clk_change_rate();
/*   7.083 us   */                    }
/* # 1440.989 us*/                  }
/*              */                  clk_prepare_unlock() {
/*   0.834 us   */                    mutex_unlock();
/*   5.729 us   */                  }
/* # 1470.105 us*/                }
/*              */                clk_get_rate() {
/*              */                  clk_prepare_lock() {
/*   0.885 us   */                    mutex_trylock();
/*   5.313 us   */                  }
/*              */                  clk_prepare_unlock() {
/*   0.781 us   */                    mutex_unlock();
/*   5.209 us   */                  }
/* + 18.438 us  */                }
/* # 1498.333 us*/              }
/*   2.136 us   */              dw_mci_ctrl_reset.isra.14();
/*              */              dw_mci_setup_bus() {
/*              */                _dev_info() {
/*   1.927 us   */                  dev_driver_string.part.16();
/*              */                  dev_printk_emit() {
/*              */                    dev_vprintk_emit() {
/*              */                      vprintk_emit() {
/*              */                        _raw_spin_lock() {
/*   1.563 us   */                          preempt_count_add();
/*   8.073 us   */                        }
/*              */                        log_store() {
/*   1.354 us   */                          log_make_free_space();
/*   7.813 us   */                        }
/*              */                        _raw_spin_unlock() {
/*   1.042 us   */                          preempt_count_sub();
/*   5.521 us   */                        }
/*   1.041 us   */                        preempt_count_add();
/*              */                        console_trylock() {
/*              */                          __down_trylock_console_sem.isra.15() {
/*              */                            /* console_lock: __down_trylock_console_sem */
/*              */                            /* console_lock: down_trylock console_sem */
/*              */                            down_trylock() {
/*              */                              _raw_spin_lock_irqsave() {
/*   0.781 us   */                                preempt_count_add();
/*   5.261 us   */                              }
/*              */                              _raw_spin_unlock_irqrestore() {
/*   0.834 us   */                                preempt_count_sub();
/*   5.260 us   */                              }
/* + 18.646 us  */                            }
/*              */                            /* console_lock: mutex_acquire console_lock_dep_map */
/* + 32.084 us  */                          }
/*              */                          /* console_lock: console_trylock */
/*              */                          /* console_lock: mutex_release console_lock_dep_map */
/*              */                          /* console_lock: up console_sem */
/*              */                          up() {
/*              */                            _raw_spin_lock_irqsave() {
/*   0.833 us   */                              preempt_count_add();
/*   5.416 us   */                            }
/*              */                            _raw_spin_unlock_irqrestore() {
/*   1.303 us   */                              preempt_count_sub();
/*   6.927 us   */                            }
/* + 21.406 us  */                          }
/* + 71.041 us  */                        }
/*   1.406 us   */                        preempt_count_sub();
/* ! 132.187 us */                      }
/* ! 146.719 us */                    }
/* ! 153.594 us */                  }
/* ! 167.552 us */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.719 us   */                  dw_mci_wait_while_busy.isra.17();
/*   9.114 us   */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.458 us   */                  dw_mci_wait_while_busy.isra.17();
/*   8.854 us   */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.041 us   */                  dw_mci_wait_while_busy.isra.17();
/*   7.656 us   */                }
/* ! 215.261 us */              }
/* # 1737.760 us*/            }
/*              */            msleep() {
/*   0.833 us   */              __msecs_to_jiffies();
/*              */              schedule_timeout() {
/*   1.041 us   */                init_timer_key();
/*              */                lock_timer_base.isra.34() {
/*              */                  _raw_spin_lock_irqsave() {
/*   0.937 us   */                    preempt_count_add();
/*   5.417 us   */                  }
/*   9.844 us   */                }
/*   0.833 us   */                detach_if_pending();
/*   1.094 us   */                get_nohz_timer_target();
/*              */                internal_add_timer() {
/*   1.094 us   */                  __internal_add_timer();
/*   0.886 us   */                  wake_up_nohz_cpu();
/* + 11.041 us  */                }
/*              */                _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                  preempt_count_sub();
/*   5.469 us   */                }
/*              */                schedule() {
/*   0.989 us   */                  preempt_count_add();
/*              */                  rcu_note_context_switch() {
/*   0.833 us   */                    rcu_sched_qs();
/*   1.302 us   */                    rcu_preempt_qs();
/* + 11.875 us  */                  }
/*              */                  _raw_spin_lock_irq() {
/*   1.302 us   */                    preempt_count_add();
/*   7.657 us   */                  }
/*              */                  deactivate_task() {
/*   2.395 us   */                    update_rq_clock.part.83();
/*              */                    dequeue_task_fair() {
/*              */                      update_curr() {
/*              */                        cpuacct_charge() {
/*   1.302 us   */                          __rcu_read_lock();
/*   1.250 us   */                          __rcu_read_unlock();
/* + 16.354 us  */                        }
/* + 23.907 us  */                      }
/*   0.989 us   */                      __compute_runnable_contrib();
/*   0.833 us   */                      __compute_runnable_contrib();
/*   0.833 us   */                      clear_buddies();
/*              */                      update_cfs_shares() {
/*   1.146 us   */                        update_curr();
/*   5.885 us   */                      }
/*   0.833 us   */                      update_curr();
/*   0.781 us   */                      __compute_runnable_contrib();
/*   0.782 us   */                      __compute_runnable_contrib();
/*   0.833 us   */                      clear_buddies();
/*   0.834 us   */                      update_cfs_shares();
/*   0.833 us   */                      hrtick_update();
/* + 86.458 us  */                    }
/* + 100.000 us */                  }
/*              */                  pick_next_task_fair() {
/*   0.782 us   */                    __rcu_read_lock();
/*   0.834 us   */                    __msecs_to_jiffies();
/*   0.833 us   */                    __rcu_read_unlock();
/* + 14.948 us  */                  }
/*              */                  pick_next_task_idle() {
/*              */                    put_prev_task_fair() {
/*   1.250 us   */                      put_prev_entity();
/*   1.354 us   */                      put_prev_entity();
/* + 13.385 us  */                    }
/* + 19.167 us  */                  }
/*              */                  __switch_to() {
/*   1.302 us   */                    fpsimd_thread_switch();
/*   1.355 us   */                    hw_breakpoint_thread_switch();
/* * 14052.60 us*/                  }
/*              */                  finish_task_switch() {
/*              */                    _raw_spin_unlock_irq() {
/*   0.833 us   */                      preempt_count_sub();
/*   5.677 us   */                    }
/* + 11.198 us  */                  }
/*   1.250 us   */                  preempt_count_sub();
/* * 14270.57 us*/                }
/*              */                del_timer_sync() {
/*              */                  lock_timer_base.isra.34() {
/*              */                    _raw_spin_lock_irqsave() {
/*   1.354 us   */                      preempt_count_add();
/*   5.834 us   */                    }
/* + 10.312 us  */                  }
/*   0.833 us   */                  detach_if_pending();
/*              */                  _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/* + 28.437 us  */                }
/* * 14359.84 us*/              }
/* * 14369.58 us*/            }
/* @ 109745.4 us*/          }
/* @ 109751.4 us*/        }
/*              */        sdio_reset() {
/*              */          mmc_io_rw_direct_host() {
/*              */            mmc_wait_for_cmd() {
/*   1.041 us   */              __init_waitqueue_head();
/*              */              mmc_start_request() {
/*   1.094 us   */                mmc_retune_hold();
/*              */                led_trigger_event() {
/*              */                  _raw_read_lock() {
/*   1.458 us   */                    preempt_count_add();
/*   7.916 us   */                  }
/*              */                  _raw_read_unlock() {
/*   1.458 us   */                    preempt_count_sub();
/*   7.812 us   */                  }
/* + 27.240 us  */                }
/*              */                __mmc_start_request() {
/*   1.563 us   */                  mmc_retune();
/*   2.135 us   */                  dw_mci_card_busy();
/*              */                  dw_mci_request() {
/*              */                    _raw_spin_lock_bh() {
/*   1.093 us   */                      __local_bh_disable_ip();
/*   6.041 us   */                    }
/*              */                    __dw_mci_start_request() {
/*              */                      dw_mci_prepare_command() {
/*   0.834 us   */                        dw_mci_hi6220_prepare_command();
/*   6.250 us   */                      }
/*              */                      dw_mci_start_command() {
/*   0.989 us   */                        dw_mci_wait_while_busy.isra.17();
/*   5.938 us   */                      }
/* + 21.979 us  */                    }
/*              */                    _raw_spin_unlock_bh() {
/*              */                      __local_bh_enable_ip() {
/*   0.833 us   */                        preempt_count_sub();
/*   0.990 us   */                        preempt_count_sub();
/* + 10.469 us  */                      }
/* + 18.490 us  */                    }
/* + 59.844 us  */                  }
/* + 80.052 us  */                }
/* ! 123.125 us */              }
/*              */              mmc_wait_for_req_done() {
/*              */                wait_for_completion() {
/*              */                  wait_for_common() {
/*              */                    _raw_spin_lock_irq() {
/*   0.989 us   */                      preempt_count_add();
/*   5.469 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.937 us   */                      preempt_count_sub();
/*   5.677 us   */                    }
/*              */                    schedule_timeout() {
/*              */                      schedule() {
/*   1.458 us   */                        preempt_count_add();
/*              */                        rcu_note_context_switch() {
/*   1.302 us   */                          rcu_sched_qs();
/*   1.302 us   */                          rcu_preempt_qs();
/* + 13.855 us  */                        }
/*              */                        _raw_spin_lock_irq() {
/*   1.250 us   */                          preempt_count_add();
/*   7.500 us   */                        }
/*              */                        deactivate_task() {
/*   2.448 us   */                          update_rq_clock.part.83();
/*              */                          dequeue_task_fair() {
/*              */                            update_curr() {
/*              */                              cpuacct_charge() {
/*   0.834 us   */                                __rcu_read_lock();
/*   0.886 us   */                                __rcu_read_unlock();
/* + 12.239 us  */                              }
/* + 17.708 us  */                            }
/*   0.833 us   */                            clear_buddies();
/*              */                            update_cfs_shares() {
/*   0.989 us   */                              update_curr();
/*   5.781 us   */                            }
/*   0.833 us   */                            update_curr();
/*   0.781 us   */                            clear_buddies();
/*   0.885 us   */                            update_cfs_shares();
/*   0.833 us   */                            hrtick_update();
/* + 58.177 us  */                          }
/* + 71.979 us  */                        }
/*              */                        pick_next_task_fair() {
/*   0.834 us   */                          __rcu_read_lock();
/*   0.781 us   */                          __msecs_to_jiffies();
/*   0.833 us   */                          __rcu_read_unlock();
/* + 14.740 us  */                        }
/*              */                        pick_next_task_idle() {
/*              */                          put_prev_task_fair() {
/*   0.782 us   */                            put_prev_entity();
/*   1.250 us   */                            put_prev_entity();
/* + 12.552 us  */                          }
/* + 18.333 us  */                        }
/*              */                        __switch_to() {
/*   1.250 us   */                          fpsimd_thread_switch();
/*   1.250 us   */                          hw_breakpoint_thread_switch();
/* # 1214.115 us*/                        }
/*              */                        finish_task_switch() {
/*              */                          _raw_spin_unlock_irq() {
/*   1.302 us   */                            preempt_count_sub();
/*   8.073 us   */                          }
/* + 16.042 us  */                        }
/*   1.510 us   */                        preempt_count_sub();
/* # 1416.250 us*/                      }
/* # 1423.229 us*/                    }
/*              */                    _raw_spin_lock_irq() {
/*   2.031 us   */                      preempt_count_add();
/*   7.448 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.990 us   */                      preempt_count_sub();
/*   5.520 us   */                    }
/* # 1470.417 us*/                  }
/* # 1475.469 us*/                }
/*   1.093 us   */                mmc_retune_release();
/* # 1488.854 us*/              }
/* # 1626.094 us*/            }
/* # 1631.302 us*/          }
/*              */          mmc_io_rw_direct_host() {
/*              */            mmc_wait_for_cmd() {
/*   0.834 us   */              __init_waitqueue_head();
/*              */              mmc_start_request() {
/*   0.833 us   */                mmc_retune_hold();
/*              */                led_trigger_event() {
/*              */                  _raw_read_lock() {
/*   0.990 us   */                    preempt_count_add();
/*   5.468 us   */                  }
/*              */                  _raw_read_unlock() {
/*   0.989 us   */                    preempt_count_sub();
/*   5.417 us   */                  }
/* + 18.802 us  */                }
/*              */                __mmc_start_request() {
/*   1.042 us   */                  mmc_retune();
/*   1.042 us   */                  dw_mci_card_busy();
/*              */                  dw_mci_request() {
/*              */                    _raw_spin_lock_bh() {
/*   1.771 us   */                      __local_bh_disable_ip();
/*   8.489 us   */                    }
/*              */                    __dw_mci_start_request() {
/*              */                      dw_mci_prepare_command() {
/*   1.250 us   */                        dw_mci_hi6220_prepare_command();
/*   8.489 us   */                      }
/*              */                      dw_mci_start_command() {
/*   1.510 us   */                        dw_mci_wait_while_busy.isra.17();
/*   8.230 us   */                      }
/* + 29.531 us  */                    }
/*              */                    _raw_spin_unlock_bh() {
/*              */                      __local_bh_enable_ip() {
/*   1.302 us   */                        preempt_count_sub();
/*   0.990 us   */                        preempt_count_sub();
/* + 12.447 us  */                      }
/* + 18.229 us  */                    }
/* + 72.396 us  */                  }
/* + 88.021 us  */                }
/* ! 119.948 us */              }
/*              */              mmc_wait_for_req_done() {
/*              */                wait_for_completion() {
/*              */                  wait_for_common() {
/*              */                    _raw_spin_lock_irq() {
/*   0.989 us   */                      preempt_count_add();
/*   5.469 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.990 us   */                      preempt_count_sub();
/*   5.468 us   */                    }
/*              */                    schedule_timeout() {
/*              */                      schedule() {
/*   0.990 us   */                        preempt_count_add();
/*              */                        rcu_note_context_switch() {
/*   0.885 us   */                          rcu_sched_qs();
/*   0.833 us   */                          rcu_preempt_qs();
/*   9.792 us   */                        }
/*              */                        _raw_spin_lock_irq() {
/*   0.833 us   */                          preempt_count_add();
/*   5.365 us   */                        }
/*              */                        deactivate_task() {
/*   1.667 us   */                          update_rq_clock.part.83();
/*              */                          dequeue_task_fair() {
/*              */                            update_curr() {
/*              */                              cpuacct_charge() {
/*   1.302 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __rcu_read_unlock();
/* + 16.302 us  */                              }
/* + 23.803 us  */                            }
/*   1.354 us   */                            __compute_runnable_contrib();
/*   1.302 us   */                            __compute_runnable_contrib();
/*   1.303 us   */                            clear_buddies();
/*              */                            update_cfs_shares() {
/*   1.562 us   */                              update_curr();
/*   8.542 us   */                            }
/*   0.833 us   */                            update_curr();
/*   0.833 us   */                            clear_buddies();
/*   0.886 us   */                            update_cfs_shares();
/*   0.834 us   */                            hrtick_update();
/* + 87.344 us  */                          }
/* + 98.021 us  */                        }
/*              */                        pick_next_task_fair() {
/*   0.834 us   */                          __rcu_read_lock();
/*   1.250 us   */                          __msecs_to_jiffies();
/*   0.833 us   */                          __rcu_read_unlock();
/* + 15.625 us  */                        }
/*              */                        pick_next_task_idle() {
/*              */                          put_prev_task_fair() {
/*   0.834 us   */                            put_prev_entity();
/*   0.834 us   */                            put_prev_entity();
/*   9.792 us   */                          }
/* + 14.636 us  */                        }
/*              */                        __switch_to() {
/*   0.833 us   */                          fpsimd_thread_switch();
/*   0.833 us   */                          hw_breakpoint_thread_switch();
/* # 1006.667 us*/                        }
/*              */                        finish_task_switch() {
/*              */                          _raw_spin_unlock_irq() {
/*   1.354 us   */                            preempt_count_sub();
/*   8.177 us   */                          }
/* + 15.573 us  */                        }
/*   1.562 us   */                        preempt_count_sub();
/* # 1218.854 us*/                      }
/* # 1224.844 us*/                    }
/*              */                    _raw_spin_lock_irq() {
/*   2.031 us   */                      preempt_count_add();
/*   8.177 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.417 us   */                    }
/* # 1270.417 us*/                  }
/* # 1275.417 us*/                }
/*   1.094 us   */                mmc_retune_release();
/* # 1285.937 us*/              }
/* # 1419.427 us*/            }
/* # 1424.479 us*/          }
/* # 3065.052 us*/        }
/*              */        mmc_go_idle() {
/*              */          mmc_set_chip_select() {
/*              */            dw_mci_set_ios() {
/*              */              dw_mci_hi6220_set_ios() {
/*              */                clk_set_rate() {
/*              */                  clk_prepare_lock() {
/*   1.511 us   */                    mutex_trylock();
/*   6.458 us   */                  }
/*              */                  clk_core_set_rate_nolock() {
/*              */                    clk_calc_new_rates() {
/*              */                      clk_calc_new_rates() {
/*              */                        __clk_mux_determine_rate() {
/*              */                          clk_mux_determine_rate_flags.isra.23() {
/*              */                            clk_core_round_rate_nolock() {
/*              */                              clk_factor_round_rate() {
/*   1.094 us   */                                clk_hw_get_flags();
/*   5.834 us   */                              }
/* + 11.094 us  */                            }
/*              */                            clk_core_round_rate_nolock() {
/*              */                              hi6220_clkdiv_round_rate() {
/*              */                                divider_round_rate() {
/*              */                                  clk_divider_bestdiv() {
/*   2.136 us   */                                    _get_maxdiv();
/*   1.250 us   */                                    clk_hw_get_flags();
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.667 us   */                                        clk_core_round_rate_nolock();
/*   8.281 us   */                                      }
/* + 15.468 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   8.594 us   */                                      }
/* + 12.968 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*   ==========>*/
/*              */                                      gic_handle_irq() {
/*              */                                        __handle_domain_irq() {
/*              */                                          irq_enter() {
/*   0.937 us   */                                            rcu_irq_enter();
/*   0.886 us   */                                            preempt_count_add();
/* + 10.313 us  */                                          }
/*   1.093 us   */                                          irq_find_mapping();
/*              */                                          generic_handle_irq() {
/*              */                                            handle_percpu_devid_irq() {
/*              */                                              arch_timer_handler_phys() {
/*              */                                                hrtimer_interrupt() {
/*              */                                                  _raw_spin_lock() {
/*   1.302 us   */                                                    preempt_count_add();
/*   7.656 us   */                                                  }
/*              */                                                  ktime_get_update_offsets_now() {
/*   1.302 us   */                                                    arch_counter_read();
/*   8.333 us   */                                                  }
/*              */                                                  __hrtimer_run_queues() {
/*   1.510 us   */                                                    __remove_hrtimer();
/*              */                                                    _raw_spin_unlock() {
/*   1.302 us   */                                                      preempt_count_sub();
/*   7.864 us   */                                                    }
/*              */                                                    tick_sched_timer() {
/*              */                                                      ktime_get() {
/*   0.833 us   */                                                        arch_counter_read();
/*   5.625 us   */                                                      }
/*              */                                                      tick_do_update_jiffies64() {
/*              */                                                        _raw_spin_lock() {
/*   0.833 us   */                                                          preempt_count_add();
/*   5.417 us   */                                                        }
/*              */                                                        do_timer() {
/*   0.990 us   */                                                          calc_global_load();
/*   5.573 us   */                                                        }
/*              */                                                        _raw_spin_unlock() {
/*   0.834 us   */                                                          preempt_count_sub();
/*   5.208 us   */                                                        }
/*              */                                                        update_wall_time() {
/*              */                                                          _raw_spin_lock_irqsave() {
/*   0.834 us   */                                                            preempt_count_add();
/*   5.782 us   */                                                          }
/*   0.833 us   */                                                          arch_counter_read();
/*   1.042 us   */                                                          ntp_tick_length();
/*   0.781 us   */                                                          ntp_tick_length();
/*   0.834 us   */                                                          ntp_tick_length();
/*              */                                                          timekeeping_update() {
/*   1.094 us   */                                                            ntp_get_next_leap();
/*   1.980 us   */                                                            update_vsyscall();
/*   1.145 us   */                                                            raw_notifier_call_chain();
/*   1.511 us   */                                                            update_fast_timekeeper();
/* + 24.167 us  */                                                          }
/*              */                                                          _raw_spin_unlock_irqrestore() {
/*   1.303 us   */                                                            preempt_count_sub();
/*   7.604 us   */                                                          }
/* + 72.864 us  */                                                        }
/* ! 105.833 us */                                                      }
/*              */                                                      update_process_times() {
/*              */                                                        account_process_tick() {
/*              */                                                          account_system_time() {
/*              */                                                            cpuacct_account_field() {
/*   1.302 us   */                                                              __rcu_read_lock();
/*   1.302 us   */                                                              __rcu_read_unlock();
/* + 15.937 us  */                                                            }
/*              */                                                            acct_account_cputime() {
/*              */                                                              __acct_update_integrals() {
/*   1.042 us   */                                                                jiffies_to_timeval();
/*   6.667 us   */                                                              }
/* + 11.614 us  */                                                            }
/* + 41.510 us  */                                                          }
/* + 47.292 us  */                                                        }
/*   0.885 us   */                                                        hrtimer_run_queues();
/*              */                                                        raise_softirq() {
/*   0.834 us   */                                                          __raise_softirq_irqoff();
/*   5.573 us   */                                                        }
/*              */                                                        rcu_check_callbacks() {
/*   0.886 us   */                                                          rcu_bh_qs();
/*   0.834 us   */                                                          rcu_preempt_qs();
/*   1.355 us   */                                                          cpu_needs_another_gp();
/*   1.250 us   */                                                          cpu_needs_another_gp();
/*   1.146 us   */                                                          cpu_needs_another_gp();
/* + 28.646 us  */                                                        }
/*              */                                                        scheduler_tick() {
/*              */                                                          _raw_spin_lock() {
/*   0.833 us   */                                                            preempt_count_add();
/*   5.365 us   */                                                          }
/*   1.667 us   */                                                          update_rq_clock.part.83();
/*              */                                                          task_tick_fair() {
/*              */                                                            update_curr() {
/*              */                                                              cpuacct_charge() {
/*   1.302 us   */                                                                __rcu_read_lock();
/*   1.250 us   */                                                                __rcu_read_unlock();
/* + 15.052 us  */                                                              }
/* + 22.031 us  */                                                            }
/*              */                                                            update_cfs_shares() {
/*   1.562 us   */                                                              update_curr();
/*   8.490 us   */                                                            }
/*   1.511 us   */                                                            hrtimer_active();
/*   1.302 us   */                                                            update_curr();
/*   1.302 us   */                                                            __compute_runnable_contrib();
/*   0.834 us   */                                                            __compute_runnable_contrib();
/*   0.833 us   */                                                            update_cfs_shares();
/*   0.833 us   */                                                            hrtimer_active();
/* + 78.386 us  */                                                          }
/*              */                                                          update_cpu_load_active() {
/*              */                                                            __update_cpu_load() {
/*   0.834 us   */                                                              sched_avg_update();
/*   6.146 us   */                                                            }
/* + 10.729 us  */                                                          }
/*   1.093 us   */                                                          calc_global_load_tick();
/*              */                                                          _raw_spin_unlock() {
/*   0.781 us   */                                                            preempt_count_sub();
/*   5.261 us   */                                                          }
/*              */                                                          trigger_load_balance() {
/*   0.834 us   */                                                            __rcu_read_lock();
/*   0.833 us   */                                                            __rcu_read_unlock();
/*   0.833 us   */                                                            __rcu_read_lock();
/*   0.834 us   */                                                            __rcu_read_unlock();
/* + 20.260 us  */                                                          }
/* ! 150.834 us */                                                        }
/*   1.354 us   */                                                        run_posix_cpu_timers();
/* ! 261.407 us */                                                      }
/*   1.302 us   */                                                      profile_tick();
/*   1.146 us   */                                                      hrtimer_forward();
/* ! 397.865 us */                                                    }
/*              */                                                    _raw_spin_lock() {
/*   1.302 us   */                                                      preempt_count_add();
/*   7.552 us   */                                                    }
/*   1.406 us   */                                                    enqueue_hrtimer();
/* ! 444.114 us */                                                  }
/*   1.406 us   */                                                  __hrtimer_get_next_event();
/*              */                                                  _raw_spin_unlock() {
/*   1.302 us   */                                                    preempt_count_sub();
/*   7.656 us   */                                                  }
/*              */                                                  tick_program_event() {
/*              */                                                    clockevents_program_event() {
/*              */                                                      ktime_get() {
/*   1.354 us   */                                                        arch_counter_read();
/* + 10.833 us  */                                                      }
/*   0.834 us   */                                                      arch_timer_set_next_event_phys();
/* + 20.885 us  */                                                    }
/* + 26.459 us  */                                                  }
/* ! 528.073 us */                                                }
/* ! 533.958 us */                                              }
/*   0.885 us   */                                              gic_eoimode1_eoi_irq();
/* ! 544.687 us */                                            }
/* ! 549.792 us */                                          }
/*              */                                          irq_exit() {
/*   0.834 us   */                                            preempt_count_sub();
/*              */                                            __do_softirq() {
/*   0.834 us   */                                              __local_bh_disable_ip();
/*              */                                              run_timer_softirq() {
/*              */                                                _raw_spin_lock_irq() {
/*   0.834 us   */                                                  preempt_count_add();
/*   5.260 us   */                                                }
/*              */                                                _raw_spin_unlock_irq() {
/*   0.781 us   */                                                  preempt_count_sub();
/*   5.208 us   */                                                }
/* + 19.479 us  */                                              }
/*   0.886 us   */                                              rcu_bh_qs();
/*              */                                              __local_bh_enable() {
/*   0.834 us   */                                                preempt_count_sub();
/*   5.312 us   */                                              }
/* + 42.605 us  */                                            }
/*   0.834 us   */                                            idle_cpu();
/*   0.938 us   */                                            rcu_irq_exit();
/* + 60.625 us  */                                          }
/* ! 638.020 us */                                        }
/* ! 643.593 us */                                      }
/*   <==========*/
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.760 us   */                                      }
/* ! 662.239 us */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.094 us   */                                        clk_core_round_rate_nolock();
/*   6.458 us   */                                      }
/* + 11.771 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.479 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.761 us   */                                      }
/* + 16.093 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.303 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.854 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.583 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.896 us   */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.907 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/* + 10.625 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.739 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.157 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.073 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   6.666 us   */                                      }
/* + 12.031 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.303 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.906 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.635 us   */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.709 us   */                                      }
/* + 13.959 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.365 us   */                                      }
/* + 10.521 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.156 us   */                                      }
/*   9.531 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/* + 10.729 us  */                                      }
/* + 16.927 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.448 us   */                                      }
/* + 12.864 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.303 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.125 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 14.011 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.157 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.042 us   */                                        clk_core_round_rate_nolock();
/*   6.406 us   */                                      }
/* + 11.718 us  */                                    }
/*   1.303 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.907 us  */                                    }
/* # 2003.489 us*/                                  }
/* # 2010.104 us*/                                }
/* # 2016.667 us*/                              }
/* # 2023.750 us*/                            }
/* # 2046.823 us*/                          }
/* # 2052.448 us*/                        }
/*              */                        clk_calc_subtree() {
/*   1.302 us   */                          clk_calc_subtree();
/*   7.917 us   */                        }
/* # 2073.073 us*/                      }
/*   0.833 us   */                      clk_calc_subtree();
/* # 2083.646 us*/                    }
/*   1.302 us   */                    clk_propagate_rate_change();
/*              */                    clk_change_rate() {
/*   1.250 us   */                      clk_change_rate();
/*   7.031 us   */                    }
/* # 2104.584 us*/                  }
/*              */                  clk_prepare_unlock() {
/*   0.833 us   */                    mutex_unlock();
/*   5.573 us   */                  }
/* # 2128.698 us*/                }
/*              */                clk_get_rate() {
/*              */                  clk_prepare_lock() {
/*   0.782 us   */                    mutex_trylock();
/*   5.208 us   */                  }
/*              */                  clk_prepare_unlock() {
/*   0.834 us   */                    mutex_unlock();
/*   5.260 us   */                  }
/* + 18.490 us  */                }
/* # 2155.573 us*/              }
/*   1.094 us   */              dw_mci_setup_bus();
/* # 2166.093 us*/            }
/* # 2171.198 us*/          }
/*   1.041 us   */          _cond_resched();
/*              */          mmc_wait_for_cmd() {
/*   0.834 us   */            __init_waitqueue_head();
/*              */            mmc_start_request() {
/*   0.833 us   */              mmc_retune_hold();
/*              */              led_trigger_event() {
/*              */                _raw_read_lock() {
/*   1.093 us   */                  preempt_count_add();
/*   5.573 us   */                }
/*              */                _raw_read_unlock() {
/*   0.989 us   */                  preempt_count_sub();
/*   5.625 us   */                }
/* + 19.479 us  */              }
/*              */              __mmc_start_request() {
/*   1.094 us   */                mmc_retune();
/*              */                dw_mci_request() {
/*              */                  _raw_spin_lock_bh() {
/*   1.563 us   */                    __local_bh_disable_ip();
/*   6.042 us   */                  }
/*              */                  __dw_mci_start_request() {
/*              */                    dw_mci_prepare_command() {
/*   0.781 us   */                      dw_mci_hi6220_prepare_command();
/*   5.729 us   */                    }
/*              */                    dw_mci_start_command() {
/*   0.989 us   */                      dw_mci_wait_while_busy.isra.17();
/*   5.989 us   */                    }
/* + 22.031 us  */                  }
/*              */                  _raw_spin_unlock_bh() {
/*              */                    __local_bh_enable_ip() {
/*   1.303 us   */                      preempt_count_sub();
/*   1.458 us   */                      preempt_count_sub();
/* + 14.947 us  */                    }
/* + 21.614 us  */                  }
/* + 64.114 us  */                }
/* + 77.917 us  */              }
/* ! 111.615 us */            }
/*              */            mmc_wait_for_req_done() {
/*              */              wait_for_completion() {
/*              */                wait_for_common() {
/*              */                  _raw_spin_lock_irq() {
/*   1.459 us   */                    preempt_count_add();
/*   7.604 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   0.937 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/*              */                  schedule_timeout() {
/*              */                    schedule() {
/*   0.990 us   */                      preempt_count_add();
/*              */                      rcu_note_context_switch() {
/*   0.833 us   */                        rcu_sched_qs();
/*   0.885 us   */                        rcu_preempt_qs();
/*   9.740 us   */                      }
/*              */                      _raw_spin_lock_irq() {
/*   0.833 us   */                        preempt_count_add();
/*   5.365 us   */                      }
/*              */                      deactivate_task() {
/*   1.407 us   */                        update_rq_clock.part.83();
/*              */                        dequeue_task_fair() {
/*              */                          update_curr() {
/*              */                            cpuacct_charge() {
/*   0.833 us   */                              __rcu_read_lock();
/*   0.834 us   */                              __rcu_read_unlock();
/*   9.792 us   */                            }
/* + 14.323 us  */                          }
/*   0.990 us   */                          __compute_runnable_contrib();
/*   0.782 us   */                          __compute_runnable_contrib();
/*   1.250 us   */                          clear_buddies();
/*              */                          update_cfs_shares() {
/*   1.355 us   */                            update_curr();
/*   7.760 us   */                          }
/*   1.302 us   */                          update_curr();
/*   1.302 us   */                          __compute_runnable_contrib();
/*   1.302 us   */                          __compute_runnable_contrib();
/*   1.302 us   */                          clear_buddies();
/*   1.354 us   */                          update_cfs_shares();
/*   1.355 us   */                          hrtick_update();
/* + 89.687 us  */                        }
/* ! 101.041 us */                      }
/*              */                      pick_next_task_fair() {
/*   0.833 us   */                        __rcu_read_lock();
/*   1.303 us   */                        __msecs_to_jiffies();
/*   0.833 us   */                        __rcu_read_unlock();
/* + 16.355 us  */                      }
/*              */                      pick_next_task_idle() {
/*              */                        put_prev_task_fair() {
/*   0.834 us   */                          put_prev_entity();
/*   0.833 us   */                          put_prev_entity();
/* + 10.156 us  */                        }
/* + 14.844 us  */                      }
/*              */                      __switch_to() {
/*   0.833 us   */                        fpsimd_thread_switch();
/*   0.833 us   */                        hw_breakpoint_thread_switch();
/* + 32.760 us  */                      }
/*              */                      finish_task_switch() {
/*              */                        _raw_spin_unlock_irq() {
/*   0.886 us   */                          preempt_count_sub();
/*   5.313 us   */                        }
/*   9.843 us   */                      }
/*   1.563 us   */                      preempt_count_sub();
/* ! 230.625 us */                    }
/* ! 236.198 us */                  }
/*              */                  _raw_spin_lock_irq() {
/*   1.511 us   */                    preempt_count_add();
/*   8.073 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   1.458 us   */                    preempt_count_sub();
/* + 11.094 us  */                  }
/* ! 291.979 us */                }
/* ! 298.437 us */              }
/*   1.302 us   */              mmc_retune_release();
/* ! 311.302 us */            }
/* ! 438.750 us */          }
/*   1.250 us   */          _cond_resched();
/*   ==========>*/
/*              */          gic_handle_irq() {
/*              */            __handle_domain_irq() {
/*              */              irq_enter() {
/*   1.406 us   */                rcu_irq_enter();
/*   1.458 us   */                preempt_count_add();
/* + 14.375 us  */              }
/*   1.354 us   */              irq_find_mapping();
/*              */              generic_handle_irq() {
/*              */                handle_percpu_devid_irq() {
/*              */                  arch_timer_handler_phys() {
/*              */                    hrtimer_interrupt() {
/*              */                      _raw_spin_lock() {
/*   1.302 us   */                        preempt_count_add();
/*   7.344 us   */                      }
/*              */                      ktime_get_update_offsets_now() {
/*   0.834 us   */                        arch_counter_read();
/*   5.364 us   */                      }
/*              */                      __hrtimer_run_queues() {
/*   0.938 us   */                        __remove_hrtimer();
/*              */                        _raw_spin_unlock() {
/*   0.833 us   */                          preempt_count_sub();
/*   5.313 us   */                        }
/*              */                        tick_sched_timer() {
/*              */                          ktime_get() {
/*   0.833 us   */                            arch_counter_read();
/*   5.313 us   */                          }
/*              */                          tick_do_update_jiffies64() {
/*              */                            _raw_spin_lock() {
/*   0.833 us   */                              preempt_count_add();
/*   5.365 us   */                            }
/*              */                            do_timer() {
/*   0.833 us   */                              calc_global_load();
/*   5.313 us   */                            }
/*              */                            _raw_spin_unlock() {
/*   0.833 us   */                              preempt_count_sub();
/*   5.260 us   */                            }
/*              */                            update_wall_time() {
/*              */                              _raw_spin_lock_irqsave() {
/*   0.833 us   */                                preempt_count_add();
/*   5.365 us   */                              }
/*   0.834 us   */                              arch_counter_read();
/*   1.302 us   */                              ntp_tick_length();
/*   1.302 us   */                              ntp_tick_length();
/*   1.302 us   */                              ntp_tick_length();
/*              */                              timekeeping_update() {
/*   1.302 us   */                                ntp_get_next_leap();
/*   1.406 us   */                                update_vsyscall();
/*   1.302 us   */                                raw_notifier_call_chain();
/*   1.250 us   */                                update_fast_timekeeper();
/* + 27.032 us  */                              }
/*              */                              _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                preempt_count_sub();
/*   7.656 us   */                              }
/* + 77.865 us  */                            }
/* ! 110.209 us */                          }
/*              */                          update_process_times() {
/*              */                            account_process_tick() {
/*              */                              account_system_time() {
/*              */                                cpuacct_account_field() {
/*   0.833 us   */                                  __rcu_read_lock();
/*   0.833 us   */                                  __rcu_read_unlock();
/*   9.844 us   */                                }
/*              */                                acct_account_cputime() {
/*              */                                  __acct_update_integrals() {
/*   0.833 us   */                                    jiffies_to_timeval();
/*   5.417 us   */                                  }
/*   9.791 us   */                                }
/* + 27.761 us  */                              }
/* + 32.240 us  */                            }
/*   0.885 us   */                            hrtimer_run_queues();
/*              */                            raise_softirq() {
/*   0.885 us   */                              __raise_softirq_irqoff();
/*   5.417 us   */                            }
/*              */                            rcu_check_callbacks() {
/*   0.886 us   */                              rcu_bh_qs();
/*   0.833 us   */                              rcu_preempt_qs();
/*   0.885 us   */                              cpu_needs_another_gp();
/*   0.886 us   */                              cpu_needs_another_gp();
/*   0.833 us   */                              cpu_needs_another_gp();
/* + 23.750 us  */                            }
/*              */                            scheduler_tick() {
/*              */                              _raw_spin_lock() {
/*   1.250 us   */                                preempt_count_add();
/*   7.656 us   */                              }
/*   2.448 us   */                              update_rq_clock.part.83();
/*              */                              task_tick_fair() {
/*              */                                update_curr() {
/*              */                                  cpuacct_charge() {
/*   1.250 us   */                                    __rcu_read_lock();
/*   1.250 us   */                                    __rcu_read_unlock();
/* + 13.854 us  */                                  }
/* + 20.260 us  */                                }
/*   1.302 us   */                                __compute_runnable_contrib();
/*   1.302 us   */                                __compute_runnable_contrib();
/*              */                                update_cfs_shares() {
/*   0.886 us   */                                  update_curr();
/*   6.510 us   */                                }
/*   0.886 us   */                                hrtimer_active();
/*   0.834 us   */                                update_curr();
/*   0.781 us   */                                __compute_runnable_contrib();
/*   0.833 us   */                                __compute_runnable_contrib();
/*   0.886 us   */                                update_cfs_shares();
/*   0.834 us   */                                hrtimer_active();
/* + 77.344 us  */                              }
/*              */                              update_cpu_load_active() {
/*              */                                __update_cpu_load() {
/*   0.834 us   */                                  sched_avg_update();
/*   5.416 us   */                                }
/*   9.844 us   */                              }
/*   0.834 us   */                              calc_global_load_tick();
/*              */                              _raw_spin_unlock() {
/*   0.833 us   */                                preempt_count_sub();
/*   5.365 us   */                              }
/*              */                              trigger_load_balance() {
/*              */                                raise_softirq() {
/*   0.886 us   */                                  __raise_softirq_irqoff();
/*   5.312 us   */                                }
/*   0.833 us   */                                __rcu_read_lock();
/*   0.834 us   */                                __rcu_read_unlock();
/*   0.782 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __rcu_read_unlock();
/* + 29.792 us  */                              }
/* ! 163.855 us */                            }
/*   1.354 us   */                            run_posix_cpu_timers();
/* ! 254.948 us */                          }
/*   1.406 us   */                          profile_tick();
/*   1.302 us   */                          hrtimer_forward();
/* ! 396.563 us */                        }
/*              */                        _raw_spin_lock() {
/*   1.302 us   */                          preempt_count_add();
/*   7.604 us   */                        }
/*   1.458 us   */                        enqueue_hrtimer();
/* ! 435.156 us */                      }
/*   1.302 us   */                      __hrtimer_get_next_event();
/*              */                      _raw_spin_unlock() {
/*   0.834 us   */                        preempt_count_sub();
/*   7.552 us   */                      }
/*              */                      tick_program_event() {
/*              */                        clockevents_program_event() {
/*              */                          ktime_get() {
/*   0.781 us   */                            arch_counter_read();
/*   5.156 us   */                          }
/*   1.094 us   */                          arch_timer_set_next_event_phys();
/* + 14.219 us  */                        }
/* + 18.646 us  */                      }
/* ! 501.198 us */                    }
/* ! 506.667 us */                  }
/*   0.885 us   */                  gic_eoimode1_eoi_irq();
/* ! 516.718 us */                }
/* ! 522.344 us */              }
/*              */              irq_exit() {
/*   1.042 us   */                preempt_count_sub();
/*              */                __do_softirq() {
/*   1.198 us   */                  __local_bh_disable_ip();
/*              */                  run_timer_softirq() {
/*              */                    _raw_spin_lock_irq() {
/*   0.833 us   */                      preempt_count_add();
/*   5.417 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.834 us   */                      preempt_count_sub();
/*   5.260 us   */                    }
/* + 18.906 us  */                  }
/*              */                  run_rebalance_domains() {
/*              */                    rebalance_domains() {
/*              */                      update_blocked_averages() {
/*              */                        _raw_spin_lock_irqsave() {
/*   1.302 us   */                          preempt_count_add();
/*   7.552 us   */                        }
/*   2.552 us   */                        update_rq_clock();
/*   1.302 us   */                        __compute_runnable_contrib();
/*   1.302 us   */                        __compute_runnable_contrib();
/*   1.302 us   */                        __compute_runnable_contrib();
/*              */                        _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                          preempt_count_sub();
/*   7.604 us   */                        }
/* + 57.240 us  */                      }
/*   0.833 us   */                      __rcu_read_lock();
/*   0.833 us   */                      __msecs_to_jiffies();
/*   0.834 us   */                      __msecs_to_jiffies();
/*   0.833 us   */                      __rcu_read_unlock();
/* + 82.343 us  */                    }
/* + 88.229 us  */                  }
/*   0.886 us   */                  rcu_bh_qs();
/*              */                  __local_bh_enable() {
/*   1.041 us   */                    preempt_count_sub();
/*   5.521 us   */                  }
/* ! 134.427 us */                }
/*   0.834 us   */                idle_cpu();
/*   0.938 us   */                rcu_irq_exit();
/* ! 152.864 us */              }
/* ! 710.469 us */            }
/* ! 716.093 us */          }
/*   <==========*/
/*              */          mmc_set_chip_select() {
/*              */            dw_mci_set_ios() {
/*              */              dw_mci_hi6220_set_ios() {
/*              */                clk_set_rate() {
/*              */                  clk_prepare_lock() {
/*   0.885 us   */                    mutex_trylock();
/*   5.365 us   */                  }
/*              */                  clk_core_set_rate_nolock() {
/*              */                    clk_calc_new_rates() {
/*              */                      clk_calc_new_rates() {
/*              */                        __clk_mux_determine_rate() {
/*              */                          clk_mux_determine_rate_flags.isra.23() {
/*              */                            clk_core_round_rate_nolock() {
/*              */                              clk_factor_round_rate() {
/*   1.302 us   */                                clk_hw_get_flags();
/*   7.761 us   */                              }
/* + 13.958 us  */                            }
/*              */                            clk_core_round_rate_nolock() {
/*              */                              hi6220_clkdiv_round_rate() {
/*              */                                divider_round_rate() {
/*              */                                  clk_divider_bestdiv() {
/*   1.615 us   */                                    _get_maxdiv();
/*   1.302 us   */                                    clk_hw_get_flags();
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   6.875 us   */                                      }
/* + 12.291 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   6.667 us   */                                      }
/* + 11.979 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.740 us   */                                    }
/*   0.781 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/* + 11.875 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   6.042 us   */                                      }
/* + 11.354 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.739 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.156 us   */                                      }
/*   9.531 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.020 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/* + 10.521 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.553 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.896 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.125 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.740 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.073 us  */                                    }
/*   1.303 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.605 us   */                                      }
/* + 13.750 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/* + 10.208 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/* + 10.989 us  */                                      }
/* + 17.188 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.583 us   */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.303 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.698 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.146 us   */                                        clk_core_round_rate_nolock();
/*   6.458 us   */                                      }
/* + 11.771 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.636 us   */                                    }
/* # 1338.646 us*/                                  }
/* # 1344.531 us*/                                }
/* # 1350.417 us*/                              }
/* # 1356.719 us*/                            }
/* # 1381.770 us*/                          }
/* # 1387.083 us*/                        }
/*              */                        clk_calc_subtree() {
/*   1.354 us   */                          clk_calc_subtree();
/*   7.709 us   */                        }
/* # 1405.208 us*/                      }
/*   1.302 us   */                      clk_calc_subtree();
/* # 1416.979 us*/                    }
/*   1.354 us   */                    clk_propagate_rate_change();
/*              */                    clk_change_rate() {
/*   1.406 us   */                      clk_change_rate();
/*   7.813 us   */                    }
/* # 1441.511 us*/                  }
/*              */                  clk_prepare_unlock() {
/*   1.094 us   */                    mutex_unlock();
/*   6.458 us   */                  }
/* # 1466.250 us*/                }
/*              */                clk_get_rate() {
/*              */                  clk_prepare_lock() {
/*   0.834 us   */                    mutex_trylock();
/*   5.260 us   */                  }
/*              */                  clk_prepare_unlock() {
/*   0.833 us   */                    mutex_unlock();
/*   5.208 us   */                  }
/* + 18.542 us  */                }
/* # 1492.656 us*/              }
/*   0.990 us   */              dw_mci_setup_bus();
/* # 1502.135 us*/            }
/* # 1506.510 us*/          }
/*   0.833 us   */          _cond_resched();
/* # 7420.105 us*/        }
/*              */        mmc_send_if_cond() {
/*              */          mmc_wait_for_cmd() {
/*   1.354 us   */            __init_waitqueue_head();
/*              */            mmc_start_request() {
/*   1.302 us   */              mmc_retune_hold();
/*              */              led_trigger_event() {
/*              */                _raw_read_lock() {
/*   1.042 us   */                  preempt_count_add();
/*   5.678 us   */                }
/*              */                _raw_read_unlock() {
/*   0.990 us   */                  preempt_count_sub();
/*   5.625 us   */                }
/* + 19.427 us  */              }
/*              */              __mmc_start_request() {
/*   0.834 us   */                mmc_retune();
/*              */                dw_mci_request() {
/*              */                  _raw_spin_lock_bh() {
/*   1.145 us   */                    __local_bh_disable_ip();
/*   5.625 us   */                  }
/*              */                  __dw_mci_start_request() {
/*              */                    dw_mci_prepare_command() {
/*   0.782 us   */                      dw_mci_hi6220_prepare_command();
/*   5.364 us   */                    }
/*              */                    dw_mci_start_command() {
/*   0.781 us   */                      dw_mci_wait_while_busy.isra.17();
/*   5.573 us   */                    }
/* + 19.062 us  */                  }
/*              */                  _raw_spin_unlock_bh() {
/*              */                    __local_bh_enable_ip() {
/*   0.886 us   */                      preempt_count_sub();
/*   1.041 us   */                      preempt_count_sub();
/* + 10.156 us  */                    }
/* + 14.635 us  */                  }
/* + 50.938 us  */                }
/* + 59.687 us  */              }
/* + 94.167 us  */            }
/*              */            mmc_wait_for_req_done() {
/*              */              wait_for_completion() {
/*              */                wait_for_common() {
/*              */                  _raw_spin_lock_irq() {
/*   1.458 us   */                    preempt_count_add();
/*   7.969 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   1.407 us   */                    preempt_count_sub();
/*   7.656 us   */                  }
/*              */                  schedule_timeout() {
/*              */                    schedule() {
/*   1.459 us   */                      preempt_count_add();
/*              */                      rcu_note_context_switch() {
/*   1.354 us   */                        rcu_sched_qs();
/*   0.833 us   */                        rcu_preempt_qs();
/* + 12.239 us  */                      }
/*              */                      _raw_spin_lock_irq() {
/*   0.833 us   */                        preempt_count_add();
/*   5.261 us   */                      }
/*              */                      deactivate_task() {
/*   1.406 us   */                        update_rq_clock.part.83();
/*              */                        dequeue_task_fair() {
/*              */                          update_curr() {
/*              */                            cpuacct_charge() {
/*   0.834 us   */                              __rcu_read_lock();
/*   0.833 us   */                              __rcu_read_unlock();
/*   9.791 us   */                            }
/* + 14.323 us  */                          }
/*   0.834 us   */                          __compute_runnable_contrib();
/*   0.833 us   */                          __compute_runnable_contrib();
/*   0.834 us   */                          clear_buddies();
/*              */                          update_cfs_shares() {
/*   0.833 us   */                            update_curr();
/*   5.416 us   */                          }
/*   0.833 us   */                          update_curr();
/*   0.834 us   */                          __compute_runnable_contrib();
/*   0.833 us   */                          __compute_runnable_contrib();
/*   0.833 us   */                          clear_buddies();
/*   1.354 us   */                          update_cfs_shares();
/*   1.354 us   */                          hrtick_update();
/* + 72.656 us  */                        }
/* + 83.073 us  */                      }
/*              */                      pick_next_task_fair() {
/*   1.354 us   */                        __rcu_read_lock();
/*   1.302 us   */                        __msecs_to_jiffies();
/*   1.302 us   */                        __rcu_read_unlock();
/* + 20.417 us  */                      }
/*              */                      pick_next_task_idle() {
/*              */                        put_prev_task_fair() {
/*   1.250 us   */                          put_prev_entity();
/*   1.302 us   */                          put_prev_entity();
/* + 14.062 us  */                        }
/* + 20.312 us  */                      }
/*              */                      __switch_to() {
/*   0.833 us   */                        fpsimd_thread_switch();
/*   0.834 us   */                        hw_breakpoint_thread_switch();
/* # 1009.688 us*/                      }
/*              */                      finish_task_switch() {
/*              */                        _raw_spin_unlock_irq() {
/*   1.302 us   */                          preempt_count_sub();
/*   8.021 us   */                        }
/* + 15.782 us  */                      }
/*   1.562 us   */                      preempt_count_sub();
/* # 1224.844 us*/                    }
/* # 1231.563 us*/                  }
/*              */                  _raw_spin_lock_irq() {
/*   1.927 us   */                    preempt_count_add();
/*   7.239 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   0.990 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/* # 1287.500 us*/                }
/* # 1293.281 us*/              }
/*   1.094 us   */              mmc_retune_release();
/* # 1307.032 us*/            }
/* # 1418.437 us*/          }
/* # 1424.375 us*/        }
/*              */        mmc_send_io_op_cond() {
/*              */          mmc_wait_for_cmd() {
/*   0.833 us   */            __init_waitqueue_head();
/*              */            mmc_start_request() {
/*   0.834 us   */              mmc_retune_hold();
/*              */              led_trigger_event() {
/*              */                _raw_read_lock() {
/*   0.989 us   */                  preempt_count_add();
/*   5.417 us   */                }
/*              */                _raw_read_unlock() {
/*   0.990 us   */                  preempt_count_sub();
/*   5.417 us   */                }
/* + 18.803 us  */              }
/*              */              __mmc_start_request() {
/*   1.041 us   */                mmc_retune();
/*              */                dw_mci_request() {
/*              */                  _raw_spin_lock_bh() {
/*   1.719 us   */                    __local_bh_disable_ip();
/*   8.489 us   */                  }
/*              */                  __dw_mci_start_request() {
/*              */                    dw_mci_prepare_command() {
/*   1.302 us   */                      dw_mci_hi6220_prepare_command();
/*   8.489 us   */                    }
/*              */                    dw_mci_start_command() {
/*   1.563 us   */                      dw_mci_wait_while_busy.isra.17();
/*   8.281 us   */                    }
/* + 29.740 us  */                  }
/*              */                  _raw_spin_unlock_bh() {
/*              */                    __local_bh_enable_ip() {
/*   1.250 us   */                      preempt_count_sub();
/*   1.459 us   */                      preempt_count_sub();
/* + 14.323 us  */                    }
/* + 20.260 us  */                  }
/* + 73.959 us  */                }
/* + 83.542 us  */              }
/* ! 115.469 us */            }
/*              */            mmc_wait_for_req_done() {
/*              */              wait_for_completion() {
/*              */                wait_for_common() {
/*              */                  _raw_spin_lock_irq() {
/*   0.990 us   */                    preempt_count_add();
/*   5.468 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   0.990 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/*              */                  schedule_timeout() {
/*              */                    schedule() {
/*   0.937 us   */                      preempt_count_add();
/*              */                      rcu_note_context_switch() {
/*   0.885 us   */                        rcu_sched_qs();
/*   0.833 us   */                        rcu_preempt_qs();
/*   9.688 us   */                      }
/*              */                      _raw_spin_lock_irq() {
/*   0.833 us   */                        preempt_count_add();
/*   5.313 us   */                      }
/*              */                      deactivate_task() {
/*   1.667 us   */                        update_rq_clock.part.83();
/*              */                        dequeue_task_fair() {
/*              */                          update_curr() {
/*              */                            cpuacct_charge() {
/*   1.302 us   */                              __rcu_read_lock();
/*   1.354 us   */                              __rcu_read_unlock();
/* + 15.521 us  */                            }
/* + 21.875 us  */                          }
/*   1.250 us   */                          clear_buddies();
/*              */                          update_cfs_shares() {
/*   1.615 us   */                            update_curr();
/*   8.489 us   */                          }
/*   1.302 us   */                          update_curr();
/*   1.302 us   */                          __compute_runnable_contrib();
/*   1.302 us   */                          __compute_runnable_contrib();
/*   1.302 us   */                          clear_buddies();
/*   0.885 us   */                          update_cfs_shares();
/*   0.833 us   */                          hrtick_update();
/* + 87.761 us  */                        }
/* + 98.489 us  */                      }
/*              */                      pick_next_task_fair() {
/*   0.834 us   */                        __rcu_read_lock();
/*   1.041 us   */                        __msecs_to_jiffies();
/*   0.833 us   */                        __rcu_read_unlock();
/* + 14.948 us  */                      }
/*              */                      pick_next_task_idle() {
/*              */                        put_prev_task_fair() {
/*   0.834 us   */                          put_prev_entity();
/*   0.834 us   */                          put_prev_entity();
/*   10.000 us  */                        }
/* + 14.636 us  */                      }
/*              */                      __switch_to() {
/*   0.781 us   */                        fpsimd_thread_switch();
/*   0.833 us   */                        hw_breakpoint_thread_switch();
/* ! 106.875 us */                      }
/*              */                      finish_task_switch() {
/*              */                        _raw_spin_unlock_irq() {
/*   0.834 us   */                          preempt_count_sub();
/*   5.312 us   */                        }
/*   9.844 us   */                      }
/*   1.042 us   */                      preempt_count_sub();
/* ! 297.395 us */                    }
/* ! 301.875 us */                  }
/*              */                  _raw_spin_lock_irq() {
/*   1.042 us   */                    preempt_count_add();
/*   5.782 us   */                  }
/*              */                  _raw_spin_unlock_irq() {
/*   0.989 us   */                    preempt_count_sub();
/*   5.469 us   */                  }
/* ! 343.177 us */                }
/* ! 347.761 us */              }
/*   0.834 us   */              mmc_retune_release();
/* ! 356.823 us */            }
/* ! 485.625 us */          }
/* ! 490.469 us */        }
/*              */        mmc_sdio_init_card() {
/*              */          mmc_send_io_op_cond() {
/*              */            mmc_wait_for_cmd() {
/*   0.833 us   */              __init_waitqueue_head();
/*              */              mmc_start_request() {
/*   1.250 us   */                mmc_retune_hold();
/*              */                led_trigger_event() {
/*              */                  _raw_read_lock() {
/*   1.458 us   */                    preempt_count_add();
/*   7.760 us   */                  }
/*              */                  _raw_read_unlock() {
/*   1.406 us   */                    preempt_count_sub();
/*   7.708 us   */                  }
/* + 26.562 us  */                }
/*              */                __mmc_start_request() {
/*   1.354 us   */                  mmc_retune();
/*              */                  dw_mci_request() {
/*              */                    _raw_spin_lock_bh() {
/*   1.666 us   */                      __local_bh_disable_ip();
/*   8.125 us   */                    }
/*              */                    __dw_mci_start_request() {
/*              */                      dw_mci_prepare_command() {
/*   0.833 us   */                        dw_mci_hi6220_prepare_command();
/*   5.417 us   */                      }
/*              */                      dw_mci_start_command() {
/*   0.781 us   */                        dw_mci_wait_while_busy.isra.17();
/*   5.572 us   */                      }
/* + 19.583 us  */                    }
/*              */                    _raw_spin_unlock_bh() {
/*              */                      __local_bh_enable_ip() {
/*   0.833 us   */                        preempt_count_sub();
/*   0.990 us   */                        preempt_count_sub();
/* + 10.052 us  */                      }
/* + 14.635 us  */                    }
/* + 56.511 us  */                  }
/* + 68.177 us  */                }
/* ! 110.938 us */              }
/*              */              mmc_wait_for_req_done() {
/*              */                wait_for_completion() {
/*              */                  wait_for_common() {
/*              */                    _raw_spin_lock_irq() {
/*   1.042 us   */                      preempt_count_add();
/*   5.677 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.937 us   */                      preempt_count_sub();
/*   5.417 us   */                    }
/*              */                    schedule_timeout() {
/*              */                      schedule() {
/*   0.989 us   */                        preempt_count_add();
/*              */                        rcu_note_context_switch() {
/*   1.093 us   */                          rcu_sched_qs();
/*   1.302 us   */                          rcu_preempt_qs();
/* + 12.708 us  */                        }
/*              */                        _raw_spin_lock_irq() {
/*   1.302 us   */                          preempt_count_add();
/*   7.657 us   */                        }
/*              */                        deactivate_task() {
/*   2.344 us   */                          update_rq_clock.part.83();
/*              */                          dequeue_task_fair() {
/*              */                            update_curr() {
/*              */                              cpuacct_charge() {
/*   1.302 us   */                                __rcu_read_lock();
/*   1.354 us   */                                __rcu_read_unlock();
/* + 14.166 us  */                              }
/* + 20.521 us  */                            }
/*   0.834 us   */                            clear_buddies();
/*              */                            update_cfs_shares() {
/*   0.886 us   */                              update_curr();
/*   5.416 us   */                            }
/*   0.833 us   */                            update_curr();
/*   0.834 us   */                            clear_buddies();
/*   0.885 us   */                            update_cfs_shares();
/*   0.833 us   */                            hrtick_update();
/* + 59.271 us  */                          }
/* + 72.083 us  */                        }
/*              */                        pick_next_task_fair() {
/*   0.834 us   */                          __rcu_read_lock();
/*   0.833 us   */                          __msecs_to_jiffies();
/*   0.833 us   */                          __rcu_read_unlock();
/* + 14.166 us  */                        }
/*              */                        pick_next_task_idle() {
/*              */                          put_prev_task_fair() {
/*   0.833 us   */                            put_prev_entity();
/*   0.833 us   */                            put_prev_entity();
/*   9.792 us   */                          }
/* + 14.271 us  */                        }
/*              */                        __switch_to() {
/*   0.834 us   */                          fpsimd_thread_switch();
/*   0.834 us   */                          hw_breakpoint_thread_switch();
/* ! 729.062 us */                        }
/*              */                        finish_task_switch() {
/*              */                          _raw_spin_unlock_irq() {
/*   0.833 us   */                            preempt_count_sub();
/*   6.355 us   */                          }
/* + 12.968 us  */                        }
/*   1.041 us   */                        preempt_count_sub();
/* ! 913.802 us */                      }
/* ! 918.750 us */                    }
/*              */                    _raw_spin_lock_irq() {
/*   1.510 us   */                      preempt_count_add();
/*   5.938 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.469 us   */                    }
/* ! 962.864 us */                  }
/* ! 967.708 us */                }
/*   1.042 us   */                mmc_retune_release();
/* ! 977.709 us */              }
/* # 1101.302 us*/            }
/* # 1106.459 us*/          }
/*              */          mmc_alloc_card() {
/*              */            kmem_cache_alloc_trace() {
/*              */              cache_alloc_refill() {
/*              */                _raw_spin_lock() {
/*   1.042 us   */                  preempt_count_add();
/*   9.011 us   */                }
/*              */                _raw_spin_unlock() {
/*   1.458 us   */                  preempt_count_sub();
/*   6.979 us   */                }
/* + 30.625 us  */              }
/* + 39.323 us  */            }
/*              */            device_initialize() {
/*   1.510 us   */              __mutex_init();
/*              */              device_pm_sleep_init() {
/*   1.302 us   */                __init_waitqueue_head();
/*              */                complete_all() {
/*              */                  _raw_spin_lock_irqsave() {
/*   1.458 us   */                    preempt_count_add();
/*   7.761 us   */                  }
/*              */                  __wake_up_locked() {
/*   1.302 us   */                    __wake_up_common();
/*   7.656 us   */                  }
/*              */                  _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                    preempt_count_sub();
/*   5.468 us   */                  }
/* + 36.198 us  */                }
/* + 48.333 us  */              }
/*              */              pm_runtime_init() {
/*   0.990 us   */                init_timer_key();
/*   0.781 us   */                __init_waitqueue_head();
/* + 10.156 us  */              }
/* + 75.052 us  */            }
/* ! 124.739 us */          }
/*   1.198 us   */          dw_mci_init_card();
/*              */          mmc_send_relative_addr() {
/*              */            mmc_wait_for_cmd() {
/*   0.781 us   */              __init_waitqueue_head();
/*              */              mmc_start_request() {
/*   0.781 us   */                mmc_retune_hold();
/*              */                led_trigger_event() {
/*              */                  _raw_read_lock() {
/*   0.990 us   */                    preempt_count_add();
/*   5.469 us   */                  }
/*              */                  _raw_read_unlock() {
/*   0.937 us   */                    preempt_count_sub();
/*   5.417 us   */                  }
/* + 18.906 us  */                }
/*              */                __mmc_start_request() {
/*   1.093 us   */                  mmc_retune();
/*              */                  dw_mci_request() {
/*              */                    _raw_spin_lock_bh() {
/*   1.719 us   */                      __local_bh_disable_ip();
/*   8.645 us   */                    }
/*              */                    __dw_mci_start_request() {
/*              */                      dw_mci_prepare_command() {
/*   1.302 us   */                        dw_mci_hi6220_prepare_command();
/*   8.541 us   */                      }
/*              */                      dw_mci_start_command() {
/*   1.511 us   */                        dw_mci_wait_while_busy.isra.17();
/*   8.177 us   */                      }
/* + 29.792 us  */                    }
/*              */                    _raw_spin_unlock_bh() {
/*              */                      __local_bh_enable_ip() {
/*   1.250 us   */                        preempt_count_sub();
/*   1.406 us   */                        preempt_count_sub();
/* + 13.854 us  */                      }
/* + 19.739 us  */                    }
/* + 73.959 us  */                  }
/* + 83.177 us  */                }
/* ! 115.208 us */              }
/*              */              mmc_wait_for_req_done() {
/*              */                wait_for_completion() {
/*              */                  wait_for_common() {
/*              */                    _raw_spin_lock_irq() {
/*   0.989 us   */                      preempt_count_add();
/*   5.417 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.990 us   */                      preempt_count_sub();
/*   5.416 us   */                    }
/*              */                    schedule_timeout() {
/*              */                      schedule() {
/*   1.042 us   */                        preempt_count_add();
/*              */                        rcu_note_context_switch() {
/*   0.885 us   */                          rcu_sched_qs();
/*   0.885 us   */                          rcu_preempt_qs();
/* + 12.448 us  */                        }
/*              */                        _raw_spin_lock_irq() {
/*   0.834 us   */                          preempt_count_add();
/*   5.312 us   */                        }
/*              */                        deactivate_task() {
/*   1.666 us   */                          update_rq_clock.part.83();
/*              */                          dequeue_task_fair() {
/*              */                            update_curr() {
/*              */                              cpuacct_charge() {
/*   1.302 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __rcu_read_unlock();
/* + 16.146 us  */                              }
/* + 23.437 us  */                            }
/*   1.250 us   */                            clear_buddies();
/*              */                            update_cfs_shares() {
/*   1.563 us   */                              update_curr();
/*   8.489 us   */                            }
/*   1.250 us   */                            update_curr();
/*   1.250 us   */                            clear_buddies();
/*   1.354 us   */                            update_cfs_shares();
/*   0.834 us   */                            hrtick_update();
/* + 75.104 us  */                          }
/* + 85.833 us  */                        }
/*              */                        pick_next_task_fair() {
/*   0.833 us   */                          __rcu_read_lock();
/*   0.989 us   */                          __msecs_to_jiffies();
/*   0.834 us   */                          __rcu_read_unlock();
/* + 15.417 us  */                        }
/*              */                        pick_next_task_idle() {
/*              */                          put_prev_task_fair() {
/*   0.781 us   */                            put_prev_entity();
/*   0.833 us   */                            put_prev_entity();
/*   9.843 us   */                          }
/* + 14.479 us  */                        }
/*              */                        __switch_to() {
/*   0.833 us   */                          fpsimd_thread_switch();
/*   0.834 us   */                          hw_breakpoint_thread_switch();
/* ! 107.448 us */                        }
/*              */                        finish_task_switch() {
/*              */                          _raw_spin_unlock_irq() {
/*   0.834 us   */                            preempt_count_sub();
/*   5.364 us   */                          }
/* + 10.156 us  */                        }
/*   1.042 us   */                        preempt_count_sub();
/* ! 289.427 us */                      }
/* ! 293.855 us */                    }
/*              */                    _raw_spin_lock_irq() {
/*   0.990 us   */                      preempt_count_add();
/*   5.521 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.521 us   */                    }
/* ! 334.792 us */                  }
/* ! 339.428 us */                }
/*   0.834 us   */                mmc_retune_release();
/* ! 348.594 us */              }
/* ! 476.771 us */            }
/* ! 481.563 us */          }
/*              */          mmc_select_card() {
/*              */            mmc_wait_for_cmd() {
/*   0.781 us   */              __init_waitqueue_head();
/*              */              mmc_start_request() {
/*   0.833 us   */                mmc_retune_hold();
/*              */                led_trigger_event() {
/*              */                  _raw_read_lock() {
/*   1.510 us   */                    preempt_count_add();
/*   7.395 us   */                  }
/*              */                  _raw_read_unlock() {
/*   1.458 us   */                    preempt_count_sub();
/*   7.657 us   */                  }
/* + 25.364 us  */                }
/*              */                __mmc_start_request() {
/*   1.302 us   */                  mmc_retune();
/*              */                  dw_mci_request() {
/*              */                    _raw_spin_lock_bh() {
/*   1.615 us   */                      __local_bh_disable_ip();
/*   8.021 us   */                    }
/*              */                    __dw_mci_start_request() {
/*              */                      dw_mci_prepare_command() {
/*   1.302 us   */                        dw_mci_hi6220_prepare_command();
/*   7.657 us   */                      }
/*              */                      dw_mci_start_command() {
/*   0.781 us   */                        dw_mci_wait_while_busy.isra.17();
/*   5.572 us   */                      }
/* + 22.396 us  */                    }
/*              */                    _raw_spin_unlock_bh() {
/*              */                      __local_bh_enable_ip() {
/*   0.833 us   */                        preempt_count_sub();
/*   1.042 us   */                        preempt_count_sub();
/* + 10.104 us  */                      }
/* + 14.531 us  */                    }
/* + 59.010 us  */                  }
/* + 70.677 us  */                }
/* ! 113.073 us */              }
/*              */              mmc_wait_for_req_done() {
/*              */                wait_for_completion() {
/*              */                  wait_for_common() {
/*              */                    _raw_spin_lock_irq() {
/*   0.989 us   */                      preempt_count_add();
/*   5.417 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*   0.990 us   */                      preempt_count_sub();
/*   5.469 us   */                    }
/*              */                    schedule_timeout() {
/*              */                      schedule() {
/*   0.990 us   */                        preempt_count_add();
/*              */                        rcu_note_context_switch() {
/*   0.886 us   */                          rcu_sched_qs();
/*   0.833 us   */                          rcu_preempt_qs();
/*   9.739 us   */                        }
/*              */                        _raw_spin_lock_irq() {
/*   1.302 us   */                          preempt_count_add();
/*   7.656 us   */                        }
/*              */                        deactivate_task() {
/*   2.292 us   */                          update_rq_clock.part.83();
/*              */                          dequeue_task_fair() {
/*              */                            update_curr() {
/*              */                              cpuacct_charge() {
/*   1.302 us   */                                __rcu_read_lock();
/*   1.354 us   */                                __rcu_read_unlock();
/* + 14.219 us  */                              }
/* + 20.521 us  */                            }
/*   1.302 us   */                            __compute_runnable_contrib();
/*   1.250 us   */                            clear_buddies();
/*              */                            update_cfs_shares() {
/*   0.833 us   */                              update_curr();
/*   5.364 us   */                            }
/*   0.834 us   */                            update_curr();
/*   0.833 us   */                            clear_buddies();
/*   0.886 us   */                            update_cfs_shares();
/*   0.833 us   */                            hrtick_update();
/* + 67.812 us  */                          }
/* + 80.834 us  */                        }
/*              */                        pick_next_task_fair() {
/*   0.834 us   */                          __rcu_read_lock();
/*   0.782 us   */                          __msecs_to_jiffies();
/*   0.834 us   */                          __rcu_read_unlock();
/* + 14.167 us  */                        }
/*              */                        pick_next_task_idle() {
/*              */                          put_prev_task_fair() {
/*   0.834 us   */                            put_prev_entity();
/*   0.834 us   */                            put_prev_entity();
/*   9.739 us   */                          }
/* + 14.167 us  */                        }
/*              */                        __switch_to() {
/*   0.833 us   */                          fpsimd_thread_switch();
/*   0.833 us   */                          hw_breakpoint_thread_switch();
/* ! 731.719 us */                        }
/*              */                        finish_task_switch() {
/*              */                          _raw_spin_unlock_irq() {
/*   1.302 us   */                            preempt_count_sub();
/*   6.875 us   */                          }
/* + 13.542 us  */                        }
/*   1.302 us   */                        preempt_count_sub();
/* ! 922.187 us */                      }
/* ! 927.031 us */                    }
/*              */                    _raw_spin_lock_irq() {
/*   1.563 us   */                      preempt_count_add();
/*   6.042 us   */                    }
/*              */                    _raw_spin_unlock_irq() {
/*              */                      preempt_count_sub() {
/*   ==========>*/
/*              */                        gic_handle_irq() {
/*              */                          __handle_domain_irq() {
/*              */                            irq_enter() {
/*   0.938 us   */                              rcu_irq_enter();
/*   0.833 us   */                              preempt_count_add();
/* + 10.364 us  */                            }
/*   1.094 us   */                            irq_find_mapping();
/*              */                            generic_handle_irq() {
/*              */                              handle_percpu_devid_irq() {
/*              */                                arch_timer_handler_phys() {
/*              */                                  hrtimer_interrupt() {
/*              */                                    _raw_spin_lock() {
/*   0.833 us   */                                      preempt_count_add();
/*   5.313 us   */                                    }
/*              */                                    ktime_get_update_offsets_now() {
/*   0.834 us   */                                      arch_counter_read();
/*   5.729 us   */                                    }
/*              */                                    __hrtimer_run_queues() {
/*   1.459 us   */                                      __remove_hrtimer();
/*              */                                      _raw_spin_unlock() {
/*   1.302 us   */                                        preempt_count_sub();
/*   7.500 us   */                                      }
/*              */                                      tick_sched_timer() {
/*              */                                        ktime_get() {
/*   1.459 us   */                                          arch_counter_read();
/*   7.709 us   */                                        }
/*              */                                        tick_do_update_jiffies64() {
/*              */                                          _raw_spin_lock() {
/*   1.250 us   */                                            preempt_count_add();
/*   8.125 us   */                                          }
/*              */                                          do_timer() {
/*   1.563 us   */                                            calc_global_load();
/*   7.864 us   */                                          }
/*              */                                          _raw_spin_unlock() {
/*   0.833 us   */                                            preempt_count_sub();
/*   5.261 us   */                                          }
/*              */                                          update_wall_time() {
/*              */                                            _raw_spin_lock_irqsave() {
/*   0.834 us   */                                              preempt_count_add();
/*   5.468 us   */                                            }
/*   0.833 us   */                                            arch_counter_read();
/*   1.042 us   */                                            ntp_tick_length();
/*   0.833 us   */                                            ntp_tick_length();
/*   0.833 us   */                                            ntp_tick_length();
/*              */                                            timekeeping_update() {
/*   1.042 us   */                                              ntp_get_next_leap();
/*   1.927 us   */                                              update_vsyscall();
/*   1.094 us   */                                              raw_notifier_call_chain();
/*   1.042 us   */                                              update_fast_timekeeper();
/* + 21.823 us  */                                            }
/*              */                                            _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                              preempt_count_sub();
/*   5.312 us   */                                            }
/* + 66.094 us  */                                          }
/* ! 105.521 us */                                        }
/*              */                                        update_process_times() {
/*              */                                          account_process_tick() {
/*              */                                            account_system_time() {
/*              */                                              cpuacct_account_field() {
/*   1.354 us   */                                                __rcu_read_lock();
/*   1.303 us   */                                                __rcu_read_unlock();
/* + 16.146 us  */                                              }
/*              */                                              acct_account_cputime() {
/*              */                                                __acct_update_integrals() {
/*   1.666 us   */                                                  jiffies_to_timeval();
/*   9.323 us   */                                                }
/* + 20.000 us  */                                              }
/* + 49.114 us  */                                            }
/* + 55.781 us  */                                          }
/*   1.354 us   */                                          hrtimer_run_queues();
/*              */                                          raise_softirq() {
/*   0.885 us   */                                            __raise_softirq_irqoff();
/*   5.521 us   */                                          }
/*              */                                          rcu_check_callbacks() {
/*   0.885 us   */                                            rcu_bh_qs();
/*   0.833 us   */                                            rcu_preempt_qs();
/*   1.198 us   */                                            cpu_needs_another_gp();
/*   1.146 us   */                                            cpu_needs_another_gp();
/*   1.198 us   */                                            cpu_needs_another_gp();
/* + 28.855 us  */                                          }
/*              */                                          scheduler_tick() {
/*              */                                            _raw_spin_lock() {
/*   0.833 us   */                                              preempt_count_add();
/*   5.417 us   */                                            }
/*   1.667 us   */                                            update_rq_clock.part.83();
/*              */                                            task_tick_fair() {
/*              */                                              update_curr() {
/*              */                                                cpuacct_charge() {
/*   0.781 us   */                                                  __rcu_read_lock();
/*   0.833 us   */                                                  __rcu_read_unlock();
/* + 10.625 us  */                                                }
/* + 15.677 us  */                                              }
/*   1.303 us   */                                              __compute_runnable_contrib();
/*   1.302 us   */                                              __compute_runnable_contrib();
/*              */                                              update_cfs_shares() {
/*   1.562 us   */                                                update_curr();
/*   8.906 us   */                                              }
/*   1.563 us   */                                              hrtimer_active();
/*   1.302 us   */                                              update_curr();
/*   1.354 us   */                                              update_cfs_shares();
/*   1.250 us   */                                              hrtimer_active();
/* + 76.458 us  */                                            }
/*              */                                            update_cpu_load_active() {
/*              */                                              __update_cpu_load() {
/*   0.833 us   */                                                sched_avg_update();
/*   6.771 us   */                                              }
/* + 12.448 us  */                                            }
/*   1.093 us   */                                            calc_global_load_tick();
/*              */                                            _raw_spin_unlock() {
/*   0.833 us   */                                              preempt_count_sub();
/*   5.261 us   */                                            }
/*              */                                            trigger_load_balance() {
/*              */                                              raise_softirq() {
/*   0.834 us   */                                                __raise_softirq_irqoff();
/*   5.364 us   */                                              }
/*   0.833 us   */                                              __rcu_read_lock();
/*   0.834 us   */                                              __rcu_read_unlock();
/*   0.833 us   */                                              __rcu_read_lock();
/*   0.833 us   */                                              __rcu_read_unlock();
/* + 29.791 us  */                                            }
/* ! 161.459 us */                                          }
/*   1.302 us   */                                          run_posix_cpu_timers();
/* ! 282.188 us */                                        }
/*   1.302 us   */                                        profile_tick();
/*   1.146 us   */                                        hrtimer_forward();
/* ! 420.729 us */                                      }
/*              */                                      _raw_spin_lock() {
/*   0.834 us   */                                        preempt_count_add();
/*   5.312 us   */                                      }
/*   1.458 us   */                                      enqueue_hrtimer();
/* ! 462.656 us */                                    }
/*   1.302 us   */                                    __hrtimer_get_next_event();
/*              */                                    _raw_spin_unlock() {
/*   1.250 us   */                                      preempt_count_sub();
/*   7.656 us   */                                    }
/*              */                                    tick_program_event() {
/*              */                                      clockevents_program_event() {
/*              */                                        ktime_get() {
/*   1.354 us   */                                          arch_counter_read();
/*   7.552 us   */                                        }
/*   1.250 us   */                                        arch_timer_set_next_event_phys();
/* + 20.104 us  */                                      }
/* + 26.458 us  */                                    }
/* ! 542.084 us */                                  }
/* ! 547.604 us */                                }
/*   0.885 us   */                                gic_eoimode1_eoi_irq();
/* ! 557.500 us */                              }
/* ! 562.760 us */                            }
/*              */                            irq_exit() {
/*   0.833 us   */                              preempt_count_sub();
/*              */                              __do_softirq() {
/*   0.833 us   */                                __local_bh_disable_ip();
/*              */                                run_timer_softirq() {
/*              */                                  _raw_spin_lock_irq() {
/*   0.834 us   */                                    preempt_count_add();
/*   5.312 us   */                                  }
/*              */                                  _raw_spin_unlock_irq() {
/*   0.834 us   */                                    preempt_count_sub();
/*   5.260 us   */                                  }
/* + 19.635 us  */                                }
/*              */                                run_rebalance_domains() {
/*              */                                  rebalance_domains() {
/*              */                                    update_blocked_averages() {
/*              */                                      _raw_spin_lock_irqsave() {
/*   0.833 us   */                                        preempt_count_add();
/*   5.312 us   */                                      }
/*   1.407 us   */                                      update_rq_clock();
/*   1.094 us   */                                      __compute_runnable_contrib();
/*   0.834 us   */                                      __compute_runnable_contrib();
/*              */                                      _raw_spin_unlock_irqrestore() {
/*   1.250 us   */                                        preempt_count_sub();
/*   7.552 us   */                                      }
/* + 39.219 us  */                                    }
/*   1.302 us   */                                    __rcu_read_lock();
/*   1.563 us   */                                    __msecs_to_jiffies();
/*   1.250 us   */                                    __msecs_to_jiffies();
/*   1.250 us   */                                    __rcu_read_unlock();
/* + 71.667 us  */                                  }
/* + 77.865 us  */                                }
/*   1.354 us   */                                rcu_bh_qs();
/*              */                                __local_bh_enable() {
/*   1.303 us   */                                  preempt_count_sub();
/*   7.604 us   */                                }
/* ! 131.458 us */                              }
/*   0.833 us   */                              idle_cpu();
/*   0.937 us   */                              rcu_irq_exit();
/* ! 149.844 us */                            }
/* ! 739.427 us */                          }
/* ! 744.011 us */                        }
/*   <==========*/
/*   0.989 us   */                      }
/* ! 753.698 us */                    }
/* # 1716.927 us*/                  }
/* # 1721.979 us*/                }
/*   1.093 us   */                mmc_retune_release();
/* # 1732.239 us*/              }
/* # 1858.073 us*/            }
/* # 1863.125 us*/          }
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   0.833 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   0.782 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   1.094 us   */                      preempt_count_add();
/*   7.813 us   */                    }
/*              */                    _raw_read_unlock() {
/*   1.042 us   */                      preempt_count_sub();
/*   5.573 us   */                    }
/* + 21.355 us  */                  }
/*              */                  __mmc_start_request() {
/*   1.563 us   */                    mmc_retune();
/*   1.562 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.667 us   */                        __local_bh_disable_ip();
/*   7.968 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   1.198 us   */                          dw_mci_hi6220_prepare_command();
/*   8.385 us   */                        }
/*              */                        dw_mci_start_command() {
/*   1.458 us   */                          dw_mci_wait_while_busy.isra.17();
/*   8.229 us   */                        }
/* + 29.427 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   0.833 us   */                          preempt_count_sub();
/*   1.042 us   */                          preempt_count_sub();
/* + 10.313 us  */                        }
/* + 15.208 us  */                      }
/* + 67.968 us  */                    }
/* + 87.188 us  */                  }
/* ! 122.240 us */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   0.989 us   */                        preempt_count_add();
/*   5.677 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.937 us   */                        preempt_count_sub();
/*   5.417 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   0.938 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   0.834 us   */                            rcu_sched_qs();
/*   0.886 us   */                            rcu_preempt_qs();
/*   9.739 us   */                          }
/*              */                          _raw_spin_lock_irq() {
/*   0.833 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          deactivate_task() {
/*   2.395 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   1.302 us   */                                  __rcu_read_lock();
/*   1.354 us   */                                  __rcu_read_unlock();
/* + 14.063 us  */                                }
/* + 20.417 us  */                              }
/*   1.355 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   1.354 us   */                                update_curr();
/*   7.812 us   */                              }
/*   1.302 us   */                              update_curr();
/*   0.833 us   */                              __compute_runnable_contrib();
/*   0.781 us   */                              __compute_runnable_contrib();
/*   0.834 us   */                              clear_buddies();
/*   0.885 us   */                              update_cfs_shares();
/*   0.833 us   */                              hrtick_update();
/* + 79.323 us  */                            }
/* + 92.917 us  */                          }
/*              */                          pick_next_task_fair() {
/*   0.833 us   */                            __rcu_read_lock();
/*   0.781 us   */                            __msecs_to_jiffies();
/*   0.833 us   */                            __rcu_read_unlock();
/* + 14.896 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   0.834 us   */                              put_prev_entity();
/*   0.834 us   */                              put_prev_entity();
/*   9.948 us   */                            }
/* + 14.583 us  */                          }
/*              */                          __switch_to() {
/*   0.781 us   */                            fpsimd_thread_switch();
/*   0.834 us   */                            hw_breakpoint_thread_switch();
/* ! 107.813 us */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   0.886 us   */                              preempt_count_sub();
/*   5.469 us   */                            }
/* + 10.052 us  */                          }
/*   1.042 us   */                          preempt_count_sub();
/* ! 295.468 us */                        }
/* ! 299.896 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   1.042 us   */                        preempt_count_add();
/*   5.573 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.989 us   */                        preempt_count_sub();
/*   5.469 us   */                      }
/* ! 341.041 us */                    }
/* ! 345.730 us */                  }
/*   0.834 us   */                  mmc_retune_release();
/* ! 354.844 us */                }
/* ! 490.781 us */              }
/* ! 496.041 us */            }
/* ! 500.834 us */          }
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   1.302 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   1.302 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   1.459 us   */                      preempt_count_add();
/*   7.761 us   */                    }
/*              */                    _raw_read_unlock() {
/*   1.458 us   */                      preempt_count_sub();
/*   7.760 us   */                    }
/* + 26.979 us  */                  }
/*              */                  __mmc_start_request() {
/*   1.250 us   */                    mmc_retune();
/*   1.042 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.146 us   */                        __local_bh_disable_ip();
/*   5.573 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   0.782 us   */                          dw_mci_hi6220_prepare_command();
/*   5.312 us   */                        }
/*              */                        dw_mci_start_command() {
/*   0.833 us   */                          dw_mci_wait_while_busy.isra.17();
/*   5.573 us   */                        }
/* + 18.958 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   0.834 us   */                          preempt_count_sub();
/*   0.989 us   */                          preempt_count_sub();
/* + 10.416 us  */                        }
/* + 15.000 us  */                      }
/* + 51.146 us  */                    }
/* + 66.563 us  */                  }
/* ! 110.104 us */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   0.990 us   */                        preempt_count_add();
/*   5.468 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.937 us   */                        preempt_count_sub();
/*   6.406 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   1.458 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   1.302 us   */                            rcu_sched_qs();
/*   1.302 us   */                            rcu_preempt_qs();
/* + 13.907 us  */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.302 us   */                            preempt_count_add();
/*   7.656 us   */                          }
/*              */                          deactivate_task() {
/*   2.344 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   0.781 us   */                                  __rcu_read_lock();
/*   0.833 us   */                                  __rcu_read_unlock();
/*   9.844 us   */                                }
/* + 14.323 us  */                              }
/*   0.834 us   */                              __compute_runnable_contrib();
/*   0.833 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   0.885 us   */                                update_curr();
/*   5.573 us   */                              }
/*   0.833 us   */                              update_curr();
/*   0.833 us   */                              clear_buddies();
/*   0.886 us   */                              update_cfs_shares();
/*   0.834 us   */                              hrtick_update();
/* + 55.625 us  */                            }
/* + 68.385 us  */                          }
/*              */                          pick_next_task_fair() {
/*   0.833 us   */                            __rcu_read_lock();
/*   0.833 us   */                            __msecs_to_jiffies();
/*   0.833 us   */                            __rcu_read_unlock();
/* + 14.063 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   0.781 us   */                              put_prev_entity();
/*   1.302 us   */                              put_prev_entity();
/* + 11.979 us  */                            }
/* + 17.292 us  */                          }
/*              */                          __switch_to() {
/*   1.250 us   */                            fpsimd_thread_switch();
/*   1.302 us   */                            hw_breakpoint_thread_switch();
/* ! 703.438 us */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   0.834 us   */                              preempt_count_sub();
/*   5.521 us   */                            }
/* + 12.291 us  */                          }
/*   1.041 us   */                          preempt_count_sub();
/* ! 892.708 us */                        }
/* ! 898.541 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   1.563 us   */                        preempt_count_add();
/*   6.042 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.990 us   */                        preempt_count_sub();
/*   5.677 us   */                      }
/* ! 946.562 us */                    }
/* ! 951.198 us */                  }
/*   1.041 us   */                  mmc_retune_release();
/* ! 960.937 us */                }
/* # 1086.823 us*/              }
/* # 1092.709 us*/            }
/* # 1098.281 us*/          }
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   0.833 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   0.833 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   1.459 us   */                      preempt_count_add();
/* + 11.823 us  */                    }
/*              */                    _raw_read_unlock() {
/*   1.459 us   */                      preempt_count_sub();
/*   7.656 us   */                    }
/* + 29.948 us  */                  }
/*              */                  __mmc_start_request() {
/*   1.563 us   */                    mmc_retune();
/*   1.458 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.667 us   */                        __local_bh_disable_ip();
/*   8.385 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   0.782 us   */                          dw_mci_hi6220_prepare_command();
/*   6.354 us   */                        }
/*              */                        dw_mci_start_command() {
/*   0.990 us   */                          dw_mci_wait_while_busy.isra.17();
/*   5.782 us   */                        }
/* + 21.979 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   0.834 us   */                          preempt_count_sub();
/*   0.989 us   */                          preempt_count_sub();
/* + 10.469 us  */                        }
/* + 15.260 us  */                      }
/* + 60.053 us  */                    }
/* + 79.271 us  */                  }
/* ! 124.115 us */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   0.989 us   */                        preempt_count_add();
/*   5.469 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.990 us   */                        preempt_count_sub();
/*   5.364 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   0.990 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   1.355 us   */                            rcu_sched_qs();
/*   1.354 us   */                            rcu_preempt_qs();
/* + 13.542 us  */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.302 us   */                            preempt_count_add();
/*   7.552 us   */                          }
/*              */                          deactivate_task() {
/*   2.604 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   1.250 us   */                                  __rcu_read_lock();
/*   1.303 us   */                                  __rcu_read_unlock();
/* + 16.145 us  */                                }
/* + 23.334 us  */                              }
/*   0.833 us   */                              __compute_runnable_contrib();
/*   0.781 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   1.146 us   */                                update_curr();
/*   6.354 us   */                              }
/*   0.834 us   */                              update_curr();
/*   0.781 us   */                              clear_buddies();
/*   0.833 us   */                              update_cfs_shares();
/*   0.833 us   */                              hrtick_update();
/* + 69.375 us  */                            }
/* + 83.281 us  */                          }
/*              */                          pick_next_task_fair() {
/*   0.834 us   */                            __rcu_read_lock();
/*   1.041 us   */                            __msecs_to_jiffies();
/*   0.833 us   */                            __rcu_read_unlock();
/* + 15.104 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   0.833 us   */                              put_prev_entity();
/*   0.781 us   */                              put_prev_entity();
/* + 10.312 us  */                            }
/* + 15.938 us  */                          }
/*              */                          __switch_to() {
/*   1.302 us   */                            fpsimd_thread_switch();
/*   1.354 us   */                            hw_breakpoint_thread_switch();
/* ! 110.729 us */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   0.886 us   */                              preempt_count_sub();
/*   5.573 us   */                            }
/* + 10.208 us  */                          }
/*   1.041 us   */                          preempt_count_sub();
/* ! 301.250 us */                        }
/* ! 305.677 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   0.989 us   */                        preempt_count_add();
/*   5.469 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   1.458 us   */                        preempt_count_sub();
/*   7.812 us   */                      }
/* ! 350.364 us */                    }
/* ! 355.990 us */                  }
/*   1.250 us   */                  mmc_retune_release();
/* ! 367.813 us */                }
/* ! 505.886 us */              }
/* ! 511.511 us */            }
/* ! 516.980 us */          }
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   1.250 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   1.250 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   0.990 us   */                      preempt_count_add();
/*   5.416 us   */                    }
/*              */                    _raw_read_unlock() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.469 us   */                    }
/* + 19.114 us  */                  }
/*              */                  __mmc_start_request() {
/*   0.834 us   */                    mmc_retune();
/*   0.989 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.094 us   */                        __local_bh_disable_ip();
/*   5.573 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   0.834 us   */                          dw_mci_hi6220_prepare_command();
/*   5.365 us   */                        }
/*              */                        dw_mci_start_command() {
/*   0.833 us   */                          dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                        }
/* + 19.115 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   0.833 us   */                          preempt_count_sub();
/*   0.990 us   */                          preempt_count_sub();
/* + 10.052 us  */                        }
/* + 14.635 us  */                      }
/* + 51.094 us  */                    }
/* + 64.739 us  */                  }
/* + 99.844 us  */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   1.458 us   */                        preempt_count_add();
/*   7.916 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   1.458 us   */                        preempt_count_sub();
/*   7.709 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   1.459 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   1.354 us   */                            rcu_sched_qs();
/*   0.886 us   */                            rcu_preempt_qs();
/* + 12.083 us  */                          }
/*              */                          _raw_spin_lock_irq() {
/*   0.833 us   */                            preempt_count_add();
/*   5.313 us   */                          }
/*              */                          deactivate_task() {
/*   1.406 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   0.782 us   */                                  __rcu_read_lock();
/*   0.833 us   */                                  __rcu_read_unlock();
/*   9.896 us   */                                }
/* + 14.427 us  */                              }
/*   0.834 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   0.833 us   */                                update_curr();
/*   5.364 us   */                              }
/*   0.833 us   */                              update_curr();
/*   0.833 us   */                              __compute_runnable_contrib();
/*   0.833 us   */                              __compute_runnable_contrib();
/*   0.781 us   */                              clear_buddies();
/*   0.886 us   */                              update_cfs_shares();
/*   0.834 us   */                              hrtick_update();
/* + 60.781 us  */                            }
/* + 71.250 us  */                          }
/*              */                          pick_next_task_fair() {
/*   1.354 us   */                            __rcu_read_lock();
/*   1.302 us   */                            __msecs_to_jiffies();
/*   1.354 us   */                            __rcu_read_unlock();
/* + 20.364 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   1.303 us   */                              put_prev_entity();
/*   1.302 us   */                              put_prev_entity();
/* + 14.167 us  */                            }
/* + 20.417 us  */                          }
/*              */                          __switch_to() {
/*   1.354 us   */                            fpsimd_thread_switch();
/*   0.834 us   */                            hw_breakpoint_thread_switch();
/* ! 689.062 us */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   1.302 us   */                              preempt_count_sub();
/*   7.813 us   */                            }
/* + 15.625 us  */                          }
/*   1.562 us   */                          preempt_count_sub();
/* ! 895.364 us */                        }
/* ! 902.031 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   1.563 us   */                        preempt_count_add();
/*   6.302 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.938 us   */                        preempt_count_sub();
/*   5.417 us   */                      }
/* ! 954.114 us */                    }
/* ! 959.688 us */                  }
/*   1.042 us   */                  mmc_retune_release();
/* ! 970.781 us */                }
/* # 1087.500 us*/              }
/* # 1093.438 us*/            }
/*   ==========>*/
/*              */            gic_handle_irq() {
/*              */              __handle_domain_irq() {
/*              */                irq_enter() {
/*   0.937 us   */                  rcu_irq_enter();
/*   1.042 us   */                  preempt_count_add();
/* + 10.521 us  */                }
/*   1.094 us   */                irq_find_mapping();
/*              */                generic_handle_irq() {
/*              */                  handle_percpu_devid_irq() {
/*              */                    arch_timer_handler_phys() {
/*              */                      hrtimer_interrupt() {
/*              */                        _raw_spin_lock() {
/*   0.833 us   */                          preempt_count_add();
/*   5.261 us   */                        }
/*              */                        ktime_get_update_offsets_now() {
/*   1.303 us   */                          arch_counter_read();
/*   7.865 us   */                        }
/*              */                        __hrtimer_run_queues() {
/*   1.407 us   */                          __remove_hrtimer();
/*              */                          _raw_spin_unlock() {
/*   1.302 us   */                            preempt_count_sub();
/*   8.021 us   */                          }
/*              */                          tick_sched_timer() {
/*              */                            ktime_get() {
/*   1.250 us   */                              arch_counter_read();
/*   7.916 us   */                            }
/*              */                            tick_do_update_jiffies64() {
/*              */                              _raw_spin_lock() {
/*   1.354 us   */                                preempt_count_add();
/*   8.125 us   */                              }
/*              */                              do_timer() {
/*   1.041 us   */                                calc_global_load();
/*   5.781 us   */                              }
/*              */                              _raw_spin_unlock() {
/*   0.782 us   */                                preempt_count_sub();
/*   5.208 us   */                              }
/*              */                              update_wall_time() {
/*              */                                _raw_spin_lock_irqsave() {
/*   0.834 us   */                                  preempt_count_add();
/*   5.782 us   */                                }
/*   0.833 us   */                                arch_counter_read();
/*   0.990 us   */                                ntp_tick_length();
/*   0.833 us   */                                ntp_tick_length();
/*   0.782 us   */                                ntp_tick_length();
/*              */                                timekeeping_update() {
/*   1.042 us   */                                  ntp_get_next_leap();
/*   2.240 us   */                                  update_vsyscall();
/*   1.250 us   */                                  raw_notifier_call_chain();
/*   1.094 us   */                                  update_fast_timekeeper();
/* + 22.500 us  */                                }
/*              */                                _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.313 us   */                                }
/* + 68.698 us  */                              }
/* ! 106.771 us */                            }
/*              */                            update_process_times() {
/*              */                              account_process_tick() {
/*              */                                account_system_time() {
/*              */                                  cpuacct_account_field() {
/*   1.250 us   */                                    __rcu_read_lock();
/*   1.302 us   */                                    __rcu_read_unlock();
/* + 15.677 us  */                                  }
/*              */                                  acct_account_cputime() {
/*              */                                    __acct_update_integrals() {
/*   1.510 us   */                                      jiffies_to_timeval();
/*   8.854 us   */                                    }
/* + 15.261 us  */                                  }
/* + 43.490 us  */                                }
/* + 50.416 us  */                              }
/*   0.886 us   */                              hrtimer_run_queues();
/*              */                              raise_softirq() {
/*   0.833 us   */                                __raise_softirq_irqoff();
/*   5.469 us   */                              }
/*              */                              rcu_check_callbacks() {
/*   0.834 us   */                                rcu_bh_qs();
/*   0.886 us   */                                rcu_preempt_qs();
/*   1.406 us   */                                cpu_needs_another_gp();
/*   1.250 us   */                                cpu_needs_another_gp();
/*   1.094 us   */                                cpu_needs_another_gp();
/* + 28.854 us  */                              }
/*              */                              scheduler_tick() {
/*              */                                _raw_spin_lock() {
/*   0.833 us   */                                  preempt_count_add();
/*   7.657 us   */                                }
/*   1.563 us   */                                update_rq_clock.part.83();
/*              */                                task_tick_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.834 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/* + 11.615 us  */                                    }
/* + 17.448 us  */                                  }
/*   1.302 us   */                                  __compute_runnable_contrib();
/*              */                                  update_cfs_shares() {
/*   1.615 us   */                                    update_curr();
/*   8.490 us   */                                  }
/*   1.823 us   */                                  hrtimer_active();
/*   1.302 us   */                                  update_curr();
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.355 us   */                                  update_cfs_shares();
/*   1.093 us   */                                  hrtimer_active();
/* + 84.791 us  */                                }
/*              */                                update_cpu_load_active() {
/*              */                                  __update_cpu_load() {
/*   0.781 us   */                                    sched_avg_update();
/*   5.990 us   */                                  }
/* + 10.625 us  */                                }
/*   1.094 us   */                                calc_global_load_tick();
/*              */                                _raw_spin_unlock() {
/*   0.782 us   */                                  preempt_count_sub();
/*   5.208 us   */                                }
/*              */                                trigger_load_balance() {
/*              */                                  raise_softirq() {
/*   0.833 us   */                                    __raise_softirq_irqoff();
/*   5.313 us   */                                  }
/*   0.834 us   */                                  __rcu_read_lock();
/*   0.833 us   */                                  __rcu_read_unlock();
/*   0.781 us   */                                  __rcu_read_lock();
/*   0.834 us   */                                  __rcu_read_unlock();
/* + 29.115 us  */                                }
/* ! 168.229 us */                              }
/*   1.354 us   */                              run_posix_cpu_timers();
/* ! 282.188 us */                            }
/*   1.250 us   */                            profile_tick();
/*   1.093 us   */                            hrtimer_forward();
/* ! 423.073 us */                          }
/*              */                          _raw_spin_lock() {
/*   1.250 us   */                            preempt_count_add();
/*   7.500 us   */                          }
/*   1.406 us   */                          enqueue_hrtimer();
/* ! 468.855 us */                        }
/*   1.354 us   */                        __hrtimer_get_next_event();
/*              */                        _raw_spin_unlock() {
/*   1.302 us   */                          preempt_count_sub();
/*   7.657 us   */                        }
/*              */                        tick_program_event() {
/*              */                          clockevents_program_event() {
/*              */                            ktime_get() {
/*   1.354 us   */                              arch_counter_read();
/*   7.604 us   */                            }
/*   0.938 us   */                            arch_timer_set_next_event_phys();
/* + 18.906 us  */                          }
/* + 24.270 us  */                        }
/* ! 544.948 us */                      }
/* ! 549.896 us */                    }
/*   0.886 us   */                    gic_eoimode1_eoi_irq();
/* ! 560.104 us */                  }
/* ! 565.521 us */                }
/*              */                irq_exit() {
/*   1.042 us   */                  preempt_count_sub();
/*              */                  __do_softirq() {
/*   1.562 us   */                    __local_bh_disable_ip();
/*              */                    run_timer_softirq() {
/*              */                      _raw_spin_lock_irq() {
/*   0.781 us   */                        preempt_count_add();
/*   5.209 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.833 us   */                        preempt_count_sub();
/*   5.313 us   */                      }
/* + 20.000 us  */                    }
/*              */                    run_rebalance_domains() {
/*              */                      rebalance_domains() {
/*              */                        update_blocked_averages() {
/*              */                          _raw_spin_lock_irqsave() {
/*   0.781 us   */                            preempt_count_add();
/*   5.261 us   */                          }
/*   1.458 us   */                          update_rq_clock();
/*   1.302 us   */                          __compute_runnable_contrib();
/*   1.510 us   */                          __compute_runnable_contrib();
/*   1.250 us   */                          __compute_runnable_contrib();
/*              */                          _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                            preempt_count_sub();
/*   7.605 us   */                          }
/* + 49.218 us  */                        }
/*   1.302 us   */                        __rcu_read_lock();
/*   1.563 us   */                        __msecs_to_jiffies();
/*   1.302 us   */                        __msecs_to_jiffies();
/*   1.302 us   */                        __rcu_read_unlock();
/* + 81.510 us  */                      }
/* + 87.657 us  */                    }
/*   0.834 us   */                    rcu_bh_qs();
/*              */                    __local_bh_enable() {
/*   1.042 us   */                      preempt_count_sub();
/*   5.521 us   */                    }
/* ! 135.990 us */                  }
/*   0.834 us   */                  idle_cpu();
/*   0.937 us   */                  rcu_irq_exit();
/* ! 157.032 us */                }
/* ! 752.812 us */              }
/* ! 757.448 us */            }
/*   <==========*/
/* # 1860.729 us*/          }
/*              */          sdio_read_common_cis() {
/*              */            sdio_read_cis() {
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.834 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.041 us   */                          preempt_count_add();
/*   5.469 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.990 us   */                          preempt_count_sub();
/*   5.521 us   */                        }
/* + 19.011 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.510 us   */                        mmc_retune();
/*   1.563 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.614 us   */                            __local_bh_disable_ip();
/*   7.865 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.250 us   */                              dw_mci_hi6220_prepare_command();
/*   8.594 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.510 us   */                              dw_mci_wait_while_busy.isra.17();
/*   8.125 us   */                            }
/* + 30.052 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 12.865 us  */                            }
/* + 18.177 us  */                          }
/* + 71.771 us  */                        }
/* + 90.625 us  */                      }
/* ! 122.657 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.041 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.468 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.833 us   */                                rcu_sched_qs();
/*   0.834 us   */                                rcu_preempt_qs();
/*   9.792 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.833 us   */                                preempt_count_add();
/*   5.312 us   */                              }
/*              */                              deactivate_task() {
/*   2.291 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.302 us   */                                      __rcu_read_lock();
/*   1.302 us   */                                      __rcu_read_unlock();
/* + 14.063 us  */                                    }
/* + 20.469 us  */                                  }
/*   1.302 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.355 us   */                                    update_curr();
/*   7.813 us   */                                  }
/*   1.302 us   */                                  update_curr();
/*   0.833 us   */                                  clear_buddies();
/*   0.833 us   */                                  update_cfs_shares();
/*   0.886 us   */                                  hrtick_update();
/* + 68.958 us  */                                }
/* + 82.500 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.834 us   */                                __rcu_read_lock();
/*   0.834 us   */                                __msecs_to_jiffies();
/*   0.834 us   */                                __rcu_read_unlock();
/* + 14.687 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.781 us   */                                  put_prev_entity();
/*   9.948 us   */                                }
/* + 14.635 us  */                              }
/*              */                              __switch_to() {
/*   0.886 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 768.177 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.302 us   */                                  preempt_count_sub();
/*   7.760 us   */                                }
/* + 14.843 us  */                              }
/*   1.250 us   */                              preempt_count_sub();
/* ! 959.375 us */                            }
/* ! 964.115 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.614 us   */                            preempt_count_add();
/*   6.094 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.573 us   */                          }
/* # 1007.240 us*/                        }
/* # 1011.979 us*/                      }
/*   1.042 us   */                      mmc_retune_release();
/* # 1026.041 us*/                    }
/* # 1162.292 us*/                  }
/* # 1167.656 us*/                }
/* # 1172.708 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.834 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.197 us   */                          preempt_count_add();
/*   6.614 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.458 us   */                          preempt_count_sub();
/*   7.864 us   */                        }
/* + 24.896 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.667 us   */                        mmc_retune();
/*   1.510 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.771 us   */                            __local_bh_disable_ip();
/*   8.697 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   7.083 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.041 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.886 us   */                            }
/* + 23.594 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.677 us  */                            }
/* + 15.625 us  */                          }
/* + 62.500 us  */                        }
/* + 81.719 us  */                      }
/* ! 121.250 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.041 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.938 us   */                            preempt_count_sub();
/*   5.364 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.990 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.834 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 11.354 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.302 us   */                                preempt_count_add();
/*   7.604 us   */                              }
/*              */                              deactivate_task() {
/*   2.656 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.250 us   */                                      __rcu_read_lock();
/*   1.354 us   */                                      __rcu_read_unlock();
/* + 16.146 us  */                                    }
/* + 23.438 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.146 us   */                                    update_curr();
/*   6.094 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  clear_buddies();
/*   0.886 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 77.708 us  */                                }
/* + 91.614 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   1.042 us   */                                __msecs_to_jiffies();
/*   0.886 us   */                                __rcu_read_unlock();
/* + 15.209 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.834 us   */                                  put_prev_entity();
/*   0.781 us   */                                  put_prev_entity();
/*   9.896 us   */                                }
/* + 14.532 us  */                              }
/*              */                              __switch_to() {
/*   1.354 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* + 92.240 us  */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.313 us   */                                }
/*   10.000 us  */                              }
/*   1.042 us   */                              preempt_count_sub();
/* ! 284.635 us */                            }
/* ! 289.115 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.094 us   */                            preempt_count_add();
/*   5.625 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.365 us   */                          }
/* ! 329.896 us */                        }
/* ! 334.584 us */                      }
/*   0.834 us   */                      mmc_retune_release();
/* ! 343.906 us */                    }
/* ! 478.542 us */                  }
/* ! 483.750 us */                }
/* ! 489.479 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.302 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.302 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.458 us   */                          preempt_count_add();
/*   7.761 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.458 us   */                          preempt_count_sub();
/*   7.812 us   */                        }
/* + 26.979 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.833 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.145 us   */                            __local_bh_disable_ip();
/*   5.625 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.313 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.833 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                            }
/* + 18.958 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.781 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 12.396 us  */                            }
/* + 16.823 us  */                          }
/* + 53.073 us  */                        }
/* + 66.511 us  */                      }
/* ! 109.479 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.468 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.864 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.458 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.302 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 13.854 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.303 us   */                                preempt_count_add();
/*   7.656 us   */                              }
/*              */                              deactivate_task() {
/*   1.979 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.833 us   */                                      __rcu_read_lock();
/*   0.834 us   */                                      __rcu_read_unlock();
/*   9.844 us   */                                    }
/* + 14.375 us  */                                  }
/*   0.834 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.885 us   */                                    update_curr();
/*   5.521 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.833 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 60.156 us  */                                }
/* + 71.198 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 14.115 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   1.302 us   */                                  put_prev_entity();
/*   1.302 us   */                                  put_prev_entity();
/* + 13.854 us  */                                }
/* + 20.157 us  */                              }
/*              */                              __switch_to() {
/*   1.197 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* ! 719.843 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.521 us   */                                }
/* + 12.343 us  */                              }
/*   1.458 us   */                              preempt_count_sub();
/* ! 915.104 us */                            }
/* ! 920.833 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.511 us   */                            preempt_count_add();
/*   5.990 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   8.490 us   */                          }
/* ! 970.885 us */                        }
/* ! 975.573 us */                      }
/*   1.094 us   */                      mmc_retune_release();
/* ! 985.729 us */                    }
/* # 1110.678 us*/                  }
/* # 1117.032 us*/                }
/* # 1122.708 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.833 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.511 us   */                          preempt_count_add();
/*   7.865 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.458 us   */                          preempt_count_sub();
/*   7.708 us   */                        }
/* + 26.146 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.563 us   */                        mmc_retune();
/*   1.510 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.719 us   */                            __local_bh_disable_ip();
/*   8.386 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   6.145 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.198 us   */                              dw_mci_wait_while_busy.isra.17();
/*   6.146 us   */                            }
/* + 22.656 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.313 us  */                            }
/* + 15.208 us  */                          }
/* + 60.834 us  */                        }
/* + 80.208 us  */                      }
/* ! 121.145 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.989 us   */                            preempt_count_add();
/*   5.417 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.416 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.990 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.354 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 13.333 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.302 us   */                                preempt_count_add();
/*   7.709 us   */                              }
/*              */                              deactivate_task() {
/*   2.552 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.302 us   */                                      __rcu_read_lock();
/*   1.303 us   */                                      __rcu_read_unlock();
/* + 16.250 us  */                                    }
/* + 23.177 us  */                                  }
/*   0.834 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.093 us   */                                    update_curr();
/*   5.989 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.834 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 76.615 us  */                                }
/* + 90.625 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   1.093 us   */                                __msecs_to_jiffies();
/*   0.834 us   */                                __rcu_read_unlock();
/* + 15.469 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   1.250 us   */                                  put_prev_entity();
/* + 11.458 us  */                                }
/* + 17.083 us  */                              }
/*              */                              __switch_to() {
/*   1.302 us   */                                fpsimd_thread_switch();
/*   1.354 us   */                                hw_breakpoint_thread_switch();
/* ! 124.219 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.834 us   */                                  preempt_count_sub();
/*   5.521 us   */                                }
/* + 10.417 us  */                              }
/*   1.562 us   */                              preempt_count_sub();
/* ! 324.635 us */                            }
/* ! 330.000 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.511 us   */                            preempt_count_add();
/*   7.917 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.812 us   */                          }
/* ! 379.219 us */                        }
/* ! 384.844 us */                      }
/*   1.250 us   */                      mmc_retune_release();
/* ! 397.032 us */                    }
/* ! 532.344 us */                  }
/* ! 537.969 us */                }
/* ! 543.750 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.990 us   */                          preempt_count_add();
/*   5.417 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.937 us   */                          preempt_count_sub();
/*   5.521 us   */                        }
/* + 19.062 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.833 us   */                        mmc_retune();
/*   1.041 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.094 us   */                            __local_bh_disable_ip();
/*   5.573 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.365 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.833 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                            }
/* + 19.011 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   1.250 us   */                              preempt_count_sub();
/*   1.406 us   */                              preempt_count_sub();
/* + 14.323 us  */                            }
/* + 24.114 us  */                          }
/* + 61.927 us  */                        }
/* + 76.302 us  */                      }
/* ! 108.438 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.458 us   */                            preempt_count_add();
/*   7.864 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   6.355 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.885 us   */                                rcu_sched_qs();
/*   0.833 us   */                                rcu_preempt_qs();
/*   9.792 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.782 us   */                                preempt_count_add();
/*   5.312 us   */                              }
/*              */                              deactivate_task() {
/*   1.406 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.833 us   */                                      __rcu_read_lock();
/*   0.834 us   */                                      __rcu_read_unlock();
/*   9.792 us   */                                    }
/* + 14.270 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.885 us   */                                    update_curr();
/*   5.521 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.834 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  clear_buddies();
/*   1.355 us   */                                  update_cfs_shares();
/*   1.250 us   */                                  hrtick_update();
/* + 67.812 us  */                                }
/* + 78.333 us  */                              }
/*              */                              pick_next_task_fair() {
/*   1.354 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __msecs_to_jiffies();
/*   1.302 us   */                                __rcu_read_unlock();
/* + 20.469 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.781 us   */                                  put_prev_entity();
/*   0.834 us   */                                  put_prev_entity();
/* + 10.469 us  */                                }
/* + 15.781 us  */                              }
/*              */                              __switch_to() {
/*   0.833 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 727.969 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.885 us   */                                }
/* + 12.656 us  */                              }
/*   1.562 us   */                              preempt_count_sub();
/* ! 921.771 us */                            }
/* ! 926.563 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.458 us   */                            preempt_count_add();
/*   5.885 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.365 us   */                          }
/* ! 977.552 us */                        }
/* ! 983.073 us */                      }
/*   1.094 us   */                      mmc_retune_release();
/* ! 994.219 us */                    }
/* # 1116.615 us*/                  }
/* # 1121.875 us*/                }
/* # 1126.666 us*/              }
/*              */              __kmalloc() {
/*   1.302 us   */                kmalloc_slab();
/*   8.021 us   */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.198 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.458 us   */                          preempt_count_add();
/*   7.760 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.459 us   */                          preempt_count_sub();
/*   7.760 us   */                        }
/* + 26.823 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.563 us   */                        mmc_retune();
/*   1.510 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.302 us   */                            __local_bh_disable_ip();
/*   6.250 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.834 us   */                              dw_mci_hi6220_prepare_command();
/*   6.198 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.042 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.938 us   */                            }
/* + 21.771 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.834 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.261 us  */                            }
/* + 15.052 us  */                          }
/* + 56.407 us  */                        }
/* + 75.417 us  */                      }
/* ! 119.583 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.989 us   */                            preempt_count_add();
/*   5.417 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.938 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.458 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.355 us   */                                rcu_sched_qs();
/*   1.354 us   */                                rcu_preempt_qs();
/* + 14.115 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.250 us   */                                preempt_count_add();
/*   7.604 us   */                              }
/*              */                              deactivate_task() {
/*   2.604 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.782 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/* + 12.605 us  */                                    }
/* + 19.063 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.198 us   */                                    update_curr();
/*   6.354 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.782 us   */                                  clear_buddies();
/*   0.886 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 72.917 us  */                                }
/* + 86.771 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   1.094 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 15.260 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   1.250 us   */                                  put_prev_entity();
/*   1.302 us   */                                  put_prev_entity();
/* + 14.010 us  */                                }
/* + 20.521 us  */                              }
/*              */                              __switch_to() {
/*   1.302 us   */                                fpsimd_thread_switch();
/*   1.250 us   */                                hw_breakpoint_thread_switch();
/* ! 111.302 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.834 us   */                                }
/* + 11.563 us  */                              }
/*   1.511 us   */                              preempt_count_sub();
/* ! 315.938 us */                            }
/* ! 322.135 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.511 us   */                            preempt_count_add();
/*   7.813 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.812 us   */                          }
/* ! 371.198 us */                        }
/* ! 376.615 us */                      }
/*   1.250 us   */                      mmc_retune_release();
/* ! 388.542 us */                    }
/* ! 523.386 us */                  }
/* ! 529.271 us */                }
/* ! 534.636 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.834 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.782 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.989 us   */                          preempt_count_add();
/*   5.469 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.938 us   */                          preempt_count_sub();
/*   5.364 us   */                        }
/* + 18.959 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.886 us   */                        mmc_retune();
/*   1.094 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.146 us   */                            __local_bh_disable_ip();
/*   5.625 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.313 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.782 us   */                              dw_mci_wait_while_busy.isra.17();
/*   6.198 us   */                            }
/* + 23.177 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   1.354 us   */                              preempt_count_sub();
/*   1.459 us   */                              preempt_count_sub();
/* + 14.375 us  */                            }
/* + 20.730 us  */                          }
/* + 63.489 us  */                        }
/* + 78.021 us  */                      }
/* ! 110.260 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.510 us   */                            preempt_count_add();
/*   7.864 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.521 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.833 us   */                                rcu_sched_qs();
/*   0.886 us   */                                rcu_preempt_qs();
/*   9.844 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.833 us   */                                preempt_count_add();
/*   5.312 us   */                              }
/*              */                              deactivate_task() {
/*   1.406 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.781 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/*   9.688 us   */                                    }
/* + 14.166 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.833 us   */                                    update_curr();
/*   5.365 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   1.250 us   */                                  clear_buddies();
/*   1.354 us   */                                  update_cfs_shares();
/*   1.302 us   */                                  hrtick_update();
/* + 56.458 us  */                                }
/* + 66.823 us  */                              }
/*              */                              pick_next_task_fair() {
/*   1.302 us   */                                __rcu_read_lock();
/*   1.355 us   */                                __msecs_to_jiffies();
/*   1.354 us   */                                __rcu_read_unlock();
/* + 20.677 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   1.302 us   */                                  put_prev_entity();
/*   1.093 us   */                                  put_prev_entity();
/* + 12.761 us  */                                }
/* + 18.229 us  */                              }
/*              */                              __switch_to() {
/*   0.781 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 733.958 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.885 us   */                                  preempt_count_sub();
/*   5.782 us   */                                }
/* + 12.396 us  */                              }
/*   1.250 us   */                              preempt_count_sub();
/* ! 918.333 us */                            }
/* ! 923.073 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.667 us   */                            preempt_count_add();
/*   6.198 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.416 us   */                          }
/* ! 973.386 us */                        }
/* ! 979.011 us */                      }
/*   1.042 us   */                      mmc_retune_release();
/* ! 990.156 us */                    }
/* # 1114.427 us*/                  }
/* # 1119.896 us*/                }
/* # 1124.636 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.834 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.406 us   */                          preempt_count_add();
/*   7.656 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.459 us   */                          preempt_count_sub();
/*   7.761 us   */                        }
/* + 26.406 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.510 us   */                        mmc_retune();
/*   1.562 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.823 us   */                            __local_bh_disable_ip();
/*   8.698 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   6.250 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.042 us   */                              dw_mci_wait_while_busy.isra.17();
/*   6.093 us   */                            }
/* + 22.500 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.834 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.313 us  */                            }
/* + 15.208 us  */                          }
/* + 61.042 us  */                        }
/* + 80.365 us  */                      }
/* ! 121.198 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.302 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 13.646 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.355 us   */                                preempt_count_add();
/*   7.709 us   */                              }
/*              */                              deactivate_task() {
/*   2.969 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.303 us   */                                      __rcu_read_lock();
/*   1.250 us   */                                      __rcu_read_unlock();
/* + 16.094 us  */                                    }
/* + 22.552 us  */                                  }
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.198 us   */                                    update_curr();
/*   6.198 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.834 us   */                                  clear_buddies();
/*   0.886 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 66.354 us  */                                }
/* + 80.781 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   1.042 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 15.208 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.781 us   */                                  put_prev_entity();
/*   9.791 us   */                                }
/* + 14.479 us  */                              }
/*              */                              __switch_to() {
/*   1.354 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* ! 746.407 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   ==========>*/
/*              */                                  gic_handle_irq() {
/*              */                                    __handle_domain_irq() {
/*              */                                      irq_enter() {
/*   0.886 us   */                                        rcu_irq_enter();
/*   0.833 us   */                                        preempt_count_add();
/* + 10.520 us  */                                      }
/*   1.093 us   */                                      irq_find_mapping();
/*              */                                      generic_handle_irq() {
/*              */                                        handle_percpu_devid_irq() {
/*              */                                          arch_timer_handler_phys() {
/*              */                                            hrtimer_interrupt() {
/*              */                                              _raw_spin_lock() {
/*   0.834 us   */                                                preempt_count_add();
/*   5.208 us   */                                              }
/*              */                                              ktime_get_update_offsets_now() {
/*   0.834 us   */                                                arch_counter_read();
/*   5.782 us   */                                              }
/*              */                                              __hrtimer_run_queues() {
/*   0.938 us   */                                                __remove_hrtimer();
/*              */                                                _raw_spin_unlock() {
/*   0.834 us   */                                                  preempt_count_sub();
/*   5.364 us   */                                                }
/*              */                                                tick_sched_timer() {
/*              */                                                  ktime_get() {
/*   0.781 us   */                                                    arch_counter_read();
/*   5.364 us   */                                                  }
/*              */                                                  tick_do_update_jiffies64() {
/*              */                                                    _raw_spin_lock() {
/*   1.302 us   */                                                      preempt_count_add();
/*   7.865 us   */                                                    }
/*              */                                                    do_timer() {
/*   1.562 us   */                                                      calc_global_load();
/*   8.229 us   */                                                    }
/*              */                                                    _raw_spin_unlock() {
/*   1.354 us   */                                                      preempt_count_sub();
/*   7.709 us   */                                                    }
/*              */                                                    update_wall_time() {
/*              */                                                      _raw_spin_lock_irqsave() {
/*   1.198 us   */                                                        preempt_count_add();
/*   7.812 us   */                                                      }
/*   1.250 us   */                                                      arch_counter_read();
/*   1.563 us   */                                                      ntp_tick_length();
/*   0.781 us   */                                                      ntp_tick_length();
/*   0.781 us   */                                                      ntp_tick_length();
/*              */                                                      timekeeping_update() {
/*   0.833 us   */                                                        ntp_get_next_leap();
/*   1.927 us   */                                                        update_vsyscall();
/*   1.094 us   */                                                        raw_notifier_call_chain();
/*   1.042 us   */                                                        update_fast_timekeeper();
/* + 24.792 us  */                                                      }
/*              */                                                      _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                                                        preempt_count_sub();
/*   5.261 us   */                                                      }
/* + 75.937 us  */                                                    }
/* ! 120.157 us */                                                  }
/*              */                                                  update_process_times() {
/*              */                                                    account_process_tick() {
/*              */                                                      account_system_time() {
/*              */                                                        cpuacct_account_field() {
/*   0.833 us   */                                                          __rcu_read_lock();
/*   0.834 us   */                                                          __rcu_read_unlock();
/* + 11.510 us  */                                                        }
/*              */                                                        acct_account_cputime() {
/*              */                                                          __acct_update_integrals() {
/*   1.563 us   */                                                            jiffies_to_timeval();
/*   7.761 us   */                                                          }
/* + 13.593 us  */                                                        }
/* + 35.469 us  */                                                      }
/* + 41.354 us  */                                                    }
/*   1.302 us   */                                                    hrtimer_run_queues();
/*              */                                                    raise_softirq() {
/*   1.354 us   */                                                      __raise_softirq_irqoff();
/*   7.969 us   */                                                    }
/*              */                                                    rcu_check_callbacks() {
/*   1.302 us   */                                                      rcu_bh_qs();
/*   1.354 us   */                                                      rcu_preempt_qs();
/*   1.770 us   */                                                      cpu_needs_another_gp();
/*   1.406 us   */                                                      cpu_needs_another_gp();
/*   1.145 us   */                                                      cpu_needs_another_gp();
/* + 36.406 us  */                                                    }
/*              */                                                    scheduler_tick() {
/*              */                                                      _raw_spin_lock() {
/*   0.833 us   */                                                        preempt_count_add();
/*   5.261 us   */                                                      }
/*   1.615 us   */                                                      update_rq_clock.part.83();
/*              */                                                      task_tick_fair() {
/*              */                                                        update_curr() {
/*              */                                                          cpuacct_charge() {
/*   0.833 us   */                                                            __rcu_read_lock();
/*   0.833 us   */                                                            __rcu_read_unlock();
/* + 10.625 us  */                                                          }
/* + 15.677 us  */                                                        }
/*              */                                                        update_cfs_shares() {
/*   0.989 us   */                                                          update_curr();
/*   5.885 us   */                                                        }
/*   1.041 us   */                                                        hrtimer_active();
/*   0.834 us   */                                                        update_curr();
/*   0.885 us   */                                                        update_cfs_shares();
/*   0.833 us   */                                                        hrtimer_active();
/* + 50.104 us  */                                                      }
/*              */                                                      update_cpu_load_active() {
/*              */                                                        __update_cpu_load() {
/*   1.302 us   */                                                          sched_avg_update();
/*   8.334 us   */                                                        }
/* + 14.166 us  */                                                      }
/*   1.562 us   */                                                      calc_global_load_tick();
/*              */                                                      _raw_spin_unlock() {
/*   1.198 us   */                                                        preempt_count_sub();
/*   7.500 us   */                                                      }
/*              */                                                      trigger_load_balance() {
/*              */                                                        raise_softirq() {
/*   1.355 us   */                                                          __raise_softirq_irqoff();
/*   7.604 us   */                                                        }
/*   1.250 us   */                                                        __rcu_read_lock();
/*   1.250 us   */                                                        __rcu_read_unlock();
/*   0.781 us   */                                                        __rcu_read_lock();
/*   0.833 us   */                                                        __rcu_read_unlock();
/* + 37.240 us  */                                                      }
/* ! 152.188 us */                                                    }
/*   1.302 us   */                                                    run_posix_cpu_timers();
/* ! 270.260 us */                                                  }
/*   1.146 us   */                                                  profile_tick();
/*   1.146 us   */                                                  hrtimer_forward();
/* ! 418.178 us */                                                }
/*              */                                                _raw_spin_lock() {
/*   0.833 us   */                                                  preempt_count_add();
/*   5.261 us   */                                                }
/*   0.938 us   */                                                enqueue_hrtimer();
/* ! 450.782 us */                                              }
/*   0.886 us   */                                              __hrtimer_get_next_event();
/*              */                                              _raw_spin_unlock() {
/*   0.833 us   */                                                preempt_count_sub();
/*   5.156 us   */                                              }
/*              */                                              tick_program_event() {
/*              */                                                clockevents_program_event() {
/*              */                                                  ktime_get() {
/*   0.833 us   */                                                    arch_counter_read();
/*   5.313 us   */                                                  }
/*   0.834 us   */                                                  arch_timer_set_next_event_phys();
/* + 14.270 us  */                                                }
/* + 18.698 us  */                                              }
/* ! 510.416 us */                                            }
/* ! 516.302 us */                                          }
/*   1.302 us   */                                          gic_eoimode1_eoi_irq();
/* ! 529.167 us */                                        }
/* ! 535.261 us */                                      }
/*              */                                      irq_exit() {
/*   1.302 us   */                                        preempt_count_sub();
/*              */                                        __do_softirq() {
/*   1.354 us   */                                          __local_bh_disable_ip();
/*              */                                          run_timer_softirq() {
/*              */                                            _raw_spin_lock_irq() {
/*   1.303 us   */                                              preempt_count_add();
/*   7.708 us   */                                            }
/*              */                                            _raw_spin_unlock_irq() {
/*   1.302 us   */                                              preempt_count_sub();
/*   7.657 us   */                                            }
/* + 26.510 us  */                                          }
/*              */                                          run_rebalance_domains() {
/*              */                                            rebalance_domains() {
/*              */                                              update_blocked_averages() {
/*              */                                                _raw_spin_lock_irqsave() {
/*   0.833 us   */                                                  preempt_count_add();
/*   5.312 us   */                                                }
/*   1.458 us   */                                                update_rq_clock();
/*   0.990 us   */                                                __compute_runnable_contrib();
/*   0.781 us   */                                                __compute_runnable_contrib();
/*   0.833 us   */                                                __compute_runnable_contrib();
/*              */                                                _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                                                  preempt_count_sub();
/*   5.313 us   */                                                }
/* + 40.677 us  */                                              }
/*   0.781 us   */                                              __rcu_read_lock();
/*   1.094 us   */                                              __msecs_to_jiffies();
/*   0.833 us   */                                              __msecs_to_jiffies();
/*   0.833 us   */                                              __rcu_read_unlock();
/* + 64.792 us  */                                            }
/* + 69.948 us  */                                          }
/*   0.885 us   */                                          rcu_bh_qs();
/*              */                                          __local_bh_enable() {
/*   1.250 us   */                                            preempt_count_sub();
/*   6.823 us   */                                          }
/* ! 129.010 us */                                        }
/*   1.302 us   */                                        idle_cpu();
/*   1.407 us   */                                        rcu_irq_exit();
/* ! 154.270 us */                                      }
/* ! 719.270 us */                                    }
/* ! 724.843 us */                                  }
/*   <==========*/
/*   1.302 us   */                                  preempt_count_sub();
/* ! 741.042 us */                                }
/* ! 748.594 us */                              }
/*   1.615 us   */                              preempt_count_sub();
/* # 1681.980 us*/                            }
/* # 1687.812 us*/                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.510 us   */                            preempt_count_add();
/*   6.406 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.521 us   */                          }
/* # 1731.979 us*/                        }
/* # 1736.823 us*/                      }
/*   1.093 us   */                      mmc_retune_release();
/* # 1747.240 us*/                    }
/* # 1882.292 us*/                  }
/* # 1888.073 us*/                }
/* # 1893.541 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.834 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.041 us   */                          preempt_count_add();
/*   5.469 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.938 us   */                          preempt_count_sub();
/*   5.625 us   */                        }
/* + 19.271 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.562 us   */                        mmc_retune();
/*   1.459 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.771 us   */                            __local_bh_disable_ip();
/*   8.334 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.302 us   */                              dw_mci_hi6220_prepare_command();
/*   8.490 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.510 us   */                              dw_mci_wait_while_busy.isra.17();
/*   8.229 us   */                            }
/* + 29.635 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.781 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.469 us  */                            }
/* + 15.782 us  */                          }
/* + 69.792 us  */                        }
/* + 88.333 us  */                      }
/* ! 120.886 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.990 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.886 us   */                                rcu_sched_qs();
/*   0.833 us   */                                rcu_preempt_qs();
/*   9.739 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.781 us   */                                preempt_count_add();
/*   5.261 us   */                              }
/*              */                              deactivate_task() {
/*   1.614 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.250 us   */                                      __rcu_read_lock();
/*   1.250 us   */                                      __rcu_read_unlock();
/* + 14.271 us  */                                    }
/* + 20.937 us  */                                  }
/*   1.250 us   */                                  __compute_runnable_contrib();
/*   1.250 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.354 us   */                                    update_curr();
/*   6.927 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.781 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  clear_buddies();
/*   0.834 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 84.219 us  */                                }
/* + 99.532 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.834 us   */                                __rcu_read_unlock();
/* + 14.896 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.833 us   */                                  put_prev_entity();
/*   9.896 us   */                                }
/* + 14.531 us  */                              }
/*              */                              __switch_to() {
/*   0.833 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 107.865 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.885 us   */                                  preempt_count_sub();
/*   5.417 us   */                                }
/* + 10.157 us  */                              }
/*   1.042 us   */                              preempt_count_sub();
/* ! 299.270 us */                            }
/* ! 303.750 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.469 us   */                          }
/* ! 344.635 us */                        }
/* ! 349.271 us */                      }
/*   0.833 us   */                      mmc_retune_release();
/* ! 358.541 us */                    }
/* ! 492.813 us */                  }
/* ! 497.448 us */                }
/* ! 502.136 us */              }
/*              */              cis_tpl_parse() {
/*   1.718 us   */                cistpl_manfid();
/*   9.010 us   */              }
/*   2.813 us   */              kfree();
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.302 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.302 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.406 us   */                          preempt_count_add();
/*   7.761 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.990 us   */                          preempt_count_sub();
/*   7.761 us   */                        }
/* + 25.677 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.781 us   */                        mmc_retune();
/*   1.041 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.094 us   */                            __local_bh_disable_ip();
/*   5.625 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.782 us   */                              dw_mci_hi6220_prepare_command();
/*   5.313 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.781 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.677 us   */                            }
/* + 19.166 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.052 us  */                            }
/* + 14.532 us  */                          }
/* + 51.042 us  */                        }
/* + 64.427 us  */                      }
/* ! 105.417 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.459 us   */                            preempt_count_add();
/*   7.813 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.406 us   */                            preempt_count_sub();
/*   7.760 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.459 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.354 us   */                                rcu_sched_qs();
/*   1.354 us   */                                rcu_preempt_qs();
/* + 13.958 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.781 us   */                                preempt_count_add();
/*   5.886 us   */                              }
/*              */                              deactivate_task() {
/*   1.407 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.833 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/*   9.844 us   */                                    }
/* + 14.375 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.885 us   */                                    update_curr();
/*   5.364 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.834 us   */                                  __compute_runnable_contrib();
/*   0.781 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 60.209 us  */                                }
/* + 69.792 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __msecs_to_jiffies();
/*   1.302 us   */                                __rcu_read_unlock();
/* + 18.281 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   1.250 us   */                                  put_prev_entity();
/*   1.250 us   */                                  put_prev_entity();
/* + 17.500 us  */                                }
/* + 23.854 us  */                              }
/*              */                              __switch_to() {
/*   1.355 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* ! 720.261 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.303 us   */                                  preempt_count_sub();
/*   7.969 us   */                                }
/* + 15.521 us  */                              }
/*   1.770 us   */                              preempt_count_sub();
/* ! 925.625 us */                            }
/* ! 932.240 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.979 us   */                            preempt_count_add();
/*   8.385 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/* ! 987.656 us */                        }
/* ! 993.489 us */                      }
/*   1.094 us   */                      mmc_retune_release();
/* # 1003.750 us*/                    }
/* # 1124.688 us*/                  }
/* # 1130.990 us*/                }
/* # 1136.823 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.782 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.989 us   */                          preempt_count_add();
/*   5.469 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.041 us   */                          preempt_count_sub();
/*   5.521 us   */                        }
/* + 19.115 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.042 us   */                        mmc_retune();
/*   1.041 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.667 us   */                            __local_bh_disable_ip();
/*   8.386 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.250 us   */                              dw_mci_hi6220_prepare_command();
/*   8.646 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.562 us   */                              dw_mci_wait_while_busy.isra.17();
/*   8.229 us   */                            }
/* + 29.948 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   1.302 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 13.281 us  */                            }
/* + 19.063 us  */                          }
/* + 73.490 us  */                        }
/* + 87.916 us  */                      }
/* ! 120.261 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.417 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.521 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.834 us   */                                rcu_sched_qs();
/*   0.834 us   */                                rcu_preempt_qs();
/*   9.635 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.833 us   */                                preempt_count_add();
/*   5.312 us   */                              }
/*              */                              deactivate_task() {
/*   1.718 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.250 us   */                                      __rcu_read_lock();
/*   1.250 us   */                                      __rcu_read_unlock();
/* + 16.094 us  */                                    }
/* + 23.542 us  */                                  }
/*   1.302 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.562 us   */                                    update_curr();
/*   8.438 us   */                                  }
/*   1.302 us   */                                  update_curr();
/*   1.303 us   */                                  __compute_runnable_contrib();
/*   0.834 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 84.375 us  */                                }
/* + 95.000 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   1.093 us   */                                __msecs_to_jiffies();
/*   0.886 us   */                                __rcu_read_unlock();
/* + 15.000 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.781 us   */                                  put_prev_entity();
/*   0.833 us   */                                  put_prev_entity();
/*   9.896 us   */                                }
/* + 14.583 us  */                              }
/*              */                              __switch_to() {
/*   0.833 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 107.396 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.365 us   */                                }
/* + 10.105 us  */                              }
/*   1.041 us   */                              preempt_count_sub();
/* ! 298.178 us */                            }
/* ! 302.604 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.572 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.365 us   */                          }
/* ! 343.385 us */                        }
/* ! 348.021 us */                      }
/*   0.834 us   */                      mmc_retune_release();
/* ! 357.031 us */                    }
/* ! 490.573 us */                  }
/* ! 495.365 us */                }
/* ! 500.053 us */              }
/*              */              __kmalloc() {
/*   1.354 us   */                kmalloc_slab();
/*   7.865 us   */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.302 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.302 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.510 us   */                          preempt_count_add();
/*   8.021 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.406 us   */                          preempt_count_sub();
/*   7.604 us   */                        }
/* + 26.875 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.833 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.146 us   */                            __local_bh_disable_ip();
/*   5.573 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.364 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.834 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                            }
/* + 19.115 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/*   10.000 us  */                            }
/* + 14.636 us  */                          }
/* + 51.041 us  */                        }
/* + 64.792 us  */                      }
/* ! 111.771 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.500 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.406 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.302 us   */                                rcu_sched_qs();
/*   1.354 us   */                                rcu_preempt_qs();
/* + 14.114 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.302 us   */                                preempt_count_add();
/*   7.760 us   */                              }
/*              */                              deactivate_task() {
/*   2.344 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.833 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/*   9.896 us   */                                    }
/* + 14.427 us  */                                  }
/*   0.885 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.886 us   */                                    update_curr();
/*   5.417 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.833 us   */                                  clear_buddies();
/*   0.886 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 50.989 us  */                                }
/* + 63.542 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.834 us   */                                __rcu_read_unlock();
/* + 14.167 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   1.302 us   */                                  put_prev_entity();
/* + 11.510 us  */                                }
/* + 16.927 us  */                              }
/*              */                              __switch_to() {
/*   1.250 us   */                                fpsimd_thread_switch();
/*   1.354 us   */                                hw_breakpoint_thread_switch();
/* ! 692.812 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   ==========>*/
/*              */                                  gic_handle_irq() {
/*              */                                    __handle_domain_irq() {
/*              */                                      irq_enter() {
/*   0.937 us   */                                        rcu_irq_enter();
/*   0.833 us   */                                        preempt_count_add();
/* + 10.834 us  */                                      }
/*   0.990 us   */                                      irq_find_mapping();
/*              */                                      generic_handle_irq() {
/*              */                                        handle_percpu_devid_irq() {
/*              */                                          arch_timer_handler_phys() {
/*              */                                            hrtimer_interrupt() {
/*              */                                              _raw_spin_lock() {
/*   0.781 us   */                                                preempt_count_add();
/*   5.208 us   */                                              }
/*              */                                              ktime_get_update_offsets_now() {
/*   0.833 us   */                                                arch_counter_read();
/*   5.833 us   */                                              }
/*              */                                              __hrtimer_run_queues() {
/*   0.989 us   */                                                __remove_hrtimer();
/*              */                                                _raw_spin_unlock() {
/*   0.834 us   */                                                  preempt_count_sub();
/*   5.313 us   */                                                }
/*              */                                                tick_sched_timer() {
/*              */                                                  ktime_get() {
/*   0.781 us   */                                                    arch_counter_read();
/*   5.260 us   */                                                  }
/*              */                                                  tick_do_update_jiffies64() {
/*              */                                                    _raw_spin_lock() {
/*   0.833 us   */                                                      preempt_count_add();
/*   5.469 us   */                                                    }
/*              */                                                    do_timer() {
/*   1.562 us   */                                                      calc_global_load();
/*   8.125 us   */                                                    }
/*              */                                                    _raw_spin_unlock() {
/*   1.302 us   */                                                      preempt_count_sub();
/*   7.708 us   */                                                    }
/*              */                                                    update_wall_time() {
/*              */                                                      _raw_spin_lock_irqsave() {
/*   1.250 us   */                                                        preempt_count_add();
/*   7.760 us   */                                                      }
/*   1.250 us   */                                                      arch_counter_read();
/*   1.510 us   */                                                      ntp_tick_length();
/*   1.302 us   */                                                      ntp_tick_length();
/*   0.833 us   */                                                      ntp_tick_length();
/*              */                                                      timekeeping_update() {
/*   1.094 us   */                                                        ntp_get_next_leap();
/*   2.344 us   */                                                        update_vsyscall();
/*   1.198 us   */                                                        raw_notifier_call_chain();
/*   0.990 us   */                                                        update_fast_timekeeper();
/* + 22.552 us  */                                                      }
/*              */                                                      _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                                        preempt_count_sub();
/*   5.313 us   */                                                      }
/* + 77.761 us  */                                                    }
/* ! 118.541 us */                                                  }
/*              */                                                  update_process_times() {
/*              */                                                    account_process_tick() {
/*              */                                                      account_system_time() {
/*              */                                                        cpuacct_account_field() {
/*   0.833 us   */                                                          __rcu_read_lock();
/*   0.886 us   */                                                          __rcu_read_unlock();
/* + 11.615 us  */                                                        }
/*              */                                                        acct_account_cputime() {
/*              */                                                          __acct_update_integrals() {
/*   1.094 us   */                                                            jiffies_to_timeval();
/*   6.666 us   */                                                          }
/* + 14.375 us  */                                                        }
/* + 35.625 us  */                                                      }
/* + 41.719 us  */                                                    }
/*   1.354 us   */                                                    hrtimer_run_queues();
/*              */                                                    raise_softirq() {
/*   1.303 us   */                                                      __raise_softirq_irqoff();
/*   7.865 us   */                                                    }
/*              */                                                    rcu_check_callbacks() {
/*   1.354 us   */                                                      rcu_bh_qs();
/*   1.354 us   */                                                      rcu_preempt_qs();
/*   1.771 us   */                                                      cpu_needs_another_gp();
/*   1.666 us   */                                                      cpu_needs_another_gp();
/*   1.667 us   */                                                      cpu_needs_another_gp();
/* + 38.073 us  */                                                    }
/*              */                                                    scheduler_tick() {
/*              */                                                      _raw_spin_lock() {
/*   0.833 us   */                                                        preempt_count_add();
/*   5.261 us   */                                                      }
/*   1.667 us   */                                                      update_rq_clock.part.83();
/*              */                                                      task_tick_fair() {
/*              */                                                        update_curr() {
/*              */                                                          cpuacct_charge() {
/*   0.833 us   */                                                            __rcu_read_lock();
/*   0.833 us   */                                                            __rcu_read_unlock();
/* + 10.625 us  */                                                          }
/* + 15.677 us  */                                                        }
/*              */                                                        update_cfs_shares() {
/*   1.093 us   */                                                          update_curr();
/*   6.198 us   */                                                        }
/*   1.094 us   */                                                        hrtimer_active();
/*   0.834 us   */                                                        update_curr();
/*   0.886 us   */                                                        update_cfs_shares();
/*   0.833 us   */                                                        hrtimer_active();
/* + 50.573 us  */                                                      }
/*              */                                                      update_cpu_load_active() {
/*              */                                                        __update_cpu_load() {
/*   0.833 us   */                                                          sched_avg_update();
/*   6.615 us   */                                                        }
/* + 12.553 us  */                                                      }
/*   1.562 us   */                                                      calc_global_load_tick();
/*              */                                                      _raw_spin_unlock() {
/*   1.250 us   */                                                        preempt_count_sub();
/*   7.500 us   */                                                      }
/*              */                                                      trigger_load_balance() {
/*              */                                                        raise_softirq() {
/*   1.354 us   */                                                          __raise_softirq_irqoff();
/*   7.656 us   */                                                        }
/*   1.303 us   */                                                        __rcu_read_lock();
/*   1.302 us   */                                                        __rcu_read_unlock();
/*   1.302 us   */                                                        __rcu_read_lock();
/*   0.833 us   */                                                        __rcu_read_unlock();
/* + 39.843 us  */                                                      }
/* ! 151.302 us */                                                    }
/*   1.354 us   */                                                    run_posix_cpu_timers();
/* ! 271.459 us */                                                  }
/*   1.407 us   */                                                  profile_tick();
/*   1.198 us   */                                                  hrtimer_forward();
/* ! 417.865 us */                                                }
/*              */                                                _raw_spin_lock() {
/*   0.833 us   */                                                  preempt_count_add();
/*   5.261 us   */                                                }
/*   0.937 us   */                                                enqueue_hrtimer();
/* ! 450.625 us */                                              }
/*   0.885 us   */                                              __hrtimer_get_next_event();
/*              */                                              _raw_spin_unlock() {
/*   0.833 us   */                                                preempt_count_sub();
/*   5.313 us   */                                              }
/*              */                                              tick_program_event() {
/*              */                                                clockevents_program_event() {
/*              */                                                  ktime_get() {
/*   0.834 us   */                                                    arch_counter_read();
/*   5.469 us   */                                                  }
/*   0.834 us   */                                                  arch_timer_set_next_event_phys();
/* + 14.739 us  */                                                }
/* + 21.459 us  */                                              }
/* ! 513.125 us */                                            }
/* ! 518.073 us */                                          }
/*   1.354 us   */                                          gic_eoimode1_eoi_irq();
/* ! 530.208 us */                                        }
/* ! 536.250 us */                                      }
/*              */                                      irq_exit() {
/*   1.302 us   */                                        preempt_count_sub();
/*              */                                        __do_softirq() {
/*   1.354 us   */                                          __local_bh_disable_ip();
/*              */                                          run_timer_softirq() {
/*              */                                            _raw_spin_lock_irq() {
/*   1.302 us   */                                              preempt_count_add();
/*   7.656 us   */                                            }
/*              */                                            _raw_spin_unlock_irq() {
/*   1.302 us   */                                              preempt_count_sub();
/*   7.656 us   */                                            }
/* + 27.812 us  */                                          }
/*              */                                          run_rebalance_domains() {
/*              */                                            rebalance_domains() {
/*              */                                              update_blocked_averages() {
/*              */                                                _raw_spin_lock_irqsave() {
/*   0.834 us   */                                                  preempt_count_add();
/*   5.365 us   */                                                }
/*   1.459 us   */                                                update_rq_clock();
/*   1.093 us   */                                                __compute_runnable_contrib();
/*   0.782 us   */                                                __compute_runnable_contrib();
/*   0.833 us   */                                                __compute_runnable_contrib();
/*              */                                                _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                                                  preempt_count_sub();
/*   5.260 us   */                                                }
/* + 40.625 us  */                                              }
/*   0.834 us   */                                              __rcu_read_lock();
/*   1.094 us   */                                              __msecs_to_jiffies();
/*   0.781 us   */                                              __msecs_to_jiffies();
/*   0.833 us   */                                              __rcu_read_unlock();
/* + 64.375 us  */                                            }
/* + 69.531 us  */                                          }
/*   0.885 us   */                                          rcu_bh_qs();
/*              */                                          __local_bh_enable() {
/*   0.833 us   */                                            preempt_count_sub();
/*   5.313 us   */                                          }
/* ! 128.177 us */                                        }
/*   1.302 us   */                                        idle_cpu();
/*   1.406 us   */                                        rcu_irq_exit();
/* ! 153.698 us */                                      }
/* ! 720.365 us */                                    }
/* ! 727.032 us */                                  }
/*   <==========*/
/*   1.302 us   */                                  preempt_count_sub();
/* ! 740.260 us */                                }
/* ! 747.916 us */                              }
/*   1.614 us   */                              preempt_count_sub();
/* # 1617.448 us*/                            }
/* # 1624.115 us*/                          }
/*              */                          _raw_spin_lock_irq() {
/*   2.084 us   */                            preempt_count_add();
/*   8.542 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.468 us   */                          }
/* # 1674.271 us*/                        }
/* # 1678.906 us*/                      }
/*   1.094 us   */                      mmc_retune_release();
/* # 1688.645 us*/                    }
/* # 1815.833 us*/                  }
/* # 1821.770 us*/                }
/* # 1830.052 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.990 us   */                          preempt_count_add();
/*   5.468 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.937 us   */                          preempt_count_sub();
/*   5.417 us   */                        }
/* + 18.906 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.094 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.666 us   */                            __local_bh_disable_ip();
/*   8.229 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.302 us   */                              dw_mci_hi6220_prepare_command();
/*   8.698 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.458 us   */                              dw_mci_wait_while_busy.isra.17();
/*   8.073 us   */                            }
/* + 30.104 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   1.302 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 12.395 us  */                            }
/* + 18.438 us  */                          }
/* + 72.500 us  */                        }
/* + 88.125 us  */                      }
/* ! 120.729 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.677 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.521 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.833 us   */                                rcu_sched_qs();
/*   0.833 us   */                                rcu_preempt_qs();
/*   9.792 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.834 us   */                                preempt_count_add();
/*   5.468 us   */                              }
/*              */                              deactivate_task() {
/*   1.407 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.302 us   */                                      __rcu_read_lock();
/*   1.302 us   */                                      __rcu_read_unlock();
/* + 14.063 us  */                                    }
/* + 19.895 us  */                                  }
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.250 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.302 us   */                                    update_curr();
/*   7.708 us   */                                  }
/*   1.354 us   */                                  update_curr();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.834 us   */                                  clear_buddies();
/*   0.834 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 88.281 us  */                                }
/* + 98.490 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 14.843 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.834 us   */                                  put_prev_entity();
/*   9.896 us   */                                }
/* + 14.479 us  */                              }
/*              */                              __switch_to() {
/*   0.834 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 107.604 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.365 us   */                                }
/*   9.896 us   */                              }
/*   1.042 us   */                              preempt_count_sub();
/* ! 298.281 us */                            }
/* ! 302.657 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.730 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.468 us   */                          }
/* ! 344.427 us */                        }
/* ! 349.114 us */                      }
/*   0.833 us   */                      mmc_retune_release();
/* ! 358.281 us */                    }
/* ! 492.291 us */                  }
/* ! 496.927 us */                }
/* ! 501.563 us */              }
/*   1.667 us   */              cis_tpl_parse();
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.198 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.302 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.511 us   */                          preempt_count_add();
/*   7.761 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.459 us   */                          preempt_count_sub();
/*   7.761 us   */                        }
/* + 26.615 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.302 us   */                        mmc_retune();
/*   1.093 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.145 us   */                            __local_bh_disable_ip();
/*   5.573 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.834 us   */                              dw_mci_hi6220_prepare_command();
/*   5.416 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.833 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                            }
/* + 19.114 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.834 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.260 us  */                            }
/* + 14.687 us  */                          }
/* + 53.542 us  */                        }
/* + 69.739 us  */                      }
/* ! 113.281 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   6.042 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.458 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.354 us   */                                rcu_sched_qs();
/*   1.406 us   */                                rcu_preempt_qs();
/* + 13.907 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.250 us   */                                preempt_count_add();
/*   7.604 us   */                              }
/*              */                              deactivate_task() {
/*   2.396 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.834 us   */                                      __rcu_read_lock();
/*   0.833 us   */                                      __rcu_read_unlock();
/*   9.844 us   */                                    }
/* + 14.740 us  */                                  }
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.885 us   */                                    update_curr();
/*   5.416 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.833 us   */                                  clear_buddies();
/*   0.833 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 52.292 us  */                                }
/* + 65.312 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.886 us   */                                __rcu_read_unlock();
/* + 14.271 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.834 us   */                                  put_prev_entity();
/*   0.833 us   */                                  put_prev_entity();
/*   9.739 us   */                                }
/* + 14.167 us  */                              }
/*              */                              __switch_to() {
/*   1.302 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* ! 736.927 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.250 us   */                                  preempt_count_sub();
/*   7.500 us   */                                }
/* + 14.375 us  */                              }
/*   1.302 us   */                              preempt_count_sub();
/* ! 921.823 us */                            }
/* ! 927.553 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.615 us   */                            preempt_count_add();
/*   6.041 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.938 us   */                            preempt_count_sub();
/*   5.365 us   */                          }
/* ! 971.614 us */                        }
/* ! 976.354 us */                      }
/*   1.042 us   */                      mmc_retune_release();
/* ! 986.563 us */                    }
/* # 1118.489 us*/                  }
/* # 1124.739 us*/                }
/* # 1130.677 us*/              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.782 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.198 us   */                          preempt_count_add();
/*   6.459 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.459 us   */                          preempt_count_sub();
/*   7.709 us   */                        }
/* + 24.375 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.562 us   */                        mmc_retune();
/*   1.510 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.615 us   */                            __local_bh_disable_ip();
/*   8.541 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.834 us   */                              dw_mci_hi6220_prepare_command();
/*   7.031 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.990 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.781 us   */                            }
/* + 23.229 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.313 us  */                            }
/* + 15.313 us  */                          }
/* + 61.666 us  */                        }
/* + 80.678 us  */                      }
/* ! 119.479 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.989 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.469 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.990 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.834 us   */                                rcu_sched_qs();
/*   1.354 us   */                                rcu_preempt_qs();
/* + 11.406 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.354 us   */                                preempt_count_add();
/*   7.708 us   */                              }
/*              */                              deactivate_task() {
/*   2.604 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.302 us   */                                      __rcu_read_lock();
/*   1.302 us   */                                      __rcu_read_unlock();
/* + 16.250 us  */                                    }
/* + 23.750 us  */                                  }
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.093 us   */                                    update_curr();
/*   5.990 us   */                                  }
/*   0.885 us   */                                  update_curr();
/*   0.781 us   */                                  clear_buddies();
/*   0.886 us   */                                  update_cfs_shares();
/*   0.781 us   */                                  hrtick_update();
/* + 67.969 us  */                                }
/* + 82.032 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   1.094 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 15.000 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.781 us   */                                  put_prev_entity();
/*   9.948 us   */                                }
/* + 14.740 us  */                              }
/*              */                              __switch_to() {
/*   0.781 us   */                                fpsimd_thread_switch();
/*   1.354 us   */                                hw_breakpoint_thread_switch();
/* ! 701.980 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.302 us   */                                  preempt_count_sub();
/*   7.864 us   */                                }
/* + 15.521 us  */                              }
/*   1.719 us   */                              preempt_count_sub();
/* ! 903.750 us */                            }
/* ! 909.167 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.562 us   */                            preempt_count_add();
/*   6.094 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.364 us   */                          }
/* ! 951.459 us */                        }
/* ! 956.458 us */                      }
/*   1.042 us   */                      mmc_retune_release();
/* ! 967.031 us */                    }
/* # 1100.156 us*/                  }
/* # 1105.677 us*/                }
/* # 1111.041 us*/              }
/*              */              __kmalloc() {
/*   1.406 us   */                kmalloc_slab();
/*   8.020 us   */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.834 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.041 us   */                          preempt_count_add();
/*   5.677 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.458 us   */                          preempt_count_sub();
/*   7.969 us   */                        }
/* + 24.063 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.562 us   */                        mmc_retune();
/*   1.563 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.615 us   */                            __local_bh_disable_ip();
/*   8.489 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.303 us   */                              dw_mci_hi6220_prepare_command();
/*   7.916 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.041 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.938 us   */                            }
/* + 24.323 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.782 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.105 us  */                            }
/* + 15.000 us  */                          }
/* + 65.313 us  */                        }
/* + 84.791 us  */                      }
/* ! 123.282 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.833 us   */                                rcu_sched_qs();
/*   1.250 us   */                                rcu_preempt_qs();
/* + 11.823 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.303 us   */                                preempt_count_add();
/*   7.657 us   */                              }
/*              */                              deactivate_task() {
/*   2.656 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.250 us   */                                      __rcu_read_lock();
/*   1.302 us   */                                      __rcu_read_unlock();
/* + 16.146 us  */                                    }
/* + 23.490 us  */                                  }
/*   0.833 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.041 us   */                                    update_curr();
/*   5.989 us   */                                  }
/*   0.833 us   */                                  update_curr();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.782 us   */                                  clear_buddies();
/*   0.834 us   */                                  update_cfs_shares();
/*   0.833 us   */                                  hrtick_update();
/* + 74.739 us  */                                }
/* + 88.854 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   1.094 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 15.104 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.834 us   */                                  put_prev_entity();
/*   0.834 us   */                                  put_prev_entity();
/*   9.844 us   */                                }
/* + 14.428 us  */                              }
/*              */                              __switch_to() {
/*   1.250 us   */                                fpsimd_thread_switch();
/*   1.302 us   */                                hw_breakpoint_thread_switch();
/* ! 107.969 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   0.833 us   */                                  preempt_count_sub();
/*   5.313 us   */                                }
/*   9.896 us   */                              }
/*   1.042 us   */                              preempt_count_sub();
/* ! 297.396 us */                            }
/* ! 301.823 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/* ! 343.281 us */                        }
/* ! 352.135 us */                      }
/*   1.302 us   */                      mmc_retune_release();
/* ! 364.114 us */                    }
/* ! 501.510 us */                  }
/* ! 507.031 us */                }
/* ! 512.552 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.303 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.250 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.407 us   */                          preempt_count_add();
/*   7.188 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.938 us   */                          preempt_count_sub();
/*   5.417 us   */                        }
/* + 21.510 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.885 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.145 us   */                            __local_bh_disable_ip();
/*   5.573 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.834 us   */                              dw_mci_hi6220_prepare_command();
/*   5.261 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.833 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.573 us   */                            }
/* + 19.270 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.104 us  */                            }
/* + 14.531 us  */                          }
/* + 51.250 us  */                        }
/* + 64.636 us  */                      }
/* ! 101.458 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.458 us   */                            preempt_count_add();
/*   7.812 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.459 us   */                            preempt_count_sub();
/*   7.813 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   1.458 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.354 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 13.959 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.833 us   */                                preempt_count_add();
/*   5.312 us   */                              }
/*              */                              deactivate_task() {
/*   1.406 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.781 us   */                                      __rcu_read_lock();
/*   0.834 us   */                                      __rcu_read_unlock();
/*   9.740 us   */                                    }
/* + 14.218 us  */                                  }
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.781 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.833 us   */                                    update_curr();
/*   5.365 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.781 us   */                                  clear_buddies();
/*   0.834 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 57.708 us  */                                }
/* + 67.188 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   1.302 us   */                                __msecs_to_jiffies();
/*   1.250 us   */                                __rcu_read_unlock();
/* + 18.073 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   1.354 us   */                                  put_prev_entity();
/*   1.302 us   */                                  put_prev_entity();
/* + 14.323 us  */                                }
/* + 20.677 us  */                              }
/*              */                              __switch_to() {
/*   1.302 us   */                                fpsimd_thread_switch();
/*   1.250 us   */                                hw_breakpoint_thread_switch();
/* ! 294.063 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.355 us   */                                  preempt_count_sub();
/*   7.813 us   */                                }
/* + 14.375 us  */                              }
/*   1.562 us   */                              preempt_count_sub();
/* ! 481.354 us */                            }
/* ! 487.604 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.563 us   */                            preempt_count_add();
/*   7.916 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.864 us   */                          }
/* ! 545.365 us */                        }
/* ! 551.511 us */                      }
/*   0.833 us   */                      mmc_retune_release();
/* ! 561.615 us */                    }
/* ! 678.594 us */                  }
/* ! 684.010 us */                }
/* ! 689.427 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.782 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.989 us   */                          preempt_count_add();
/*   5.365 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.989 us   */                          preempt_count_sub();
/*   5.521 us   */                        }
/* + 18.958 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.782 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.146 us   */                            __local_bh_disable_ip();
/*   5.625 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.625 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.354 us   */                              dw_mci_wait_while_busy.isra.17();
/*   7.969 us   */                            }
/* + 24.011 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   1.354 us   */                              preempt_count_sub();
/*   1.458 us   */                              preempt_count_sub();
/* + 14.583 us  */                            }
/* + 24.583 us  */                          }
/* + 68.177 us  */                        }
/* + 82.708 us  */                      }
/* ! 115.052 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.989 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.938 us   */                            preempt_count_sub();
/*   5.364 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.990 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.833 us   */                                rcu_sched_qs();
/*   0.885 us   */                                rcu_preempt_qs();
/*   9.844 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.781 us   */                                preempt_count_add();
/*   5.261 us   */                              }
/*              */                              deactivate_task() {
/*   1.459 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   0.833 us   */                                      __rcu_read_lock();
/*   0.834 us   */                                      __rcu_read_unlock();
/*   10.000 us  */                                    }
/* + 14.688 us  */                                  }
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.354 us   */                                    update_curr();
/*   7.656 us   */                                  }
/*   1.250 us   */                                  update_curr();
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  __compute_runnable_contrib();
/*   1.302 us   */                                  clear_buddies();
/*   1.354 us   */                                  update_cfs_shares();
/*   1.354 us   */                                  hrtick_update();
/* + 75.520 us  */                                }
/* + 86.250 us  */                              }
/*              */                              pick_next_task_fair() {
/*   1.302 us   */                                __rcu_read_lock();
/*   0.885 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 16.355 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.833 us   */                                  put_prev_entity();
/*   9.740 us   */                                }
/* + 14.167 us  */                              }
/*              */                              __switch_to() {
/*   0.885 us   */                                fpsimd_thread_switch();
/*   0.885 us   */                                hw_breakpoint_thread_switch();
/* ! 311.458 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.250 us   */                                  preempt_count_sub();
/*   7.604 us   */                                }
/* + 14.271 us  */                              }
/*   1.042 us   */                              preempt_count_sub();
/* ! 498.541 us */                            }
/* ! 502.917 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.042 us   */                            preempt_count_add();
/*   5.573 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.469 us   */                          }
/* ! 546.250 us */                        }
/* ! 550.573 us */                      }
/*   0.833 us   */                      mmc_retune_release();
/* ! 560.469 us */                    }
/* ! 689.375 us */                  }
/* ! 693.906 us */                }
/* ! 698.281 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.833 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.834 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.989 us   */                          preempt_count_add();
/*   5.625 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.937 us   */                          preempt_count_sub();
/*   5.364 us   */                        }
/* + 19.011 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.354 us   */                        mmc_retune();
/*   1.511 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.615 us   */                            __local_bh_disable_ip();
/*   8.021 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   1.302 us   */                              dw_mci_hi6220_prepare_command();
/*   7.761 us   */                            }
/*              */                            dw_mci_start_command() {
/*   1.250 us   */                              dw_mci_wait_while_busy.isra.17();
/*   7.917 us   */                            }
/* + 27.083 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.834 us   */                              preempt_count_sub();
/*   0.989 us   */                              preempt_count_sub();
/* + 10.365 us  */                            }
/* + 14.791 us  */                          }
/* + 65.156 us  */                        }
/* + 83.385 us  */                      }
/* ! 114.948 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.989 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.520 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.989 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   0.885 us   */                                rcu_sched_qs();
/*   0.833 us   */                                rcu_preempt_qs();
/*   9.740 us   */                              }
/*              */                              _raw_spin_lock_irq() {
/*   0.833 us   */                                preempt_count_add();
/*   5.261 us   */                              }
/*              */                              deactivate_task() {
/*   1.458 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.302 us   */                                      __rcu_read_lock();
/*   1.303 us   */                                      __rcu_read_unlock();
/* + 14.062 us  */                                    }
/* + 20.521 us  */                                  }
/*   1.250 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   1.354 us   */                                    update_curr();
/*   7.917 us   */                                  }
/*   1.354 us   */                                  update_curr();
/*   1.302 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.781 us   */                                  hrtick_update();
/* + 71.615 us  */                                }
/* + 82.656 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.833 us   */                                __rcu_read_lock();
/*   0.833 us   */                                __msecs_to_jiffies();
/*   0.833 us   */                                __rcu_read_unlock();
/* + 14.271 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.834 us   */                                  put_prev_entity();
/*   0.834 us   */                                  put_prev_entity();
/*   9.739 us   */                                }
/* + 14.323 us  */                              }
/*              */                              __switch_to() {
/*   0.833 us   */                                fpsimd_thread_switch();
/*   0.833 us   */                                hw_breakpoint_thread_switch();
/* ! 320.209 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.354 us   */                                  preempt_count_sub();
/*   7.865 us   */                                }
/* + 14.687 us  */                              }
/*   1.094 us   */                              preempt_count_sub();
/* ! 501.094 us */                            }
/* ! 505.521 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.094 us   */                            preempt_count_add();
/*   5.573 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.990 us   */                            preempt_count_sub();
/*   5.469 us   */                          }
/* ! 546.250 us */                        }
/* ! 550.781 us */                      }
/*   0.833 us   */                      mmc_retune_release();
/* ! 559.584 us */                    }
/* ! 686.875 us */                  }
/* ! 691.406 us */                }
/* ! 695.833 us */              }
/*              */              cis_tpl_parse() {
/*              */                cistpl_funce() {
/*              */                  cis_tpl_parse() {
/*   0.885 us   */                    cistpl_funce_common();
/*   5.782 us   */                  }
/* + 10.208 us  */                }
/* + 15.521 us  */              }
/*   1.770 us   */              kfree();
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   0.781 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.459 us   */                          preempt_count_add();
/*   7.709 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.406 us   */                          preempt_count_sub();
/*   7.708 us   */                        }
/* + 26.667 us  */                      }
/*              */                      __mmc_start_request() {
/*   1.302 us   */                        mmc_retune();
/*   1.562 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.615 us   */                            __local_bh_disable_ip();
/*   8.021 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.833 us   */                              dw_mci_hi6220_prepare_command();
/*   5.313 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.782 us   */                              dw_mci_wait_while_busy.isra.17();
/*   8.021 us   */                            }
/* + 21.719 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*   0.990 us   */                              preempt_count_sub();
/* + 10.052 us  */                            }
/* + 14.531 us  */                          }
/* + 58.021 us  */                        }
/* + 76.303 us  */                      }
/* ! 116.771 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   0.990 us   */                            preempt_count_add();
/*   5.469 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.937 us   */                            preempt_count_sub();
/*   5.417 us   */                          }
/*              */                          schedule_timeout() {
/*              */                            schedule() {
/*   0.937 us   */                              preempt_count_add();
/*              */                              rcu_note_context_switch() {
/*   1.302 us   */                                rcu_sched_qs();
/*   1.302 us   */                                rcu_preempt_qs();
/* + 13.177 us  */                              }
/*              */                              _raw_spin_lock_irq() {
/*   1.250 us   */                                preempt_count_add();
/*   7.500 us   */                              }
/*              */                              deactivate_task() {
/*   2.396 us   */                                update_rq_clock.part.83();
/*              */                                dequeue_task_fair() {
/*              */                                  update_curr() {
/*              */                                    cpuacct_charge() {
/*   1.354 us   */                                      __rcu_read_lock();
/*   1.302 us   */                                      __rcu_read_unlock();
/* + 14.114 us  */                                    }
/* + 20.625 us  */                                  }
/*   0.833 us   */                                  __compute_runnable_contrib();
/*   0.834 us   */                                  clear_buddies();
/*              */                                  update_cfs_shares() {
/*   0.833 us   */                                    update_curr();
/*   5.469 us   */                                  }
/*   0.834 us   */                                  update_curr();
/*   0.833 us   */                                  clear_buddies();
/*   0.885 us   */                                  update_cfs_shares();
/*   0.834 us   */                                  hrtick_update();
/* + 63.802 us  */                                }
/* + 76.770 us  */                              }
/*              */                              pick_next_task_fair() {
/*   0.781 us   */                                __rcu_read_lock();
/*   0.886 us   */                                __msecs_to_jiffies();
/*   0.885 us   */                                __rcu_read_unlock();
/* + 14.584 us  */                              }
/*              */                              pick_next_task_idle() {
/*              */                                put_prev_task_fair() {
/*   0.833 us   */                                  put_prev_entity();
/*   0.833 us   */                                  put_prev_entity();
/*   9.792 us   */                                }
/* + 14.271 us  */                              }
/*              */                              __switch_to() {
/*   0.781 us   */                                fpsimd_thread_switch();
/*   1.250 us   */                                hw_breakpoint_thread_switch();
/* ! 313.073 us */                              }
/*              */                              finish_task_switch() {
/*              */                                _raw_spin_unlock_irq() {
/*   1.354 us   */                                  preempt_count_sub();
/*   7.709 us   */                                }
/* + 14.115 us  */                              }
/*   1.562 us   */                              preempt_count_sub();
/* ! 498.021 us */                            }
/* ! 503.386 us */                          }
/*              */                          _raw_spin_lock_irq() {
/*   1.094 us   */                            preempt_count_add();
/*   5.521 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   0.989 us   */                            preempt_count_sub();
/*   5.521 us   */                          }
/* ! 547.135 us */                        }
/* ! 551.511 us */                      }
/*   0.834 us   */                      mmc_retune_release();
/* ! 560.312 us */                    }
/* ! 689.532 us */                  }
/* ! 693.958 us */                }
/* ! 698.385 us */              }
/* * 18189.79 us*/            }
/* * 18194.94 us*/          }
/*              */          mmc_remove_card() {
/*              */            mmc_remove_card_debugfs() {
/*   0.989 us   */              debugfs_remove_recursive();
/*   5.730 us   */            }
/*              */            put_device() {
/*              */              device_release() {
/*              */                devres_release_all() {
/*              */                  _raw_spin_lock_irqsave() {
/*   0.990 us   */                    preempt_count_add();
/*   5.468 us   */                  }
/*              */                  release_nodes() {
/*              */                    _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.521 us   */                    }
/* + 10.573 us  */                  }
/* + 24.635 us  */                }
/*              */                mmc_release_card() {
/*              */                  sdio_free_common_cis() {
/*   1.823 us   */                    kfree();
/*   8.698 us   */                  }
/*   1.302 us   */                  kfree();
/*   2.187 us   */                  kfree();
/* + 28.489 us  */                }
/*   1.302 us   */                kfree();
/* + 70.208 us  */              }
/* + 76.719 us  */            }
/* + 91.928 us  */          }
/*   2.864 us   */          mmc_fixup_device();
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   0.781 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   0.781 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   1.042 us   */                      preempt_count_add();
/*   5.520 us   */                    }
/*              */                    _raw_read_unlock() {
/*   0.989 us   */                      preempt_count_sub();
/*   5.469 us   */                    }
/* + 19.010 us  */                  }
/*              */                  __mmc_start_request() {
/*   0.885 us   */                    mmc_retune();
/*   1.042 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.146 us   */                        __local_bh_disable_ip();
/*   5.729 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   0.833 us   */                          dw_mci_hi6220_prepare_command();
/*   5.364 us   */                        }
/*              */                        dw_mci_start_command() {
/*   0.833 us   */                          dw_mci_wait_while_busy.isra.17();
/*   5.572 us   */                        }
/* + 19.271 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   1.302 us   */                          preempt_count_sub();
/*   1.511 us   */                          preempt_count_sub();
/* + 14.427 us  */                        }
/* + 20.781 us  */                      }
/* + 58.229 us  */                    }
/* + 76.094 us  */                  }
/* ! 108.542 us */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   1.458 us   */                        preempt_count_add();
/*   7.812 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   1.459 us   */                        preempt_count_sub();
/*   7.188 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   0.989 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   0.833 us   */                            rcu_sched_qs();
/*   0.833 us   */                            rcu_preempt_qs();
/*   9.635 us   */                          }
/*              */                          _raw_spin_lock_irq() {
/*   0.781 us   */                            preempt_count_add();
/*   5.365 us   */                          }
/*              */                          deactivate_task() {
/*   1.459 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   0.781 us   */                                  __rcu_read_lock();
/*   0.833 us   */                                  __rcu_read_unlock();
/*   9.896 us   */                                }
/* + 14.427 us  */                              }
/*   0.834 us   */                              __compute_runnable_contrib();
/*   0.781 us   */                              __compute_runnable_contrib();
/*   0.834 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   0.885 us   */                                update_curr();
/*   5.573 us   */                              }
/*   1.302 us   */                              update_curr();
/*   1.250 us   */                              __compute_runnable_contrib();
/*   1.302 us   */                              __compute_runnable_contrib();
/*   1.302 us   */                              clear_buddies();
/*   1.354 us   */                              update_cfs_shares();
/*   1.354 us   */                              hrtick_update();
/* + 81.146 us  */                            }
/* + 91.615 us  */                          }
/*              */                          pick_next_task_fair() {
/*   1.302 us   */                            __rcu_read_lock();
/*   1.354 us   */                            __msecs_to_jiffies();
/*   1.302 us   */                            __rcu_read_unlock();
/* + 20.104 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   0.834 us   */                              put_prev_entity();
/*   0.834 us   */                              put_prev_entity();
/*   9.635 us   */                            }
/* + 14.115 us  */                          }
/*              */                          __switch_to() {
/*   0.833 us   */                            fpsimd_thread_switch();
/*   0.834 us   */                            hw_breakpoint_thread_switch();
/* ! 268.646 us */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   1.302 us   */                              preempt_count_sub();
/*   7.552 us   */                            }
/* + 14.219 us  */                          }
/*   1.511 us   */                          preempt_count_sub();
/* ! 466.667 us */                        }
/* ! 471.979 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   1.458 us   */                        preempt_count_add();
/*   7.709 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   1.458 us   */                        preempt_count_sub();
/* + 11.562 us  */                      }
/* ! 530.990 us */                    }
/* ! 537.448 us */                  }
/*   1.302 us   */                  mmc_retune_release();
/* ! 549.114 us */                }
/* ! 671.823 us */              }
/* ! 676.302 us */            }
/* ! 681.146 us */          }
/*              */          mmc_io_rw_direct() {
/*              */            mmc_io_rw_direct_host() {
/*              */              mmc_wait_for_cmd() {
/*   0.833 us   */                __init_waitqueue_head();
/*              */                mmc_start_request() {
/*   0.833 us   */                  mmc_retune_hold();
/*              */                  led_trigger_event() {
/*              */                    _raw_read_lock() {
/*   0.990 us   */                      preempt_count_add();
/*   5.573 us   */                    }
/*              */                    _raw_read_unlock() {
/*   0.937 us   */                      preempt_count_sub();
/*   5.417 us   */                    }
/* + 18.854 us  */                  }
/*              */                  __mmc_start_request() {
/*   0.834 us   */                    mmc_retune();
/*   1.041 us   */                    dw_mci_card_busy();
/*              */                    dw_mci_request() {
/*              */                      _raw_spin_lock_bh() {
/*   1.146 us   */                        __local_bh_disable_ip();
/*   5.625 us   */                      }
/*              */                      __dw_mci_start_request() {
/*              */                        dw_mci_prepare_command() {
/*   0.834 us   */                          dw_mci_hi6220_prepare_command();
/*   5.469 us   */                        }
/*              */                        dw_mci_start_command() {
/*   1.302 us   */                          dw_mci_wait_while_busy.isra.17();
/*   7.968 us   */                        }
/* + 23.229 us  */                      }
/*              */                      _raw_spin_unlock_bh() {
/*              */                        __local_bh_enable_ip() {
/*   1.302 us   */                          preempt_count_sub();
/*   1.458 us   */                          preempt_count_sub();
/* + 14.375 us  */                        }
/* + 20.625 us  */                      }
/* + 63.698 us  */                    }
/* + 78.333 us  */                  }
/* ! 110.521 us */                }
/*              */                mmc_wait_for_req_done() {
/*              */                  wait_for_completion() {
/*              */                    wait_for_common() {
/*              */                      _raw_spin_lock_irq() {
/*   1.198 us   */                        preempt_count_add();
/*   6.615 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.990 us   */                        preempt_count_sub();
/*   5.364 us   */                      }
/*              */                      schedule_timeout() {
/*              */                        schedule() {
/*   0.938 us   */                          preempt_count_add();
/*              */                          rcu_note_context_switch() {
/*   0.833 us   */                            rcu_sched_qs();
/*   0.833 us   */                            rcu_preempt_qs();
/*   9.635 us   */                          }
/*              */                          _raw_spin_lock_irq() {
/*   0.781 us   */                            preempt_count_add();
/*   5.208 us   */                          }
/*              */                          deactivate_task() {
/*   1.458 us   */                            update_rq_clock.part.83();
/*              */                            dequeue_task_fair() {
/*              */                              update_curr() {
/*              */                                cpuacct_charge() {
/*   0.833 us   */                                  __rcu_read_lock();
/*   0.885 us   */                                  __rcu_read_unlock();
/*   9.948 us   */                                }
/* + 14.531 us  */                              }
/*   0.834 us   */                              clear_buddies();
/*              */                              update_cfs_shares() {
/*   0.885 us   */                                update_curr();
/*   5.521 us   */                              }
/*   1.302 us   */                              update_curr();
/*   1.302 us   */                              clear_buddies();
/*   1.354 us   */                              update_cfs_shares();
/*   1.302 us   */                              hrtick_update();
/* + 63.021 us  */                            }
/* + 73.542 us  */                          }
/*              */                          pick_next_task_fair() {
/*   1.302 us   */                            __rcu_read_lock();
/*   1.354 us   */                            __msecs_to_jiffies();
/*   1.302 us   */                            __rcu_read_unlock();
/* + 20.364 us  */                          }
/*              */                          pick_next_task_idle() {
/*              */                            put_prev_task_fair() {
/*   0.833 us   */                              put_prev_entity();
/*   0.833 us   */                              put_prev_entity();
/*   9.687 us   */                            }
/* + 14.688 us  */                          }
/*              */                          __switch_to() {
/*   0.782 us   */                            fpsimd_thread_switch();
/*   0.834 us   */                            hw_breakpoint_thread_switch();
/* + 95.677 us  */                          }
/*              */                          finish_task_switch() {
/*              */                            _raw_spin_unlock_irq() {
/*   1.303 us   */                              preempt_count_sub();
/*   7.656 us   */                            }
/* + 14.114 us  */                          }
/*   1.615 us   */                          preempt_count_sub();
/* ! 276.927 us */                        }
/* ! 282.344 us */                      }
/*              */                      _raw_spin_lock_irq() {
/*   1.041 us   */                        preempt_count_add();
/*   6.250 us   */                      }
/*              */                      _raw_spin_unlock_irq() {
/*   0.990 us   */                        preempt_count_sub();
/*   5.417 us   */                      }
/* ! 327.083 us */                    }
/* ! 332.604 us */                  }
/*   0.833 us   */                  mmc_retune_release();
/* ! 342.396 us */                }
/* ! 466.823 us */              }
/* ! 471.250 us */            }
/* ! 475.573 us */          }
/*              */          mmc_set_clock() {
/*              */            dw_mci_set_ios() {
/*              */              dw_mci_hi6220_set_ios() {
/*              */                clk_set_rate() {
/*              */                  clk_prepare_lock() {
/*   1.354 us   */                    mutex_trylock();
/*   6.250 us   */                  }
/*              */                  clk_core_set_rate_nolock() {
/*              */                    clk_calc_new_rates() {
/*              */                      clk_calc_new_rates() {
/*              */                        __clk_mux_determine_rate() {
/*              */                          clk_mux_determine_rate_flags.isra.23() {
/*              */                            clk_core_round_rate_nolock() {
/*              */                              clk_factor_round_rate() {
/*   0.990 us   */                                clk_hw_get_flags();
/*   5.729 us   */                              }
/* + 10.834 us  */                            }
/*              */                            clk_core_round_rate_nolock() {
/*              */                              hi6220_clkdiv_round_rate() {
/*              */                                divider_round_rate() {
/*              */                                  clk_divider_bestdiv() {
/*   2.240 us   */                                    _get_maxdiv();
/*   1.302 us   */                                    clk_hw_get_flags();
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.510 us   */                                        clk_core_round_rate_nolock();
/*   8.489 us   */                                      }
/* + 15.312 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/* + 10.156 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.156 us   */                                      }
/*   9.479 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.364 us   */                                      }
/*   9.740 us   */                                    }
/*   1.041 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.969 us   */                                      }
/* + 14.115 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.344 us   */                                      }
/* + 12.709 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.584 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   6.822 us   */                                      }
/* + 12.083 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 13.855 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 14.011 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.886 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.740 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.313 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.896 us   */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 13.906 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.573 us   */                                      }
/* + 10.989 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.532 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.531 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   7.604 us   */                                      }
/* + 11.979 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.906 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   7.500 us   */                                      }
/* + 13.333 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.583 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.312 us   */                                      }
/*   9.688 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.250 us   */                                        clk_core_round_rate_nolock();
/*   6.823 us   */                                      }
/* + 12.136 us  */                                    }
/*   1.354 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 13.907 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.709 us   */                                      }
/* + 14.011 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.365 us   */                                      }
/*   9.791 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.636 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.781 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.782 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/* + 10.104 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 13.854 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 14.010 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/* + 10.364 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.708 us   */                                      }
/* + 13.959 us  */                                    }
/*   1.303 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.750 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 12.916 us  */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.687 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.208 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.302 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.302 us   */                                        clk_core_round_rate_nolock();
/*   7.552 us   */                                      }
/* + 13.802 us  */                                    }
/*   1.250 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   1.354 us   */                                        clk_core_round_rate_nolock();
/*   7.656 us   */                                      }
/* + 13.958 us  */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.261 us   */                                      }
/*   9.635 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.781 us   */                                        clk_core_round_rate_nolock();
/*   5.209 us   */                                      }
/*   9.583 us   */                                    }
/*   0.833 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.834 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.687 us   */                                    }
/*   0.834 us   */                                    clk_hw_get_parent();
/*              */                                    clk_hw_round_rate() {
/*              */                                      clk_core_round_rate_nolock() {
/*   0.833 us   */                                        clk_core_round_rate_nolock();
/*   5.260 us   */                                      }
/*   9.636 us   */                                    }
/* # 1349.063 us*/                                  }
/* # 1354.895 us*/                                }
/* # 1360.469 us*/                              }
/* # 1366.823 us*/                            }
/* # 1387.761 us*/                          }
/* # 1392.709 us*/                        }
/*              */                        clk_calc_subtree() {
/*   1.354 us   */                          clk_calc_subtree();
/*   8.021 us   */                        }
/* # 1413.906 us*/                      }
/*   1.354 us   */                      clk_calc_subtree();
/* # 1430.416 us*/                    }
/*   1.562 us   */                    clk_propagate_rate_change();
/*              */                    clk_change_rate() {
/*   1.875 us   */                      clk_change_rate();
/*   9.583 us   */                    }
/* # 1458.125 us*/                  }
/*              */                  clk_prepare_unlock() {
/*   1.302 us   */                    mutex_unlock();
/*   7.865 us   */                  }
/* # 1485.729 us*/                }
/*              */                clk_get_rate() {
/*              */                  clk_prepare_lock() {
/*   0.834 us   */                    mutex_trylock();
/*   5.260 us   */                  }
/*              */                  clk_prepare_unlock() {
/*   0.833 us   */                    mutex_unlock();
/*   5.260 us   */                  }
/* + 18.750 us  */                }
/* # 1512.916 us*/              }
/*              */              dw_mci_setup_bus() {
/*              */                _dev_info() {
/*   1.198 us   */                  dev_driver_string.part.16();
/*              */                  dev_printk_emit() {
/*              */                    dev_vprintk_emit() {
/*              */                      vprintk_emit() {
/*              */                        _raw_spin_lock() {
/*   1.145 us   */                          preempt_count_add();
/*   5.833 us   */                        }
/*              */                        log_store() {
/*   1.666 us   */                          log_make_free_space();
/*   7.968 us   */                        }
/*              */                        _raw_spin_unlock() {
/*   1.563 us   */                          preempt_count_sub();
/*   7.969 us   */                        }
/*   1.458 us   */                        preempt_count_add();
/*              */                        console_trylock() {
/*              */                          __down_trylock_console_sem.isra.15() {
/*              */                            /* console_lock: __down_trylock_console_sem */
/*              */                            /* console_lock: down_trylock console_sem */
/*              */                            down_trylock() {
/*              */                              _raw_spin_lock_irqsave() {
/*   1.302 us   */                                preempt_count_add();
/*   7.500 us   */                              }
/*              */                              _raw_spin_unlock_irqrestore() {
/*   1.354 us   */                                preempt_count_sub();
/*   7.760 us   */                              }
/* + 26.458 us  */                            }
/*              */                            /* console_lock: mutex_acquire console_lock_dep_map */
/* + 43.230 us  */                          }
/*              */                          /* console_lock: console_trylock */
/*              */                          /* console_lock: mutex_release console_lock_dep_map */
/*              */                          /* console_lock: up console_sem */
/*              */                          up() {
/*              */                            _raw_spin_lock_irqsave() {
/*   0.834 us   */                              preempt_count_add();
/*   5.260 us   */                            }
/*              */                            _raw_spin_unlock_irqrestore() {
/*   0.834 us   */                              preempt_count_sub();
/*   5.260 us   */                            }
/* + 18.542 us  */                          }
/* + 77.135 us  */                        }
/*   1.042 us   */                        preempt_count_sub();
/* ! 137.292 us */                      }
/* ! 149.843 us */                    }
/* ! 154.636 us */                  }
/* ! 164.844 us */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.093 us   */                  dw_mci_wait_while_busy.isra.17();
/*   6.459 us   */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.093 us   */                  dw_mci_wait_while_busy.isra.17();
/*   6.458 us   */                }
/*              */                mci_send_cmd.isra.18.constprop.24() {
/*   1.041 us   */                  dw_mci_wait_while_busy.isra.17();
/*   6.406 us   */                }
/* ! 200.677 us */              }
/* # 1722.760 us*/            }
/* # 1727.709 us*/          }
/*              */          sdio_enable_4bit_bus() {
/*              */            sdio_enable_wide.part.8() {
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.302 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   1.303 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   1.458 us   */                          preempt_count_add();
/*   7.708 us   */                        }
/*              */                        _raw_read_unlock() {
/*   1.406 us   */                          preempt_count_sub();
/*   7.708 us   */                        }
/* + 26.666 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.833 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.146 us   */                            __local_bh_disable_ip();
/*   5.729 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.781 us   */                              dw_mci_hi6220_prepare_command();
/*   5.208 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.781 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.573 us   */                            }
/* + 18.958 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*   ==========>*/
/*              */                          gic_handle_irq() {
/*              */                            __handle_domain_irq() {
/*              */                              irq_enter() {
/*   0.937 us   */                                rcu_irq_enter();
/*   0.834 us   */                                preempt_count_add();
/*   10.000 us  */                              }
/*   0.885 us   */                              irq_find_mapping();
/*              */                              generic_handle_irq() {
/*              */                                handle_fasteoi_irq() {
/*              */                                  _raw_spin_lock() {
/*   0.782 us   */                                    preempt_count_add();
/*   5.208 us   */                                  }
/*              */                                  handle_irq_event() {
/*              */                                    _raw_spin_unlock() {
/*   1.250 us   */                                      preempt_count_sub();
/*   7.552 us   */                                    }
/*              */                                    handle_irq_event_percpu() {
/*              */                                      dw_mci_interrupt() {
/*              */                                        __tasklet_schedule() {
/*   1.302 us   */                                          __raise_softirq_irqoff();
/*   7.917 us   */                                        }
/* + 15.104 us  */                                      }
/*   1.458 us   */                                      add_interrupt_randomness();
/*   1.407 us   */                                      note_interrupt();
/* + 34.532 us  */                                    }
/*              */                                    _raw_spin_lock() {
/*   1.302 us   */                                      preempt_count_add();
/*   7.500 us   */                                    }
/* + 65.677 us  */                                  }
/*   0.885 us   */                                  gic_eoimode1_eoi_irq();
/*              */                                  _raw_spin_unlock() {
/*   0.833 us   */                                    preempt_count_sub();
/*   5.313 us   */                                  }
/* + 93.229 us  */                                }
/* + 97.865 us  */                              }
/*              */                              irq_exit() {
/*   0.833 us   */                                preempt_count_sub();
/*   0.834 us   */                                idle_cpu();
/*   0.938 us   */                                rcu_irq_exit();
/* + 14.375 us  */                              }
/* ! 138.698 us */                            }
/* ! 143.385 us */                          }
/*   <==========*/
/*              */                            __local_bh_enable_ip() {
/*   0.834 us   */                              preempt_count_sub();
/*              */                              do_softirq() {
/*              */                                __do_softirq() {
/*   0.886 us   */                                  __local_bh_disable_ip();
/*              */                                  tasklet_action() {
/*              */                                    dw_mci_tasklet_func() {
/*              */                                      _raw_spin_lock() {
/*   0.781 us   */                                        preempt_count_add();
/*   7.708 us   */                                      }
/*   1.094 us   */                                      dw_mci_command_complete();
/*              */                                      dw_mci_request_end() {
/*              */                                        _raw_spin_unlock() {
/*   1.250 us   */                                          preempt_count_sub();
/*   7.292 us   */                                        }
/*              */                                        mmc_request_done() {
/*              */                                          led_trigger_event() {
/*              */                                            _raw_read_lock() {
/*   1.302 us   */                                              preempt_count_add();
/*   7.709 us   */                                            }
/*              */                                            _raw_read_unlock() {
/*   1.250 us   */                                              preempt_count_sub();
/*   7.605 us   */                                            }
/* + 26.510 us  */                                          }
/*              */                                          mmc_wait_done() {
/*              */                                            complete() {
/*              */                                              _raw_spin_lock_irqsave() {
/*   1.302 us   */                                                preempt_count_add();
/*   7.552 us   */                                              }
/*              */                                              __wake_up_locked() {
/*   0.834 us   */                                                __wake_up_common();
/*   5.885 us   */                                              }
/*              */                                              _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                                                preempt_count_sub();
/*   5.260 us   */                                              }
/* + 32.500 us  */                                            }
/* + 37.865 us  */                                          }
/* + 74.739 us  */                                        }
/*              */                                        _raw_spin_lock() {
/*   0.781 us   */                                          preempt_count_add();
/*   5.208 us   */                                        }
/* ! 100.052 us */                                      }
/*              */                                      _raw_spin_unlock() {
/*   0.781 us   */                                        preempt_count_sub();
/*   5.209 us   */                                      }
/* ! 129.427 us */                                    }
/* ! 134.218 us */                                  }
/*   0.886 us   */                                  rcu_bh_qs();
/*              */                                  __local_bh_enable() {
/*   0.834 us   */                                    preempt_count_sub();
/*   5.260 us   */                                  }
/* ! 156.771 us */                                }
/* ! 161.354 us */                              }
/*   1.094 us   */                              preempt_count_sub();
/* ! 175.000 us */                            }
/* ! 179.479 us */                          } /* _raw_spin_unlock_bh */
/* ! 363.125 us */                        }
/* ! 376.563 us */                      }
/* ! 419.219 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.510 us   */                            preempt_count_add();
/*   7.864 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.511 us   */                            preempt_count_sub();
/*   7.865 us   */                          }
/* + 26.511 us  */                        }
/* + 31.823 us  */                      }
/*   1.302 us   */                      mmc_retune_release();
/* + 43.541 us  */                    }
/* ! 479.218 us */                  }
/* ! 485.573 us */                }
/* ! 495.000 us */              }
/*              */              mmc_io_rw_direct() {
/*              */                mmc_io_rw_direct_host() {
/*              */                  mmc_wait_for_cmd() {
/*   1.302 us   */                    __init_waitqueue_head();
/*              */                    mmc_start_request() {
/*   0.781 us   */                      mmc_retune_hold();
/*              */                      led_trigger_event() {
/*              */                        _raw_read_lock() {
/*   0.989 us   */                          preempt_count_add();
/*   5.417 us   */                        }
/*              */                        _raw_read_unlock() {
/*   0.989 us   */                          preempt_count_sub();
/*   5.417 us   */                        }
/* + 18.750 us  */                      }
/*              */                      __mmc_start_request() {
/*   0.834 us   */                        mmc_retune();
/*   1.042 us   */                        dw_mci_card_busy();
/*              */                        dw_mci_request() {
/*              */                          _raw_spin_lock_bh() {
/*   1.146 us   */                            __local_bh_disable_ip();
/*   5.573 us   */                          }
/*              */                          __dw_mci_start_request() {
/*              */                            dw_mci_prepare_command() {
/*   0.782 us   */                              dw_mci_hi6220_prepare_command();
/*   5.312 us   */                            }
/*              */                            dw_mci_start_command() {
/*   0.781 us   */                              dw_mci_wait_while_busy.isra.17();
/*   5.521 us   */                            }
/* + 18.802 us  */                          }
/*              */                          _raw_spin_unlock_bh() {
/*   ==========>*/
/*              */                          gic_handle_irq() {
/*              */                            __handle_domain_irq() {
/*              */                              irq_enter() {
/*   1.407 us   */                                rcu_irq_enter();
/*   1.302 us   */                                preempt_count_add();
/* + 12.969 us  */                              }
/*   1.250 us   */                              irq_find_mapping();
/*              */                              generic_handle_irq() {
/*              */                                handle_fasteoi_irq() {
/*              */                                  _raw_spin_lock() {
/*   1.302 us   */                                    preempt_count_add();
/*   7.656 us   */                                  }
/*              */                                  handle_irq_event() {
/*              */                                    _raw_spin_unlock() {
/*   1.302 us   */                                      preempt_count_sub();
/*   7.656 us   */                                    }
/*              */                                    handle_irq_event_percpu() {
/*              */                                      dw_mci_interrupt() {
/*              */                                        __tasklet_schedule() {
/*   0.833 us   */                                          __raise_softirq_irqoff();
/*   6.198 us   */                                        }
/* + 12.604 us  */                                      }
/*   0.989 us   */                                      add_interrupt_randomness();
/*   0.885 us   */                                      note_interrupt();
/* + 26.979 us  */                                    }
/*              */                                    _raw_spin_lock() {
/*   0.833 us   */                                      preempt_count_add();
/*   5.364 us   */                                    }
/* + 54.895 us  */                                  }
/*   0.886 us   */                                  gic_eoimode1_eoi_irq();
/*              */                                  _raw_spin_unlock() {
/*   0.834 us   */                                    preempt_count_sub();
/*   5.260 us   */                                  }
/* + 86.771 us  */                                }
/* + 92.396 us  */                              }
/*              */                              irq_exit() {
/*   0.833 us   */                                preempt_count_sub();
/*   0.833 us   */                                idle_cpu();
/*   0.937 us   */                                rcu_irq_exit();
/* + 14.323 us  */                              }
/* ! 138.958 us */                            }
/* ! 143.490 us */                          }
/*   <==========*/
/*              */                            __local_bh_enable_ip() {
/*   0.833 us   */                              preempt_count_sub();
/*              */                              do_softirq() {
/*              */                                __do_softirq() {
/*   1.354 us   */                                  __local_bh_disable_ip();
/*              */                                  tasklet_action() {
/*              */                                    dw_mci_tasklet_func() {
/*              */                                      _raw_spin_lock() {
/*   1.302 us   */                                        preempt_count_add();
/*   7.656 us   */                                      }
/*   1.511 us   */                                      dw_mci_command_complete();
/*              */                                      dw_mci_request_end() {
/*              */                                        _raw_spin_unlock() {
/*   1.250 us   */                                          preempt_count_sub();
/*   7.552 us   */                                        }
/*              */                                        mmc_request_done() {
/*              */                                          led_trigger_event() {
/*              */                                            _raw_read_lock() {
/*   1.250 us   */                                              preempt_count_add();
/*   7.448 us   */                                            }
/*              */                                            _raw_read_unlock() {
/*   0.833 us   */                                              preempt_count_sub();
/*   7.656 us   */                                            }
/* + 25.573 us  */                                          }
/*              */                                          mmc_wait_done() {
/*              */                                            complete() {
/*              */                                              _raw_spin_lock_irqsave() {
/*   0.833 us   */                                                preempt_count_add();
/*   5.313 us   */                                              }
/*              */                                              __wake_up_locked() {
/*   0.781 us   */                                                __wake_up_common();
/*   5.209 us   */                                              }
/*              */                                              _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                                preempt_count_sub();
/*   5.313 us   */                                              }
/* + 27.292 us  */                                            }
/* + 31.666 us  */                                          }
/* + 66.094 us  */                                        }
/*              */                                        _raw_spin_lock() {
/*   0.781 us   */                                          preempt_count_add();
/*   5.209 us   */                                        }
/* + 92.760 us  */                                      }
/*              */                                      _raw_spin_unlock() {
/*   0.782 us   */                                        preempt_count_sub();
/*   5.208 us   */                                      }
/* ! 126.041 us */                                    }
/* ! 131.667 us */                                  }
/*   0.885 us   */                                  rcu_bh_qs();
/*              */                                  __local_bh_enable() {
/*   0.833 us   */                                    preempt_count_sub();
/*   5.260 us   */                                  }
/* ! 156.406 us */                                }
/* ! 161.823 us */                              }
/*   1.563 us   */                              preempt_count_sub();
/* ! 178.333 us */                            }
/* ! 183.854 us */                          } /* _raw_spin_unlock_bh */
/* ! 367.916 us */                        }
/* ! 382.187 us */                      }
/* ! 416.458 us */                    }
/*              */                    mmc_wait_for_req_done() {
/*              */                      wait_for_completion() {
/*              */                        wait_for_common() {
/*              */                          _raw_spin_lock_irq() {
/*   1.458 us   */                            preempt_count_add();
/*   7.708 us   */                          }
/*              */                          _raw_spin_unlock_irq() {
/*   1.458 us   */                            preempt_count_sub();
/*   7.812 us   */                          }
/* + 26.823 us  */                        }
/* + 32.917 us  */                      }
/*   0.833 us   */                      mmc_retune_release();
/* + 42.760 us  */                    }
/* ! 475.782 us */                  }
/* ! 481.094 us */                }
/* ! 486.354 us */              }
/* ! 991.875 us */            }
/*              */            mmc_set_bus_width() {
/*              */              dw_mci_set_ios() {
/*              */                dw_mci_hi6220_set_ios() {
/*              */                  clk_set_rate() {
/*              */                    clk_prepare_lock() {
/*   0.885 us   */                      mutex_trylock();
/*   5.313 us   */                    }
/*              */                    clk_core_set_rate_nolock() {
/*              */                      clk_calc_new_rates() {
/*              */                        clk_calc_new_rates() {
/*              */                          __clk_mux_determine_rate() {
/*              */                            clk_mux_determine_rate_flags.isra.23() {
/*              */                              clk_core_round_rate_nolock() {
/*              */                                clk_factor_round_rate() {
/*   0.834 us   */                                  clk_hw_get_flags();
/*   5.260 us   */                                }
/*   9.687 us   */                              }
/*              */                              clk_core_round_rate_nolock() {
/*              */                                hi6220_clkdiv_round_rate() {
/*              */                                  divider_round_rate() {
/*              */                                    clk_divider_bestdiv() {
/*   1.094 us   */                                      _get_maxdiv();
/*   0.834 us   */                                      clk_hw_get_flags();
/*   0.781 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.802 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.594 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.687 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.635 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.636 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.739 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.781 us   */                                        }
/* + 11.094 us  */                                      }
/*   1.354 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.303 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.750 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   7.657 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.209 us   */                                        }
/*   9.687 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.740 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.635 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   7.604 us   */                                        }
/* + 11.875 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.635 us   */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.605 us   */                                        }
/* + 13.802 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   7.708 us   */                                        }
/* + 14.063 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   6.979 us   */                                        }
/* + 12.240 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.687 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.156 us   */                                        }
/*   9.532 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.791 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.584 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.657 us   */                                        }
/* + 12.916 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.250 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   7.656 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.094 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.636 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.688 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.583 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.739 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.469 us   */                                        }
/* + 10.781 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.709 us   */                                        }
/* + 13.906 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.604 us   */                                        }
/* + 13.906 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/* + 10.104 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.688 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.208 us   */                                        }
/*   9.583 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.687 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.792 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.802 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.656 us   */                                        }
/* + 14.010 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.250 us   */                                          clk_core_round_rate_nolock();
/*   6.770 us   */                                        }
/* + 12.396 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.687 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/*   9.739 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.687 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.209 us   */                                        }
/*   9.635 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.604 us   */                                        }
/* + 13.802 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   7.708 us   */                                        }
/* + 13.959 us  */                                      }
/*   1.303 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*   ==========>*/
/*              */                                      gic_handle_irq() {
/*              */                                        __handle_domain_irq() {
/*              */                                          irq_enter() {
/*   0.937 us   */                                            rcu_irq_enter();
/*   0.833 us   */                                            preempt_count_add();
/*   9.688 us   */                                          }
/*   0.834 us   */                                          irq_find_mapping();
/*              */                                          generic_handle_irq() {
/*              */                                            handle_percpu_devid_irq() {
/*              */                                              arch_timer_handler_phys() {
/*              */                                                hrtimer_interrupt() {
/*              */                                                  _raw_spin_lock() {
/*   0.833 us   */                                                    preempt_count_add();
/*   5.260 us   */                                                  }
/*              */                                                  ktime_get_update_offsets_now() {
/*   0.833 us   */                                                    arch_counter_read();
/*   5.417 us   */                                                  }
/*              */                                                  __hrtimer_run_queues() {
/*   1.198 us   */                                                    __remove_hrtimer();
/*              */                                                    _raw_spin_unlock() {
/*   0.833 us   */                                                      preempt_count_sub();
/*   5.521 us   */                                                    }
/*              */                                                    tick_sched_timer() {
/*              */                                                      ktime_get() {
/*   0.834 us   */                                                        arch_counter_read();
/*   5.365 us   */                                                      }
/*              */                                                      tick_do_update_jiffies64() {
/*              */                                                        _raw_spin_lock() {
/*   0.782 us   */                                                          preempt_count_add();
/*   5.260 us   */                                                        }
/*              */                                                        do_timer() {
/*   0.834 us   */                                                          calc_global_load();
/*   5.208 us   */                                                        }
/*              */                                                        _raw_spin_unlock() {
/*   0.833 us   */                                                          preempt_count_sub();
/*   5.365 us   */                                                        }
/*              */                                                        update_wall_time() {
/*              */                                                          _raw_spin_lock_irqsave() {
/*   0.781 us   */                                                            preempt_count_add();
/*   5.521 us   */                                                          }
/*   0.834 us   */                                                          arch_counter_read();
/*   0.833 us   */                                                          ntp_tick_length();
/*   0.781 us   */                                                          ntp_tick_length();
/*   0.833 us   */                                                          ntp_tick_length();
/*              */                                                          timekeeping_update() {
/*   0.833 us   */                                                            ntp_get_next_leap();
/*   0.938 us   */                                                            update_vsyscall();
/*   0.885 us   */                                                            raw_notifier_call_chain();
/*   1.250 us   */                                                            update_fast_timekeeper();
/* + 21.771 us  */                                                          }
/*              */                                                          _raw_spin_unlock_irqrestore() {
/*   1.354 us   */                                                            preempt_count_sub();
/*   7.604 us   */                                                          }
/* + 67.240 us  */                                                        }
/* ! 101.719 us */                                                      }
/*              */                                                      update_process_times() {
/*              */                                                        account_process_tick() {
/*              */                                                          account_system_time() {
/*              */                                                            cpuacct_account_field() {
/*   1.355 us   */                                                              __rcu_read_lock();
/*   1.302 us   */                                                              __rcu_read_unlock();
/* + 14.844 us  */                                                            }
/*              */                                                            acct_account_cputime() {
/*              */                                                              __acct_update_integrals() {
/*   1.562 us   */                                                                jiffies_to_timeval();
/*   8.490 us   */                                                              }
/* + 14.271 us  */                                                            }
/* + 40.989 us  */                                                          }
/* + 46.823 us  */                                                        }
/*   0.885 us   */                                                        hrtimer_run_queues();
/*              */                                                        raise_softirq() {
/*   0.833 us   */                                                          __raise_softirq_irqoff();
/*   5.365 us   */                                                        }
/*              */                                                        rcu_check_callbacks() {
/*   0.937 us   */                                                          rcu_bh_qs();
/*   0.834 us   */                                                          rcu_preempt_qs();
/*   0.885 us   */                                                          cpu_needs_another_gp();
/*   0.833 us   */                                                          cpu_needs_another_gp();
/*   0.834 us   */                                                          cpu_needs_another_gp();
/* + 24.844 us  */                                                        }
/*              */                                                        scheduler_tick() {
/*              */                                                          _raw_spin_lock() {
/*   0.833 us   */                                                            preempt_count_add();
/*   5.365 us   */                                                          }
/*   1.458 us   */                                                          update_rq_clock.part.83();
/*              */                                                          task_tick_fair() {
/*              */                                                            update_curr() {
/*              */                                                              cpuacct_charge() {
/*   0.833 us   */                                                                __rcu_read_lock();
/*   0.833 us   */                                                                __rcu_read_unlock();
/*   9.739 us   */                                                              }
/* + 14.323 us  */                                                            }
/*   0.833 us   */                                                            __compute_runnable_contrib();
/*   0.834 us   */                                                            __compute_runnable_contrib();
/*              */                                                            update_cfs_shares() {
/*   0.886 us   */                                                              update_curr();
/*   5.417 us   */                                                            }
/*   1.094 us   */                                                            hrtimer_active();
/*   0.833 us   */                                                            update_curr();
/*   0.834 us   */                                                            __compute_runnable_contrib();
/*   0.833 us   */                                                            __compute_runnable_contrib();
/*   0.885 us   */                                                            update_cfs_shares();
/*   0.886 us   */                                                            hrtimer_active();
/* + 68.750 us  */                                                          }
/*              */                                                          update_cpu_load_active() {
/*              */                                                            __update_cpu_load() {
/*   0.834 us   */                                                              sched_avg_update();
/*   5.625 us   */                                                            }
/* + 10.209 us  */                                                          }
/*   1.302 us   */                                                          calc_global_load_tick();
/*              */                                                          _raw_spin_unlock() {
/*   1.302 us   */                                                            preempt_count_sub();
/*   7.604 us   */                                                          }
/*              */                                                          trigger_load_balance() {
/*   1.302 us   */                                                            __rcu_read_lock();
/*   1.302 us   */                                                            __rcu_read_unlock();
/*   1.302 us   */                                                            __rcu_read_lock();
/*   1.302 us   */                                                            __rcu_read_unlock();
/* + 28.125 us  */                                                          }
/* ! 156.458 us */                                                        }
/*   1.094 us   */                                                        run_posix_cpu_timers();
/* ! 260.417 us */                                                      }
/*   0.937 us   */                                                      profile_tick();
/*   0.885 us   */                                                      hrtimer_forward();
/* ! 390.104 us */                                                    }
/*              */                                                    _raw_spin_lock() {
/*   0.834 us   */                                                      preempt_count_add();
/*   5.260 us   */                                                    }
/*   0.989 us   */                                                    enqueue_hrtimer();
/* ! 422.344 us */                                                  }
/*   0.885 us   */                                                  __hrtimer_get_next_event();
/*              */                                                  _raw_spin_unlock() {
/*   0.834 us   */                                                    preempt_count_sub();
/*   5.312 us   */                                                  }
/*              */                                                  tick_program_event() {
/*              */                                                    clockevents_program_event() {
/*              */                                                      ktime_get() {
/*   0.834 us   */                                                        arch_counter_read();
/*   5.260 us   */                                                      }
/*   0.833 us   */                                                      arch_timer_set_next_event_phys();
/* + 14.166 us  */                                                    }
/* + 18.594 us  */                                                  }
/* ! 480.677 us */                                                }
/* ! 485.209 us */                                              }
/*   0.886 us   */                                              gic_eoimode1_eoi_irq();
/* ! 494.323 us */                                            }
/* ! 498.802 us */                                          }
/*              */                                          irq_exit() {
/*   0.834 us   */                                            preempt_count_sub();
/*              */                                            __do_softirq() {
/*   1.302 us   */                                              __local_bh_disable_ip();
/*              */                                              run_timer_softirq() {
/*              */                                                _raw_spin_lock_irq() {
/*   1.302 us   */                                                  preempt_count_add();
/*   7.656 us   */                                                }
/*              */                                                _raw_spin_unlock_irq() {
/*   1.198 us   */                                                  preempt_count_sub();
/*   7.552 us   */                                                }
/* + 26.718 us  */                                              }
/*   1.355 us   */                                              rcu_bh_qs();
/*              */                                              __local_bh_enable() {
/*   1.302 us   */                                                preempt_count_sub();
/*   7.500 us   */                                              }
/* + 58.698 us  */                                            }
/*   0.833 us   */                                            idle_cpu();
/*   0.937 us   */                                            rcu_irq_exit();
/* + 78.386 us  */                                          }
/* ! 602.969 us */                                        }
/* ! 607.604 us */                                      }
/*   <==========*/
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.313 us   */                                        }
/* ! 621.510 us */                                      } /* clk_hw_round_rate */
/*   0.885 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 12.135 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.635 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.365 us   */                                        }
/*   9.791 us   */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.355 us   */                                          clk_core_round_rate_nolock();
/*   7.657 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   7.708 us   */                                        }
/* + 13.906 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.302 us   */                                          clk_core_round_rate_nolock();
/*   6.615 us   */                                        }
/* + 11.979 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.688 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.688 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.636 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.885 us   */                                          clk_core_round_rate_nolock();
/*   5.312 us   */                                        }
/*   9.740 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.198 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.854 us  */                                      }
/*   1.250 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.354 us   */                                          clk_core_round_rate_nolock();
/*   7.708 us   */                                        }
/* + 14.010 us  */                                      }
/*   1.302 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   1.250 us   */                                          clk_core_round_rate_nolock();
/*   7.552 us   */                                        }
/* + 13.854 us  */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.833 us   */                                          clk_core_round_rate_nolock();
/*   5.261 us   */                                        }
/*   9.635 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.209 us   */                                        }
/*   9.583 us   */                                      }
/*   0.833 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.834 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.687 us   */                                      }
/*   0.834 us   */                                      clk_hw_get_parent();
/*              */                                      clk_hw_round_rate() {
/*              */                                        clk_core_round_rate_nolock() {
/*   0.781 us   */                                          clk_core_round_rate_nolock();
/*   5.260 us   */                                        }
/*   9.636 us   */                                      }
/* # 1960.313 us*/                                    }
/* # 1964.739 us*/                                  }
/* # 1969.114 us*/                                }
/* # 1973.542 us*/                              }
/* # 1991.614 us*/                            }
/* # 1996.979 us*/                          }
/*              */                          clk_calc_subtree() {
/*   1.302 us   */                            clk_calc_subtree();
/*   7.604 us   */                          }
/* # 2015.260 us*/                        }
/*   1.302 us   */                        clk_calc_subtree();
/* # 2027.083 us*/                      }
/*   1.302 us   */                      clk_propagate_rate_change();
/*              */                      clk_change_rate() {
/*   1.406 us   */                        clk_change_rate();
/*   7.812 us   */                      }
/* # 2051.875 us*/                    }
/*              */                    clk_prepare_unlock() {
/*   1.354 us   */                      mutex_unlock();
/*   7.657 us   */                    }
/* # 2078.750 us*/                  }
/*              */                  clk_get_rate() {
/*              */                    clk_prepare_lock() {
/*   0.833 us   */                      mutex_trylock();
/*   5.313 us   */                    }
/*              */                    clk_prepare_unlock() {
/*   0.833 us   */                      mutex_unlock();
/*   5.261 us   */                    }
/* + 18.541 us  */                  }
/* # 2105.521 us*/                }
/*   0.990 us   */                dw_mci_setup_bus();
/* # 2115.000 us*/              }
/* # 2119.427 us*/            }
/* # 3120.989 us*/          }
/* * 31920.20 us*/        }
/*              */        mmc_release_host() {
/*              */          _raw_spin_lock_irqsave() {
/*   1.146 us   */            preempt_count_add();
/*   5.573 us   */          }
/*              */          _raw_spin_unlock_irqrestore() {
/*   0.990 us   */            preempt_count_sub();
/*   5.468 us   */          }
/*              */          __wake_up() {
/*              */            _raw_spin_lock_irqsave() {
/*   0.990 us   */              preempt_count_add();
/*   5.520 us   */            }
/*   0.834 us   */            __wake_up_common();
/*              */            _raw_spin_unlock_irqrestore() {
/*   0.990 us   */              preempt_count_sub();
/*   5.365 us   */            }
/* + 23.542 us  */          }
/*   1.563 us   */          __pm_runtime_suspend();
/* + 54.271 us  */        }
/* @ 154277.3 us*/      }
/*   1.563 us   */      pm_generic_resume();
/* @ 154290.3 us*/    }
/*   1.562 us   */    dev_driver_string();
/*   1.354 us   */    dev_driver_string();
/*              */  /* device_pm_callback_end: mmc mmc2:0001, err=0 */