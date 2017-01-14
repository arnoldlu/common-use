/*              */ /* device_pm_callback_start: mmcblk mmc0:0001, parent: mmc0, bus [resume] */
/*              */   mmc_bus_resume() {
/*              */     mmc_resume() {
/*              */       _mmc_resume() {
/*              */         __mmc_claim_host() {
/*              */           add_wait_queue() {
/*              */             _raw_spin_lock_irqsave() {
/*   0.989 us   */               preempt_count_add();
/*   5.469 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.937 us   */               preempt_count_sub();
/*   5.573 us   */             }
/* + 19.635 us  */           }
/*              */           _raw_spin_lock_irqsave() {
/*   0.990 us   */             preempt_count_add();
/*   5.677 us   */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*   0.938 us   */             preempt_count_sub();
/*   5.521 us   */           }
/*              */           remove_wait_queue() {
/*              */             _raw_spin_lock_irqsave() {
/*   0.990 us   */               preempt_count_add();
/*   5.521 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.989 us   */               preempt_count_sub();
/*   5.469 us   */             }
/* + 19.271 us  */           }
/*              */           __pm_runtime_resume() {
/*              */             _raw_spin_lock_irqsave() {
/*   0.937 us   */               preempt_count_add();
/*   6.302 us   */             }
/*   2.031 us   */             rpm_resume();
/*              */             _raw_spin_unlock_irqrestore() {
/*   1.406 us   */               preempt_count_sub();
/*   7.708 us   */             }
/* + 31.823 us  */           }
/* ! 103.281 us */         }
/*              */         mmc_power_up() {
/*              */           mmc_power_up.part.15() {
/*   1.458 us   */             mmc_pwrseq_pre_power_on();
/*              */             mmc_set_initial_state() {
/*              */               mmc_retune_disable() {
/*              */                 del_timer_sync() {
/*              */                   lock_timer_base.isra.34() {
/*              */                     _raw_spin_lock_irqsave() {
/*   0.938 us   */                       preempt_count_add();
/*   6.094 us   */                     }
/* + 11.980 us  */                   }
/*   0.938 us   */                   detach_if_pending();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.468 us   */                   }
/* + 31.979 us  */                 }
/* + 37.552 us  */               }
/*              */               dw_mci_set_ios() {
/*              */                 dw_mci_hi6220_set_ios() {
/*              */                   clk_set_rate() {
/*              */                     clk_prepare_lock() {
/*   0.833 us   */                       mutex_trylock();
/*   5.261 us   */                     }
/*              */                     clk_core_set_rate_nolock() {
/*              */                       clk_calc_new_rates() {
/*              */                         clk_calc_new_rates() {
/*              */                           __clk_mux_determine_rate() {
/*              */                             clk_mux_determine_rate_flags.isra.23() {
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 clk_factor_round_rate() {
/*   0.990 us   */                                   clk_hw_get_flags();
/*   5.781 us   */                                 }
/* + 10.782 us  */                               }
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 hi6220_clkdiv_round_rate() {
/*              */                                   divider_round_rate() {
/*              */                                     clk_divider_bestdiv() {
/*   2.135 us   */                                       _get_maxdiv();
/*   1.302 us   */                                       clk_hw_get_flags();
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.562 us   */                                           clk_core_round_rate_nolock();
/*   8.437 us   */                                         }
/* + 15.260 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 14.011 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/* + 10.313 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/* + 11.042 us  */                                         }
/* + 17.396 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.448 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.021 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.343 us   */                                         }
/* + 12.760 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   0.937 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.531 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.740 us   */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.907 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.937 us   */                                         }
/* + 11.302 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.739 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.803 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.605 us   */                                         }
/* + 13.646 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   6.562 us   */                                         }
/* + 11.823 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 17.135 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.157 us   */                                         }
/*   9.531 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.688 us   */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.448 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/* + 10.469 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/* + 10.833 us  */                                         }
/* + 17.187 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.303 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 14.010 us  */                                       }
/*   1.303 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   6.875 us   */                                         }
/* + 12.239 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.687 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/* # 1347.500 us*/                                     }
/* # 1352.500 us*/                                   }
/* # 1357.136 us*/                                 }
/* # 1362.240 us*/                               }
/* # 1382.604 us*/                             }
/* # 1387.187 us*/                           }
/*              */                           clk_calc_subtree() {
/*   0.833 us   */                             clk_calc_subtree();
/*   5.573 us   */                           }
/* # 1402.969 us*/                         }
/*   1.354 us   */                         clk_calc_subtree();
/* # 1415.052 us*/                       }
/*   1.666 us   */                       clk_propagate_rate_change();
/*              */                       clk_change_rate() {
/*   1.563 us   */                         clk_change_rate();
/*   9.062 us   */                       }
/* # 1442.395 us*/                     }
/*              */                     clk_prepare_unlock() {
/*   1.302 us   */                       mutex_unlock();
/*   7.760 us   */                     }
/* # 1469.583 us*/                   }
/*              */                   clk_get_rate() {
/*              */                     clk_prepare_lock() {
/*   1.355 us   */                       mutex_trylock();
/*   7.552 us   */                     }
/*              */                     clk_prepare_unlock() {
/*   0.833 us   */                       mutex_unlock();
/*   5.260 us   */                     }
/* + 22.761 us  */                   }
/* # 1502.083 us*/                 }
/*              */                 mmc_regulator_set_ocr() {
/*              */                   regulator_set_voltage() {
/*   1.146 us   */                     mutex_lock();
/*              */                     regulator_set_voltage_unlocked() {
/*   1.042 us   */                       regulator_check_voltage();
/*   1.041 us   */                       regulator_check_consumers();
/*              */                       _regulator_do_set_voltage() {
/*              */                         _regulator_is_enabled.part.11() {
/*              */                           hi655x_is_enabled() {
/*   0.781 us   */                             rdev_get_drvdata();
/*              */                             regmap_read() {
/*              */                               regmap_lock_spinlock() {
/*              */                                 _raw_spin_lock_irqsave() {
/*   1.093 us   */                                   preempt_count_add();
/*   5.625 us   */                                 }
/* + 12.552 us  */                               }
/*              */                               _regmap_read() {
/*              */                                 _regmap_bus_read() {
/*              */                                   _regmap_raw_read() {
/*   0.833 us   */                                     regmap_format_32_native();
/*   4.427 us   */                                     regmap_mmio_read();
/* + 15.625 us  */                                   }
/*   1.250 us   */                                   regmap_parse_8();
/* + 27.708 us  */                                 }
/* + 34.323 us  */                               }
/*              */                               regmap_unlock_spinlock() {
/*              */                                 _raw_spin_unlock_irqrestore() {
/*   1.459 us   */                                   preempt_count_sub();
/*   7.969 us   */                                 }
/* + 14.479 us  */                               }
/* + 76.406 us  */                             }
/* + 86.615 us  */                           }
/* + 92.343 us  */                         }
/*              */                         regulator_map_voltage() {
/*              */                           regulator_map_voltage_iterate() {
/*   1.666 us   */                             regulator_list_voltage_table();
/*   0.937 us   */                             regulator_list_voltage_table();
/*   0.833 us   */                             regulator_list_voltage_table();
/*   0.781 us   */                             regulator_list_voltage_table();
/*   0.833 us   */                             regulator_list_voltage_table();
/*   0.833 us   */                             regulator_list_voltage_table();
/*   0.833 us   */                             regulator_list_voltage_table();
/*   0.833 us   */                             regulator_list_voltage_table();
/* + 40.156 us  */                           }
/* + 45.937 us  */                         }
/*   0.833 us   */                         regulator_list_voltage_table();
/*              */                         _regulator_get_voltage() {
/*              */                           regulator_get_voltage_sel_regmap() {
/*              */                             regmap_read() {
/*              */                               regmap_lock_spinlock() {
/*              */                                 _raw_spin_lock_irqsave() {
/*   0.990 us   */                                   preempt_count_add();
/*   5.520 us   */                                 }
/*   9.948 us   */                               }
/*              */                               _regmap_read() {
/*              */                                 _regmap_bus_read() {
/*              */                                   _regmap_raw_read() {
/*   0.781 us   */                                     regmap_format_32_native();
/*   2.969 us   */                                     regmap_mmio_read();
/* + 11.979 us  */                                   }
/*   0.834 us   */                                   regmap_parse_8();
/* + 21.094 us  */                                 }
/* + 25.834 us  */                               }
/*              */                               regmap_unlock_spinlock() {
/*              */                                 _raw_spin_unlock_irqrestore() {
/*   1.511 us   */                                   preempt_count_sub();
/*   7.865 us   */                                 }
/* + 14.114 us  */                               }
/* + 63.750 us  */                             }
/* + 69.322 us  */                           }
/*   1.354 us   */                           regulator_list_voltage_table();
/* + 81.511 us  */                         }
/*   1.563 us   */                         blocking_notifier_call_chain();
/*              */                         regulator_set_voltage_sel_regmap() {
/*              */                           regmap_update_bits() {
/*              */                             regmap_lock_spinlock() {
/*              */                               _raw_spin_lock_irqsave() {
/*   1.458 us   */                                 preempt_count_add();
/*   7.812 us   */                               }
/* + 13.958 us  */                             }
/*              */                             _regmap_update_bits() {
/*   1.042 us   */                               regmap_readable();
/*              */                               _regmap_read() {
/*              */                                 _regmap_bus_read() {
/*              */                                   _regmap_raw_read() {
/*   0.833 us   */                                     regmap_format_32_native();
/*   2.917 us   */                                     regmap_mmio_read();
/* + 11.771 us  */                                   }
/*   0.833 us   */                                   regmap_parse_8();
/* + 20.573 us  */                                 }
/* + 25.052 us  */                               }
/* + 37.448 us  */                             }
/*              */                             regmap_unlock_spinlock() {
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                                 preempt_count_sub();
/*   5.416 us   */                               }
/*   9.844 us   */                             }
/* + 74.219 us  */                           }
/* + 79.791 us  */                         }
/*   0.885 us   */                         blocking_notifier_call_chain();
/* ! 334.792 us */                       }
/* ! 350.521 us */                     }
/*   0.833 us   */                     mutex_unlock();
/* ! 364.531 us */                   }
/*              */                   regulator_enable() {
/*   0.833 us   */                     mutex_lock();
/*              */                     _regulator_enable() {
/*              */                       _regulator_is_enabled.part.11() {
/*              */                         hi655x_is_enabled() {
/*   1.250 us   */                           rdev_get_drvdata();
/*              */                           regmap_read() {
/*              */                             regmap_lock_spinlock() {
/*              */                               _raw_spin_lock_irqsave() {
/*   1.458 us   */                                 preempt_count_add();
/*   7.656 us   */                               }
/* + 13.906 us  */                             }
/*              */                             _regmap_read() {
/*              */                               _regmap_bus_read() {
/*              */                                 _regmap_raw_read() {
/*   1.302 us   */                                   regmap_format_32_native();
/*   3.906 us   */                                   regmap_mmio_read();
/* + 16.562 us  */                                 }
/*   0.833 us   */                                 regmap_parse_8();
/* + 27.657 us  */                               }
/* + 33.125 us  */                             }
/*              */                             regmap_unlock_spinlock() {
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                                 preempt_count_sub();
/*   5.417 us   */                               }
/*   10.000 us  */                             }
/* + 70.885 us  */                           }
/* + 82.709 us  */                         }
/* + 88.073 us  */                       }
/* + 93.385 us  */                     }
/*   0.833 us   */                     mutex_unlock();
/* ! 106.823 us */                   }
/* ! 480.208 us */                 }
/* # 1992.968 us*/               }
/* # 2040.313 us*/             }
/*              */             dw_mci_switch_voltage() {
/*   1.094 us   */               dw_mci_hi6220_switch_voltage();
/*   5.990 us   */             }
/*              */             msleep() {
/*   0.781 us   */               __msecs_to_jiffies();
/*              */               schedule_timeout() {
/*   1.094 us   */                 init_timer_key();
/*              */                 lock_timer_base.isra.34() {
/*              */                   _raw_spin_lock_irqsave() {
/*   0.937 us   */                     preempt_count_add();
/*   5.417 us   */                   }
/*   9.843 us   */                 }
/*   0.833 us   */                 detach_if_pending();
/*   1.563 us   */                 get_nohz_timer_target();
/*              */                 internal_add_timer() {
/*   1.667 us   */                   __internal_add_timer();
/*   1.406 us   */                   wake_up_nohz_cpu();
/* + 15.312 us  */                 }
/*              */                 _raw_spin_unlock_irqrestore() {
/*   ==========> */
/*              */                   gic_handle_irq() {
/*              */                     __handle_domain_irq() {
/*              */                       irq_enter() {
/*   1.406 us   */                         rcu_irq_enter();
/*   1.302 us   */                         preempt_count_add();
/* + 13.959 us  */                       }
/*   1.302 us   */                       irq_find_mapping();
/*              */                       generic_handle_irq() {
/*              */                         handle_percpu_devid_irq() {
/*              */                           arch_timer_handler_phys() {
/*              */                             hrtimer_interrupt() {
/*              */                               _raw_spin_lock() {
/*   0.833 us   */                                 preempt_count_add();
/*   7.552 us   */                               }
/*              */                               ktime_get_update_offsets_now() {
/*   0.886 us   */                                 arch_counter_read();
/*   5.417 us   */                               }
/*              */                               __hrtimer_run_queues() {
/*   0.989 us   */                                 __remove_hrtimer();
/*              */                                 _raw_spin_unlock() {
/*   0.885 us   */                                   preempt_count_sub();
/*   5.313 us   */                                 }
/*              */                                 tick_sched_timer() {
/*              */                                   ktime_get() {
/*   0.833 us   */                                     arch_counter_read();
/*   5.313 us   */                                   }
/*              */                                   tick_do_update_jiffies64() {
/*              */                                     _raw_spin_lock() {
/*   0.781 us   */                                       preempt_count_add();
/*   5.417 us   */                                     }
/*              */                                     do_timer() {
/*   0.833 us   */                                       calc_global_load();
/*   5.312 us   */                                     }
/*              */                                     _raw_spin_unlock() {
/*   0.781 us   */                                       preempt_count_sub();
/*   5.261 us   */                                     }
/*              */                                     update_wall_time() {
/*              */                                       _raw_spin_lock_irqsave() {
/*   1.302 us   */                                         preempt_count_add();
/*   7.708 us   */                                       }
/*   1.250 us   */                                       arch_counter_read();
/*   1.250 us   */                                       ntp_tick_length();
/*   1.302 us   */                                       ntp_tick_length();
/*   1.302 us   */                                       ntp_tick_length();
/*              */                                       timekeeping_update() {
/*   1.302 us   */                                         ntp_get_next_leap();
/*   1.458 us   */                                         update_vsyscall();
/*   1.250 us   */                                         raw_notifier_call_chain();
/*   1.302 us   */                                         update_fast_timekeeper();
/* + 26.614 us  */                                       }
/*              */                                       _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                         preempt_count_sub();
/*   5.313 us   */                                       }
/* + 78.646 us  */                                     }
/* ! 110.000 us */                                   }
/*              */                                   update_process_times() {
/*              */                                     account_process_tick() {
/*              */                                       account_system_time() {
/*              */                                         cpuacct_account_field() {
/*   0.834 us   */                                           __rcu_read_lock();
/*   0.833 us   */                                           __rcu_read_unlock();
/* + 10.312 us  */                                         }
/*              */                                         acct_account_cputime() {
/*              */                                           __acct_update_integrals() {
/*   0.782 us   */                                             jiffies_to_timeval();
/*   5.364 us   */                                           }
/*   9.948 us   */                                         }
/* + 28.333 us  */                                       }
/* + 32.864 us  */                                     }
/*   0.885 us   */                                     hrtimer_run_queues();
/*              */                                     raise_softirq() {
/*   0.885 us   */                                       __raise_softirq_irqoff();
/*   5.417 us   */                                     }
/*              */                                     rcu_check_callbacks() {
/*   0.833 us   */                                       rcu_bh_qs();
/*   0.833 us   */                                       rcu_preempt_qs();
/*   0.886 us   */                                       cpu_needs_another_gp();
/*   1.042 us   */                                       cpu_needs_another_gp();
/*   1.302 us   */                                       cpu_needs_another_gp();
/* + 27.031 us  */                                     }
/*              */                                     scheduler_tick() {
/*              */                                       _raw_spin_lock() {
/*   1.354 us   */                                         preempt_count_add();
/*   7.760 us   */                                       }
/*   2.344 us   */                                       update_rq_clock.part.83();
/*              */                                       task_tick_fair() {
/*              */                                         update_curr() {
/*              */                                           cpuacct_charge() {
/*   1.302 us   */                                             __rcu_read_lock();
/*   1.302 us   */                                             __rcu_read_unlock();
/* + 14.063 us  */                                           }
/* + 20.521 us  */                                         }
/*   0.833 us   */                                         __compute_runnable_contrib();
/*   0.833 us   */                                         __compute_runnable_contrib();
/*              */                                         update_cfs_shares() {
/*   0.834 us   */                                           update_curr();
/*   5.417 us   */                                         }
/*   0.833 us   */                                         hrtimer_active();
/*   0.834 us   */                                         update_curr();
/*   0.834 us   */                                         __compute_runnable_contrib();
/*   0.833 us   */                                         __compute_runnable_contrib();
/*   0.885 us   */                                         update_cfs_shares();
/*   0.833 us   */                                         hrtimer_active();
/* + 71.511 us  */                                       }
/*              */                                       update_cpu_load_active() {
/*              */                                         __update_cpu_load() {
/*   0.834 us   */                                           sched_avg_update();
/*   5.469 us   */                                         }
/*   9.948 us   */                                       }
/*   0.834 us   */                                       calc_global_load_tick();
/*              */                                       _raw_spin_unlock() {
/*   0.834 us   */                                         preempt_count_sub();
/*   5.208 us   */                                       }
/*              */                                       trigger_load_balance() {
/*   0.833 us   */                                         __rcu_read_lock();
/*   0.833 us   */                                         __rcu_read_unlock();
/*   1.302 us   */                                         __rcu_read_lock();
/*   1.303 us   */                                         __rcu_read_unlock();
/* + 23.386 us  */                                       }
/* ! 155.729 us */                                     }
/*   1.303 us   */                                     run_posix_cpu_timers();
/* ! 249.583 us */                                   }
/*   1.459 us   */                                   profile_tick();
/*   1.406 us   */                                   hrtimer_forward();
/* ! 390.521 us */                                 }
/*              */                                 _raw_spin_lock() {
/*   1.303 us   */                                   preempt_count_add();
/*   7.500 us   */                                 }
/*   1.458 us   */                                 enqueue_hrtimer();
/* ! 428.594 us */                               }
/*   0.833 us   */                               __hrtimer_get_next_event();
/*              */                               _raw_spin_unlock() {
/*   0.833 us   */                                 preempt_count_sub();
/*   5.260 us   */                               }
/*              */                               tick_program_event() {
/*              */                                 clockevents_program_event() {
/*              */                                   ktime_get() {
/*   0.834 us   */                                     arch_counter_read();
/*   5.365 us   */                                   }
/*   0.833 us   */                                   arch_timer_set_next_event_phys();
/* + 14.375 us  */                                 }
/* + 18.854 us  */                               }
/* ! 489.636 us */                             }
/* ! 494.062 us */                           }
/*   0.885 us   */                           gic_eoimode1_eoi_irq();
/* ! 503.073 us */                         }
/* ! 507.969 us */                       }
/*              */                       irq_exit() {
/*   0.834 us   */                         preempt_count_sub();
/*              */                         __do_softirq() {
/*   0.833 us   */                           __local_bh_disable_ip();
/*              */                           run_timer_softirq() {
/*              */                             _raw_spin_lock_irq() {
/*   0.833 us   */                               preempt_count_add();
/*   7.812 us   */                             }
/*              */                             _raw_spin_unlock_irq() {
/*   0.834 us   */                               preempt_count_sub();
/*   5.520 us   */                             }
/* + 22.396 us  */                           }
/*   1.302 us   */                           rcu_bh_qs();
/*              */                           __local_bh_enable() {
/*   1.302 us   */                             preempt_count_sub();
/*   7.604 us   */                           }
/* + 51.302 us  */                         }
/*   1.302 us   */                         idle_cpu();
/*   1.354 us   */                         rcu_irq_exit();
/* + 73.906 us  */                       }
/* ! 617.448 us */                     }
/* ! 623.958 us */                   }
/*   <========== */
/*   1.563 us   */                   preempt_count_sub();
/* ! 637.188 us */                 }
/*              */                 schedule() {
/*   1.510 us   */                   preempt_count_add();
/*              */                   rcu_note_context_switch() {
/*   0.886 us   */                     rcu_sched_qs();
/*   0.833 us   */                     rcu_preempt_qs();
/*   9.895 us   */                   }
/*              */                   _raw_spin_lock_irq() {
/*   0.781 us   */                     preempt_count_add();
/*   5.260 us   */                   }
/*              */                   deactivate_task() {
/*   1.406 us   */                     update_rq_clock.part.83();
/*              */                     dequeue_task_fair() {
/*              */                       update_curr() {
/*              */                         cpuacct_charge() {
/*   0.833 us   */                           __rcu_read_lock();
/*   0.834 us   */                           __rcu_read_unlock();
/*   9.896 us   */                         }
/* + 14.375 us  */                       }
/*   0.833 us   */                       __compute_runnable_contrib();
/*   0.834 us   */                       clear_buddies();
/*              */                       update_cfs_shares() {
/*   0.834 us   */                         update_curr();
/*   5.417 us   */                       }
/*   0.833 us   */                       update_curr();
/*   0.834 us   */                       __compute_runnable_contrib();
/*   0.782 us   */                       __compute_runnable_contrib();
/*   1.250 us   */                       clear_buddies();
/*   1.250 us   */                       update_cfs_shares();
/*   1.302 us   */                       hrtick_update();
/* + 70.364 us  */                     }
/* + 80.937 us  */                   }
/*              */                   pick_next_task_fair() {
/*   1.250 us   */                     __rcu_read_lock();
/*   1.302 us   */                     __msecs_to_jiffies();
/*   1.302 us   */                     __rcu_read_unlock();
/* + 20.365 us  */                   }
/*              */                   pick_next_task_idle() {
/*              */                     put_prev_task_fair() {
/*   1.355 us   */                       put_prev_entity();
/*   1.250 us   */                       put_prev_entity();
/* + 13.386 us  */                     }
/* + 18.958 us  */                   }
/*              */                   __switch_to() {
/*   0.833 us   */                     fpsimd_thread_switch();
/*   0.833 us   */                     hw_breakpoint_thread_switch();
/* * 11703.38 us*/                   }
/*              */                   finish_task_switch() {
/*              */                     _raw_spin_unlock_irq() {
/*   0.833 us   */                       preempt_count_sub();
/*   5.521 us   */                     }
/* + 11.042 us  */                   }
/*   1.041 us   */                   preempt_count_sub();
/* * 11905.00 us*/                 }
/*              */                 del_timer_sync() {
/*              */                   lock_timer_base.isra.34() {
/*              */                     _raw_spin_lock_irqsave() {
/*   1.459 us   */                       preempt_count_add();
/*   5.990 us   */                     }
/* + 10.677 us  */                   }
/*   0.833 us   */                   detach_if_pending();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                     preempt_count_sub();
/*   5.417 us   */                   }
/* + 29.010 us  */                 }
/* * 12636.56 us*/               }
/* * 12646.35 us*/             }
/*   0.989 us   */             mmc_pwrseq_post_power_on();
/*              */             dw_mci_set_ios() {
/*              */               dw_mci_hi6220_set_ios() {
/*              */                 clk_set_rate() {
/*              */                   clk_prepare_lock() {
/*   2.083 us   */                     mutex_trylock();
/*   8.594 us   */                   }
/*              */                   clk_core_set_rate_nolock() {
/*              */                     clk_calc_new_rates() {
/*              */                       clk_calc_new_rates() {
/*              */                         __clk_mux_determine_rate() {
/*              */                           clk_mux_determine_rate_flags.isra.23() {
/*              */                             clk_core_round_rate_nolock() {
/*              */                               clk_factor_round_rate() {
/*   1.458 us   */                                 clk_hw_get_flags();
/*   8.072 us   */                               }
/* + 15.052 us  */                             }
/*              */                             clk_core_round_rate_nolock() {
/*              */                               hi6220_clkdiv_round_rate() {
/*              */                                 divider_round_rate() {
/*              */                                   clk_divider_bestdiv() {
/*   1.667 us   */                                     _get_maxdiv();
/*   0.781 us   */                                     clk_hw_get_flags();
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.990 us   */                                         clk_core_round_rate_nolock();
/*   5.729 us   */                                       }
/* + 10.729 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.739 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.636 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.355 us   */                                         clk_core_round_rate_nolock();
/*   7.761 us   */                                       }
/* + 13.125 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.344 us   */                                       }
/* + 12.760 us  */                                     }
/*   1.303 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.803 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.760 us   */                                       }
/* + 14.062 us  */                                     }
/*   1.198 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.553 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.886 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/* + 10.573 us  */                                     }
/*   0.782 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.156 us   */                                       }
/*   9.532 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.708 us   */                                       }
/* + 13.907 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.605 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.709 us   */                                       }
/* + 13.906 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/* + 11.875 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.292 us   */                                       }
/* + 12.604 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.907 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/*   9.531 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.792 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.760 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.708 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.521 us   */                                       }
/* + 10.885 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   7.448 us   */                                       }
/* + 11.875 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   1.042 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.344 us   */                                       }
/* + 12.708 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.448 us   */                                       }
/* + 13.021 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.709 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.906 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   6.927 us   */                                       }
/* + 12.240 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.802 us  */                                     }
/* # 1344.791 us*/                                   }
/* # 1351.458 us*/                                 }
/* # 1357.968 us*/                               }
/* # 1365.156 us*/                             }
/* # 1393.177 us*/                           }
/* # 1399.687 us*/                         }
/*              */                         clk_calc_subtree() {
/*   1.302 us   */                           clk_calc_subtree();
/*   8.021 us   */                         }
/* # 1420.781 us*/                       }
/*   0.833 us   */                       clk_calc_subtree();
/* # 1432.239 us*/                     }
/*   1.094 us   */                     clk_propagate_rate_change();
/*              */                     clk_change_rate() {
/*   1.094 us   */                       clk_change_rate();
/*   6.927 us   */                     }
/* # 1453.542 us*/                   }
/*              */                   clk_prepare_unlock() {
/*   0.781 us   */                     mutex_unlock();
/*   5.677 us   */                   }
/* # 1481.510 us*/                 }
/*              */                 clk_get_rate() {
/*              */                   clk_prepare_lock() {
/*   0.781 us   */                     mutex_trylock();
/*   5.208 us   */                   }
/*              */                   clk_prepare_unlock() {
/*   0.833 us   */                     mutex_unlock();
/*   5.313 us   */                   }
/* + 18.594 us  */                 }
/* # 1508.541 us*/               }
/*   1.667 us   */               dw_mci_ctrl_reset.isra.14();
/*              */               dw_mci_setup_bus() {
/*              */                 _dev_info() {
/*   1.406 us   */                   dev_driver_string.part.16();
/*              */                   dev_printk_emit() {
/*              */                     dev_vprintk_emit() {
/*              */                       vprintk_emit() {
/*              */                         _raw_spin_lock() {
/*   1.614 us   */                           preempt_count_add();
/*   8.178 us   */                         }
/*              */                         log_store() {
/*   1.719 us   */                           log_make_free_space();
/* + 10.208 us  */                         }
/*              */                         _raw_spin_unlock() {
/*   1.458 us   */                           preempt_count_sub();
/*   7.656 us   */                         }
/*   0.990 us   */                         preempt_count_add();
/*              */                         console_trylock() {
/*              */                           __down_trylock_console_sem.isra.15() {
/*              */                             /* console_lock: __down_trylock_console_sem */
/*              */                             /* console_lock: down_trylock console_sem */
/*              */                             down_trylock() {
/*              */                               _raw_spin_lock_irqsave() {
/*   0.833 us   */                                 preempt_count_add();
/*   5.364 us   */                               }
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                 preempt_count_sub();
/*   5.313 us   */                               }
/* + 18.646 us  */                             }
/*              */                             /* console_lock: mutex_acquire console_lock_dep_map */
/* + 32.448 us  */                           }
/*              */                           /* console_lock: console_trylock */
/*              */                           /* console_lock: mutex_release console_lock_dep_map */
/*              */                           /* console_lock: up console_sem */
/*              */                           up() {
/*              */                             _raw_spin_lock_irqsave() {
/*   0.833 us   */                               preempt_count_add();
/*   5.261 us   */                             }
/*              */                             _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                               preempt_count_sub();
/*   5.209 us   */                             }
/* + 18.385 us  */                           }
/* + 65.209 us  */                         }
/*   0.990 us   */                         preempt_count_sub();
/* ! 134.948 us */                       }
/* ! 148.282 us */                     }
/* ! 153.333 us */                   }
/* ! 163.542 us */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.771 us   */                   dw_mci_wait_while_busy.isra.17();
/*   9.115 us   */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.511 us   */                   dw_mci_wait_while_busy.isra.17();
/*   8.750 us   */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.458 us   */                   dw_mci_wait_while_busy.isra.17();
/*   8.802 us   */                 }
/* ! 212.187 us */               }
/* # 1737.813 us*/             }
/*              */             msleep() {
/*   1.250 us   */               __msecs_to_jiffies();
/*              */               schedule_timeout() {
/*   1.041 us   */                 init_timer_key();
/*              */                 lock_timer_base.isra.34() {
/*              */                   _raw_spin_lock_irqsave() {
/*   0.989 us   */                     preempt_count_add();
/*   5.469 us   */                   }
/*   9.896 us   */                 }
/*   0.833 us   */                 detach_if_pending();
/*   0.989 us   */                 get_nohz_timer_target();
/*              */                 internal_add_timer() {
/*   1.354 us   */                   __internal_add_timer();
/*   0.885 us   */                   wake_up_nohz_cpu();
/* + 11.198 us  */                 }
/*              */                 _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                   preempt_count_sub();
/*   5.469 us   */                 }
/*              */                 schedule() {
/*   0.990 us   */                   preempt_count_add();
/*              */                   rcu_note_context_switch() {
/*   0.885 us   */                     rcu_sched_qs();
/*   0.886 us   */                     rcu_preempt_qs();
/*   9.896 us   */                   }
/*              */                   _raw_spin_lock_irq() {
/*   0.833 us   */                     preempt_count_add();
/*   5.260 us   */                   }
/*              */                   deactivate_task() {
/*   2.136 us   */                     update_rq_clock.part.83();
/*              */                     dequeue_task_fair() {
/*              */                       update_curr() {
/*              */                         cpuacct_charge() {
/*   1.302 us   */                           __rcu_read_lock();
/*   1.302 us   */                           __rcu_read_unlock();
/* + 16.667 us  */                         }
/* + 27.187 us  */                       }
/*   1.562 us   */                       __compute_runnable_contrib();
/*   1.302 us   */                       __compute_runnable_contrib();
/*   1.250 us   */                       clear_buddies();
/*              */                       update_cfs_shares() {
/*   1.146 us   */                         update_curr();
/*   6.250 us   */                       }
/*   0.834 us   */                       update_curr();
/*   0.833 us   */                       __compute_runnable_contrib();
/*   0.781 us   */                       __compute_runnable_contrib();
/*   0.834 us   */                       clear_buddies();
/*   0.885 us   */                       update_cfs_shares();
/*   0.833 us   */                       hrtick_update();
/* + 95.104 us  */                     }
/* ! 107.500 us */                   }
/*              */                   pick_next_task_fair() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.833 us   */                     __msecs_to_jiffies();
/*   0.833 us   */                     __rcu_read_unlock();
/* + 14.740 us  */                   }
/*              */                   pick_next_task_idle() {
/*              */                     put_prev_task_fair() {
/*   0.834 us   */                       put_prev_entity();
/*   0.782 us   */                       put_prev_entity();
/*   9.896 us   */                     }
/* + 14.636 us  */                   }
/*              */                   __switch_to() {
/*   0.833 us   */                     fpsimd_thread_switch();
/*   1.302 us   */                     hw_breakpoint_thread_switch();
/* * 13945.41 us*/                   }
/*              */                   finish_task_switch() {
/*              */                     _raw_spin_unlock_irq() {
/*   0.833 us   */                       preempt_count_sub();
/*   5.417 us   */                     }
/* + 11.042 us  */                   }
/*   1.042 us   */                   preempt_count_sub();
/* * 14156.61 us*/                 }
/*              */                 del_timer_sync() {
/*              */                   lock_timer_base.isra.34() {
/*              */                     _raw_spin_lock_irqsave() {
/*   1.563 us   */                       preempt_count_add();
/*   6.041 us   */                     }
/* + 10.625 us  */                   }
/*   0.833 us   */                   detach_if_pending();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.468 us   */                   }
/* + 29.375 us  */                 }
/* * 14248.33 us*/               }
/* * 14260.78 us*/             }
/* * 30730.46 us*/           }
/* * 30737.60 us*/         }
/*              */         mmc_init_card() {
/*              */           mmc_set_bus_mode() {
/*              */             dw_mci_set_ios() {
/*              */               dw_mci_hi6220_set_ios() {
/*              */                 clk_set_rate() {
/*              */                   clk_prepare_lock() {
/*   1.666 us   */                     mutex_trylock();
/*   8.437 us   */                   }
/*              */                   clk_core_set_rate_nolock() {
/*              */                     clk_calc_new_rates() {
/*              */                       clk_calc_new_rates() {
/*              */                         __clk_mux_determine_rate() {
/*              */                           clk_mux_determine_rate_flags.isra.23() {
/*              */                             clk_core_round_rate_nolock() {
/*              */                               clk_factor_round_rate() {
/*   0.989 us   */                                 clk_hw_get_flags();
/*   5.625 us   */                               }
/* + 10.886 us  */                             }
/*              */                             clk_core_round_rate_nolock() {
/*              */                               hi6220_clkdiv_round_rate() {
/*              */                                 divider_round_rate() {
/*              */                                   clk_divider_bestdiv() {
/*   2.083 us   */                                     _get_maxdiv();
/*   0.833 us   */                                     clk_hw_get_flags();
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.042 us   */                                         clk_core_round_rate_nolock();
/*   5.781 us   */                                       }
/* + 11.042 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.948 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.333 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.657 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.657 us   */                                       }
/* + 14.011 us  */                                     }
/*   1.041 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.687 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.709 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.521 us   */                                       }
/* + 10.885 us  */                                     }
/*   0.781 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.583 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.365 us   */                                       }
/*   9.740 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.750 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.156 us   */                                       }
/*   9.531 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/* + 10.469 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.740 us   */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.605 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   6.718 us   */                                       }
/* + 12.084 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.531 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 12.032 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.156 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 14.010 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.750 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.532 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.740 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.042 us   */                                         clk_core_round_rate_nolock();
/*   6.250 us   */                                       }
/* + 11.510 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.886 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.739 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/* + 10.104 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.605 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/* + 10.469 us  */                                     }
/*   0.782 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.782 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.156 us   */                                       }
/*   9.532 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/*   9.583 us   */                                     }
/*   1.042 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.698 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.146 us   */                                         clk_core_round_rate_nolock();
/*   6.459 us   */                                       }
/* + 11.771 us  */                                     }
/* # 1353.021 us*/                                   }
/* # 1361.093 us*/                                 }
/* # 1365.730 us*/                               }
/* # 1371.094 us*/                             }
/* # 1391.927 us*/                           }
/* # 1397.344 us*/                         }
/*              */                         clk_calc_subtree() {
/*   0.781 us   */                           clk_calc_subtree();
/*   5.521 us   */                         }
/* # 1414.531 us*/                       }
/*   0.833 us   */                       clk_calc_subtree();
/* # 1425.833 us*/                     }
/*   1.146 us   */                     clk_propagate_rate_change();
/*              */                     clk_change_rate() {
/*   1.094 us   */                       clk_change_rate();
/*   6.822 us   */                     }
/* # 1447.292 us*/                   }
/*              */                   clk_prepare_unlock() {
/*   0.834 us   */                     mutex_unlock();
/*   5.729 us   */                   }
/* # 1476.302 us*/                 }
/*              */                 clk_get_rate() {
/*              */                   clk_prepare_lock() {
/*   0.833 us   */                     mutex_trylock();
/*   5.260 us   */                   }
/*              */                   clk_prepare_unlock() {
/*   0.833 us   */                     mutex_unlock();
/*   5.209 us   */                   }
/* + 19.115 us  */                 }
/* # 1505.833 us*/               }
/*   1.667 us   */               dw_mci_setup_bus();
/* # 1521.250 us*/             }
/* # 1528.073 us*/           }
/*              */           mmc_go_idle() {
/*              */             mmc_set_chip_select() {
/*              */               dw_mci_set_ios() {
/*              */                 dw_mci_hi6220_set_ios() {
/*              */                   clk_set_rate() {
/*              */                     clk_prepare_lock() {
/*   1.302 us   */                       mutex_trylock();
/*   7.656 us   */                     }
/*              */                     clk_core_set_rate_nolock() {
/*              */                       clk_calc_new_rates() {
/*              */                         clk_calc_new_rates() {
/*              */                           __clk_mux_determine_rate() {
/*              */                             clk_mux_determine_rate_flags.isra.23() {
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 clk_factor_round_rate() {
/*   0.781 us   */                                   clk_hw_get_flags();
/*   5.209 us   */                                 }
/*   9.635 us   */                               }
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 hi6220_clkdiv_round_rate() {
/*              */                                   divider_round_rate() {
/*              */                                     clk_divider_bestdiv() {
/*   1.041 us   */                                       _get_maxdiv();
/*   0.833 us   */                                       clk_hw_get_flags();
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.792 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.709 us   */                                         }
/* + 14.011 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.698 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.885 us   */                                         }
/* + 11.094 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.687 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.594 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.698 us  */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.303 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.958 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.739 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.990 us   */                                         }
/* + 11.302 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.709 us   */                                         }
/* + 14.063 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.156 us   */                                         }
/*   9.740 us   */                                       }
/*   0.781 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.156 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.739 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.688 us   */                                       }
/*   1.094 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.125 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 11.875 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.594 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.303 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.854 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.740 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/* + 10.625 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.303 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.739 us   */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.094 us   */                                           clk_core_round_rate_nolock();
/*   6.510 us   */                                         }
/* + 11.823 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.803 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.386 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.885 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.739 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.740 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.740 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.177 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.907 us  */                                       }
/* # 1350.104 us*/                                     }
/* # 1354.740 us*/                                   }
/* # 1359.114 us*/                                 }
/* # 1363.542 us*/                               }
/* # 1381.667 us*/                             }
/* # 1386.979 us*/                           }
/*              */                           clk_calc_subtree() {
/*   0.833 us   */                             clk_calc_subtree();
/*   5.208 us   */                           }
/* # 1401.146 us*/                         }
/*   0.834 us   */                         clk_calc_subtree();
/* # 1410.937 us*/                       }
/*   0.885 us   */                       clk_propagate_rate_change();
/*              */                       clk_change_rate() {
/*   0.885 us   */                         clk_change_rate();
/*   5.364 us   */                       }
/* # 1431.980 us*/                     }
/*              */                     clk_prepare_unlock() {
/*   0.833 us   */                       mutex_unlock();
/*   5.261 us   */                     }
/* # 1458.750 us*/                   }
/*              */                   clk_get_rate() {
/*              */                     clk_prepare_lock() {
/*   0.833 us   */                       mutex_trylock();
/*   5.313 us   */                     }
/*              */                     clk_prepare_unlock() {
/*   0.833 us   */                       mutex_unlock();
/*   5.209 us   */                     }
/* + 18.437 us  */                   }
/* # 1485.937 us*/                 }
/*   0.990 us   */                 dw_mci_setup_bus();
/* # 1496.927 us*/               }
/* # 1503.125 us*/             }
/*   1.250 us   */             _cond_resched();
/*   ==========> */
/*              */             gic_handle_irq() {
/*              */               __handle_domain_irq() {
/*              */                 irq_enter() {
/*   1.459 us   */                   rcu_irq_enter();
/*   1.562 us   */                   preempt_count_add();
/* + 14.792 us  */                 }
/*   1.615 us   */                 irq_find_mapping();
/*              */                 generic_handle_irq() {
/*              */                   handle_percpu_devid_irq() {
/*              */                     arch_timer_handler_phys() {
/*              */                       hrtimer_interrupt() {
/*              */                         _raw_spin_lock() {
/*   0.781 us   */                           preempt_count_add();
/*   5.885 us   */                         }
/*              */                         ktime_get_update_offsets_now() {
/*   0.833 us   */                           arch_counter_read();
/*   5.521 us   */                         }
/*              */                         __hrtimer_run_queues() {
/*   0.990 us   */                           __remove_hrtimer();
/*              */                           _raw_spin_unlock() {
/*   0.833 us   */                             preempt_count_sub();
/*   5.469 us   */                           }
/*              */                           tick_sched_timer() {
/*              */                             ktime_get() {
/*   0.834 us   */                               arch_counter_read();
/*   5.312 us   */                             }
/*              */                             tick_do_update_jiffies64() {
/*              */                               _raw_spin_lock() {
/*   0.834 us   */                                 preempt_count_add();
/*   5.312 us   */                               }
/*              */                               do_timer() {
/*   0.833 us   */                                 calc_global_load();
/*   5.313 us   */                               }
/*              */                               _raw_spin_unlock() {
/*   0.781 us   */                                 preempt_count_sub();
/*   5.416 us   */                               }
/*              */                               update_wall_time() {
/*              */                                 _raw_spin_lock_irqsave() {
/*   0.834 us   */                                   preempt_count_add();
/*   5.312 us   */                                 }
/*   0.833 us   */                                 arch_counter_read();
/*   1.250 us   */                                 ntp_tick_length();
/*   1.250 us   */                                 ntp_tick_length();
/*   1.302 us   */                                 ntp_tick_length();
/*              */                                 timekeeping_update() {
/*   1.250 us   */                                   ntp_get_next_leap();
/*   1.458 us   */                                   update_vsyscall();
/*   1.250 us   */                                   raw_notifier_call_chain();
/*   1.302 us   */                                   update_fast_timekeeper();
/* + 26.771 us  */                                 }
/*              */                                 _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                   preempt_count_sub();
/*   7.760 us   */                                 }
/* + 78.906 us  */                               }
/* ! 110.677 us */                             }
/*              */                             update_process_times() {
/*              */                               account_process_tick() {
/*              */                                 account_system_time() {
/*              */                                   cpuacct_account_field() {
/*   0.833 us   */                                     __rcu_read_lock();
/*   0.833 us   */                                     __rcu_read_unlock();
/* + 12.135 us  */                                   }
/*              */                                   acct_account_cputime() {
/*              */                                     __acct_update_integrals() {
/*   0.989 us   */                                       jiffies_to_timeval();
/*   6.303 us   */                                     }
/* + 10.886 us  */                                   }
/* + 34.323 us  */                                 }
/* + 38.855 us  */                               }
/*   0.886 us   */                               hrtimer_run_queues();
/*              */                               raise_softirq() {
/*   0.885 us   */                                 __raise_softirq_irqoff();
/*   5.573 us   */                               }
/*              */                               rcu_check_callbacks() {
/*   0.833 us   */                                 rcu_bh_qs();
/*   0.885 us   */                                 rcu_preempt_qs();
/*   0.886 us   */                                 cpu_needs_another_gp();
/*   0.885 us   */                                 cpu_needs_another_gp();
/*   1.354 us   */                                 cpu_needs_another_gp();
/* + 25.729 us  */                               }
/*              */                               scheduler_tick() {
/*              */                                 _raw_spin_lock() {
/*   1.250 us   */                                   preempt_count_add();
/*   7.552 us   */                                 }
/*   2.396 us   */                                 update_rq_clock.part.83();
/*              */                                 task_tick_fair() {
/*              */                                   update_curr() {
/*              */                                     cpuacct_charge() {
/*   1.250 us   */                                       __rcu_read_lock();
/*   1.302 us   */                                       __rcu_read_unlock();
/* + 14.792 us  */                                     }
/* + 21.667 us  */                                   }
/*   1.302 us   */                                   __compute_runnable_contrib();
/*   0.781 us   */                                   __compute_runnable_contrib();
/*              */                                   update_cfs_shares() {
/*   1.093 us   */                                     update_curr();
/*   5.989 us   */                                   }
/*   1.146 us   */                                   hrtimer_active();
/*   0.833 us   */                                   update_curr();
/*   0.833 us   */                                   __compute_runnable_contrib();
/*   0.782 us   */                                   __compute_runnable_contrib();
/*   0.885 us   */                                   update_cfs_shares();
/*   0.833 us   */                                   hrtimer_active();
/* + 79.167 us  */                                 }
/*              */                                 update_cpu_load_active() {
/*              */                                   __update_cpu_load() {
/*   0.834 us   */                                     sched_avg_update();
/*   5.521 us   */                                   }
/*   9.948 us   */                                 }
/*   0.834 us   */                                 calc_global_load_tick();
/*              */                                 _raw_spin_unlock() {
/*   0.781 us   */                                   preempt_count_sub();
/*   5.209 us   */                                 }
/*              */                                 trigger_load_balance() {
/*   0.833 us   */                                   __rcu_read_lock();
/*   0.833 us   */                                   __rcu_read_unlock();
/*   1.302 us   */                                   __rcu_read_lock();
/*   1.354 us   */                                   __rcu_read_unlock();
/* + 23.854 us  */                                 }
/* ! 160.365 us */                               }
/*   1.771 us   */                               run_posix_cpu_timers();
/* ! 259.844 us */                             }
/*   1.406 us   */                             profile_tick();
/*   1.302 us   */                             hrtimer_forward();
/* ! 401.198 us */                           }
/*              */                           _raw_spin_lock() {
/*   1.302 us   */                             preempt_count_add();
/* + 10.989 us  */                           }
/*   1.355 us   */                           enqueue_hrtimer();
/* ! 443.020 us */                         }
/*   0.885 us   */                         __hrtimer_get_next_event();
/*              */                         _raw_spin_unlock() {
/*   0.885 us   */                           preempt_count_sub();
/*   5.365 us   */                         }
/*              */                         tick_program_event() {
/*              */                           clockevents_program_event() {
/*              */                             ktime_get() {
/*   0.833 us   */                               arch_counter_read();
/*   5.312 us   */                             }
/*   0.990 us   */                             arch_timer_set_next_event_phys();
/* + 14.323 us  */                           }
/* + 18.854 us  */                         }
/* ! 503.073 us */                       }
/* ! 508.750 us */                     }
/*   0.886 us   */                     gic_eoimode1_eoi_irq();
/* ! 519.531 us */                   }
/* ! 525.469 us */                 }
/*              */                 irq_exit() {
/*   1.094 us   */                   preempt_count_sub();
/*              */                   __do_softirq() {
/*   1.302 us   */                     __local_bh_disable_ip();
/*              */                     run_timer_softirq() {
/*              */                       _raw_spin_lock_irq() {
/*   0.885 us   */                         preempt_count_add();
/*   5.260 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.834 us   */                         preempt_count_sub();
/*   5.260 us   */                       }
/* + 19.844 us  */                     }
/*   1.354 us   */                     rcu_bh_qs();
/*              */                     __local_bh_enable() {
/*   1.459 us   */                       preempt_count_sub();
/*   7.813 us   */                     }
/* + 49.791 us  */                   }
/*   1.302 us   */                   idle_cpu();
/*   1.406 us   */                   rcu_irq_exit();
/* + 72.761 us  */                 }
/* ! 634.740 us */               }
/* ! 641.146 us */             }
/*   <========== */
/*              */             mmc_wait_for_cmd() {
/*   0.781 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   0.990 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.041 us   */                     preempt_count_add();
/*   5.729 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.875 us   */                           pl061_set_value();
/*   6.719 us   */                         }
/* + 11.875 us  */                       }
/* + 16.771 us  */                     }
/* + 21.927 us  */                   }
/*              */                   _raw_read_unlock() {
/*   1.511 us   */                     preempt_count_sub();
/*   8.072 us   */                   }
/* + 49.375 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.510 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.614 us   */                       __local_bh_disable_ip();
/*   7.916 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   1.250 us   */                         dw_mci_hi6220_prepare_command();
/*   8.125 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.511 us   */                         dw_mci_wait_while_busy.isra.17();
/*   7.657 us   */                       }
/* + 27.864 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.834 us   */                         preempt_count_sub();
/*   0.989 us   */                         preempt_count_sub();
/* + 10.521 us  */                       }
/* + 15.156 us  */                     }
/* + 68.072 us  */                   }
/* + 80.313 us  */                 }
/* ! 144.375 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   0.990 us   */                       preempt_count_add();
/*   5.468 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.990 us   */                       preempt_count_sub();
/*   5.468 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   0.990 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   0.885 us   */                           rcu_sched_qs();
/*   0.833 us   */                           rcu_preempt_qs();
/*   9.896 us   */                         }
/*              */                         _raw_spin_lock_irq() {
/*   1.354 us   */                           preempt_count_add();
/*   7.344 us   */                         }
/*              */                         deactivate_task() {
/*   2.396 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   1.250 us   */                                 __rcu_read_lock();
/*   1.250 us   */                                 __rcu_read_unlock();
/* + 13.906 us  */                               }
/* + 20.364 us  */                             }
/*   1.250 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.302 us   */                               update_curr();
/*   7.031 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.833 us   */                             clear_buddies();
/*   0.885 us   */                             update_cfs_shares();
/*   0.834 us   */                             hrtick_update();
/* + 65.937 us  */                           }
/* + 79.791 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.781 us   */                           __rcu_read_lock();
/*   0.833 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 14.740 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   0.781 us   */                             put_prev_entity();
/*   0.833 us   */                             put_prev_entity();
/*   9.896 us   */                           }
/* + 14.531 us  */                         }
/*              */                         __switch_to() {
/*   0.833 us   */                           fpsimd_thread_switch();
/*   0.782 us   */                           hw_breakpoint_thread_switch();
/* ! 778.125 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.250 us   */                             preempt_count_sub();
/*   7.708 us   */                           }
/* + 15.521 us  */                         }
/*   1.562 us   */                         preempt_count_sub();
/* ! 974.114 us */                       }
/* ! 979.218 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.563 us   */                       preempt_count_add();
/*   5.990 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.937 us   */                       preempt_count_sub();
/*   8.802 us   */                     }
/* # 1025.469 us*/                   }
/* # 1030.260 us*/                 }
/*   1.041 us   */                 mmc_retune_release();
/* # 1040.364 us*/               }
/* # 1198.073 us*/             }
/*   1.250 us   */             _cond_resched();
/*              */             mmc_set_chip_select() {
/*              */               dw_mci_set_ios() {
/*              */                 dw_mci_hi6220_set_ios() {
/*              */                   clk_set_rate() {
/*              */                     clk_prepare_lock() {
/*   1.250 us   */                       mutex_trylock();
/*   7.031 us   */                     }
/*              */                     clk_core_set_rate_nolock() {
/*              */                       clk_calc_new_rates() {
/*              */                         clk_calc_new_rates() {
/*              */                           __clk_mux_determine_rate() {
/*              */                             clk_mux_determine_rate_flags.isra.23() {
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 clk_factor_round_rate() {
/*   0.989 us   */                                   clk_hw_get_flags();
/*   5.834 us   */                                 }
/* + 11.302 us  */                               }
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 hi6220_clkdiv_round_rate() {
/*              */                                   divider_round_rate() {
/*              */                                     clk_divider_bestdiv() {
/*   1.771 us   */                                       _get_maxdiv();
/*   0.781 us   */                                       clk_hw_get_flags();
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.094 us   */                                           clk_core_round_rate_nolock();
/*   6.094 us   */                                         }
/* + 11.146 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.355 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.355 us   */                                           clk_core_round_rate_nolock();
/*   7.709 us   */                                         }
/* + 13.906 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.989 us   */                                         }
/* + 11.250 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.355 us   */                                           clk_core_round_rate_nolock();
/*   7.761 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/* + 10.104 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.531 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.739 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.636 us   */                                       }
/*   1.042 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.855 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.437 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.229 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.303 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.906 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.156 us   */                                         }
/*   9.531 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.688 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.792 us   */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.646 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.303 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.468 us   */                                         }
/* + 13.020 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.468 us   */                                         }
/*   10.000 us  */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.969 us   */                                         }
/* + 14.375 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.303 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.292 us   */                                         }
/* + 12.604 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.553 us   */                                         }
/* + 13.125 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/* + 10.782 us  */                                         }
/* + 17.084 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 14.218 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   ==========> */
/*              */                                         gic_handle_irq() {
/*              */                                           __handle_domain_irq() {
/*              */                                             irq_enter() {
/*   0.938 us   */                                               rcu_irq_enter();
/*   1.041 us   */                                               preempt_count_add();
/* + 10.573 us  */                                             }
/*   1.041 us   */                                             irq_find_mapping();
/*              */                                             generic_handle_irq() {
/*              */                                               handle_percpu_devid_irq() {
/*              */                                                 arch_timer_handler_phys() {
/*              */                                                   hrtimer_interrupt() {
/*              */                                                     _raw_spin_lock() {
/*   0.833 us   */                                                       preempt_count_add();
/*   5.469 us   */                                                     }
/*              */                                                     ktime_get_update_offsets_now() {
/*   0.833 us   */                                                       arch_counter_read();
/*   5.989 us   */                                                     }
/*              */                                                     __hrtimer_run_queues() {
/*   0.937 us   */                                                       __remove_hrtimer();
/*              */                                                       _raw_spin_unlock() {
/*   0.833 us   */                                                         preempt_count_sub();
/*   5.313 us   */                                                       }
/*              */                                                       tick_sched_timer() {
/*              */                                                         ktime_get() {
/*   1.302 us   */                                                           arch_counter_read();
/*   7.865 us   */                                                         }
/*              */                                                         tick_do_update_jiffies64() {
/*              */                                                           _raw_spin_lock() {
/*   1.302 us   */                                                             preempt_count_add();
/*   7.969 us   */                                                           }
/*              */                                                           do_timer() {
/*   1.563 us   */                                                             calc_global_load();
/*   8.021 us   */                                                           }
/*              */                                                           _raw_spin_unlock() {
/*   1.302 us   */                                                             preempt_count_sub();
/*   7.656 us   */                                                           }
/*              */                                                           update_wall_time() {
/*              */                                                             _raw_spin_lock_irqsave() {
/*   1.250 us   */                                                               preempt_count_add();
/*   7.448 us   */                                                             }
/*   0.782 us   */                                                             arch_counter_read();
/*   0.990 us   */                                                             ntp_tick_length();
/*   0.781 us   */                                                             ntp_tick_length();
/*   0.833 us   */                                                             ntp_tick_length();
/*              */                                                             timekeeping_update() {
/*   0.990 us   */                                                               ntp_get_next_leap();
/*   2.083 us   */                                                               update_vsyscall();
/*   1.198 us   */                                                               raw_notifier_call_chain();
/*   1.094 us   */                                                               update_fast_timekeeper();
/* + 22.291 us  */                                                             }
/*              */                                                             _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                                               preempt_count_sub();
/*   5.261 us   */                                                             }
/* + 69.427 us  */                                                           }
/* ! 113.907 us */                                                         }
/*              */                                                         update_process_times() {
/*              */                                                           account_process_tick() {
/*              */                                                             account_system_time() {
/*              */                                                               cpuacct_account_field() {
/*   0.833 us   */                                                                 __rcu_read_lock();
/*   0.834 us   */                                                                 __rcu_read_unlock();
/* + 12.187 us  */                                                               }
/*              */                                                               acct_account_cputime() {
/*              */                                                                 __acct_update_integrals() {
/*   1.510 us   */                                                                   jiffies_to_timeval();
/*   8.698 us   */                                                                 }
/* + 18.958 us  */                                                               }
/* + 42.917 us  */                                                             }
/* + 48.958 us  */                                                           }
/*   1.354 us   */                                                           hrtimer_run_queues();
/*              */                                                           raise_softirq() {
/*   1.406 us   */                                                             __raise_softirq_irqoff();
/*   7.969 us   */                                                           }
/*              */                                                           rcu_check_callbacks() {
/*   1.302 us   */                                                             rcu_bh_qs();
/*   0.885 us   */                                                             rcu_preempt_qs();
/*   1.302 us   */                                                             cpu_needs_another_gp();
/*   1.406 us   */                                                             cpu_needs_another_gp();
/*   1.198 us   */                                                             cpu_needs_another_gp();
/* + 31.614 us  */                                                           }
/*              */                                                           scheduler_tick() {
/*              */                                                             _raw_spin_lock() {
/*   0.781 us   */                                                               preempt_count_add();
/*   5.261 us   */                                                             }
/*   1.563 us   */                                                             update_rq_clock.part.83();
/*              */                                                             task_tick_fair() {
/*              */                                                               update_curr() {
/*              */                                                                 cpuacct_charge() {
/*   0.782 us   */                                                                   __rcu_read_lock();
/*   0.833 us   */                                                                   __rcu_read_unlock();
/* + 10.938 us  */                                                                 }
/* + 15.885 us  */                                                               }
/*   0.833 us   */                                                               __compute_runnable_contrib();
/*   0.833 us   */                                                               __compute_runnable_contrib();
/*              */                                                               update_cfs_shares() {
/*   1.041 us   */                                                                 update_curr();
/*   6.302 us   */                                                               }
/*   1.562 us   */                                                               hrtimer_active();
/*   1.354 us   */                                                               update_curr();
/*   1.615 us   */                                                               __compute_runnable_contrib();
/*   1.302 us   */                                                               __compute_runnable_contrib();
/*   1.302 us   */                                                               update_cfs_shares();
/*   1.354 us   */                                                               hrtimer_active();
/* + 83.437 us  */                                                             }
/*              */                                                             update_cpu_load_active() {
/*              */                                                               __update_cpu_load() {
/*   1.250 us   */                                                                 sched_avg_update();
/*   8.594 us   */                                                               }
/* + 15.156 us  */                                                             }
/*   1.042 us   */                                                             calc_global_load_tick();
/*              */                                                             _raw_spin_unlock() {
/*   0.834 us   */                                                               preempt_count_sub();
/*   5.312 us   */                                                             }
/*              */                                                             trigger_load_balance() {
/*              */                                                               raise_softirq() {
/*   0.885 us   */                                                                 __raise_softirq_irqoff();
/*   5.312 us   */                                                               }
/*   0.834 us   */                                                               __rcu_read_lock();
/*   0.833 us   */                                                               __rcu_read_unlock();
/*   0.833 us   */                                                               __rcu_read_lock();
/*   0.833 us   */                                                               __rcu_read_unlock();
/* + 29.532 us  */                                                             }
/* ! 172.083 us */                                                           }
/*   1.302 us   */                                                           run_posix_cpu_timers();
/* ! 293.177 us */                                                         }
/*   1.302 us   */                                                         profile_tick();
/*   1.146 us   */                                                         hrtimer_forward();
/* ! 439.583 us */                                                       }
/*              */                                                       _raw_spin_lock() {
/*   0.781 us   */                                                         preempt_count_add();
/*   5.208 us   */                                                       }
/*   0.938 us   */                                                       enqueue_hrtimer();
/* ! 472.031 us */                                                     }
/*   1.406 us   */                                                     __hrtimer_get_next_event();
/*              */                                                     _raw_spin_unlock() {
/*   1.354 us   */                                                       preempt_count_sub();
/*   7.604 us   */                                                     }
/*              */                                                     tick_program_event() {
/*              */                                                       clockevents_program_event() {
/*              */                                                         ktime_get() {
/*   1.302 us   */                                                           arch_counter_read();
/*   7.708 us   */                                                         }
/*   1.302 us   */                                                         arch_timer_set_next_event_phys();
/* + 20.313 us  */                                                       }
/* + 26.458 us  */                                                     }
/* ! 550.417 us */                                                   }
/* ! 556.302 us */                                                 }
/*   1.302 us   */                                                 gic_eoimode1_eoi_irq();
/* ! 569.583 us */                                               }
/* ! 575.365 us */                                             }
/*              */                                             irq_exit() {
/*   1.093 us   */                                               preempt_count_sub();
/*              */                                               __do_softirq() {
/*   1.250 us   */                                                 __local_bh_disable_ip();
/*              */                                                 run_timer_softirq() {
/*              */                                                   _raw_spin_lock_irq() {
/*   0.833 us   */                                                     preempt_count_add();
/*   5.261 us   */                                                   }
/*              */                                                   _raw_spin_unlock_irq() {
/*   0.833 us   */                                                     preempt_count_sub();
/*   5.312 us   */                                                   }
/* + 20.052 us  */                                                 }
/*              */                                                 run_rebalance_domains() {
/*              */                                                   rebalance_domains() {
/*              */                                                     update_blocked_averages() {
/*              */                                                       _raw_spin_lock_irqsave() {
/*   0.833 us   */                                                         preempt_count_add();
/*   5.365 us   */                                                       }
/*   1.458 us   */                                                       update_rq_clock();
/*   0.833 us   */                                                       __compute_runnable_contrib();
/*   0.833 us   */                                                       __compute_runnable_contrib();
/*   0.781 us   */                                                       __compute_runnable_contrib();
/*              */                                                       _raw_spin_unlock_irqrestore() {
/*   1.198 us   */                                                         preempt_count_sub();
/*   6.927 us   */                                                       }
/* + 42.917 us  */                                                     }
/*   1.302 us   */                                                     __rcu_read_lock();
/*   1.562 us   */                                                     __msecs_to_jiffies();
/*   1.250 us   */                                                     __msecs_to_jiffies();
/*   1.302 us   */                                                     __rcu_read_unlock();
/* + 75.052 us  */                                                   }
/* + 81.042 us  */                                                 }
/*   1.302 us   */                                                 rcu_bh_qs();
/*              */                                                 __local_bh_enable() {
/*   1.511 us   */                                                   preempt_count_sub();
/*   7.813 us   */                                                 }
/* ! 135.000 us */                                               }
/*   0.885 us   */                                               idle_cpu();
/*   0.938 us   */                                               rcu_irq_exit();
/* ! 155.312 us */                                             }
/* ! 758.021 us */                                           }
/* ! 762.917 us */                                         }
/*   <========== */
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.365 us   */                                         } /* clk_core_round_rate_nolock */
/* ! 776.875 us */                                       }
/*   0.885 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.791 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 12.083 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.553 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.605 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.490 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.364 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.240 us   */                                         }
/* + 12.604 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.093 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.885 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.740 us   */                                       }
/* # 2124.636 us*/                                     }
/* # 2129.375 us*/                                   }
/* # 2133.958 us*/                                 }
/* # 2139.219 us*/                               }
/* # 2160.260 us*/                             }
/* # 2164.843 us*/                           }
/*              */                           clk_calc_subtree() {
/*   0.834 us   */                             clk_calc_subtree();
/*   5.521 us   */                           }
/* # 2180.781 us*/                         }
/*   0.833 us   */                         clk_calc_subtree();
/* # 2191.042 us*/                       }
/*   1.093 us   */                       clk_propagate_rate_change();
/*              */                       clk_change_rate() {
/*   1.406 us   */                         clk_change_rate();
/*   7.292 us   */                       }
/* # 2211.719 us*/                     }
/*              */                     clk_prepare_unlock() {
/*   1.302 us   */                       mutex_unlock();
/*   8.073 us   */                     }
/* # 2241.562 us*/                   }
/*              */                   clk_get_rate() {
/*              */                     clk_prepare_lock() {
/*   1.302 us   */                       mutex_trylock();
/*   7.604 us   */                     }
/*              */                     clk_prepare_unlock() {
/*   1.302 us   */                       mutex_unlock();
/*   7.656 us   */                     }
/* + 26.563 us  */                   }
/* # 2279.844 us*/                 }
/*   1.667 us   */                 dw_mci_setup_bus();
/* # 2294.063 us*/               }
/* # 2300.990 us*/             }
/*   1.093 us   */             _cond_resched();
/* # 8034.740 us*/           }
/*              */           mmc_send_op_cond() {
/*              */             mmc_wait_for_cmd() {
/*   1.563 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   1.302 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.563 us   */                     preempt_count_add();
/*   7.917 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   8.229 us   */                         }
/* + 14.062 us  */                       }
/* + 19.375 us  */                     }
/* + 24.792 us  */                   }
/*              */                   _raw_read_unlock() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.469 us   */                   }
/* + 52.187 us  */                 }
/*              */                 __mmc_start_request() {
/*   0.990 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.146 us   */                       __local_bh_disable_ip();
/*   5.625 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.833 us   */                         dw_mci_hi6220_prepare_command();
/*   6.145 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.042 us   */                         dw_mci_wait_while_busy.isra.17();
/*   6.041 us   */                       }
/* + 21.927 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.833 us   */                         preempt_count_sub();
/*   0.990 us   */                         preempt_count_sub();
/* + 12.656 us  */                       }
/* + 17.552 us  */                     }
/* + 57.708 us  */                   }
/* + 67.865 us  */                 }
/* ! 137.188 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.511 us   */                       preempt_count_add();
/*   7.813 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.406 us   */                       preempt_count_sub();
/*   7.760 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   1.510 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   1.354 us   */                           rcu_sched_qs();
/*   0.885 us   */                           rcu_preempt_qs();
/* + 12.032 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   0.833 us   */                           preempt_count_add();
/*   5.313 us   */                         }
/*              */                         deactivate_task() {
/*   1.406 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   0.833 us   */                                 __rcu_read_lock();
/*   0.833 us   */                                 __rcu_read_unlock();
/*   9.896 us   */                               }
/* + 14.375 us  */                             }
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.781 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   0.886 us   */                               update_curr();
/*   5.521 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             __compute_runnable_contrib();
/*   1.250 us   */                             clear_buddies();
/*   1.354 us   */                             update_cfs_shares();
/*   1.302 us   */                             hrtick_update();
/* + 77.917 us  */                           }
/* + 88.750 us  */                         }
/*              */                         pick_next_task_fair() {
/*   1.250 us   */                           __rcu_read_lock();
/*   1.250 us   */                           __msecs_to_jiffies();
/*   1.354 us   */                           __rcu_read_unlock();
/* + 20.989 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   1.250 us   */                             put_prev_entity();
/*   1.302 us   */                             put_prev_entity();
/* + 13.646 us  */                           }
/* + 19.219 us  */                         }
/*              */                         __switch_to() {
/*   0.833 us   */                           fpsimd_thread_switch();
/*   0.833 us   */                           hw_breakpoint_thread_switch();
/* + 57.969 us  */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   0.885 us   */                             preempt_count_sub();
/*   5.364 us   */                           }
/*   9.948 us   */                         }
/*   1.197 us   */                         preempt_count_sub();
/* ! 257.968 us */                       }
/* ! 264.271 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.458 us   */                       preempt_count_add();
/* + 11.146 us  */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.458 us   */                       preempt_count_sub();
/*   7.917 us   */                     }
/* ! 325.469 us */                   }
/* ! 331.979 us */                 }
/*   1.302 us   */                 mmc_retune_release();
/* ! 344.844 us */               }
/* ! 500.990 us */             }
/*              */             msleep() {
/*   1.198 us   */               __msecs_to_jiffies();
/*              */               schedule_timeout() {
/*   1.094 us   */                 init_timer_key();
/*              */                 lock_timer_base.isra.34() {
/*              */                   _raw_spin_lock_irqsave() {
/*   1.042 us   */                     preempt_count_add();
/*   5.729 us   */                   }
/* + 10.313 us  */                 }
/*   0.989 us   */                 detach_if_pending();
/*   1.093 us   */                 get_nohz_timer_target();
/*              */                 internal_add_timer() {
/*   0.989 us   */                   __internal_add_timer();
/*   0.885 us   */                   wake_up_nohz_cpu();
/* + 10.625 us  */                 }
/*              */                 _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                   preempt_count_sub();
/*   5.469 us   */                 }
/*              */                 schedule() {
/*   0.990 us   */                   preempt_count_add();
/*              */                   rcu_note_context_switch() {
/*   0.885 us   */                     rcu_sched_qs();
/*   0.885 us   */                     rcu_preempt_qs();
/*   9.792 us   */                   }
/*              */                   _raw_spin_lock_irq() {
/*   0.833 us   */                     preempt_count_add();
/*   5.261 us   */                   }
/*              */                   deactivate_task() {
/*   2.343 us   */                     update_rq_clock.part.83();
/*              */                     dequeue_task_fair() {
/*              */                       update_curr() {
/*              */                         cpuacct_charge() {
/*   1.250 us   */                           __rcu_read_lock();
/*   1.303 us   */                           __rcu_read_unlock();
/* + 13.958 us  */                         }
/* + 20.364 us  */                       }
/*   1.250 us   */                       clear_buddies();
/*              */                       update_cfs_shares() {
/*   1.302 us   */                         update_curr();
/*   7.656 us   */                       }
/*   1.354 us   */                       update_curr();
/*   1.302 us   */                       clear_buddies();
/*   0.833 us   */                       update_cfs_shares();
/*   0.833 us   */                       hrtick_update();
/* + 67.605 us  */                     }
/* + 80.156 us  */                   }
/*              */                   pick_next_task_fair() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.781 us   */                     __msecs_to_jiffies();
/*   0.833 us   */                     __rcu_read_unlock();
/* + 14.166 us  */                   }
/*              */                   pick_next_task_idle() {
/*              */                     put_prev_task_fair() {
/*   0.833 us   */                       put_prev_entity();
/*   0.833 us   */                       put_prev_entity();
/*   9.688 us   */                     }
/* + 14.323 us  */                   }
/*              */                   __switch_to() {
/*   0.834 us   */                     fpsimd_thread_switch();
/*   0.886 us   */                     hw_breakpoint_thread_switch();
/* * 13594.37 us*/                   }
/*              */                   finish_task_switch() {
/*              */                     _raw_spin_unlock_irq() {
/*   0.834 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/* + 11.093 us  */                   }
/*   1.041 us   */                   preempt_count_sub();
/* * 13778.75 us*/                 }
/*              */                 del_timer_sync() {
/*              */                   lock_timer_base.isra.34() {
/*              */                     _raw_spin_lock_irqsave() {
/*   1.563 us   */                       preempt_count_add();
/*   5.989 us   */                     }
/* + 10.677 us  */                   }
/*   0.834 us   */                   detach_if_pending();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.521 us   */                   }
/* + 29.636 us  */                 }
/* * 13869.89 us*/               }
/* * 13881.66 us*/             }
/*              */             mmc_wait_for_cmd() {
/*   1.041 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   1.458 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.511 us   */                     preempt_count_add();
/*   8.385 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   2.292 us   */                           pl061_set_value();
/*   9.115 us   */                         }
/* + 16.094 us  */                       }
/* + 22.812 us  */                     }
/* + 29.844 us  */                   }
/*              */                   _raw_read_unlock() {
/*   0.989 us   */                     preempt_count_sub();
/*   5.417 us   */                   }
/* + 59.635 us  */                 }
/*              */                 __mmc_start_request() {
/*   0.937 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.303 us   */                       __local_bh_disable_ip();
/*   6.615 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.781 us   */                         dw_mci_hi6220_prepare_command();
/*   6.145 us   */                       }
/*              */                       dw_mci_start_command() {
/*   0.989 us   */                         dw_mci_wait_while_busy.isra.17();
/*   6.042 us   */                       }
/* + 21.927 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.782 us   */                         preempt_count_sub();
/*   0.989 us   */                         preempt_count_sub();
/* + 10.521 us  */                       }
/* + 15.208 us  */                     }
/* + 56.771 us  */                   }
/* + 66.770 us  */                 }
/* ! 143.177 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.510 us   */                       preempt_count_add();
/*   7.864 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.458 us   */                       preempt_count_sub();
/*   7.812 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   1.458 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   1.354 us   */                           rcu_sched_qs();
/*   1.354 us   */                           rcu_preempt_qs();
/* + 14.062 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   0.833 us   */                           preempt_count_add();
/*   7.761 us   */                         }
/*              */                         deactivate_task() {
/*   1.406 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   0.781 us   */                                 __rcu_read_lock();
/*   0.833 us   */                                 __rcu_read_unlock();
/* + 12.448 us  */                               }
/* + 17.865 us  */                             }
/*   0.834 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.146 us   */                               update_curr();
/*   6.250 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.781 us   */                             clear_buddies();
/*   0.885 us   */                             update_cfs_shares();
/*   0.833 us   */                             hrtick_update();
/* + 58.125 us  */                           }
/* + 68.229 us  */                         }
/*              */                         pick_next_task_fair() {
/*   1.250 us   */                           __rcu_read_lock();
/*   1.302 us   */                           __msecs_to_jiffies();
/*   1.302 us   */                           __rcu_read_unlock();
/* + 20.104 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   1.302 us   */                             put_prev_entity();
/*   1.302 us   */                             put_prev_entity();
/* + 14.167 us  */                           }
/* + 20.729 us  */                         }
/*              */                         __switch_to() {
/*   1.302 us   */                           fpsimd_thread_switch();
/*   1.302 us   */                           hw_breakpoint_thread_switch();
/* ! 125.625 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.354 us   */                             preempt_count_sub();
/*   7.812 us   */                           }
/* + 14.271 us  */                         }
/*   1.458 us   */                         preempt_count_sub();
/* ! 319.323 us */                       }
/* ! 325.989 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.510 us   */                       preempt_count_add();
/*   7.395 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.937 us   */                       preempt_count_sub();
/*   5.417 us   */                     }
/* ! 379.218 us */                   }
/* ! 384.688 us */                 }
/*   0.833 us   */                 mmc_retune_release();
/* ! 394.739 us */               }
/* ! 553.021 us */             }
/*              */             msleep() {
/*   0.834 us   */               __msecs_to_jiffies();
/*              */               schedule_timeout() {
/*   1.042 us   */                 init_timer_key();
/*              */                 lock_timer_base.isra.34() {
/*              */                   _raw_spin_lock_irqsave() {
/*   1.041 us   */                     preempt_count_add();
/*   5.469 us   */                   }
/*   9.896 us   */                 }
/*   0.833 us   */                 detach_if_pending();
/*   1.094 us   */                 get_nohz_timer_target();
/*              */                 internal_add_timer() {
/*   1.042 us   */                   __internal_add_timer();
/*   0.885 us   */                   wake_up_nohz_cpu();
/* + 10.573 us  */                 }
/*              */                 _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                   preempt_count_sub();
/*   8.750 us   */                 }
/*              */                 schedule() {
/*   1.406 us   */                   preempt_count_add();
/*              */                   rcu_note_context_switch() {
/*   1.302 us   */                     rcu_sched_qs();
/*   1.302 us   */                     rcu_preempt_qs();
/* + 13.854 us  */                   }
/*              */                   _raw_spin_lock_irq() {
/*   1.250 us   */                     preempt_count_add();
/*   7.604 us   */                   }
/*              */                   deactivate_task() {
/*   2.239 us   */                     update_rq_clock.part.83();
/*              */                     dequeue_task_fair() {
/*              */                       update_curr() {
/*              */                         cpuacct_charge() {
/*   0.833 us   */                           __rcu_read_lock();
/*   0.833 us   */                           __rcu_read_unlock();
/*   9.896 us   */                         }
/* + 15.364 us  */                       }
/*   0.833 us   */                       __compute_runnable_contrib();
/*   0.781 us   */                       __compute_runnable_contrib();
/*   0.834 us   */                       clear_buddies();
/*              */                       update_cfs_shares() {
/*   0.886 us   */                         update_curr();
/*   5.416 us   */                       }
/*   0.833 us   */                       update_curr();
/*   0.834 us   */                       clear_buddies();
/*   0.885 us   */                       update_cfs_shares();
/*   0.833 us   */                       hrtick_update();
/* + 62.605 us  */                     }
/* + 75.365 us  */                   }
/*              */                   pick_next_task_fair() {
/*   0.834 us   */                     __rcu_read_lock();
/*   0.781 us   */                     __msecs_to_jiffies();
/*   0.833 us   */                     __rcu_read_unlock();
/* + 14.271 us  */                   }
/*              */                   pick_next_task_idle() {
/*              */                     put_prev_task_fair() {
/*   0.833 us   */                       put_prev_entity();
/*   1.302 us   */                       put_prev_entity();
/* + 11.875 us  */                     }
/* + 17.136 us  */                   }
/*              */                   __switch_to() {
/*   1.250 us   */                     fpsimd_thread_switch();
/*   1.302 us   */                     hw_breakpoint_thread_switch();
/* * 14780.46 us*/                   }
/*              */                   finish_task_switch() {
/*              */                     _raw_spin_unlock_irq() {
/*   1.302 us   */                       preempt_count_sub();
/*   7.709 us   */                     }
/* + 15.104 us  */                   }
/*   1.511 us   */                   preempt_count_sub();
/* * 14981.35 us*/                 }
/*              */                 del_timer_sync() {
/*              */                   lock_timer_base.isra.34() {
/*              */                     _raw_spin_lock_irqsave() {
/*   1.562 us   */                       preempt_count_add();
/*   7.969 us   */                     }
/* + 14.167 us  */                   }
/*   1.250 us   */                   detach_if_pending();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.416 us   */                   }
/* + 36.042 us  */                 }
/* * 15083.90 us*/               }
/* * 15093.22 us*/             }
/*              */             mmc_wait_for_cmd() {
/*   0.833 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   0.989 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   0.989 us   */                     preempt_count_add();
/*   8.437 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   6.666 us   */                         }
/* + 12.031 us  */                       }
/* + 16.979 us  */                     }
/* + 22.135 us  */                   }
/*              */                   _raw_read_unlock() {
/*   0.990 us   */                     preempt_count_sub();
/*   5.625 us   */                   }
/* + 48.542 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.510 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.771 us   */                       __local_bh_disable_ip();
/*   8.906 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   1.250 us   */                         dw_mci_hi6220_prepare_command();
/*   8.541 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.459 us   */                         dw_mci_wait_while_busy.isra.17();
/*   8.229 us   */                       }
/* + 29.479 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.833 us   */                         preempt_count_sub();
/*   0.990 us   */                         preempt_count_sub();
/* + 10.885 us  */                       }
/* + 16.615 us  */                     }
/* + 71.406 us  */                   }
/* + 84.011 us  */                 }
/* ! 147.031 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.041 us   */                       preempt_count_add();
/*   5.521 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.417 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   0.990 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   0.834 us   */                           rcu_sched_qs();
/*   0.834 us   */                           rcu_preempt_qs();
/*   9.792 us   */                         }
/*              */                         _raw_spin_lock_irq() {
/*   0.781 us   */                           preempt_count_add();
/*   5.260 us   */                         }
/*              */                         deactivate_task() {
/*   1.406 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   1.302 us   */                                 __rcu_read_lock();
/*   1.303 us   */                                 __rcu_read_unlock();
/* + 15.782 us  */                               }
/* + 22.604 us  */                             }
/*   1.355 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.615 us   */                               update_curr();
/*   8.229 us   */                             }
/*   1.302 us   */                             update_curr();
/*   1.250 us   */                             clear_buddies();
/*   0.833 us   */                             update_cfs_shares();
/*   0.833 us   */                             hrtick_update();
/* + 71.042 us  */                           }
/* + 81.458 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.833 us   */                           __rcu_read_lock();
/*   0.833 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 17.396 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   0.781 us   */                             put_prev_entity();
/*   0.834 us   */                             put_prev_entity();
/*   9.740 us   */                           }
/* + 14.218 us  */                         }
/*              */                         __switch_to() {
/*   0.781 us   */                           fpsimd_thread_switch();
/*   0.834 us   */                           hw_breakpoint_thread_switch();
/* ! 741.928 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.302 us   */                             preempt_count_sub();
/*   7.916 us   */                           }
/* + 14.948 us  */                         }
/*   1.302 us   */                         preempt_count_sub();
/* ! 934.479 us */                       }
/* ! 939.531 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.562 us   */                       preempt_count_add();
/*   6.042 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/* ! 981.979 us */                   }
/* ! 987.031 us */                 }
/*   1.042 us   */                 mmc_retune_release();
/* ! 997.135 us */               }
/* # 1157.813 us*/             }
/* * 31210.46 us*/           }
/*              */           mmc_all_send_cid() {
/*              */             mmc_wait_for_cmd() {
/*   0.833 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   0.781 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   0.990 us   */                     preempt_count_add();
/*   5.417 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   8.385 us   */                         }
/* + 14.531 us  */                       }
/* + 20.104 us  */                     }
/* + 25.521 us  */                   }
/*              */                   _raw_read_unlock() {
/*   1.458 us   */                     preempt_count_sub();
/*   7.864 us   */                   }
/* + 52.552 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.562 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.719 us   */                       __local_bh_disable_ip();
/*   8.750 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.834 us   */                         dw_mci_hi6220_prepare_command();
/*   5.885 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.094 us   */                         dw_mci_wait_while_busy.isra.17();
/*   5.990 us   */                       }
/* + 21.458 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.833 us   */                         preempt_count_sub();
/*   0.990 us   */                         preempt_count_sub();
/* + 10.208 us  */                       }
/* + 15.052 us  */                     }
/* + 59.219 us  */                   }
/* + 71.927 us  */                 }
/* ! 139.062 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   0.989 us   */                       preempt_count_add();
/*   5.417 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.990 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   1.459 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   1.302 us   */                           rcu_sched_qs();
/*   1.354 us   */                           rcu_preempt_qs();
/* + 14.114 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   1.250 us   */                           preempt_count_add();
/*   7.553 us   */                         }
/*              */                         deactivate_task() {
/*   2.708 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   1.250 us   */                                 __rcu_read_lock();
/*   0.834 us   */                                 __rcu_read_unlock();
/* + 14.167 us  */                               }
/* + 20.885 us  */                             }
/*   0.834 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.094 us   */                               update_curr();
/*   5.834 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.833 us   */                             clear_buddies();
/*   0.886 us   */                             update_cfs_shares();
/*   0.834 us   */                             hrtick_update();
/* + 61.666 us  */                           }
/* + 76.250 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.833 us   */                           __rcu_read_lock();
/*   1.042 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 15.157 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   0.833 us   */                             put_prev_entity();
/*   0.833 us   */                             put_prev_entity();
/*   9.948 us   */                           }
/* + 14.792 us  */                         }
/*              */                         __switch_to() {
/*   1.250 us   */                           fpsimd_thread_switch();
/*   1.302 us   */                           hw_breakpoint_thread_switch();
/* ! 748.438 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   0.834 us   */                             preempt_count_sub();
/*   5.677 us   */                           }
/* + 11.250 us  */                         }
/*   1.041 us   */                         preempt_count_sub();
/* ! 943.750 us */                       }
/* ! 948.542 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.562 us   */                       preempt_count_add();
/*   6.042 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.990 us   */                       preempt_count_sub();
/*   5.521 us   */                     }
/* ! 990.834 us */                   }
/* ! 995.781 us */                 }
/*   1.042 us   */                 mmc_retune_release();
/* # 1005.990 us*/               }
/* # 1162.083 us*/             }
/* # 1167.136 us*/           }
/*   0.990 us   */           dw_mci_init_card();
/*              */           mmc_set_relative_addr() {
/*              */             mmc_wait_for_cmd() {
/*   0.833 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   1.250 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.354 us   */                     preempt_count_add();
/*   7.709 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   8.230 us   */                         }
/* + 14.583 us  */                       }
/* + 20.885 us  */                     }
/* + 27.135 us  */                   }
/*              */                   _raw_read_unlock() {
/*   1.458 us   */                     preempt_count_sub();
/*   7.917 us   */                   }
/* + 58.958 us  */                 }
/*              */                 __mmc_start_request() {
/*   0.989 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.250 us   */                       __local_bh_disable_ip();
/*   6.198 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.781 us   */                         dw_mci_hi6220_prepare_command();
/*   6.198 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.042 us   */                         dw_mci_wait_while_busy.isra.17();
/*   5.886 us   */                       }
/* + 21.406 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.781 us   */                         preempt_count_sub();
/*   0.990 us   */                         preempt_count_sub();
/* + 10.573 us  */                       }
/* + 15.365 us  */                     }
/* + 55.364 us  */                   }
/* + 64.792 us  */                 }
/* ! 139.323 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.042 us   */                       preempt_count_add();
/*   5.677 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.510 us   */                       preempt_count_sub();
/*   7.760 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   1.407 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   1.354 us   */                           rcu_sched_qs();
/*   1.354 us   */                           rcu_preempt_qs();
/* + 14.062 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   1.250 us   */                           preempt_count_add();
/*   7.552 us   */                         }
/*              */                         deactivate_task() {
/*   1.667 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   0.834 us   */                                 __rcu_read_lock();
/*   0.834 us   */                                 __rcu_read_unlock();
/* + 11.667 us  */                               }
/* + 17.083 us  */                             }
/*   0.833 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.094 us   */                               update_curr();
/*   5.937 us   */                             }
/*   0.834 us   */                             update_curr();
/*   0.834 us   */                             __compute_runnable_contrib();
/*   0.781 us   */                             __compute_runnable_contrib();
/*   0.834 us   */                             clear_buddies();
/*   0.885 us   */                             update_cfs_shares();
/*   0.833 us   */                             hrtick_update();
/* + 69.844 us  */                           }
/* + 80.989 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.833 us   */                           __rcu_read_lock();
/*   1.563 us   */                           __msecs_to_jiffies();
/*   1.250 us   */                           __rcu_read_unlock();
/* + 19.896 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   1.302 us   */                             put_prev_entity();
/*   1.250 us   */                             put_prev_entity();
/* + 14.062 us  */                           }
/* + 20.625 us  */                         }
/*              */                         __switch_to() {
/*   1.302 us   */                           fpsimd_thread_switch();
/*   1.250 us   */                           hw_breakpoint_thread_switch();
/* ! 111.771 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.355 us   */                             preempt_count_sub();
/*   7.917 us   */                           }
/* + 14.531 us  */                         }
/*   1.510 us   */                         preempt_count_sub();
/* ! 320.312 us */                       }
/* ! 326.562 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.511 us   */                       preempt_count_add();
/*   7.917 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.458 us   */                       preempt_count_sub();
/*   7.864 us   */                     }
/* ! 380.573 us */                   }
/* ! 385.208 us */                 }
/*   0.833 us   */                 mmc_retune_release();
/* ! 394.219 us */               }
/* ! 546.927 us */             }
/* ! 552.032 us */           }
/*              */           mmc_set_bus_mode() {
/*              */             dw_mci_set_ios() {
/*              */               dw_mci_hi6220_set_ios() {
/*              */                 clk_set_rate() {
/*              */                   clk_prepare_lock() {
/*   1.250 us   */                     mutex_trylock();
/*   6.302 us   */                   }
/*              */                   clk_core_set_rate_nolock() {
/*              */                     clk_calc_new_rates() {
/*              */                       clk_calc_new_rates() {
/*              */                         __clk_mux_determine_rate() {
/*              */                           clk_mux_determine_rate_flags.isra.23() {
/*              */                             clk_core_round_rate_nolock() {
/*              */                               clk_factor_round_rate() {
/*   1.042 us   */                                 clk_hw_get_flags();
/*   5.625 us   */                               }
/* + 10.989 us  */                             }
/*              */                             clk_core_round_rate_nolock() {
/*              */                               hi6220_clkdiv_round_rate() {
/*              */                                 divider_round_rate() {
/*              */                                   clk_divider_bestdiv() {
/*   1.771 us   */                                     _get_maxdiv();
/*   1.302 us   */                                     clk_hw_get_flags();
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.511 us   */                                         clk_core_round_rate_nolock();
/*   8.438 us   */                                       }
/* + 15.416 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.531 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.907 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   6.771 us   */                                       }
/* + 12.136 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.739 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.344 us   */                                       }
/* + 12.656 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.708 us   */                                       }
/* + 14.010 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.740 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.844 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.803 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/* + 10.469 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   7.448 us   */                                       }
/* + 11.823 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.740 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.709 us   */                                       }
/* + 14.011 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 12.865 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*              */                                         clk_core_round_rate_nolock() {
/*   ==========> */
/*              */                                         gic_handle_irq() {
/*              */                                           __handle_domain_irq() {
/*              */                                             irq_enter() {
/*   1.459 us   */                                               rcu_irq_enter();
/*   1.510 us   */                                               preempt_count_add();
/* + 14.375 us  */                                             }
/*   1.563 us   */                                             irq_find_mapping();
/*              */                                             generic_handle_irq() {
/*              */                                               handle_percpu_devid_irq() {
/*              */                                                 arch_timer_handler_phys() {
/*              */                                                   hrtimer_interrupt() {
/*              */                                                     _raw_spin_lock() {
/*   1.354 us   */                                                       preempt_count_add();
/*   7.657 us   */                                                     }
/*              */                                                     ktime_get_update_offsets_now() {
/*   0.833 us   */                                                       arch_counter_read();
/*   6.458 us   */                                                     }
/*              */                                                     __hrtimer_run_queues() {
/*   0.989 us   */                                                       __remove_hrtimer();
/*              */                                                       _raw_spin_unlock() {
/*   0.886 us   */                                                         preempt_count_sub();
/*   5.260 us   */                                                       }
/*              */                                                       tick_sched_timer() {
/*              */                                                         ktime_get() {
/*   0.833 us   */                                                           arch_counter_read();
/*   7.865 us   */                                                         }
/*              */                                                         tick_do_update_jiffies64() {
/*              */                                                           _raw_spin_lock() {
/*   0.833 us   */                                                             preempt_count_add();
/*   5.313 us   */                                                           }
/*              */                                                           do_timer() {
/*   1.041 us   */                                                             calc_global_load();
/*   5.677 us   */                                                           }
/*              */                                                           _raw_spin_unlock() {
/*   0.834 us   */                                                             preempt_count_sub();
/*   5.260 us   */                                                           }
/*              */                                                           update_wall_time() {
/*              */                                                             _raw_spin_lock_irqsave() {
/*   0.833 us   */                                                               preempt_count_add();
/*   5.573 us   */                                                             }
/*   0.833 us   */                                                             arch_counter_read();
/*   1.302 us   */                                                             ntp_tick_length();
/*   1.302 us   */                                                             ntp_tick_length();
/*   1.302 us   */                                                             ntp_tick_length();
/*              */                                                             timekeeping_update() {
/*   1.510 us   */                                                               ntp_get_next_leap();
/*   2.500 us   */                                                               update_vsyscall();
/*   1.667 us   */                                                               raw_notifier_call_chain();
/*   1.563 us   */                                                               update_fast_timekeeper();
/* + 30.469 us  */                                                             }
/*              */                                                             _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                                               preempt_count_sub();
/*   7.865 us   */                                                             }
/* + 84.636 us  */                                                           }
/* ! 116.823 us */                                                         }
/*              */                                                         update_process_times() {
/*              */                                                           account_process_tick() {
/*              */                                                             account_system_time() {
/*              */                                                               cpuacct_account_field() {
/*   0.833 us   */                                                                 __rcu_read_lock();
/*   0.833 us   */                                                                 __rcu_read_unlock();
/* + 10.313 us  */                                                               }
/*              */                                                               acct_account_cputime() {
/*              */                                                                 __acct_update_integrals() {
/*   0.990 us   */                                                                   jiffies_to_timeval();
/*   6.146 us   */                                                                 }
/* + 10.885 us  */                                                               }
/* + 30.156 us  */                                                             }
/* + 34.896 us  */                                                           }
/*   0.833 us   */                                                           hrtimer_run_queues();
/*              */                                                           raise_softirq() {
/*   0.886 us   */                                                             __raise_softirq_irqoff();
/*   5.625 us   */                                                           }
/*              */                                                           rcu_check_callbacks() {
/*   0.833 us   */                                                             rcu_bh_qs();
/*   0.833 us   */                                                             rcu_preempt_qs();
/*   1.250 us   */                                                             cpu_needs_another_gp();
/*   1.354 us   */                                                             cpu_needs_another_gp();
/*   1.197 us   */                                                             cpu_needs_another_gp();
/* + 28.333 us  */                                                           }
/*              */                                                           scheduler_tick() {
/*              */                                                             _raw_spin_lock() {
/*   0.833 us   */                                                               preempt_count_add();
/*   5.260 us   */                                                             }
/*   1.407 us   */                                                             update_rq_clock.part.83();
/*              */                                                             task_tick_fair() {
/*              */                                                               update_curr() {
/*              */                                                                 cpuacct_charge() {
/*   0.833 us   */                                                                   __rcu_read_lock();
/*   0.834 us   */                                                                   __rcu_read_unlock();
/* + 10.208 us  */                                                                 }
/* + 14.740 us  */                                                               }
/*   0.833 us   */                                                               __compute_runnable_contrib();
/*   0.781 us   */                                                               __compute_runnable_contrib();
/*              */                                                               update_cfs_shares() {
/*   0.885 us   */                                                                 update_curr();
/*   5.417 us   */                                                               }
/*   1.146 us   */                                                               hrtimer_active();
/*   0.833 us   */                                                               update_curr();
/*   0.781 us   */                                                               __compute_runnable_contrib();
/*   0.781 us   */                                                               __compute_runnable_contrib();
/*   0.834 us   */                                                               update_cfs_shares();
/*   0.782 us   */                                                               hrtimer_active();
/* + 70.365 us  */                                                             }
/*              */                                                             update_cpu_load_active() {
/*              */                                                               __update_cpu_load() {
/*   1.250 us   */                                                                 sched_avg_update();
/*   8.541 us   */                                                               }
/* + 15.156 us  */                                                             }
/*   1.406 us   */                                                             calc_global_load_tick();
/*              */                                                             _raw_spin_unlock() {
/*   1.354 us   */                                                               preempt_count_sub();
/*   7.656 us   */                                                             }
/*              */                                                             trigger_load_balance() {
/*              */                                                               raise_softirq() {
/*   1.354 us   */                                                                 __raise_softirq_irqoff();
/*   7.656 us   */                                                               }
/*   0.833 us   */                                                               __rcu_read_lock();
/*   0.833 us   */                                                               __rcu_read_unlock();
/*   0.781 us   */                                                               __rcu_read_lock();
/*   0.834 us   */                                                               __rcu_read_unlock();
/* + 34.271 us  */                                                             }
/* ! 168.438 us */                                                           }
/*   1.250 us   */                                                           run_posix_cpu_timers();
/* ! 265.104 us */                                                         }
/*   1.459 us   */                                                         profile_tick();
/*   0.989 us   */                                                         hrtimer_forward();
/* ! 412.032 us */                                                       }
/*              */                                                       _raw_spin_lock() {
/*   0.833 us   */                                                         preempt_count_add();
/*   5.208 us   */                                                       }
/*   0.938 us   */                                                       enqueue_hrtimer();
/* ! 444.479 us */                                                     }
/*   0.885 us   */                                                     __hrtimer_get_next_event();
/*              */                                                     _raw_spin_unlock() {
/*   0.833 us   */                                                       preempt_count_sub();
/*   5.261 us   */                                                     }
/*              */                                                     tick_program_event() {
/*              */                                                       clockevents_program_event() {
/*              */                                                         ktime_get() {
/*   0.834 us   */                                                           arch_counter_read();
/*   5.260 us   */                                                         }
/*   1.302 us   */                                                         arch_timer_set_next_event_phys();
/* + 15.521 us  */                                                       }
/* + 21.355 us  */                                                     }
/* ! 512.969 us */                                                   }
/* ! 519.635 us */                                                 }
/*   1.354 us   */                                                 gic_eoimode1_eoi_irq();
/* ! 533.021 us */                                               }
/* ! 540.156 us */                                             }
/*              */                                             irq_exit() {
/*   1.562 us   */                                               preempt_count_sub();
/*              */                                               __do_softirq() {
/*   1.666 us   */                                                 __local_bh_disable_ip();
/*              */                                                 run_timer_softirq() {
/*              */                                                   _raw_spin_lock_irq() {
/*   1.354 us   */                                                     preempt_count_add();
/*   7.812 us   */                                                   }
/*              */                                                   _raw_spin_unlock_irq() {
/*   0.833 us   */                                                     preempt_count_sub();
/*   5.312 us   */                                                   }
/* + 23.490 us  */                                                 }
/*              */                                                 run_rebalance_domains() {
/*              */                                                   rebalance_domains() {
/*              */                                                     update_blocked_averages() {
/*              */                                                       _raw_spin_lock_irqsave() {
/*   0.833 us   */                                                         preempt_count_add();
/*   5.313 us   */                                                       }
/*   1.458 us   */                                                       update_rq_clock();
/*   1.094 us   */                                                       __compute_runnable_contrib();
/*   0.781 us   */                                                       __compute_runnable_contrib();
/*              */                                                       _raw_spin_unlock_irqrestore() {
/*   0.886 us   */                                                         preempt_count_sub();
/*   5.469 us   */                                                       }
/* + 39.322 us  */                                                     }
/*   0.834 us   */                                                     __rcu_read_lock();
/*   0.833 us   */                                                     __msecs_to_jiffies();
/*   0.833 us   */                                                     __msecs_to_jiffies();
/*   0.833 us   */                                                     __rcu_read_unlock();
/* + 62.500 us  */                                                   }
/* + 67.448 us  */                                                 }
/*   0.885 us   */                                                 rcu_bh_qs();
/*              */                                                 __local_bh_enable() {
/*   0.990 us   */                                                   preempt_count_sub();
/*   5.521 us   */                                                 }
/* ! 121.302 us */                                               }
/*   0.886 us   */                                               idle_cpu();
/*   0.938 us   */                                               rcu_irq_exit();
/* ! 142.500 us */                                             }
/* ! 719.323 us */                                           }
/* ! 724.896 us */                                         }
/*   <========== */
/*   0.834 us   */                                         } /* clk_core_round_rate_nolock */
/* ! 735.104 us */                                       }
/* ! 739.532 us */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.521 us   */                                       }
/*   9.948 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.156 us   */                                       }
/*   9.531 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   6.198 us   */                                       }
/* + 11.406 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 11.928 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.740 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.792 us   */                                     }
/*   1.041 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.657 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   6.198 us   */                                       }
/* + 11.563 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.355 us   */                                         clk_core_round_rate_nolock();
/*   7.708 us   */                                       }
/* + 14.010 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.855 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.125 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.531 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.344 us   */                                       }
/* + 12.656 us  */                                     }
/* # 2064.792 us*/                                   }
/* # 2070.469 us*/                                 }
/* # 2076.094 us*/                               }
/* # 2082.500 us*/                             }
/* # 2103.803 us*/                           }
/* # 2109.375 us*/                         }
/*              */                         clk_calc_subtree() {
/*   1.302 us   */                           clk_calc_subtree();
/*   7.865 us   */                         }
/* # 2130.156 us*/                       }
/*   1.302 us   */                       clk_calc_subtree();
/* # 2143.229 us*/                     }
/*   1.562 us   */                     clk_propagate_rate_change();
/*              */                     clk_change_rate() {
/*   1.093 us   */                       clk_change_rate();
/*   6.979 us   */                     }
/* # 2167.500 us*/                   }
/*              */                   clk_prepare_unlock() {
/*   0.781 us   */                     mutex_unlock();
/*   5.885 us   */                   }
/* # 2192.188 us*/                 }
/*              */                 clk_get_rate() {
/*              */                   clk_prepare_lock() {
/*   0.781 us   */                     mutex_trylock();
/*   5.313 us   */                   }
/*              */                   clk_prepare_unlock() {
/*   0.781 us   */                     mutex_unlock();
/*   5.260 us   */                   }
/* + 18.698 us  */                 }
/* # 2219.271 us*/               }
/*   1.198 us   */               dw_mci_setup_bus();
/* # 2229.844 us*/             }
/* # 2234.635 us*/           }
/*              */           mmc_select_card() {
/*              */             mmc_wait_for_cmd() {
/*   0.833 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   0.833 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.042 us   */                     preempt_count_add();
/*   5.521 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   7.968 us   */                         }
/* + 14.271 us  */                       }
/* + 20.625 us  */                     }
/* + 26.979 us  */                   }
/*              */                   _raw_read_unlock() {
/*   1.510 us   */                     preempt_count_sub();
/*   7.864 us   */                   }
/* + 55.364 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.302 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.146 us   */                       __local_bh_disable_ip();
/*   5.937 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.781 us   */                         dw_mci_hi6220_prepare_command();
/*   5.312 us   */                       }
/*              */                       dw_mci_start_command() {
/*   0.833 us   */                         dw_mci_wait_while_busy.isra.17();
/*   5.521 us   */                       }
/* + 18.958 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.833 us   */                         preempt_count_sub();
/*   1.042 us   */                         preempt_count_sub();
/* + 10.208 us  */                       }
/* + 14.636 us  */                     }
/* + 52.135 us  */                   }
/* + 63.855 us  */                 }
/* ! 133.229 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.042 us   */                       preempt_count_add();
/*   5.468 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.417 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   0.989 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   1.302 us   */                           rcu_sched_qs();
/*   1.302 us   */                           rcu_preempt_qs();
/* + 13.906 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   1.302 us   */                           preempt_count_add();
/*   7.708 us   */                         }
/*              */                         deactivate_task() {
/*   2.291 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   1.302 us   */                                 __rcu_read_lock();
/*   1.302 us   */                                 __rcu_read_unlock();
/* + 13.854 us  */                               }
/* + 19.323 us  */                             }
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.781 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   0.886 us   */                               update_curr();
/*   5.469 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.834 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             clear_buddies();
/*   0.886 us   */                             update_cfs_shares();
/*   0.834 us   */                             hrtick_update();
/* + 77.448 us  */                           }
/* + 90.156 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.833 us   */                           __rcu_read_lock();
/*   0.833 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 14.479 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   1.250 us   */                             put_prev_entity();
/*   1.302 us   */                             put_prev_entity();
/* + 13.177 us  */                           }
/* + 18.593 us  */                         }
/*              */                         __switch_to() {
/*   1.302 us   */                           fpsimd_thread_switch();
/*   1.354 us   */                           hw_breakpoint_thread_switch();
/* ! 728.593 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   0.833 us   */                             preempt_count_sub();
/*   5.417 us   */                           }
/* + 12.083 us  */                         }
/*   1.041 us   */                         preempt_count_sub();
/* ! 940.573 us */                       }
/* ! 945.417 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.614 us   */                       preempt_count_add();
/*   6.042 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.521 us   */                     }
/* ! 987.240 us */                   }
/* ! 991.875 us */                 }
/*   1.094 us   */                 mmc_retune_release();
/* # 1001.927 us*/               }
/* # 1150.365 us*/             }
/* # 1155.157 us*/           }
/*              */           mmc_switch() {
/*              */             __mmc_switch() {
/*   0.833 us   */               mmc_retune_hold();
/*              */               mmc_wait_for_cmd() {
/*   0.781 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   0.833 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   1.458 us   */                       preempt_count_add();
/*   7.916 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.823 us   */                             pl061_set_value();
/*   8.177 us   */                           }
/* + 14.375 us  */                         }
/* + 20.677 us  */                       }
/* + 26.927 us  */                     }
/*              */                     _raw_read_unlock() {
/*   1.458 us   */                       preempt_count_sub();
/*   7.813 us   */                     }
/* + 58.542 us  */                   }
/*              */                   __mmc_start_request() {
/*   1.406 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.250 us   */                         __local_bh_disable_ip();
/*   6.302 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   0.781 us   */                           dw_mci_hi6220_prepare_command();
/*   6.302 us   */                         }
/*              */                         dw_mci_start_command() {
/*   1.042 us   */                           dw_mci_wait_while_busy.isra.17();
/*   6.042 us   */                         }
/* + 24.844 us  */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   0.834 us   */                           preempt_count_sub();
/*   0.989 us   */                           preempt_count_sub();
/* + 10.365 us  */                         }
/* + 15.156 us  */                       }
/* + 58.646 us  */                     }
/* + 69.323 us  */                   }
/* ! 142.136 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   0.990 us   */                         preempt_count_add();
/*   5.468 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   1.458 us   */                         preempt_count_sub();
/*   7.917 us   */                       }
/*              */                       schedule_timeout() {
/*              */                         schedule() {
/*   1.459 us   */                           preempt_count_add();
/*              */                           rcu_note_context_switch() {
/*   1.354 us   */                             rcu_sched_qs();
/*   1.302 us   */                             rcu_preempt_qs();
/* + 14.062 us  */                           }
/*              */                           _raw_spin_lock_irq() {
/*   1.250 us   */                             preempt_count_add();
/*   7.605 us   */                           }
/*              */                           deactivate_task() {
/*   2.604 us   */                             update_rq_clock.part.83();
/*              */                             dequeue_task_fair() {
/*              */                               update_curr() {
/*              */                                 cpuacct_charge() {
/*   0.833 us   */                                   __rcu_read_lock();
/*   0.834 us   */                                   __rcu_read_unlock();
/* + 12.187 us  */                                 }
/* + 17.708 us  */                               }
/*   0.782 us   */                               clear_buddies();
/*              */                               update_cfs_shares() {
/*   1.042 us   */                                 update_curr();
/*   6.042 us   */                               }
/*   0.833 us   */                               update_curr();
/*   0.833 us   */                               clear_buddies();
/*   0.886 us   */                               update_cfs_shares();
/*   0.833 us   */                               hrtick_update();
/* + 57.813 us  */                             }
/* + 70.364 us  */                           }
/*              */                           pick_next_task_fair() {
/*   0.782 us   */                             __rcu_read_lock();
/*   1.042 us   */                             __msecs_to_jiffies();
/*   0.834 us   */                             __rcu_read_unlock();
/* + 15.260 us  */                           }
/*              */                           pick_next_task_idle() {
/*              */                             put_prev_task_fair() {
/*   1.303 us   */                               put_prev_entity();
/*   1.302 us   */                               put_prev_entity();
/* + 14.114 us  */                             }
/* + 20.677 us  */                           }
/*              */                           __switch_to() {
/*   1.303 us   */                             fpsimd_thread_switch();
/*   1.302 us   */                             hw_breakpoint_thread_switch();
/* ! 111.094 us */                           }
/*              */                           finish_task_switch() {
/*              */                             _raw_spin_unlock_irq() {
/*   0.885 us   */                               preempt_count_sub();
/*   5.417 us   */                             }
/* + 10.157 us  */                           }
/*   1.510 us   */                           preempt_count_sub();
/* ! 297.031 us */                         }
/* ! 303.333 us */                       }
/*              */                       _raw_spin_lock_irq() {
/*   1.563 us   */                         preempt_count_add();
/* + 11.719 us  */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   1.458 us   */                         preempt_count_sub();
/*   7.864 us   */                       }
/* ! 361.354 us */                     }
/* ! 367.031 us */                   }
/*   1.354 us   */                   mmc_retune_release();
/* ! 378.958 us */                 }
/* ! 535.312 us */               }
/*   0.834 us   */               __msecs_to_jiffies();
/*              */               mmc_wait_for_cmd() {
/*   0.834 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   0.782 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   0.989 us   */                       preempt_count_add();
/*   5.469 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.354 us   */                             pl061_set_value();
/*   5.729 us   */                           }
/* + 10.052 us  */                         }
/* + 14.427 us  */                       }
/* + 18.802 us  */                     }
/*              */                     _raw_read_unlock() {
/*   0.937 us   */                       preempt_count_sub();
/*   5.573 us   */                     }
/* + 41.459 us  */                   }
/*              */                   __mmc_start_request() {
/*   0.834 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.146 us   */                         __local_bh_disable_ip();
/*   5.834 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   1.302 us   */                           dw_mci_hi6220_prepare_command();
/*   7.031 us   */                         }
/*              */                         dw_mci_start_command() {
/*   1.250 us   */                           dw_mci_wait_while_busy.isra.17();
/*   7.917 us   */                         }
/* + 25.573 us  */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   1.354 us   */                           preempt_count_sub();
/*   1.458 us   */                           preempt_count_sub();
/* + 14.479 us  */                         }
/* + 20.937 us  */                       }
/* + 66.302 us  */                     }
/* + 76.458 us  */                   }
/* ! 131.302 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   0.989 us   */                         preempt_count_add();
/*   5.365 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.937 us   */                         preempt_count_sub();
/*   5.572 us   */                       }
/*              */                       schedule_timeout() {
/*              */                         schedule() {
/*   0.989 us   */                           preempt_count_add();
/*              */                           rcu_note_context_switch() {
/*   0.833 us   */                             rcu_sched_qs();
/*   0.833 us   */                             rcu_preempt_qs();
/*   9.688 us   */                           }
/*              */                           _raw_spin_lock_irq() {
/*   0.782 us   */                             preempt_count_add();
/*   5.260 us   */                           }
/*              */                           deactivate_task() {
/*   1.406 us   */                             update_rq_clock.part.83();
/*              */                             dequeue_task_fair() {
/*              */                               update_curr() {
/*              */                                 cpuacct_charge() {
/*   0.833 us   */                                   __rcu_read_lock();
/*   0.833 us   */                                   __rcu_read_unlock();
/* + 12.083 us  */                                 }
/* + 16.927 us  */                               }
/*   0.833 us   */                               __compute_runnable_contrib();
/*   1.250 us   */                               __compute_runnable_contrib();
/*   1.302 us   */                               clear_buddies();
/*              */                               update_cfs_shares() {
/*   1.355 us   */                                 update_curr();
/*   7.865 us   */                               }
/*   1.302 us   */                               update_curr();
/*   1.302 us   */                               clear_buddies();
/*   1.302 us   */                               update_cfs_shares();
/*   1.250 us   */                               hrtick_update();
/* + 78.489 us  */                             }
/* + 89.114 us  */                           }
/*              */                           pick_next_task_fair() {
/*   1.354 us   */                             __rcu_read_lock();
/*   0.833 us   */                             __msecs_to_jiffies();
/*   0.833 us   */                             __rcu_read_unlock();
/* + 15.729 us  */                           }
/*              */                           pick_next_task_idle() {
/*              */                             put_prev_task_fair() {
/*   0.833 us   */                               put_prev_entity();
/*   0.833 us   */                               put_prev_entity();
/*   9.740 us   */                             }
/* + 14.166 us  */                           }
/*              */                           __switch_to() {
/*   0.782 us   */                             fpsimd_thread_switch();
/*   0.833 us   */                             hw_breakpoint_thread_switch();
/* ! 754.062 us */                           }
/*              */                           finish_task_switch() {
/*              */                             _raw_spin_unlock_irq() {
/*   0.834 us   */                               preempt_count_sub();
/*   5.625 us   */                             }
/* + 11.562 us  */                           }
/*   1.250 us   */                           preempt_count_sub();
/* ! 949.011 us */                         }
/* ! 954.167 us */                       }
/*              */                       _raw_spin_lock_irq() {
/*   1.562 us   */                         preempt_count_add();
/*   5.990 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.937 us   */                         preempt_count_sub();
/*   5.573 us   */                       }
/* ! 996.197 us */                     }
/* # 1001.771 us*/                   }
/*   1.093 us   */                   mmc_retune_release();
/* # 1012.656 us*/                 }
/* # 1158.281 us*/               }
/*   1.094 us   */               mmc_switch_status_error();
/*   0.833 us   */               mmc_retune_release();
/* # 1723.177 us*/             }
/* # 1728.125 us*/           }
/*   1.042 us   */           mmc_can_ext_csd();
/*              */           __mmc_switch() {
/*   1.510 us   */             mmc_retune_hold();
/*              */             mmc_wait_for_cmd() {
/*   1.250 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   1.302 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   1.458 us   */                     preempt_count_add();
/*   7.917 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.823 us   */                           pl061_set_value();
/*   7.865 us   */                         }
/* + 13.229 us  */                       }
/* + 18.594 us  */                     }
/* + 27.187 us  */                   }
/*              */                   _raw_read_unlock() {
/*   0.989 us   */                     preempt_count_sub();
/*   5.521 us   */                   }
/* + 54.687 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.093 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.250 us   */                       __local_bh_disable_ip();
/*   6.094 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   0.834 us   */                         dw_mci_hi6220_prepare_command();
/*   6.146 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.041 us   */                         dw_mci_wait_while_busy.isra.17();
/*   5.781 us   */                       }
/* + 21.354 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.833 us   */                         preempt_count_sub();
/*   0.990 us   */                         preempt_count_sub();
/* + 10.417 us  */                       }
/* + 15.677 us  */                     }
/* + 55.781 us  */                   }
/* + 66.406 us  */                 }
/* ! 138.125 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   1.458 us   */                       preempt_count_add();
/*   7.864 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   1.511 us   */                       preempt_count_sub();
/*   7.917 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   1.458 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   0.833 us   */                           rcu_sched_qs();
/*   0.885 us   */                           rcu_preempt_qs();
/* + 10.573 us  */                         }
/*              */                         _raw_spin_lock_irq() {
/*   0.833 us   */                           preempt_count_add();
/*   5.313 us   */                         }
/*              */                         deactivate_task() {
/*   1.562 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   0.833 us   */                                 __rcu_read_lock();
/*   0.833 us   */                                 __rcu_read_unlock();
/* + 12.084 us  */                               }
/* + 17.813 us  */                             }
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.834 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   0.989 us   */                               update_curr();
/*   5.989 us   */                             }
/*   0.833 us   */                             update_curr();
/*   0.834 us   */                             clear_buddies();
/*   1.354 us   */                             update_cfs_shares();
/*   1.302 us   */                             hrtick_update();
/* + 71.459 us  */                           }
/* + 83.125 us  */                         }
/*              */                         pick_next_task_fair() {
/*   1.250 us   */                           __rcu_read_lock();
/*   1.563 us   */                           __msecs_to_jiffies();
/*   1.250 us   */                           __rcu_read_unlock();
/* + 21.093 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   1.250 us   */                             put_prev_entity();
/*   1.042 us   */                             put_prev_entity();
/* + 13.333 us  */                           }
/* + 22.136 us  */                         }
/*              */                         __switch_to() {
/*   0.833 us   */                           fpsimd_thread_switch();
/*   0.833 us   */                           hw_breakpoint_thread_switch();
/* ! 107.917 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.302 us   */                             preempt_count_sub();
/*   7.656 us   */                           }
/* + 14.011 us  */                         }
/*   1.510 us   */                         preempt_count_sub();
/* ! 311.667 us */                       }
/* ! 318.125 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.041 us   */                       preempt_count_add();
/*   5.729 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.937 us   */                       preempt_count_sub();
/*   5.365 us   */                     }
/* ! 369.167 us */                   }
/* ! 374.687 us */                 }
/*   0.834 us   */                 mmc_retune_release();
/* ! 384.844 us */               }
/* ! 540.625 us */             }
/*   0.834 us   */             __msecs_to_jiffies();
/*              */             mmc_wait_for_cmd() {
/*   0.834 us   */               __init_waitqueue_head();
/*              */               mmc_start_request() {
/*   0.781 us   */                 mmc_retune_hold();
/*              */                 led_trigger_event() {
/*              */                   _raw_read_lock() {
/*   0.990 us   */                     preempt_count_add();
/*   5.364 us   */                   }
/*              */                   led_set_brightness() {
/*              */                     gpio_led_set() {
/*              */                       gpiod_set_value() {
/*              */                         _gpiod_set_raw_value() {
/*   1.354 us   */                           pl061_set_value();
/*   5.990 us   */                         }
/* + 10.521 us  */                       }
/* + 14.948 us  */                     }
/* + 19.531 us  */                   }
/*              */                   _raw_read_unlock() {
/*   1.406 us   */                     preempt_count_sub();
/*   7.031 us   */                   }
/* + 44.323 us  */                 }
/*              */                 __mmc_start_request() {
/*   1.302 us   */                   mmc_retune();
/*              */                   dw_mci_request() {
/*              */                     _raw_spin_lock_bh() {
/*   1.614 us   */                       __local_bh_disable_ip();
/*   7.968 us   */                     }
/*              */                     __dw_mci_start_request() {
/*              */                       dw_mci_prepare_command() {
/*   1.250 us   */                         dw_mci_hi6220_prepare_command();
/*   7.656 us   */                       }
/*              */                       dw_mci_start_command() {
/*   1.354 us   */                         dw_mci_wait_while_busy.isra.17();
/*   8.021 us   */                       }
/* + 26.927 us  */                     }
/*              */                     _raw_spin_unlock_bh() {
/*              */                       __local_bh_enable_ip() {
/*   0.781 us   */                         preempt_count_sub();
/*   0.989 us   */                         preempt_count_sub();
/* + 10.052 us  */                       }
/* + 14.531 us  */                     }
/* + 63.490 us  */                   }
/* + 75.156 us  */                 }
/* ! 133.125 us */               }
/*              */               mmc_wait_for_req_done() {
/*              */                 wait_for_completion() {
/*              */                   wait_for_common() {
/*              */                     _raw_spin_lock_irq() {
/*   0.989 us   */                       preempt_count_add();
/*   5.469 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.990 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/*              */                     schedule_timeout() {
/*              */                       schedule() {
/*   0.990 us   */                         preempt_count_add();
/*              */                         rcu_note_context_switch() {
/*   0.834 us   */                           rcu_sched_qs();
/*   0.833 us   */                           rcu_preempt_qs();
/*   9.791 us   */                         }
/*              */                         _raw_spin_lock_irq() {
/*   0.833 us   */                           preempt_count_add();
/*   5.417 us   */                         }
/*              */                         deactivate_task() {
/*   2.396 us   */                           update_rq_clock.part.83();
/*              */                           dequeue_task_fair() {
/*              */                             update_curr() {
/*              */                               cpuacct_charge() {
/*   1.250 us   */                                 __rcu_read_lock();
/*   1.354 us   */                                 __rcu_read_unlock();
/* + 14.167 us  */                               }
/* + 20.573 us  */                             }
/*   1.302 us   */                             clear_buddies();
/*              */                             update_cfs_shares() {
/*   1.302 us   */                               update_curr();
/*   7.657 us   */                             }
/*   1.354 us   */                             update_curr();
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.834 us   */                             __compute_runnable_contrib();
/*   0.781 us   */                             clear_buddies();
/*   0.833 us   */                             update_cfs_shares();
/*   0.833 us   */                             hrtick_update();
/* + 75.573 us  */                           }
/* + 88.542 us  */                         }
/*              */                         pick_next_task_fair() {
/*   0.781 us   */                           __rcu_read_lock();
/*   0.833 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 14.219 us  */                         }
/*              */                         pick_next_task_idle() {
/*              */                           put_prev_task_fair() {
/*   0.833 us   */                             put_prev_entity();
/*   0.833 us   */                             put_prev_entity();
/*   9.636 us   */                           }
/* + 14.062 us  */                         }
/*              */                         __switch_to() {
/*   0.834 us   */                           fpsimd_thread_switch();
/*   0.834 us   */                           hw_breakpoint_thread_switch();
/* ! 728.021 us */                         }
/*              */                         finish_task_switch() {
/*              */                           _raw_spin_unlock_irq() {
/*   1.302 us   */                             preempt_count_sub();
/*   7.916 us   */                           }
/* + 15.573 us  */                         }
/*   1.250 us   */                         preempt_count_sub();
/* ! 925.677 us */                       }
/* ! 930.468 us */                     }
/*              */                     _raw_spin_lock_irq() {
/*   1.563 us   */                       preempt_count_add();
/*   6.094 us   */                     }
/*              */                     _raw_spin_unlock_irq() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/* ! 975.000 us */                   }
/* ! 979.583 us */                 }
/*   1.250 us   */                 mmc_retune_release();
/* ! 989.740 us */               }
/* # 1135.833 us*/             }
/*   1.041 us   */             mmc_switch_status_error();
/*   0.834 us   */             mmc_retune_release();
/* # 1706.979 us*/           }
/*              */           mmc_set_timing() {
/*              */             dw_mci_set_ios() {
/*              */               dw_mci_hi6220_set_ios() {
/*              */                 clk_set_rate() {
/*              */                   clk_prepare_lock() {
/*   1.250 us   */                     mutex_trylock();
/*   6.354 us   */                   }
/*              */                   clk_core_set_rate_nolock() {
/*              */                     clk_calc_new_rates() {
/*              */                       clk_calc_new_rates() {
/*              */                         __clk_mux_determine_rate() {
/*              */                           clk_mux_determine_rate_flags.isra.23() {
/*              */                             clk_core_round_rate_nolock() {
/*              */                               clk_factor_round_rate() {
/*   1.459 us   */                                 clk_hw_get_flags();
/*   8.020 us   */                               }
/* + 14.948 us  */                             }
/*              */                             clk_core_round_rate_nolock() {
/*              */                               hi6220_clkdiv_round_rate() {
/*              */                                 divider_round_rate() {
/*              */                                   clk_divider_bestdiv() {
/*   2.344 us   */                                     _get_maxdiv();
/*   1.302 us   */                                     clk_hw_get_flags();
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.042 us   */                                         clk_core_round_rate_nolock();
/*   6.041 us   */                                       }
/* + 11.042 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/* + 10.052 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.303 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/* + 10.521 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/* + 12.084 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.303 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.333 us  */                                     }
/*   0.781 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.531 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.937 us   */                                       }
/* + 11.250 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.657 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.708 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   7.813 us   */                                       }
/* + 12.187 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   6.093 us   */                                       }
/* + 11.459 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.688 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 13.073 us  */                                     }
/*   1.303 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.636 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.885 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.833 us   */                                       }
/* + 11.146 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.573 us   */                                       }
/* + 10.885 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.594 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   7.448 us   */                                       }
/* + 11.823 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.531 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 12.969 us  */                                     }
/* # 1337.969 us*/                                   }
/* # 1344.531 us*/                                 }
/* # 1351.094 us*/                               }
/* # 1358.177 us*/                             }
/* # 1385.886 us*/                           }
/* # 1392.448 us*/                         }
/*              */                         clk_calc_subtree() {
/*   1.303 us   */                           clk_calc_subtree();
/*   7.916 us   */                         }
/* # 1414.010 us*/                       }
/*   1.250 us   */                       clk_calc_subtree();
/* # 1428.021 us*/                     }
/*   1.563 us   */                     clk_propagate_rate_change();
/*              */                     clk_change_rate() {
/*   1.250 us   */                       clk_change_rate();
/*   7.031 us   */                     }
/* # 1451.875 us*/                   }
/*              */                   clk_prepare_unlock() {
/*   0.833 us   */                     mutex_unlock();
/*   5.781 us   */                   }
/* # 1476.198 us*/                 }
/*              */                 clk_get_rate() {
/*              */                   clk_prepare_lock() {
/*   0.885 us   */                     mutex_trylock();
/*   5.313 us   */                   }
/*              */                   clk_prepare_unlock() {
/*   0.781 us   */                     mutex_unlock();
/*   5.209 us   */                   }
/* + 18.438 us  */                 }
/* # 1503.229 us*/               }
/*   1.250 us   */               dw_mci_setup_bus();
/* # 1513.958 us*/             }
/* # 1518.959 us*/           }
/*              */           mmc_set_clock() {
/*              */             dw_mci_set_ios() {
/*              */               dw_mci_hi6220_set_ios() {
/*              */                 clk_set_rate() {
/*              */                   clk_prepare_lock() {
/*   0.834 us   */                     mutex_trylock();
/*   5.312 us   */                   }
/*              */                   clk_core_set_rate_nolock() {
/*              */                     clk_calc_new_rates() {
/*              */                       clk_calc_new_rates() {
/*              */                         __clk_mux_determine_rate() {
/*              */                           clk_mux_determine_rate_flags.isra.23() {
/*              */                             clk_core_round_rate_nolock() {
/*              */                               clk_factor_round_rate() {
/*   1.250 us   */                                 clk_hw_get_flags();
/*   7.604 us   */                               }
/* + 13.802 us  */                             }
/*              */                             clk_core_round_rate_nolock() {
/*              */                               hi6220_clkdiv_round_rate() {
/*              */                                 divider_round_rate() {
/*              */                                   clk_divider_bestdiv() {
/*   1.563 us   */                                     _get_maxdiv();
/*   1.302 us   */                                     clk_hw_get_flags();
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.084 us   */                                       }
/* + 14.688 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.344 us   */                                       }
/* + 12.604 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.303 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.750 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.739 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.792 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/*   9.531 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/* + 10.782 us  */                                       }
/* + 17.031 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/* + 10.417 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.157 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   ==========> */
/*              */                                       gic_handle_irq() {
/*              */                                         __handle_domain_irq() {
/*              */                                           irq_enter() {
/*   0.938 us   */                                             rcu_irq_enter();
/*   1.093 us   */                                             preempt_count_add();
/* + 10.677 us  */                                           }
/*   1.094 us   */                                           irq_find_mapping();
/*              */                                           generic_handle_irq() {
/*              */                                             handle_percpu_devid_irq() {
/*              */                                               arch_timer_handler_phys() {
/*              */                                                 hrtimer_interrupt() {
/*              */                                                   _raw_spin_lock() {
/*   1.302 us   */                                                     preempt_count_add();
/*   7.760 us   */                                                   }
/*              */                                                   ktime_get_update_offsets_now() {
/*   1.354 us   */                                                     arch_counter_read();
/*   8.281 us   */                                                   }
/*              */                                                   __hrtimer_run_queues() {
/*   1.459 us   */                                                     __remove_hrtimer();
/*              */                                                     _raw_spin_unlock() {
/*   1.250 us   */                                                       preempt_count_sub();
/*   7.812 us   */                                                     }
/*              */                                                     tick_sched_timer() {
/*              */                                                       ktime_get() {
/*   0.989 us   */                                                         arch_counter_read();
/*   5.469 us   */                                                       }
/*              */                                                       tick_do_update_jiffies64() {
/*              */                                                         _raw_spin_lock() {
/*   0.833 us   */                                                           preempt_count_add();
/*   5.521 us   */                                                         }
/*              */                                                         do_timer() {
/*   1.094 us   */                                                           calc_global_load();
/*   5.729 us   */                                                         }
/*              */                                                         _raw_spin_unlock() {
/*   0.782 us   */                                                           preempt_count_sub();
/*   5.312 us   */                                                         }
/*              */                                                         update_wall_time() {
/*              */                                                           _raw_spin_lock_irqsave() {
/*   0.834 us   */                                                             preempt_count_add();
/*   5.781 us   */                                                           }
/*   0.833 us   */                                                           arch_counter_read();
/*   1.250 us   */                                                           ntp_tick_length();
/*   0.781 us   */                                                           ntp_tick_length();
/*   0.833 us   */                                                           ntp_tick_length();
/*              */                                                           timekeeping_update() {
/*   0.833 us   */                                                             ntp_get_next_leap();
/*   2.448 us   */                                                             update_vsyscall();
/*   1.667 us   */                                                             raw_notifier_call_chain();
/*   1.510 us   */                                                             update_fast_timekeeper();
/* + 29.844 us  */                                                           }
/*              */                                                           _raw_spin_unlock_irqrestore() {
/*   1.355 us   */                                                             preempt_count_sub();
/*   7.604 us   */                                                           }
/* + 79.166 us  */                                                         }
/* ! 112.448 us */                                                       }
/*              */                                                       update_process_times() {
/*              */                                                         account_process_tick() {
/*              */                                                           account_system_time() {
/*              */                                                             cpuacct_account_field() {
/*   1.302 us   */                                                               __rcu_read_lock();
/*   0.937 us   */                                                               __rcu_read_unlock();
/* + 14.375 us  */                                                             }
/*              */                                                             acct_account_cputime() {
/*              */                                                               __acct_update_integrals() {
/*   0.938 us   */                                                                 jiffies_to_timeval();
/*   6.510 us   */                                                               }
/* + 11.198 us  */                                                             }
/* + 35.937 us  */                                                           }
/* + 41.719 us  */                                                         }
/*   0.833 us   */                                                         hrtimer_run_queues();
/*              */                                                         raise_softirq() {
/*   0.937 us   */                                                           __raise_softirq_irqoff();
/*   5.677 us   */                                                         }
/*              */                                                         rcu_check_callbacks() {
/*   0.885 us   */                                                           rcu_bh_qs();
/*   0.886 us   */                                                           rcu_preempt_qs();
/*   1.094 us   */                                                           cpu_needs_another_gp();
/*   1.146 us   */                                                           cpu_needs_another_gp();
/*   1.198 us   */                                                           cpu_needs_another_gp();
/* + 29.167 us  */                                                         }
/*              */                                                         scheduler_tick() {
/*              */                                                           _raw_spin_lock() {
/*   0.834 us   */                                                             preempt_count_add();
/*   5.312 us   */                                                           }
/*   2.604 us   */                                                           update_rq_clock.part.83();
/*              */                                                           task_tick_fair() {
/*              */                                                             update_curr() {
/*              */                                                               cpuacct_charge() {
/*   1.302 us   */                                                                 __rcu_read_lock();
/*   1.302 us   */                                                                 __rcu_read_unlock();
/* + 15.209 us  */                                                               }
/* + 22.084 us  */                                                             }
/*   1.250 us   */                                                             __compute_runnable_contrib();
/*   1.302 us   */                                                             __compute_runnable_contrib();
/*              */                                                             update_cfs_shares() {
/*   1.563 us   */                                                               update_curr();
/*   8.385 us   */                                                             }
/*   1.042 us   */                                                             hrtimer_active();
/*   0.833 us   */                                                             update_curr();
/*   0.990 us   */                                                             __compute_runnable_contrib();
/*   0.833 us   */                                                             __compute_runnable_contrib();
/*   0.885 us   */                                                             update_cfs_shares();
/*   0.834 us   */                                                             hrtimer_active();
/* + 85.833 us  */                                                           }
/*              */                                                           update_cpu_load_active() {
/*              */                                                             __update_cpu_load() {
/*   1.042 us   */                                                               sched_avg_update();
/*   6.354 us   */                                                             }
/* + 10.990 us  */                                                           }
/*   1.042 us   */                                                           calc_global_load_tick();
/*              */                                                           _raw_spin_unlock() {
/*   0.781 us   */                                                             preempt_count_sub();
/*   5.261 us   */                                                           }
/*              */                                                           trigger_load_balance() {
/*              */                                                             raise_softirq() {
/*   0.833 us   */                                                               __raise_softirq_irqoff();
/*   5.260 us   */                                                             }
/*   0.833 us   */                                                             __rcu_read_lock();
/*   0.781 us   */                                                             __rcu_read_unlock();
/*   0.781 us   */                                                             __rcu_read_lock();
/*   1.302 us   */                                                             __rcu_read_unlock();
/* + 34.323 us  */                                                           }
/* ! 175.885 us */                                                         }
/*   1.875 us   */                                                         run_posix_cpu_timers();
/* ! 283.907 us */                                                       }
/*   1.927 us   */                                                       profile_tick();
/*   1.563 us   */                                                       hrtimer_forward();
/* ! 430.521 us */                                                     }
/*              */                                                     _raw_spin_lock() {
/*   1.302 us   */                                                       preempt_count_add();
/*   7.708 us   */                                                     }
/*   1.458 us   */                                                     enqueue_hrtimer();
/* ! 477.032 us */                                                   }
/*   0.885 us   */                                                   __hrtimer_get_next_event();
/*              */                                                   _raw_spin_unlock() {
/*   0.833 us   */                                                     preempt_count_sub();
/*   5.417 us   */                                                   }
/*              */                                                   tick_program_event() {
/*              */                                                     clockevents_program_event() {
/*              */                                                       ktime_get() {
/*   0.833 us   */                                                         arch_counter_read();
/*   5.313 us   */                                                       }
/*   0.833 us   */                                                       arch_timer_set_next_event_phys();
/* + 14.218 us  */                                                     }
/* + 18.750 us  */                                                   }
/* ! 547.084 us */                                                 }
/* ! 552.917 us */                                               }
/*   0.833 us   */                                               gic_eoimode1_eoi_irq();
/* ! 563.646 us */                                             }
/* ! 569.896 us */                                           }
/*              */                                           irq_exit() {
/*   1.093 us   */                                             preempt_count_sub();
/*              */                                             __do_softirq() {
/*   1.302 us   */                                               __local_bh_disable_ip();
/*              */                                               run_timer_softirq() {
/*              */                                                 _raw_spin_lock_irq() {
/*   0.834 us   */                                                   preempt_count_add();
/*   5.260 us   */                                                 }
/*              */                                                 _raw_spin_unlock_irq() {
/*   0.833 us   */                                                   preempt_count_sub();
/*   5.313 us   */                                                 }
/* + 19.791 us  */                                               }
/*              */                                               run_rebalance_domains() {
/*              */                                                 rebalance_domains() {
/*              */                                                   update_blocked_averages() {
/*              */                                                     _raw_spin_lock_irqsave() {
/*   1.302 us   */                                                       preempt_count_add();
/*   7.604 us   */                                                     }
/*   2.344 us   */                                                     update_rq_clock();
/*   1.303 us   */                                                     __compute_runnable_contrib();
/*   1.250 us   */                                                     __compute_runnable_contrib();
/*   1.250 us   */                                                     __compute_runnable_contrib();
/*              */                                                     _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                                       preempt_count_sub();
/*   7.657 us   */                                                     }
/* + 55.989 us  */                                                   }
/*   0.781 us   */                                                   __rcu_read_lock();
/*   1.042 us   */                                                   __msecs_to_jiffies();
/*   0.834 us   */                                                   __msecs_to_jiffies();
/*   0.834 us   */                                                   __rcu_read_unlock();
/* + 80.625 us  */                                                 }
/* + 86.823 us  */                                               }
/*   0.834 us   */                                               rcu_bh_qs();
/*              */                                               __local_bh_enable() {
/*   0.990 us   */                                                 preempt_count_sub();
/*   5.521 us   */                                               }
/* ! 137.448 us */                                             }
/*   0.833 us   */                                             idle_cpu();
/*   0.937 us   */                                             rcu_irq_exit();
/* ! 156.146 us */                                           }
/* ! 753.385 us */                                         }
/* ! 758.125 us */                                       }
/*   <========== */
/* ! 772.031 us */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.886 us   */                                         clk_core_round_rate_nolock();
/*   5.364 us   */                                       }
/* + 10.052 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.303 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.709 us   */                                       }
/* + 14.063 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.760 us   */                                       }
/* + 14.271 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.313 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   10.000 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.531 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   6.354 us   */                                       }
/* + 11.615 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.500 us   */                                       }
/* + 14.063 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.416 us   */                                       }
/*   10.000 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.312 us   */                                       }
/*   9.740 us   */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.855 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.303 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.906 us  */                                     }
/*   1.354 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.469 us   */                                       }
/* + 10.781 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.584 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.802 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.250 us   */                                         clk_core_round_rate_nolock();
/*   7.395 us   */                                       }
/* + 12.709 us  */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.688 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.781 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.792 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.687 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.292 us   */                                       }
/* + 12.864 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.604 us   */                                       }
/* + 13.750 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.854 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/* + 11.875 us  */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/* + 10.573 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.354 us   */                                         clk_core_round_rate_nolock();
/*   7.656 us   */                                       }
/* + 13.958 us  */                                     }
/*   1.302 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   1.302 us   */                                         clk_core_round_rate_nolock();
/*   7.552 us   */                                       }
/* + 13.854 us  */                                     }
/*   1.250 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.209 us   */                                       }
/*   9.583 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.834 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.635 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.782 us   */                                         clk_core_round_rate_nolock();
/*   5.208 us   */                                       }
/*   9.636 us   */                                     }
/*   0.834 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.260 us   */                                       }
/*   9.636 us   */                                     }
/*   0.833 us   */                                     clk_hw_get_parent();
/*              */                                     clk_hw_round_rate() {
/*              */                                       clk_core_round_rate_nolock() {
/*   0.833 us   */                                         clk_core_round_rate_nolock();
/*   5.261 us   */                                       }
/*   9.635 us   */                                     }
/* # 2101.302 us*/                                   }
/* # 2107.187 us*/                                 }
/* # 2113.437 us*/                               }
/* # 2119.739 us*/                             }
/* # 2144.844 us*/                           }
/* # 2151.354 us*/                         }
/*              */                         clk_calc_new_rates() {
/*              */                           hi6220_clkdiv_round_rate() {
/*              */                             divider_round_rate() {
/*              */                               clk_divider_bestdiv() {
/*   1.510 us   */                                 _get_maxdiv();
/*   1.250 us   */                                 clk_hw_get_flags();
/*   1.250 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.604 us   */                                   }
/* + 13.802 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.636 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   7.448 us   */                                   }
/* + 11.823 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.584 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.687 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.885 us   */                                   }
/* + 11.146 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.500 us   */                                   }
/* + 13.698 us  */                                 }
/*   1.354 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.303 us   */                                     clk_core_round_rate_nolock();
/*   7.709 us   */                                   }
/* + 13.854 us  */                                 }
/*   1.250 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.583 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.583 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.636 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.739 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.885 us   */                                     clk_core_round_rate_nolock();
/*   5.312 us   */                                   }
/*   9.688 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.604 us   */                                   }
/* + 13.803 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.500 us   */                                   }
/* + 13.698 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.083 us   */                                   }
/* + 12.291 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.688 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.583 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.635 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.584 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   6.823 us   */                                   }
/* + 12.135 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   7.552 us   */                                   }
/* + 13.802 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.354 us   */                                     clk_core_round_rate_nolock();
/*   7.709 us   */                                   }
/* + 13.906 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.583 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.636 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.687 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.635 us   */                                 }
/*   0.781 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.583 us   */                                 }
/*   1.354 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   7.500 us   */                                   }
/* + 13.854 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.708 us   */                                   }
/* + 13.855 us  */                                 }
/*   1.250 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.625 us   */                                   }
/* + 10.938 us  */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.687 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.583 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.584 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.312 us   */                                   }
/*   9.687 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.604 us   */                                   }
/* + 13.854 us  */                                 }
/*   1.250 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.708 us   */                                   }
/* + 14.010 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.604 us   */                                   }
/* + 13.802 us  */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.635 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.635 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.313 us   */                                   }
/* + 11.979 us  */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.782 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.583 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   6.979 us   */                                   }
/* + 12.344 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.500 us   */                                   }
/* + 13.750 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.354 us   */                                     clk_core_round_rate_nolock();
/*   7.709 us   */                                   }
/* + 13.854 us  */                                 }
/*   1.146 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.635 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.635 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.635 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.635 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.583 us   */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   7.656 us   */                                   }
/* + 13.958 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   7.448 us   */                                   }
/* + 13.646 us  */                                 }
/*   1.250 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.572 us   */                                   }
/* + 10.886 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   7.552 us   */                                   }
/* + 11.928 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.312 us   */                                   }
/*   9.740 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.781 us   */                                     clk_core_round_rate_nolock();
/*   5.208 us   */                                   }
/*   9.584 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.261 us   */                                   }
/*   9.636 us   */                                 }
/*   0.989 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.657 us   */                                   }
/* + 13.906 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.250 us   */                                     clk_core_round_rate_nolock();
/*   7.552 us   */                                   }
/* + 13.802 us  */                                 }
/*   1.302 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   1.302 us   */                                     clk_core_round_rate_nolock();
/*   7.187 us   */                                   }
/* + 12.552 us  */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.636 us   */                                 }
/*   0.834 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.583 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.833 us   */                                     clk_core_round_rate_nolock();
/*   5.209 us   */                                   }
/*   9.583 us   */                                 }
/*   0.833 us   */                                 clk_hw_get_parent();
/*              */                                 clk_hw_round_rate() {
/*              */                                   clk_core_round_rate_nolock() {
/*   0.834 us   */                                     clk_core_round_rate_nolock();
/*   5.260 us   */                                   }
/*   9.687 us   */                                 }
/* # 1336.093 us*/                               }
/* # 1341.667 us*/                             }
/* # 1346.979 us*/                           }
/*              */                           clk_calc_subtree() {
/*              */                             clk_calc_subtree() {
/*   1.250 us   */                               clk_calc_subtree();
/*   7.552 us   */                             }
/* + 13.906 us  */                           }
/* # 1371.615 us*/                         }
/*              */                         clk_calc_subtree() {
/*   1.302 us   */                           clk_calc_subtree();
/*   7.552 us   */                         }
/* # 3545.886 us*/                       }
/*   1.302 us   */                       clk_calc_subtree();
/* # 3561.042 us*/                     }
/*              */                     clk_propagate_rate_change() {
/*              */                       clk_propagate_rate_change() {
/*   1.511 us   */                         clk_propagate_rate_change();
/*   8.177 us   */                       }
/* + 14.740 us  */                     }
/*              */                     clk_change_rate() {
/*              */                       hi6220_clkdiv_set_rate() {
/*   1.562 us   */                         divider_get_val();
/*              */                         _raw_spin_lock_irqsave() {
/*   1.093 us   */                           preempt_count_add();
/*   5.781 us   */                         }
/*              */                         _raw_spin_unlock_irqrestore() {
/*   0.990 us   */                           preempt_count_sub();
/*   5.625 us   */                         }
/* + 25.052 us  */                       }
/*              */                       hi6220_clkdiv_recalc_rate() {
/*   1.250 us   */                         divider_recalc_rate();
/*   5.885 us   */                       }
/*              */                       clk_change_rate() {
/*   0.885 us   */                         clk_change_rate();
/*   5.417 us   */                       }
/* + 48.281 us  */                     }
/* # 3637.239 us*/                   }
/*              */                   clk_prepare_unlock() {
/*   0.833 us   */                     mutex_unlock();
/*   5.260 us   */                   }
/* # 3659.219 us*/                 }
/*              */                 clk_get_rate() {
/*              */                   clk_prepare_lock() {
/*   0.833 us   */                     mutex_trylock();
/*   5.365 us   */                   }
/*              */                   clk_prepare_unlock() {
/*   0.781 us   */                     mutex_unlock();
/*   5.313 us   */                   }
/* + 18.855 us  */                 }
/* # 3686.979 us*/               }
/*              */               dw_mci_setup_bus() {
/*              */                 _dev_info() {
/*   1.719 us   */                   dev_driver_string.part.16();
/*              */                   dev_printk_emit() {
/*              */                     dev_vprintk_emit() {
/*              */                       vprintk_emit() {
/*              */                         _raw_spin_lock() {
/*   1.562 us   */                           preempt_count_add();
/*   8.229 us   */                         }
/*              */                         log_store() {
/*   1.302 us   */                           log_make_free_space();
/*   8.072 us   */                         }
/*              */                         _raw_spin_unlock() {
/*   0.990 us   */                           preempt_count_sub();
/*   5.520 us   */                         }
/*   0.989 us   */                         preempt_count_add();
/*              */                         console_trylock() {
/*              */                           __down_trylock_console_sem.isra.15() {
/*              */                             /* console_lock: __down_trylock_console_sem */
/*              */                             /* console_lock: down_trylock console_sem */
/*              */                             down_trylock() {
/*              */                               _raw_spin_lock_irqsave() {
/*   0.833 us   */                                 preempt_count_add();
/*   5.261 us   */                               }
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                 preempt_count_sub();
/*   5.261 us   */                               }
/* + 18.386 us  */                             }
/*              */                             /* console_lock: mutex_acquire console_lock_dep_map */
/* + 32.239 us  */                           }
/*              */                           /* console_lock: console_trylock */
/*              */                           /* console_lock: mutex_release console_lock_dep_map */
/*              */                           /* console_lock: up console_sem */
/*              */                           up() {
/*              */                             _raw_spin_lock_irqsave() {
/*   0.834 us   */                               preempt_count_add();
/*   5.260 us   */                             }
/*              */                             _raw_spin_unlock_irqrestore() {
/*   0.834 us   */                               preempt_count_sub();
/*   5.468 us   */                             }
/* + 19.635 us  */                           }
/* + 67.344 us  */                         }
/*   1.459 us   */                         preempt_count_sub();
/* ! 129.947 us */                       }
/* ! 144.583 us */                     }
/* ! 154.531 us */                   }
/* ! 168.229 us */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.771 us   */                   dw_mci_wait_while_busy.isra.17();
/*   8.854 us   */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.458 us   */                   dw_mci_wait_while_busy.isra.17();
/*   8.333 us   */                 }
/*              */                 mci_send_cmd.isra.18.constprop.24() {
/*   1.459 us   */                   dw_mci_wait_while_busy.isra.17();
/*   7.708 us   */                 }
/* ! 214.740 us */               }
/* # 3911.458 us*/             }
/* # 3916.250 us*/           }
/*              */           mmc_select_bus_width() {
/*   1.093 us   */             mmc_can_ext_csd();
/*              */             mmc_switch() {
/*              */               __mmc_switch() {
/*   0.833 us   */                 mmc_retune_hold();
/*              */                 mmc_wait_for_cmd() {
/*   0.834 us   */                   __init_waitqueue_head();
/*              */                   mmc_start_request() {
/*   0.781 us   */                     mmc_retune_hold();
/*              */                     led_trigger_event() {
/*              */                       _raw_read_lock() {
/*   0.937 us   */                         preempt_count_add();
/*   5.417 us   */                       }
/*              */                       led_set_brightness() {
/*              */                         gpio_led_set() {
/*              */                           gpiod_set_value() {
/*              */                             _gpiod_set_raw_value() {
/*   1.302 us   */                               pl061_set_value();
/*   5.729 us   */                             }
/* + 10.104 us  */                           }
/* + 14.636 us  */                         }
/* + 19.167 us  */                       }
/*              */                       _raw_read_unlock() {
/*   0.937 us   */                         preempt_count_sub();
/*   5.521 us   */                       }
/* + 42.136 us  */                     }
/*              */                     __mmc_start_request() {
/*   1.563 us   */                       mmc_retune();
/*              */                       dw_mci_request() {
/*              */                         _raw_spin_lock_bh() {
/*   1.614 us   */                           __local_bh_disable_ip();
/*   8.073 us   */                         }
/*              */                         __dw_mci_start_request() {
/*              */                           dw_mci_prepare_command() {
/*   1.250 us   */                             dw_mci_hi6220_prepare_command();
/*   8.490 us   */                           }
/*              */                           dw_mci_start_command() {
/*   1.302 us   */                             dw_mci_wait_while_busy.isra.17();
/*   8.021 us   */                           }
/*   ==========> */
/*              */                           gic_handle_irq() {
/*              */                             __handle_domain_irq() {
/*              */                               irq_enter() {
/*   0.938 us   */                                 rcu_irq_enter();
/*   0.834 us   */                                 preempt_count_add();
/*   9.896 us   */                               }
/*   0.886 us   */                               irq_find_mapping();
/*              */                               generic_handle_irq() {
/*              */                                 handle_fasteoi_irq() {
/*              */                                   _raw_spin_lock() {
/*   0.833 us   */                                     preempt_count_add();
/*   5.313 us   */                                   }
/*              */                                   handle_irq_event() {
/*              */                                     _raw_spin_unlock() {
/*   0.834 us   */                                       preempt_count_sub();
/*   5.260 us   */                                     }
/*              */                                     handle_irq_event_percpu() {
/*              */                                       dw_mci_interrupt() {
/*              */                                         __tasklet_schedule() {
/*   0.834 us   */                                           __raise_softirq_irqoff();
/*   5.521 us   */                                         }
/* + 10.781 us  */                                       }
/*   1.041 us   */                                       add_interrupt_randomness();
/*   0.885 us   */                                       note_interrupt();
/* + 24.687 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.261 us   */                                     }
/* + 49.427 us  */                                   }
/*   1.302 us   */                                   gic_eoimode1_eoi_irq();
/*              */                                   _raw_spin_unlock() {
/*   1.302 us   */                                     preempt_count_sub();
/*   7.604 us   */                                   }
/* + 82.500 us  */                                 }
/* + 88.020 us  */                               }
/*              */                               irq_exit() {
/*   1.302 us   */                                 preempt_count_sub();
/*   1.354 us   */                                 idle_cpu();
/*   1.406 us   */                                 rcu_irq_exit();
/* + 20.365 us  */                               }
/* ! 137.083 us */                             }
/* ! 143.229 us */                           }
/*   <========== */
/* ! 177.656 us */                         }
/*              */                         _raw_spin_unlock_bh() {
/*              */                           __local_bh_enable_ip() {
/*   0.781 us   */                             preempt_count_sub();
/*              */                             do_softirq() {
/*              */                               __do_softirq() {
/*   0.833 us   */                                 __local_bh_disable_ip();
/*              */                                 tasklet_action() {
/*              */                                   dw_mci_tasklet_func() {
/*              */                                     _raw_spin_lock() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.312 us   */                                     }
/*   1.094 us   */                                     dw_mci_command_complete();
/*              */                                     dw_mci_request_end() {
/*              */                                       _raw_spin_unlock() {
/*   0.781 us   */                                         preempt_count_sub();
/*   5.261 us   */                                       }
/*              */                                       mmc_request_done() {
/*              */                                         led_trigger_event() {
/*              */                                           _raw_read_lock() {
/*   0.834 us   */                                             preempt_count_add();
/*   5.260 us   */                                           }
/*              */                                           led_set_brightness() {
/*              */                                             gpio_led_set() {
/*              */                                               gpiod_set_value() {
/*              */                                                 _gpiod_set_raw_value() {
/*   1.302 us   */                                                   pl061_set_value();
/*   5.781 us   */                                                 }
/* + 10.105 us  */                                               }
/* + 14.531 us  */                                             }
/* + 18.958 us  */                                           }
/*              */                                           _raw_read_unlock() {
/*   0.833 us   */                                             preempt_count_sub();
/*   6.250 us   */                                           }
/* + 42.813 us  */                                         }
/*              */                                         mmc_wait_done() {
/*              */                                           complete() {
/*              */                                             _raw_spin_lock_irqsave() {
/*   1.302 us   */                                               preempt_count_add();
/*   7.656 us   */                                             }
/*              */                                             __wake_up_locked() {
/*   1.302 us   */                                               __wake_up_common();
/*   7.604 us   */                                             }
/*              */                                             _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                               preempt_count_sub();
/*   7.500 us   */                                             }
/* + 38.907 us  */                                           }
/* + 45.313 us  */                                         }
/* + 98.697 us  */                                       }
/*              */                                       _raw_spin_lock() {
/*   0.833 us   */                                         preempt_count_add();
/*   5.678 us   */                                       }
/* ! 122.552 us */                                     }
/*              */                                     _raw_spin_unlock() {
/*   0.781 us   */                                       preempt_count_sub();
/*   5.208 us   */                                     }
/* ! 149.375 us */                                   }
/* ! 154.115 us */                                 }
/*   0.886 us   */                                 rcu_bh_qs();
/*              */                                 __local_bh_enable() {
/*   0.834 us   */                                   preempt_count_sub();
/*   5.260 us   */                                 }
/* ! 176.666 us */                               }
/* ! 181.146 us */                             }
/*   1.094 us   */                             preempt_count_sub();
/* ! 197.396 us */                           }
/* ! 202.969 us */                         }
/* ! 404.896 us */                       }
/* ! 417.083 us */                     }
/* ! 473.854 us */                   }
/*              */                   mmc_wait_for_req_done() {
/*              */                     wait_for_completion() {
/*              */                       wait_for_common() {
/*              */                         _raw_spin_lock_irq() {
/*   1.042 us   */                           preempt_count_add();
/*   5.416 us   */                         }
/*              */                         _raw_spin_unlock_irq() {
/*   0.989 us   */                           preempt_count_sub();
/*   5.417 us   */                         }
/* + 18.854 us  */                       }
/* + 23.490 us  */                     }
/*   1.302 us   */                     mmc_retune_release();
/* + 34.635 us  */                   }
/* ! 522.760 us */                 }
/*              */                 __msecs_to_jiffies() {
/*   ==========> */
/*              */                 gic_handle_irq() {
/*              */                   __handle_domain_irq() {
/*              */                     irq_enter() {
/*   1.407 us   */                       rcu_irq_enter();
/*   1.510 us   */                       preempt_count_add();
/* + 14.167 us  */                     }
/*   1.250 us   */                     irq_find_mapping();
/*              */                     generic_handle_irq() {
/*              */                       handle_percpu_devid_irq() {
/*              */                         arch_timer_handler_phys() {
/*              */                           hrtimer_interrupt() {
/*              */                             _raw_spin_lock() {
/*   1.355 us   */                               preempt_count_add();
/*   6.667 us   */                             }
/*              */                             ktime_get_update_offsets_now() {
/*   0.834 us   */                               arch_counter_read();
/*   5.364 us   */                             }
/*              */                             __hrtimer_run_queues() {
/*   0.990 us   */                               __remove_hrtimer();
/*              */                               _raw_spin_unlock() {
/*   0.781 us   */                                 preempt_count_sub();
/*   5.521 us   */                               }
/*              */                               tick_sched_timer() {
/*              */                                 ktime_get() {
/*   0.833 us   */                                   arch_counter_read();
/*   5.313 us   */                                 }
/*              */                                 tick_do_update_jiffies64() {
/*              */                                   _raw_spin_lock() {
/*   0.781 us   */                                     preempt_count_add();
/*   5.261 us   */                                   }
/*              */                                   do_timer() {
/*   0.834 us   */                                     calc_global_load();
/*   5.313 us   */                                   }
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.364 us   */                                   }
/*              */                                   update_wall_time() {
/*              */                                     _raw_spin_lock_irqsave() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.521 us   */                                     }
/*   0.834 us   */                                     arch_counter_read();
/*   1.250 us   */                                     ntp_tick_length();
/*   1.302 us   */                                     ntp_tick_length();
/*   1.302 us   */                                     ntp_tick_length();
/*              */                                     timekeeping_update() {
/*   1.303 us   */                                       ntp_get_next_leap();
/*   1.354 us   */                                       update_vsyscall();
/*   1.302 us   */                                       raw_notifier_call_chain();
/*   1.354 us   */                                       update_fast_timekeeper();
/* + 26.771 us  */                                     }
/*              */                                     _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                       preempt_count_sub();
/*   7.812 us   */                                     }
/* + 78.542 us  */                                   }
/* ! 110.677 us */                                 }
/*              */                                 update_process_times() {
/*              */                                   account_process_tick() {
/*              */                                     account_system_time() {
/*              */                                       cpuacct_account_field() {
/*   0.833 us   */                                         __rcu_read_lock();
/*   0.833 us   */                                         __rcu_read_unlock();
/* + 10.208 us  */                                       }
/*              */                                       acct_account_cputime() {
/*              */                                         __acct_update_integrals() {
/*   0.833 us   */                                           jiffies_to_timeval();
/*   5.364 us   */                                         }
/*   9.740 us   */                                       }
/* + 30.156 us  */                                     }
/* + 34.688 us  */                                   }
/*   0.834 us   */                                   hrtimer_run_queues();
/*              */                                   raise_softirq() {
/*   0.886 us   */                                     __raise_softirq_irqoff();
/*   5.417 us   */                                   }
/*              */                                   rcu_check_callbacks() {
/*   0.833 us   */                                     rcu_bh_qs();
/*   0.885 us   */                                     rcu_preempt_qs();
/*   0.938 us   */                                     cpu_needs_another_gp();
/*   0.833 us   */                                     cpu_needs_another_gp();
/*   0.833 us   */                                     cpu_needs_another_gp();
/* + 23.802 us  */                                   }
/*              */                                   scheduler_tick() {
/*              */                                     _raw_spin_lock() {
/*   1.302 us   */                                       preempt_count_add();
/*   7.604 us   */                                     }
/*   2.448 us   */                                     update_rq_clock.part.83();
/*              */                                     task_tick_fair() {
/*              */                                       update_curr() {
/*              */                                         cpuacct_charge() {
/*   1.250 us   */                                           __rcu_read_lock();
/*   1.250 us   */                                           __rcu_read_unlock();
/* + 13.958 us  */                                         }
/* + 20.573 us  */                                       }
/*   1.355 us   */                                       __compute_runnable_contrib();
/*   1.302 us   */                                       __compute_runnable_contrib();
/*              */                                       update_cfs_shares() {
/*   0.937 us   */                                         update_curr();
/*   5.938 us   */                                       }
/*   0.885 us   */                                       hrtimer_active();
/*   0.833 us   */                                       update_curr();
/*   0.833 us   */                                       __compute_runnable_contrib();
/*   0.833 us   */                                       __compute_runnable_contrib();
/*   0.834 us   */                                       update_cfs_shares();
/*   0.834 us   */                                       hrtimer_active();
/* + 77.136 us  */                                     }
/*              */                                     update_cpu_load_active() {
/*              */                                       __update_cpu_load() {
/*   0.833 us   */                                         sched_avg_update();
/*   5.417 us   */                                       }
/*   9.844 us   */                                     }
/*   0.833 us   */                                     calc_global_load_tick();
/*              */                                     _raw_spin_unlock() {
/*   0.782 us   */                                       preempt_count_sub();
/*   5.208 us   */                                     }
/*              */                                     trigger_load_balance() {
/*   0.781 us   */                                       __rcu_read_lock();
/*   0.886 us   */                                       __rcu_read_unlock();
/*   0.833 us   */                                       __rcu_read_lock();
/*   0.833 us   */                                       __rcu_read_unlock();
/* + 19.167 us  */                                     }
/* ! 151.823 us */                                   }
/*   1.354 us   */                                   run_posix_cpu_timers();
/* ! 242.396 us */                                 }
/*   1.406 us   */                                 profile_tick();
/*   1.303 us   */                                 hrtimer_forward();
/* ! 383.750 us */                               }
/*              */                               _raw_spin_lock() {
/*   1.302 us   */                                 preempt_count_add();
/* + 10.886 us  */                               }
/*   1.458 us   */                               enqueue_hrtimer();
/* ! 425.886 us */                             }
/*   1.354 us   */                             __hrtimer_get_next_event();
/*              */                             _raw_spin_unlock() {
/*   1.302 us   */                               preempt_count_sub();
/*   7.083 us   */                             }
/*              */                             tick_program_event() {
/*              */                               clockevents_program_event() {
/*              */                                 ktime_get() {
/*   0.834 us   */                                   arch_counter_read();
/*   5.260 us   */                                 }
/*   1.093 us   */                                 arch_timer_set_next_event_phys();
/* + 14.636 us  */                               }
/* + 19.166 us  */                             }
/* ! 491.979 us */                           }
/* ! 497.448 us */                         }
/*   0.886 us   */                         gic_eoimode1_eoi_irq();
/* ! 507.448 us */                       }
/* ! 512.865 us */                     }
/*              */                     irq_exit() {
/*   1.042 us   */                       preempt_count_sub();
/*              */                       __do_softirq() {
/*   1.146 us   */                         __local_bh_disable_ip();
/*              */                         run_timer_softirq() {
/*              */                           _raw_spin_lock_irq() {
/*   0.833 us   */                             preempt_count_add();
/*   5.313 us   */                           }
/*              */                           _raw_spin_unlock_irq() {
/*   0.781 us   */                             preempt_count_sub();
/*   5.208 us   */                           }
/* + 18.803 us  */                         }
/*   0.886 us   */                         rcu_bh_qs();
/*              */                         __local_bh_enable() {
/*   0.990 us   */                           preempt_count_sub();
/*   5.937 us   */                         }
/* + 43.333 us  */                       }
/*   1.354 us   */                       idle_cpu();
/*   1.407 us   */                       rcu_irq_exit();
/* + 66.406 us  */                     }
/* ! 614.687 us */                   }
/* ! 621.094 us */                 }
/*   <========== */
/*   1.354 us   */                 } /* __msecs_to_jiffies */
/*              */                 mmc_wait_for_cmd() {
/*   1.302 us   */                   __init_waitqueue_head();
/*              */                   mmc_start_request() {
/*   1.302 us   */                     mmc_retune_hold();
/*              */                     led_trigger_event() {
/*              */                       _raw_read_lock() {
/*   1.458 us   */                         preempt_count_add();
/*   7.656 us   */                       }
/*              */                       led_set_brightness() {
/*              */                         gpio_led_set() {
/*              */                           gpiod_set_value() {
/*              */                             _gpiod_set_raw_value() {
/*   1.354 us   */                               pl061_set_value();
/*   5.781 us   */                             }
/* + 10.261 us  */                           }
/* + 14.687 us  */                         }
/* + 19.114 us  */                       }
/*              */                       _raw_read_unlock() {
/*   1.041 us   */                         preempt_count_sub();
/*   5.469 us   */                       }
/* + 44.687 us  */                     }
/*              */                     __mmc_start_request() {
/*   0.781 us   */                       mmc_retune();
/*              */                       dw_mci_request() {
/*              */                         _raw_spin_lock_bh() {
/*   1.146 us   */                           __local_bh_disable_ip();
/*   5.625 us   */                         }
/*              */                         __dw_mci_start_request() {
/*              */                           dw_mci_prepare_command() {
/*   0.833 us   */                             dw_mci_hi6220_prepare_command();
/*   5.313 us   */                           }
/*              */                           dw_mci_start_command() {
/*   0.833 us   */                             dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                           }
/*   ==========> */
/*              */                           gic_handle_irq() {
/*              */                             __handle_domain_irq() {
/*              */                               irq_enter() {
/*   1.354 us   */                                 rcu_irq_enter();
/*   1.302 us   */                                 preempt_count_add();
/* + 13.594 us  */                               }
/*   1.354 us   */                               irq_find_mapping();
/*              */                               generic_handle_irq() {
/*              */                                 handle_fasteoi_irq() {
/*              */                                   _raw_spin_lock() {
/*   1.302 us   */                                     preempt_count_add();
/*   7.500 us   */                                   }
/*              */                                   handle_irq_event() {
/*              */                                     _raw_spin_unlock() {
/*   1.355 us   */                                       preempt_count_sub();
/*   7.553 us   */                                     }
/*              */                                     handle_irq_event_percpu() {
/*              */                                       dw_mci_interrupt() {
/*              */                                         __tasklet_schedule() {
/*   0.886 us   */                                           __raise_softirq_irqoff();
/*   5.729 us   */                                         }
/* + 11.927 us  */                                       }
/*   0.989 us   */                                       add_interrupt_randomness();
/*   0.886 us   */                                       note_interrupt();
/* + 26.615 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   0.782 us   */                                       preempt_count_add();
/*   5.208 us   */                                     }
/* + 53.281 us  */                                   }
/*   0.885 us   */                                   gic_eoimode1_eoi_irq();
/*              */                                   _raw_spin_unlock() {
/*   0.834 us   */                                     preempt_count_sub();
/*   5.417 us   */                                   }
/* + 84.531 us  */                                 }
/* + 90.156 us  */                               }
/*              */                               irq_exit() {
/*   0.833 us   */                                 preempt_count_sub();
/*   0.834 us   */                                 idle_cpu();
/*   0.937 us   */                                 rcu_irq_exit();
/* + 14.948 us  */                               }
/* ! 138.646 us */                             }
/* ! 143.230 us */                           }
/*   <========== */
/* ! 168.541 us */                         }
/*              */                         _raw_spin_unlock_bh() {
/*              */                           __local_bh_enable_ip() {
/*   0.834 us   */                             preempt_count_sub();
/*              */                             do_softirq() {
/*              */                               __do_softirq() {
/*   1.355 us   */                                 __local_bh_disable_ip();
/*              */                                 tasklet_action() {
/*              */                                   dw_mci_tasklet_func() {
/*              */                                     _raw_spin_lock() {
/*   1.302 us   */                                       preempt_count_add();
/*   7.604 us   */                                     }
/*   1.563 us   */                                     dw_mci_command_complete();
/*              */                                     dw_mci_request_end() {
/*              */                                       _raw_spin_unlock() {
/*   1.250 us   */                                         preempt_count_sub();
/*   7.500 us   */                                       }
/*              */                                       mmc_request_done() {
/*              */                                         led_trigger_event() {
/*              */                                           _raw_read_lock() {
/*   1.302 us   */                                             preempt_count_add();
/*   7.500 us   */                                           }
/*              */                                           led_set_brightness() {
/*              */                                             gpio_led_set() {
/*              */                                               gpiod_set_value() {
/*              */                                                 _gpiod_set_raw_value() {
/*   1.355 us   */                                                   pl061_set_value();
/*   5.781 us   */                                                 }
/* + 10.156 us  */                                               }
/* + 14.532 us  */                                             }
/* + 18.906 us  */                                           }
/*              */                                           _raw_read_unlock() {
/*   0.782 us   */                                             preempt_count_sub();
/*   5.208 us   */                                           }
/* + 44.062 us  */                                         }
/*              */                                         mmc_wait_done() {
/*              */                                           complete() {
/*              */                                             _raw_spin_lock_irqsave() {
/*   0.834 us   */                                               preempt_count_add();
/*   7.865 us   */                                             }
/*              */                                             __wake_up_locked() {
/*   0.833 us   */                                               __wake_up_common();
/*   5.313 us   */                                             }
/*              */                                             _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                               preempt_count_sub();
/*   5.209 us   */                                             }
/* + 30.104 us  */                                           }
/* + 34.531 us  */                                         }
/* + 87.552 us  */                                       }
/*              */                                       _raw_spin_lock() {
/*   0.833 us   */                                         preempt_count_add();
/*   5.261 us   */                                       }
/* ! 114.114 us */                                     }
/*              */                                     _raw_spin_unlock() {
/*   1.250 us   */                                       preempt_count_sub();
/*   7.552 us   */                                     }
/* ! 151.823 us */                                   }
/* ! 158.385 us */                                 }
/*   1.302 us   */                                 rcu_bh_qs();
/*              */                                 __local_bh_enable() {
/*   1.250 us   */                                   preempt_count_sub();
/*   7.552 us   */                                 }
/* ! 190.365 us */                               }
/* ! 196.250 us */                             }
/*   1.562 us   */                             preempt_count_sub();
/* ! 212.760 us */                           }
/* ! 218.021 us */                         }
/* ! 404.740 us */                       }
/* ! 414.583 us */                     }
/* ! 475.573 us */                   }
/*              */                   mmc_wait_for_req_done() {
/*              */                     wait_for_completion() {
/*              */                       wait_for_common() {
/*              */                         _raw_spin_lock_irq() {
/*   1.042 us   */                           preempt_count_add();
/*   5.469 us   */                         }
/*              */                         _raw_spin_unlock_irq() {
/*   0.989 us   */                           preempt_count_sub();
/*   5.521 us   */                         }
/* + 19.010 us  */                       }
/* + 23.385 us  */                     }
/*   0.833 us   */                     mmc_retune_release();
/* + 32.292 us  */                   }
/* ! 524.062 us */                 }
/*   0.834 us   */                 mmc_switch_status_error();
/*   0.834 us   */                 mmc_retune_release();
/* # 1703.125 us*/               }
/* # 1707.709 us*/             }
/*              */             mmc_set_bus_width() {
/*              */               dw_mci_set_ios() {
/*              */                 dw_mci_hi6220_set_ios() {
/*              */                   clk_set_rate() {
/*              */                     clk_prepare_lock() {
/*   0.833 us   */                       mutex_trylock();
/*   5.261 us   */                     }
/*              */                     clk_core_set_rate_nolock() {
/*              */                       clk_calc_new_rates() {
/*              */                         clk_calc_new_rates() {
/*              */                           __clk_mux_determine_rate() {
/*              */                             clk_mux_determine_rate_flags.isra.23() {
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 clk_factor_round_rate() {
/*   1.302 us   */                                   clk_hw_get_flags();
/*   7.552 us   */                                 }
/* + 13.125 us  */                               }
/*              */                               clk_core_round_rate_nolock() {
/*              */                                 hi6220_clkdiv_round_rate() {
/*              */                                   divider_round_rate() {
/*              */                                     clk_divider_bestdiv() {
/*   1.563 us   */                                       _get_maxdiv();
/*   1.250 us   */                                       clk_hw_get_flags();
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 14.011 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 12.344 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.532 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/* + 10.365 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/* + 10.416 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.740 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.656 us   */                                         }
/* + 13.229 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.885 us   */                                           clk_core_round_rate_nolock();
/*   5.365 us   */                                         }
/*   9.739 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.781 us   */                                         }
/* + 11.042 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.802 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.739 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.959 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.354 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   6.198 us   */                                         }
/* + 11.510 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.605 us   */                                         }
/* + 13.594 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.657 us   */                                         }
/* + 13.906 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.312 us   */                                         }
/*   9.740 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   7.396 us   */                                         }
/* + 11.823 us  */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   6.250 us   */                                         }
/* + 11.667 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.906 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.209 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.635 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.885 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.313 us   */                                         }
/*   9.687 us   */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.708 us   */                                         }
/* + 13.854 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/* + 10.260 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.156 us   */                                         }
/*   9.531 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.260 us   */                                         }
/*   9.688 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.636 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.354 us   */                                           clk_core_round_rate_nolock();
/*   7.552 us   */                                         }
/* + 13.750 us  */                                       }
/*   1.250 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.302 us   */                                           clk_core_round_rate_nolock();
/*   7.604 us   */                                         }
/* + 13.958 us  */                                       }
/*   1.302 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   1.250 us   */                                           clk_core_round_rate_nolock();
/*   7.500 us   */                                         }
/* + 13.177 us  */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.834 us   */                                           clk_core_round_rate_nolock();
/*   5.156 us   */                                         }
/*   9.583 us   */                                       }
/*   0.833 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.782 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.583 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.781 us   */                                           clk_core_round_rate_nolock();
/*   5.208 us   */                                         }
/*   9.584 us   */                                       }
/*   0.834 us   */                                       clk_hw_get_parent();
/*              */                                       clk_hw_round_rate() {
/*              */                                         clk_core_round_rate_nolock() {
/*   0.833 us   */                                           clk_core_round_rate_nolock();
/*   5.261 us   */                                         }
/*   9.688 us   */                                       }
/* # 1338.229 us*/                                     }
/* # 1343.645 us*/                                   }
/* # 1348.959 us*/                                 }
/* # 1354.583 us*/                               }
/* # 1377.396 us*/                             }
/* # 1382.396 us*/                           }
/*              */                           clk_calc_subtree() {
/*   1.250 us   */                             clk_calc_subtree();
/*   7.865 us   */                           }
/* # 1403.906 us*/                         }
/*   1.303 us   */                         clk_calc_subtree();
/* # 1415.782 us*/                       }
/*   1.302 us   */                       clk_propagate_rate_change();
/*              */                       clk_change_rate() {
/*   1.406 us   */                         clk_change_rate();
/*   7.813 us   */                       }
/* # 1440.156 us*/                     }
/*              */                     clk_prepare_unlock() {
/*   1.302 us   */                       mutex_unlock();
/*   7.604 us   */                     }
/* # 1466.250 us*/                   }
/*              */                   clk_get_rate() {
/*              */                     clk_prepare_lock() {
/*   0.781 us   */                       mutex_trylock();
/*   5.208 us   */                     }
/*              */                     clk_prepare_unlock() {
/*   0.833 us   */                       mutex_unlock();
/*   5.469 us   */                     }
/* + 18.802 us  */                   }
/* # 1492.969 us*/                 }
/*   0.937 us   */                 dw_mci_setup_bus();
/* # 1502.396 us*/               }
/* # 1506.875 us*/             }
/*              */             mmc_get_ext_csd() {
/*   2.969 us   */               kmem_cache_alloc_trace();
/*              */               mmc_send_cxd_data() {
/*   1.250 us   */                 mmc_set_data_timeout();
/*              */                 mmc_wait_for_req() {
/*   0.834 us   */                   __init_waitqueue_head();
/*              */                   mmc_start_request() {
/*   0.834 us   */                     mmc_retune_hold();
/*              */                     led_trigger_event() {
/*              */                       _raw_read_lock() {
/*   1.146 us   */                         preempt_count_add();
/*   5.625 us   */                       }
/*              */                       led_set_brightness() {
/*              */                         gpio_led_set() {
/*              */                           gpiod_set_value() {
/*              */                             _gpiod_set_raw_value() {
/*   1.823 us   */                               pl061_set_value();
/*   8.021 us   */                             }
/* + 14.323 us  */                           }
/* + 19.844 us  */                         }
/* + 25.156 us  */                       }
/*              */                       _raw_read_unlock() {
/*   1.511 us   */                         preempt_count_sub();
/*   8.073 us   */                       }
/* + 52.813 us  */                     }
/*              */                     __mmc_start_request() {
/*   1.250 us   */                       mmc_retune();
/*              */                       dw_mci_request() {
/*              */                         _raw_spin_lock_bh() {
/*   1.562 us   */                           __local_bh_disable_ip();
/*   7.969 us   */                         }
/*              */                         __dw_mci_start_request() {
/*              */                           dw_mci_prepare_command() {
/*   0.781 us   */                             dw_mci_hi6220_prepare_command();
/*   5.261 us   */                           }
/*              */                           dw_mci_pre_dma_transfer.isra.16() {
/*   2.552 us   */                             __swiotlb_map_sg_attrs();
/*   8.646 us   */                           }
/*              */                           _raw_spin_lock_irqsave() {
/*   0.833 us   */                             preempt_count_add();
/*   5.417 us   */                           }
/*              */                           _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                             preempt_count_sub();
/*   5.260 us   */                           }
/*              */                           dw_mci_idmac_start_dma() {
/*   1.459 us   */                             dw_mci_ctrl_reset.isra.14();
/*   1.145 us   */                             dw_mci_idmac_reset.isra.11();
/* + 12.083 us  */                           }
/*              */                           dw_mci_start_command() {
/*   1.094 us   */                             dw_mci_wait_while_busy.isra.17();
/*   5.885 us   */                           }
/*   ==========> */
/*              */                           gic_handle_irq() {
/*              */                             __handle_domain_irq() {
/*              */                               irq_enter() {
/*   0.886 us   */                                 rcu_irq_enter();
/*   0.833 us   */                                 preempt_count_add();
/* + 10.833 us  */                               }
/*   1.354 us   */                               irq_find_mapping();
/*              */                               generic_handle_irq() {
/*              */                                 handle_fasteoi_irq() {
/*              */                                   _raw_spin_lock() {
/*   1.302 us   */                                     preempt_count_add();
/*   7.552 us   */                                   }
/*              */                                   handle_irq_event() {
/*              */                                     _raw_spin_unlock() {
/*   1.354 us   */                                       preempt_count_sub();
/*   7.657 us   */                                     }
/*              */                                     handle_irq_event_percpu() {
/*              */                                       dw_mci_interrupt() {
/*              */                                         __tasklet_schedule() {
/*   1.354 us   */                                           __raise_softirq_irqoff();
/*   8.021 us   */                                         }
/* + 14.896 us  */                                       }
/*   0.990 us   */                                       add_interrupt_randomness();
/*   0.886 us   */                                       note_interrupt();
/* + 29.791 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.313 us   */                                     }
/* + 56.719 us  */                                   }
/*   0.885 us   */                                   gic_eoimode1_eoi_irq();
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.260 us   */                                   }
/* + 88.177 us  */                                 }
/* + 93.854 us  */                               }
/*              */                               irq_exit() {
/*   0.834 us   */                                 preempt_count_sub();
/*   0.833 us   */                                 idle_cpu();
/*   0.937 us   */                                 rcu_irq_exit();
/* + 14.323 us  */                               }
/* ! 138.854 us */                             }
/* ! 143.594 us */                           }
/*   <========== */
/* + 67.657 us  */                         }
/*              */                         _raw_spin_unlock_bh() {
/*              */                           __local_bh_enable_ip() {
/*   0.834 us   */                             preempt_count_sub();
/*              */                             do_softirq() {
/*              */                               __do_softirq() {
/*   0.885 us   */                                 __local_bh_disable_ip();
/*              */                                 tasklet_action() {
/*              */                                   dw_mci_tasklet_func() {
/*              */                                     _raw_spin_lock() {
/*   1.302 us   */                                       preempt_count_add();
/*   7.605 us   */                                     }
/*   1.510 us   */                                     dw_mci_command_complete();
/*              */                                     _raw_spin_unlock() {
/*   1.302 us   */                                       preempt_count_sub();
/*   7.708 us   */                                     }
/* + 33.854 us  */                                   }
/* + 40.468 us  */                                 }
/*   1.355 us   */                                 rcu_bh_qs();
/*              */                                 __local_bh_enable() {
/*   1.250 us   */                                   preempt_count_sub();
/*   7.604 us   */                                 }
/* + 70.209 us  */                               }
/* + 75.208 us  */                             }
/*   1.041 us   */                             preempt_count_sub();
/* + 88.907 us  */                           }
/* + 93.385 us  */                         }
/* ! 332.084 us */                       }
/* ! 343.594 us */                     }
/* ! 410.885 us */                   }
/*              */                   mmc_wait_for_req_done() {
/*              */                     wait_for_completion() {
/*              */                       wait_for_common() {
/*              */                         _raw_spin_lock_irq() {
/*   1.042 us   */                           preempt_count_add();
/*   5.521 us   */                         }
/*              */                         _raw_spin_unlock_irq() {
/*   0.989 us   */                           preempt_count_sub();
/*   7.605 us   */                         }
/*              */                         schedule_timeout() {
/*              */                           schedule() {
/*   0.990 us   */                             preempt_count_add();
/*              */                             rcu_note_context_switch() {
/*   0.886 us   */                               rcu_sched_qs();
/*   0.886 us   */                               rcu_preempt_qs();
/*   9.895 us   */                             }
/*              */                             _raw_spin_lock_irq() {
/*   0.781 us   */                               preempt_count_add();
/*   5.261 us   */                             }
/*              */                             deactivate_task() {
/*   1.406 us   */                               update_rq_clock.part.83();
/*              */                               dequeue_task_fair() {
/*              */                                 update_curr() {
/*              */                                   cpuacct_charge() {
/*   1.355 us   */                                     __rcu_read_lock();
/*   1.302 us   */                                     __rcu_read_unlock();
/* + 14.635 us  */                                   }
/* + 21.198 us  */                                 }
/*   1.355 us   */                                 __compute_runnable_contrib();
/*   1.302 us   */                                 __compute_runnable_contrib();
/*   1.302 us   */                                 clear_buddies();
/*              */                                 update_cfs_shares() {
/*   1.354 us   */                                   update_curr();
/*   7.708 us   */                                 }
/*   0.833 us   */                                 update_curr();
/*   0.834 us   */                                 __compute_runnable_contrib();
/*   0.833 us   */                                 __compute_runnable_contrib();
/*   0.833 us   */                                 clear_buddies();
/*   0.886 us   */                                 update_cfs_shares();
/*   0.833 us   */                                 hrtick_update();
/* + 91.406 us  */                               }
/* ! 102.136 us */                             }
/*              */                             pick_next_task_fair() {
/*   0.834 us   */                               __rcu_read_lock();
/*   0.781 us   */                               __msecs_to_jiffies();
/*   0.833 us   */                               __rcu_read_unlock();
/* + 14.948 us  */                             }
/*              */                             pick_next_task_idle() {
/*              */                               put_prev_task_fair() {
/*   0.834 us   */                                 put_prev_entity();
/*   0.834 us   */                                 put_prev_entity();
/*   9.896 us   */                               }
/* + 14.584 us  */                             }
/*              */                             __switch_to() {
/*   0.833 us   */                               fpsimd_thread_switch();
/*   0.833 us   */                               hw_breakpoint_thread_switch();
/* # 5193.594 us*/                             }
/*              */                             finish_task_switch() {
/*              */                               _raw_spin_unlock_irq() {
/*   1.302 us   */                                 preempt_count_sub();
/*   7.552 us   */                               }
/* + 15.364 us  */                             }
/*   1.563 us   */                             preempt_count_sub();
/* # 5408.646 us*/                           }
/* # 5414.687 us*/                         }
/*              */                         _raw_spin_lock_irq() {
/*   1.615 us   */                           preempt_count_add();
/*   6.041 us   */                         }
/*              */                         _raw_spin_unlock_irq() {
/*   0.990 us   */                           preempt_count_sub();
/*   5.469 us   */                         }
/* # 5459.375 us*/                       }
/* # 5463.959 us*/                     }
/*   1.042 us   */                     mmc_retune_release();
/* # 5473.594 us*/                   }
/* # 5897.239 us*/                 }
/* # 5907.864 us*/               }
/* # 5919.792 us*/             }
/*   2.344 us   */             kfree();
/* # 9163.021 us*/           }
/*   1.042 us   */           mmc_can_ext_csd();
/*              */           mmc_switch() {
/*              */             __mmc_switch() {
/*   0.781 us   */               mmc_retune_hold();
/*              */               mmc_wait_for_cmd() {
/*   0.781 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   0.833 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   1.458 us   */                       preempt_count_add();
/*   7.760 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.823 us   */                             pl061_set_value();
/*   8.333 us   */                           }
/* + 14.636 us  */                         }
/* + 20.990 us  */                       }
/* + 27.240 us  */                     }
/*              */                     _raw_read_unlock() {
/*   1.510 us   */                       preempt_count_sub();
/*   7.865 us   */                     }
/* + 59.323 us  */                   }
/*              */                   __mmc_start_request() {
/*   1.093 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.302 us   */                         __local_bh_disable_ip();
/*   6.302 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   0.781 us   */                           dw_mci_hi6220_prepare_command();
/*   6.302 us   */                         }
/*              */                         dw_mci_start_command() {
/*   0.989 us   */                           dw_mci_wait_while_busy.isra.17();
/*   5.729 us   */                         }
/*   ==========> */
/*              */                         gic_handle_irq() {
/*              */                           __handle_domain_irq() {
/*              */                             irq_enter() {
/*   0.885 us   */                               rcu_irq_enter();
/*   0.782 us   */                               preempt_count_add();
/* + 10.416 us  */                             }
/*   0.834 us   */                             irq_find_mapping();
/*              */                             generic_handle_irq() {
/*              */                               handle_fasteoi_irq() {
/*              */                                 _raw_spin_lock() {
/*   0.781 us   */                                   preempt_count_add();
/*   5.261 us   */                                 }
/*              */                                 handle_irq_event() {
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.469 us   */                                   }
/*              */                                   handle_irq_event_percpu() {
/*              */                                     dw_mci_interrupt() {
/*              */                                       __tasklet_schedule() {
/*   1.354 us   */                                         __raise_softirq_irqoff();
/*   7.968 us   */                                       }
/* + 15.261 us  */                                     }
/*   1.510 us   */                                     add_interrupt_randomness();
/*   1.302 us   */                                     note_interrupt();
/* + 34.427 us  */                                   }
/*              */                                   _raw_spin_lock() {
/*   1.302 us   */                                     preempt_count_add();
/*   7.656 us   */                                   }
/* + 62.812 us  */                                 }
/*   1.302 us   */                                 gic_eoimode1_eoi_irq();
/*              */                                 _raw_spin_unlock() {
/*   0.834 us   */                                   preempt_count_sub();
/*   5.260 us   */                                 }
/* + 92.761 us  */                               }
/* + 97.344 us  */                             }
/*              */                             irq_exit() {
/*   0.833 us   */                               preempt_count_sub();
/*   0.833 us   */                               idle_cpu();
/*   0.938 us   */                               rcu_irq_exit();
/* + 16.875 us  */                             }
/* ! 141.042 us */                           }
/* ! 145.781 us */                         }
/*   <========== */
/* ! 171.354 us */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   0.781 us   */                           preempt_count_sub();
/*              */                           do_softirq() {
/*              */                             __do_softirq() {
/*   0.834 us   */                               __local_bh_disable_ip();
/*              */                               tasklet_action() {
/*              */                                 dw_mci_tasklet_func() {
/*              */                                   _raw_spin_lock() {
/*   0.781 us   */                                     preempt_count_add();
/*   5.208 us   */                                   }
/*   1.198 us   */                                   dw_mci_command_complete();
/*              */                                   dw_mci_request_end() {
/*              */                                     _raw_spin_unlock() {
/*   0.833 us   */                                       preempt_count_sub();
/*   5.469 us   */                                     }
/*              */                                     mmc_request_done() {
/*              */                                       led_trigger_event() {
/*              */                                         _raw_read_lock() {
/*   1.250 us   */                                           preempt_count_add();
/*   7.500 us   */                                         }
/*              */                                         led_set_brightness() {
/*              */                                           gpio_led_set() {
/*              */                                             gpiod_set_value() {
/*              */                                               _gpiod_set_raw_value() {
/*   2.032 us   */                                                 pl061_set_value();
/*   8.333 us   */                                               }
/* + 14.635 us  */                                             }
/* + 20.937 us  */                                           }
/* + 27.240 us  */                                         }
/*              */                                         _raw_read_unlock() {
/*   1.250 us   */                                           preempt_count_sub();
/*   7.656 us   */                                         }
/* + 58.229 us  */                                       }
/*              */                                       mmc_wait_done() {
/*              */                                         complete() {
/*              */                                           _raw_spin_lock_irqsave() {
/*   0.782 us   */                                             preempt_count_add();
/*   5.260 us   */                                           }
/*              */                                           __wake_up_locked() {
/*   0.781 us   */                                             __wake_up_common();
/*   5.260 us   */                                           }
/*              */                                           _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                             preempt_count_sub();
/*   5.260 us   */                                           }
/* + 27.292 us  */                                         }
/* + 31.823 us  */                                       }
/* + 99.218 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.260 us   */                                     }
/* ! 122.761 us */                                   }
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.261 us   */                                   }
/* ! 149.844 us */                                 }
/* ! 154.636 us */                               }
/*   0.886 us   */                               rcu_bh_qs();
/*              */                               __local_bh_enable() {
/*   0.834 us   */                                 preempt_count_sub();
/*   5.312 us   */                               }
/* ! 177.500 us */                             }
/* ! 181.927 us */                           }
/*   1.042 us   */                           preempt_count_sub();
/* ! 196.354 us */                         }
/* ! 201.979 us */                       }
/* ! 392.761 us */                     }
/* ! 404.427 us */                   }
/* ! 479.114 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   1.563 us   */                         preempt_count_add();
/*   7.917 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   1.458 us   */                         preempt_count_sub();
/*   7.865 us   */                       }
/* + 30.208 us  */                     }
/* + 36.771 us  */                   }
/*   1.250 us   */                   mmc_retune_release();
/* + 49.062 us  */                 }
/* ! 542.865 us */               }
/*   0.989 us   */               __msecs_to_jiffies();
/*              */               mmc_wait_for_cmd() {
/*   0.833 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   0.782 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   0.990 us   */                       preempt_count_add();
/*   5.469 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.355 us   */                             pl061_set_value();
/*   5.833 us   */                           }
/* + 10.208 us  */                         }
/* + 14.636 us  */                       }
/* + 19.062 us  */                     }
/*              */                     _raw_read_unlock() {
/*   0.938 us   */                       preempt_count_sub();
/*   5.416 us   */                     }
/* + 41.302 us  */                   }
/*              */                   __mmc_start_request() {
/*   0.782 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.094 us   */                         __local_bh_disable_ip();
/*   5.521 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   1.302 us   */                           dw_mci_hi6220_prepare_command();
/*   7.761 us   */                         }
/*              */                         dw_mci_start_command() {
/*   1.250 us   */                           dw_mci_wait_while_busy.isra.17();
/*   7.865 us   */                         }
/*   ==========> */
/*              */                         gic_handle_irq() {
/*              */                           __handle_domain_irq() {
/*              */                             irq_enter() {
/*   1.406 us   */                               rcu_irq_enter();
/*   1.302 us   */                               preempt_count_add();
/* + 14.114 us  */                             }
/*   1.355 us   */                             irq_find_mapping();
/*              */                             generic_handle_irq() {
/*              */                               handle_fasteoi_irq() {
/*              */                                 _raw_spin_lock() {
/*   0.781 us   */                                   preempt_count_add();
/*   5.260 us   */                                 }
/*              */                                 handle_irq_event() {
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.521 us   */                                   }
/*              */                                   handle_irq_event_percpu() {
/*              */                                     dw_mci_interrupt() {
/*              */                                       __tasklet_schedule() {
/*   0.834 us   */                                         __raise_softirq_irqoff();
/*   5.416 us   */                                       }
/* + 10.573 us  */                                     }
/*   0.989 us   */                                     add_interrupt_randomness();
/*   0.885 us   */                                     note_interrupt();
/* + 24.063 us  */                                   }
/*              */                                   _raw_spin_lock() {
/*   0.834 us   */                                     preempt_count_add();
/*   5.312 us   */                                   }
/* + 46.459 us  */                                 }
/*   0.834 us   */                                 gic_eoimode1_eoi_irq();
/*              */                                 _raw_spin_unlock() {
/*   0.833 us   */                                   preempt_count_sub();
/*   5.260 us   */                                 }
/* + 73.594 us  */                               }
/* + 78.333 us  */                             }
/*              */                             irq_exit() {
/*   0.834 us   */                               preempt_count_sub();
/*   1.250 us   */                               idle_cpu();
/*   1.406 us   */                               rcu_irq_exit();
/* + 21.302 us  */                             }
/* ! 135.104 us */                           }
/* ! 141.667 us */                         }
/*   <========== */
/* ! 173.698 us */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   1.250 us   */                           preempt_count_sub();
/*              */                           do_softirq() {
/*              */                             __do_softirq() {
/*   1.354 us   */                               __local_bh_disable_ip();
/*              */                               tasklet_action() {
/*              */                                 dw_mci_tasklet_func() {
/*              */                                   _raw_spin_lock() {
/*   1.094 us   */                                     preempt_count_add();
/*   6.510 us   */                                   }
/*   1.094 us   */                                   dw_mci_command_complete();
/*              */                                   dw_mci_request_end() {
/*              */                                     _raw_spin_unlock() {
/*   0.833 us   */                                       preempt_count_sub();
/*   5.260 us   */                                     }
/*              */                                     mmc_request_done() {
/*              */                                       led_trigger_event() {
/*              */                                         _raw_read_lock() {
/*   0.833 us   */                                           preempt_count_add();
/*   5.209 us   */                                         }
/*              */                                         led_set_brightness() {
/*              */                                           gpio_led_set() {
/*              */                                             gpiod_set_value() {
/*              */                                               _gpiod_set_raw_value() {
/*   1.354 us   */                                                 pl061_set_value();
/*   5.833 us   */                                               }
/* + 10.208 us  */                                             }
/* + 14.584 us  */                                           }
/* + 19.011 us  */                                         }
/*              */                                         _raw_read_unlock() {
/*   0.834 us   */                                           preempt_count_sub();
/*   5.312 us   */                                         }
/* + 41.041 us  */                                       }
/*              */                                       mmc_wait_done() {
/*              */                                         complete() {
/*              */                                           _raw_spin_lock_irqsave() {
/*   0.833 us   */                                             preempt_count_add();
/*   5.260 us   */                                           }
/*              */                                           __wake_up_locked() {
/*   0.833 us   */                                             __wake_up_common();
/*   5.886 us   */                                           }
/*              */                                           _raw_spin_unlock_irqrestore() {
/*   1.302 us   */                                             preempt_count_sub();
/*   7.656 us   */                                           }
/* + 32.761 us  */                                         }
/* + 38.230 us  */                                       }
/* + 88.177 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   1.302 us   */                                       preempt_count_add();
/*   7.656 us   */                                     }
/* ! 114.896 us */                                   }
/*              */                                   _raw_spin_unlock() {
/*   1.250 us   */                                     preempt_count_sub();
/*   7.500 us   */                                   }
/* ! 148.385 us */                                 }
/* ! 154.948 us */                               }
/*   1.354 us   */                               rcu_bh_qs();
/*              */                               __local_bh_enable() {
/*   0.833 us   */                                 preempt_count_sub();
/*   5.365 us   */                               }
/* ! 182.969 us */                             }
/* ! 188.334 us */                           }
/*   1.042 us   */                           preempt_count_sub();
/* ! 204.583 us */                         }
/* ! 209.948 us */                       }
/* ! 403.333 us */                     }
/* ! 412.239 us */                   }
/* ! 466.250 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   1.042 us   */                         preempt_count_add();
/*   5.469 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.989 us   */                         preempt_count_sub();
/*   7.708 us   */                       }
/* + 21.146 us  */                     }
/* + 25.573 us  */                   }
/*   0.781 us   */                   mmc_retune_release();
/* + 34.323 us  */                 }
/* ! 512.865 us */               }
/*   0.833 us   */               mmc_switch_status_error();
/*   0.833 us   */               mmc_retune_release();
/* # 1082.865 us*/             }
/* # 1087.656 us*/           }
/*              */           mmc_switch() {
/*              */             __mmc_switch() {
/*   1.250 us   */               mmc_retune_hold();
/*              */               mmc_wait_for_cmd() {
/*   1.302 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   1.250 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   1.511 us   */                       preempt_count_add();
/*   7.865 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.875 us   */                             pl061_set_value();
/*   8.125 us   */                           }
/* + 14.427 us  */                         }
/* + 20.000 us  */                       }
/* + 25.312 us  */                     }
/*              */                     _raw_read_unlock() {
/*   0.989 us   */                       preempt_count_sub();
/*   5.469 us   */                     }
/* + 52.448 us  */                   }
/*              */                   __mmc_start_request() {
/*   0.833 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.094 us   */                         __local_bh_disable_ip();
/*   5.521 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   0.781 us   */                           dw_mci_hi6220_prepare_command();
/*   5.312 us   */                         }
/*              */                         dw_mci_start_command() {
/*   0.833 us   */                           dw_mci_wait_while_busy.isra.17();
/*   5.625 us   */                         }
/*   ==========> */
/*              */                         gic_handle_irq() {
/*              */                           __handle_domain_irq() {
/*              */                             irq_enter() {
/*   0.938 us   */                               rcu_irq_enter();
/*   0.885 us   */                               preempt_count_add();
/*   9.896 us   */                             }
/*   0.833 us   */                             irq_find_mapping();
/*              */                             generic_handle_irq() {
/*              */                               handle_fasteoi_irq() {
/*              */                                 _raw_spin_lock() {
/*   1.250 us   */                                   preempt_count_add();
/*   7.291 us   */                                 }
/*              */                                 handle_irq_event() {
/*              */                                   _raw_spin_unlock() {
/*   1.302 us   */                                     preempt_count_sub();
/*   7.708 us   */                                   }
/*              */                                   handle_irq_event_percpu() {
/*              */                                     dw_mci_interrupt() {
/*              */                                       __tasklet_schedule() {
/*   1.354 us   */                                         __raise_softirq_irqoff();
/*   7.813 us   */                                       }
/* + 14.844 us  */                                     }
/*   1.458 us   */                                     add_interrupt_randomness();
/*   1.407 us   */                                     note_interrupt();
/* + 34.063 us  */                                   }
/*              */                                   _raw_spin_lock() {
/*   0.833 us   */                                     preempt_count_add();
/*   5.469 us   */                                   }
/* + 62.343 us  */                                 }
/*   0.833 us   */                                 gic_eoimode1_eoi_irq();
/*              */                                 _raw_spin_unlock() {
/*   0.833 us   */                                   preempt_count_sub();
/*   7.500 us   */                                 }
/* + 94.635 us  */                               }
/* + 99.271 us  */                             }
/*              */                             irq_exit() {
/*   0.834 us   */                               preempt_count_sub();
/*   0.834 us   */                               idle_cpu();
/*   0.938 us   */                               rcu_irq_exit();
/* + 14.166 us  */                             }
/* ! 139.844 us */                           }
/* ! 144.479 us */                         }
/*   <========== */
/* + 19.010 us  */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   0.781 us   */                           preempt_count_sub();
/*              */                           do_softirq() {
/*              */                             __do_softirq() {
/*   0.886 us   */                               __local_bh_disable_ip();
/*              */                               tasklet_action() {
/*              */                                 dw_mci_tasklet_func() {
/*              */                                   _raw_spin_lock() {
/*   0.781 us   */                                     preempt_count_add();
/*   5.156 us   */                                   }
/*   1.511 us   */                                   dw_mci_command_complete();
/*              */                                   dw_mci_request_end() {
/*              */                                     _raw_spin_unlock() {
/*   1.302 us   */                                       preempt_count_sub();
/*   7.500 us   */                                     }
/*              */                                     mmc_request_done() {
/*              */                                       led_trigger_event() {
/*              */                                         _raw_read_lock() {
/*   1.250 us   */                                           preempt_count_add();
/*   7.500 us   */                                         }
/*              */                                         led_set_brightness() {
/*              */                                           gpio_led_set() {
/*              */                                             gpiod_set_value() {
/*              */                                               _gpiod_set_raw_value() {
/*   1.771 us   */                                                 pl061_set_value();
/*   8.177 us   */                                               }
/* + 14.480 us  */                                             }
/* + 20.729 us  */                                           }
/* + 26.042 us  */                                         }
/*              */                                         _raw_read_unlock() {
/*   0.781 us   */                                           preempt_count_sub();
/*   5.157 us   */                                         }
/* + 52.656 us  */                                       }
/*              */                                       mmc_wait_done() {
/*              */                                         complete() {
/*              */                                           _raw_spin_lock_irqsave() {
/*   0.781 us   */                                             preempt_count_add();
/*   5.469 us   */                                           }
/*              */                                           __wake_up_locked() {
/*   0.834 us   */                                             __wake_up_common();
/*   5.312 us   */                                           }
/*              */                                           _raw_spin_unlock_irqrestore() {
/*   0.782 us   */                                             preempt_count_sub();
/*   5.469 us   */                                           }
/* + 28.230 us  */                                         }
/* + 32.552 us  */                                       }
/* + 94.166 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   0.833 us   */                                       preempt_count_add();
/*   5.521 us   */                                     }
/* ! 120.989 us */                                   }
/*              */                                   _raw_spin_unlock() {
/*   0.833 us   */                                     preempt_count_sub();
/*   5.260 us   */                                   }
/* ! 149.896 us */                                 }
/* ! 154.531 us */                               }
/*   0.885 us   */                               rcu_bh_qs();
/*              */                               __local_bh_enable() {
/*   0.938 us   */                                 preempt_count_sub();
/*   6.355 us   */                               }
/* ! 179.375 us */                             }
/* ! 184.844 us */                           }
/*   1.511 us   */                           preempt_count_sub();
/* ! 201.354 us */                         }
/* ! 206.667 us */                       }
/* ! 391.927 us */                     }
/* ! 401.771 us */                   }
/* ! 470.469 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   1.511 us   */                         preempt_count_add();
/*   7.865 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.989 us   */                         preempt_count_sub();
/*   6.354 us   */                       }
/* + 24.583 us  */                     }
/* + 30.052 us  */                   }
/*   0.781 us   */                   mmc_retune_release();
/* + 39.792 us  */                 }
/* ! 530.208 us */               }
/*   0.833 us   */               __msecs_to_jiffies();
/*              */               mmc_wait_for_cmd() {
/*   0.833 us   */                 __init_waitqueue_head();
/*              */                 mmc_start_request() {
/*   0.782 us   */                   mmc_retune_hold();
/*              */                   led_trigger_event() {
/*              */                     _raw_read_lock() {
/*   1.041 us   */                       preempt_count_add();
/*   5.521 us   */                     }
/*              */                     led_set_brightness() {
/*              */                       gpio_led_set() {
/*              */                         gpiod_set_value() {
/*              */                           _gpiod_set_raw_value() {
/*   1.354 us   */                             pl061_set_value();
/*   5.782 us   */                           }
/* + 10.156 us  */                         }
/* + 14.479 us  */                       }
/* + 18.906 us  */                     }
/*              */                     _raw_read_unlock() {
/*   0.990 us   */                       preempt_count_sub();
/*   5.521 us   */                     }
/* + 41.823 us  */                   }
/*              */                   __mmc_start_request() {
/*   0.833 us   */                     mmc_retune();
/*              */                     dw_mci_request() {
/*              */                       _raw_spin_lock_bh() {
/*   1.563 us   */                         __local_bh_disable_ip();
/*   7.865 us   */                       }
/*              */                       __dw_mci_start_request() {
/*              */                         dw_mci_prepare_command() {
/*   1.250 us   */                           dw_mci_hi6220_prepare_command();
/*   7.708 us   */                         }
/*              */                         dw_mci_start_command() {
/*   1.354 us   */                           dw_mci_wait_while_busy.isra.17();
/*   7.865 us   */                         }
/*   ==========> */
/*              */                         gic_handle_irq() {
/*              */                           __handle_domain_irq() {
/*              */                             irq_enter() {
/*   1.407 us   */                               rcu_irq_enter();
/*   1.146 us   */                               preempt_count_add();
/* + 13.177 us  */                             }
/*   0.886 us   */                             irq_find_mapping();
/*              */                             generic_handle_irq() {
/*              */                               handle_fasteoi_irq() {
/*              */                                 _raw_spin_lock() {
/*   0.781 us   */                                   preempt_count_add();
/*   5.260 us   */                                 }
/*              */                                 handle_irq_event() {
/*              */                                   _raw_spin_unlock() {
/*   0.781 us   */                                     preempt_count_sub();
/*   5.312 us   */                                   }
/*              */                                   handle_irq_event_percpu() {
/*              */                                     dw_mci_interrupt() {
/*              */                                       __tasklet_schedule() {
/*   0.886 us   */                                         __raise_softirq_irqoff();
/*   5.469 us   */                                       }
/* + 10.729 us  */                                     }
/*   0.938 us   */                                     add_interrupt_randomness();
/*   0.885 us   */                                     note_interrupt();
/* + 24.636 us  */                                   }
/*              */                                   _raw_spin_lock() {
/*   0.833 us   */                                     preempt_count_add();
/*   5.261 us   */                                   }
/* + 46.875 us  */                                 }
/*   0.833 us   */                                 gic_eoimode1_eoi_irq();
/*              */                                 _raw_spin_unlock() {
/*   0.781 us   */                                   preempt_count_sub();
/*   7.708 us   */                                 }
/* + 76.615 us  */                               }
/* + 81.979 us  */                             }
/*              */                             irq_exit() {
/*   1.302 us   */                               preempt_count_sub();
/*   1.302 us   */                               idle_cpu();
/*   1.354 us   */                               rcu_irq_exit();
/* + 20.260 us  */                             }
/* ! 135.000 us */                           }
/* ! 141.406 us */                         }
/*   <========== */
/* ! 173.385 us */                       }
/*              */                       _raw_spin_unlock_bh() {
/*              */                         __local_bh_enable_ip() {
/*   1.355 us   */                           preempt_count_sub();
/*              */                           do_softirq() {
/*              */                             __do_softirq() {
/*   1.146 us   */                               __local_bh_disable_ip();
/*              */                               tasklet_action() {
/*              */                                 dw_mci_tasklet_func() {
/*              */                                   _raw_spin_lock() {
/*   0.834 us   */                                     preempt_count_add();
/*   5.260 us   */                                   }
/*   1.094 us   */                                   dw_mci_command_complete();
/*              */                                   dw_mci_request_end() {
/*              */                                     _raw_spin_unlock() {
/*   0.833 us   */                                       preempt_count_sub();
/*   5.209 us   */                                     }
/*              */                                     mmc_request_done() {
/*              */                                       led_trigger_event() {
/*              */                                         _raw_read_lock() {
/*   0.834 us   */                                           preempt_count_add();
/*   5.260 us   */                                         }
/*              */                                         led_set_brightness() {
/*              */                                           gpio_led_set() {
/*              */                                             gpiod_set_value() {
/*              */                                               _gpiod_set_raw_value() {
/*   1.354 us   */                                                 pl061_set_value();
/*   5.781 us   */                                               }
/* + 10.157 us  */                                             }
/* + 14.531 us  */                                           }
/* + 18.906 us  */                                         }
/*              */                                         _raw_read_unlock() {
/*   0.833 us   */                                           preempt_count_sub();
/*   5.260 us   */                                         }
/* + 41.302 us  */                                       }
/*              */                                       mmc_wait_done() {
/*              */                                         complete() {
/*              */                                           _raw_spin_lock_irqsave() {
/*   1.302 us   */                                             preempt_count_add();
/*   7.864 us   */                                           }
/*              */                                           __wake_up_locked() {
/*   1.250 us   */                                             __wake_up_common();
/*   7.500 us   */                                           }
/*              */                                           _raw_spin_unlock_irqrestore() {
/*   1.250 us   */                                             preempt_count_sub();
/*   7.604 us   */                                           }
/* + 38.541 us  */                                         }
/* + 43.750 us  */                                       }
/* + 94.011 us  */                                     }
/*              */                                     _raw_spin_lock() {
/*   1.302 us   */                                       preempt_count_add();
/*   7.708 us   */                                     }
/* ! 120.782 us */                                   }
/*              */                                   _raw_spin_unlock() {
/*   1.145 us   */                                     preempt_count_sub();
/*   6.406 us   */                                   }
/* ! 150.000 us */                                 }
/* ! 154.740 us */                               }
/*   0.834 us   */                               rcu_bh_qs();
/*              */                               __local_bh_enable() {
/*   0.834 us   */                                 preempt_count_sub();
/*   5.312 us   */                               }
/* ! 178.437 us */                             }
/* ! 183.854 us */                           }
/*   1.042 us   */                           preempt_count_sub();
/* ! 200.261 us */                         }
/* ! 205.625 us */                       }
/* ! 402.135 us */                     }
/* ! 412.396 us */                   }
/* ! 468.854 us */                 }
/*              */                 mmc_wait_for_req_done() {
/*              */                   wait_for_completion() {
/*              */                     wait_for_common() {
/*              */                       _raw_spin_lock_irq() {
/*   1.042 us   */                         preempt_count_add();
/*   5.469 us   */                       }
/*              */                       _raw_spin_unlock_irq() {
/*   0.990 us   */                         preempt_count_sub();
/*   5.469 us   */                       }
/* + 18.906 us  */                     }
/* + 23.334 us  */                   }
/*   0.834 us   */                   mmc_retune_release();
/* + 32.135 us  */                 }
/* ! 513.594 us */               }
/*   0.834 us   */               mmc_switch_status_error();
/*   1.302 us   */               mmc_retune_release();
/* # 1073.802 us*/             }
/* # 1079.219 us*/           }
/* * 66169.21 us*/         }
/*              */         mmc_release_host() {
/*              */           _raw_spin_lock_irqsave() {
/*   1.458 us   */             preempt_count_add();
/*   7.708 us   */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*   1.458 us   */             preempt_count_sub();
/*   7.813 us   */           }
/*              */           __wake_up() {
/*              */             _raw_spin_lock_irqsave() {
/*   1.458 us   */               preempt_count_add();
/*   7.761 us   */             }
/*   1.250 us   */             __wake_up_common();
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.938 us   */               preempt_count_sub();
/*   5.416 us   */             }
/* + 29.063 us  */           }
/*   1.094 us   */           __pm_runtime_suspend();
/* + 65.208 us  */         }
/* * 97096.77 us*/       }
/*              */       __pm_runtime_set_status() {
/*              */         _raw_spin_lock_irqsave() {
/*   0.990 us   */           preempt_count_add();
/*   5.677 us   */         }
/*              */         _raw_spin_lock() {
/*   0.833 us   */           preempt_count_add();
/*   5.573 us   */         }
/*              */         _raw_spin_unlock() {
/*   0.781 us   */           preempt_count_sub();
/*   5.365 us   */         }
/*              */         _raw_spin_unlock_irqrestore() {
/*   0.989 us   */           preempt_count_sub();
/*   5.521 us   */         }
/* + 38.281 us  */       }
/*              */       pm_runtime_enable() {
/*              */         _raw_spin_lock_irqsave() {
/*   0.990 us   */           preempt_count_add();
/*   5.677 us   */         }
/*              */         _raw_spin_unlock_irqrestore() {
/*   0.990 us   */           preempt_count_sub();
/*   5.417 us   */         }
/* + 19.270 us  */       }
/* * 97167.39 us*/     }
/*              */     pm_generic_resume() {
/*              */       mmc_blk_resume() {
/*              */         mmc_queue_resume() {
/*              */           up() {
/*              */             _raw_spin_lock_irqsave() {
/*   1.458 us   */               preempt_count_add();
/*   7.813 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   1.407 us   */               preempt_count_sub();
/*   7.813 us   */             }
/* + 27.188 us  */           }
/*              */           _raw_spin_lock_irqsave() {
/*   1.458 us   */             preempt_count_add();
/*   7.812 us   */           }
/*              */           blk_start_queue() {
/*              */             mmc_request_fn() {
/*              */               wake_up_process() {
/*              */                 try_to_wake_up() {
/*              */                   _raw_spin_lock_irqsave() {
/*   0.834 us   */                     preempt_count_add();
/*   7.917 us   */                   }
/*              */                   select_task_rq_rt() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.833 us   */                     __rcu_read_unlock();
/* + 10.416 us  */                   }
/*              */                   _raw_spin_lock() {
/*   0.782 us   */                     preempt_count_add();
/*   5.469 us   */                   }
/*              */                   activate_task() {
/*              */                     enqueue_task_rt() {
/*              */                       dequeue_rt_stack() {
/*   1.041 us   */                         dequeue_top_rt_rq();
/*   6.093 us   */                       }
/*              */                       __enqueue_rt_entity() {
/*   1.615 us   */                         cpupri_set();
/*   1.042 us   */                         update_rt_migration();
/*              */                         _raw_spin_lock() {
/*   0.781 us   */                           preempt_count_add();
/*   5.209 us   */                         }
/*              */                         _raw_spin_unlock() {
/*   1.354 us   */                           preempt_count_sub();
/*   6.667 us   */                         }
/* + 33.282 us  */                       }
/*   1.510 us   */                       enqueue_top_rt_rq();
/* + 56.927 us  */                     }
/* + 63.698 us  */                   }
/*              */                   ttwu_do_wakeup() {
/*              */                     check_preempt_curr() {
/*              */                       resched_curr() {
/*              */                         smp_send_reschedule() {
/*              */                           smp_cross_call() {
/*              */                             gic_raise_softirq() {
/*              */                               _raw_spin_lock_irqsave() {
/*   1.354 us   */                                 preempt_count_add();
/*   7.917 us   */                               }
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.833 us   */                                 preempt_count_sub();
/*   5.313 us   */                               }
/* + 24.166 us  */                             }
/* + 30.156 us  */                           }
/* + 35.885 us  */                         }
/* + 42.188 us  */                       }
/* + 47.552 us  */                     }
/*   0.990 us   */                     task_woken_rt();
/* + 58.177 us  */                   }
/*              */                   _raw_spin_unlock() {
/*   0.834 us   */                     preempt_count_sub();
/*   5.260 us   */                   }
/*              */                   ttwu_stat() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.833 us   */                     __rcu_read_unlock();
/* + 10.364 us  */                   }
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.834 us   */                     preempt_count_sub();
/*   5.469 us   */                   }
/* ! 199.531 us */                 }
/* ! 204.011 us */               }
/* ! 209.583 us */             }
/* ! 215.417 us */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*   1.041 us   */             preempt_count_sub();
/*   5.625 us   */           }
/* ! 276.198 us */         }
/*              */         mmc_queue_resume() {
/*              */           up() {
/*              */             _raw_spin_lock_irqsave() {
/*   1.041 us   */               preempt_count_add();
/*   5.677 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.989 us   */               preempt_count_sub();
/*   5.469 us   */             }
/* + 19.219 us  */           }
/*              */           _raw_spin_lock_irqsave() {
/*   0.989 us   */             preempt_count_add();
/*   5.417 us   */           }
/*              */           blk_start_queue() {
/*              */             mmc_request_fn() {
/*              */               wake_up_process() {
/*              */                 try_to_wake_up() {
/*              */                   _raw_spin_lock_irqsave() {
/*   0.833 us   */                     preempt_count_add();
/*   7.813 us   */                   }
/*              */                   select_task_rq_rt() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.833 us   */                     __rcu_read_unlock();
/*   9.583 us   */                   }
/*              */                   _raw_spin_lock() {
/*   1.042 us   */                     preempt_count_add();
/*   6.406 us   */                   }
/*              */                   activate_task() {
/*              */                     enqueue_task_rt() {
/*              */                       dequeue_rt_stack() {
/*   1.302 us   */                         dequeue_top_rt_rq();
/*   7.552 us   */                       }
/*              */                       __enqueue_rt_entity() {
/*   1.458 us   */                         cpupri_set();
/*   1.302 us   */                         update_rt_migration();
/*              */                         _raw_spin_lock() {
/*   1.302 us   */                           preempt_count_add();
/*   7.656 us   */                         }
/*              */                         _raw_spin_unlock() {
/*   1.302 us   */                           preempt_count_sub();
/*   7.500 us   */                         }
/* + 38.907 us  */                       }
/*   0.834 us   */                       enqueue_top_rt_rq();
/* + 62.292 us  */                     }
/* + 69.010 us  */                   }
/*              */                   ttwu_do_wakeup() {
/*              */                     check_preempt_curr() {
/*   0.886 us   */                       resched_curr();
/*   5.469 us   */                     }
/*   0.834 us   */                     task_woken_rt();
/* + 14.635 us  */                   }
/*              */                   _raw_spin_unlock() {
/*   0.781 us   */                     preempt_count_sub();
/*   5.156 us   */                   }
/*   1.146 us   */                   ttwu_stat();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.782 us   */                     preempt_count_sub();
/*   5.208 us   */                   }
/* ! 150.989 us */                 }
/* ! 155.365 us */               }
/* ! 160.260 us */             }
/* ! 165.052 us */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*              */             preempt_count_sub() {
/*              */               rcu_note_context_switch() {
/*   0.885 us   */                 rcu_sched_qs();
/*   0.885 us   */                 rcu_preempt_qs();
/*   9.844 us   */               }
/*              */               _raw_spin_lock_irq() {
/*   0.834 us   */                 preempt_count_add();
/*   5.312 us   */               }
/*   0.833 us   */               pick_next_task_stop();
/*   0.886 us   */               pick_next_task_dl();
/*              */               pick_next_task_rt() {
/*              */                 put_prev_task_fair() {
/*              */                   put_prev_entity() {
/*              */                     update_curr() {
/*              */                       cpuacct_charge() {
/*   0.833 us   */                         __rcu_read_lock();
/*   0.833 us   */                         __rcu_read_unlock();
/* + 11.459 us  */                       }
/* + 16.771 us  */                     }
/*   0.833 us   */                     __compute_runnable_contrib();
/*   0.833 us   */                     __compute_runnable_contrib();
/* + 33.541 us  */                   }
/*              */                   put_prev_entity() {
/*   1.093 us   */                     update_curr();
/*   0.834 us   */                     __compute_runnable_contrib();
/*   0.834 us   */                     __compute_runnable_contrib();
/* + 15.156 us  */                   }
/* + 57.135 us  */                 }
/* + 62.084 us  */               }
/*              */               __switch_to() {
/*   0.833 us   */                 fpsimd_thread_switch();
/*   0.990 us   */                 hw_breakpoint_thread_switch();
/* + 32.500 us  */               }
/*              */               finish_task_switch() {
/*              */                 _raw_spin_unlock_irq() {
/*   0.886 us   */                   preempt_count_sub();
/*   5.312 us   */                 }
/*   9.844 us   */               }
/*   0.989 us   */             }
/* ! 156.042 us */           }
/* ! 361.458 us */         }
/*              */         mmc_queue_resume() {
/*              */           up() {
/*              */             _raw_spin_lock_irqsave() {
/*   1.042 us   */               preempt_count_add();
/*   5.469 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.990 us   */               preempt_count_sub();
/*   5.729 us   */             }
/* + 19.375 us  */           }
/*              */           _raw_spin_lock_irqsave() {
/*   1.459 us   */             preempt_count_add();
/*   7.969 us   */           }
/*              */           blk_start_queue() {
/*              */             mmc_request_fn() {
/*              */               wake_up_process() {
/*              */                 try_to_wake_up() {
/*              */                   _raw_spin_lock_irqsave() {
/*   1.302 us   */                     preempt_count_add();
/*   7.865 us   */                   }
/*              */                   select_task_rq_rt() {
/*   1.250 us   */                     __rcu_read_lock();
/*   1.302 us   */                     __rcu_read_unlock();
/* + 13.073 us  */                   }
/*              */                   _raw_spin_lock() {
/*   0.782 us   */                     preempt_count_add();
/*   5.208 us   */                   }
/*              */                   activate_task() {
/*              */                     enqueue_task_rt() {
/*              */                       dequeue_rt_stack() {
/*   0.833 us   */                         dequeue_top_rt_rq();
/*   5.521 us   */                       }
/*              */                       __enqueue_rt_entity() {
/*   0.885 us   */                         cpupri_set();
/*   0.833 us   */                         update_rt_migration();
/*              */                         _raw_spin_lock() {
/*   0.833 us   */                           preempt_count_add();
/*   5.261 us   */                         }
/*              */                         _raw_spin_unlock() {
/*   0.781 us   */                           preempt_count_sub();
/*   5.208 us   */                         }
/* + 27.812 us  */                       }
/*   0.834 us   */                       enqueue_top_rt_rq();
/* + 46.719 us  */                     }
/* + 52.031 us  */                   }
/*              */                   ttwu_do_wakeup() {
/*              */                     check_preempt_curr() {
/*   0.885 us   */                       resched_curr();
/*   5.468 us   */                     }
/*   0.833 us   */                     task_woken_rt();
/* + 14.688 us  */                   }
/*              */                   _raw_spin_unlock() {
/*   1.303 us   */                     preempt_count_sub();
/*   7.761 us   */                   }
/*   1.615 us   */                   ttwu_stat();
/*              */                   _raw_spin_unlock_irqrestore() {
/*   1.250 us   */                     preempt_count_sub();
/*   7.552 us   */                   }
/* ! 147.865 us */                 }
/* ! 154.271 us */               }
/* ! 161.094 us */             }
/* ! 167.812 us */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*              */             preempt_count_sub() {
/*              */               rcu_note_context_switch() {
/*   1.354 us   */                 rcu_sched_qs();
/*   1.302 us   */                 rcu_preempt_qs();
/* + 13.698 us  */               }
/*              */               _raw_spin_lock_irq() {
/*   0.834 us   */                 preempt_count_add();
/*   5.416 us   */               }
/*   0.833 us   */               pick_next_task_stop();
/*   0.886 us   */               pick_next_task_dl();
/*              */               pick_next_task_rt() {
/*              */                 put_prev_task_fair() {
/*              */                   put_prev_entity() {
/*              */                     update_curr() {
/*              */                       cpuacct_charge() {
/*   0.833 us   */                         __rcu_read_lock();
/*   0.833 us   */                         __rcu_read_unlock();
/*   9.792 us   */                       }
/* + 14.271 us  */                     }
/* + 18.958 us  */                   }
/*              */                   put_prev_entity() {
/*   0.833 us   */                     update_curr();
/*   5.417 us   */                   }
/* + 32.344 us  */                 }
/* + 36.875 us  */               }
/*              */               __switch_to() {
/*   0.833 us   */                 fpsimd_thread_switch();
/*   1.042 us   */                 hw_breakpoint_thread_switch();
/* + 33.438 us  */               }
/*              */               finish_task_switch() {
/*              */                 _raw_spin_unlock_irq() {
/*   1.302 us   */                   preempt_count_sub();
/*   7.761 us   */                 }
/* + 14.427 us  */               }
/*   1.459 us   */             }
/* ! 144.740 us */           }
/* ! 360.990 us */         }
/*              */         mmc_queue_resume() {
/*              */           up() {
/*              */             _raw_spin_lock_irqsave() {
/*   1.458 us   */               preempt_count_add();
/*   7.760 us   */             }
/*              */             _raw_spin_unlock_irqrestore() {
/*   0.990 us   */               preempt_count_sub();
/*   ==========> */
/*              */               gic_handle_irq() {
/*              */                 __handle_domain_irq() {
/*              */                   irq_enter() {
/*   0.937 us   */                     rcu_irq_enter();
/*   1.041 us   */                     preempt_count_add();
/* + 10.104 us  */                   }
/*   1.146 us   */                   irq_find_mapping();
/*              */                   generic_handle_irq() {
/*              */                     handle_percpu_devid_irq() {
/*              */                       arch_timer_handler_phys() {
/*              */                         hrtimer_interrupt() {
/*              */                           _raw_spin_lock() {
/*   0.781 us   */                             preempt_count_add();
/*   5.365 us   */                           }
/*              */                           ktime_get_update_offsets_now() {
/*   0.833 us   */                             arch_counter_read();
/*   5.834 us   */                           }
/*              */                           __hrtimer_run_queues() {
/*   0.990 us   */                             __remove_hrtimer();
/*              */                             _raw_spin_unlock() {
/*   0.833 us   */                               preempt_count_sub();
/*   5.260 us   */                             }
/*              */                             tick_sched_timer() {
/*              */                               ktime_get() {
/*   0.833 us   */                                 arch_counter_read();
/*   5.313 us   */                               }
/*              */                               tick_do_update_jiffies64() {
/*              */                                 _raw_spin_lock() {
/*   1.302 us   */                                   preempt_count_add();
/*   7.656 us   */                                 }
/*              */                                 do_timer() {
/*   1.354 us   */                                   calc_global_load();
/*   7.605 us   */                                 }
/*              */                                 _raw_spin_unlock() {
/*   1.302 us   */                                   preempt_count_sub();
/*   7.605 us   */                                 }
/*              */                                 update_wall_time() {
/*              */                                   _raw_spin_lock_irqsave() {
/*   1.250 us   */                                     preempt_count_add();
/*   7.709 us   */                                   }
/*   1.250 us   */                                   arch_counter_read();
/*   0.833 us   */                                   ntp_tick_length();
/*   0.833 us   */                                   ntp_tick_length();
/*   0.833 us   */                                   ntp_tick_length();
/*              */                                   timekeeping_update() {
/*   0.834 us   */                                     ntp_get_next_leap();
/*   0.938 us   */                                     update_vsyscall();
/*   0.885 us   */                                     raw_notifier_call_chain();
/*   0.885 us   */                                     update_fast_timekeeper();
/* + 18.698 us  */                                   }
/*              */                                   _raw_spin_unlock_irqrestore() {
/*   0.834 us   */                                     preempt_count_sub();
/*   5.312 us   */                                   }
/* + 67.917 us  */                                 }
/* ! 111.406 us */                               }
/*              */                               update_process_times() {
/*              */                                 account_process_tick() {
/*              */                                   account_system_time() {
/*              */                                     cpuacct_account_field() {
/*   0.781 us   */                                       __rcu_read_lock();
/*   0.833 us   */                                       __rcu_read_unlock();
/* + 10.521 us  */                                     }
/*              */                                     acct_account_cputime() {
/*              */                                       __acct_update_integrals() {
/*   1.094 us   */                                         jiffies_to_timeval();
/*   6.302 us   */                                       }
/* + 11.198 us  */                                     }
/* + 31.511 us  */                                   }
/* + 37.135 us  */                                 }
/*   1.250 us   */                                 hrtimer_run_queues();
/*              */                                 raise_softirq() {
/*   1.354 us   */                                   __raise_softirq_irqoff();
/*   7.865 us   */                                 }
/*              */                                 rcu_check_callbacks() {
/*   1.302 us   */                                   rcu_bh_qs();
/*   1.250 us   */                                   rcu_preempt_qs();
/*   1.979 us   */                                   cpu_needs_another_gp();
/*   1.666 us   */                                   cpu_needs_another_gp();
/*   1.458 us   */                                   cpu_needs_another_gp();
/* + 37.813 us  */                                 }
/*              */                                 scheduler_tick() {
/*              */                                   _raw_spin_lock() {
/*   0.833 us   */                                     preempt_count_add();
/*   5.261 us   */                                   }
/*   1.459 us   */                                   update_rq_clock.part.83();
/*              */                                   task_tick_fair() {
/*              */                                     update_curr() {
/*              */                                       cpuacct_charge() {
/*   0.781 us   */                                         __rcu_read_lock();
/*   0.833 us   */                                         __rcu_read_unlock();
/*   9.740 us   */                                       }
/* + 14.271 us  */                                     }
/*   0.833 us   */                                     __compute_runnable_contrib();
/*   0.834 us   */                                     __compute_runnable_contrib();
/*              */                                     update_cfs_shares() {
/*   0.885 us   */                                       update_curr();
/*   5.833 us   */                                     }
/*   1.094 us   */                                     hrtimer_active();
/*   0.833 us   */                                     update_curr();
/*   0.886 us   */                                     update_cfs_shares();
/*   0.833 us   */                                     hrtimer_active();
/* + 59.167 us  */                                   }
/*              */                                   update_cpu_load_active() {
/*              */                                     __update_cpu_load() {
/*   1.302 us   */                                       sched_avg_update();
/*   7.760 us   */                                     }
/* + 14.167 us  */                                   }
/*   1.562 us   */                                   calc_global_load_tick();
/*              */                                   _raw_spin_unlock() {
/*   1.302 us   */                                     preempt_count_sub();
/*   7.552 us   */                                   }
/*              */                                   trigger_load_balance() {
/*              */                                     raise_softirq() {
/*   1.354 us   */                                       __raise_softirq_irqoff();
/*   7.709 us   */                                     }
/*   1.250 us   */                                     __rcu_read_lock();
/*   0.833 us   */                                     __rcu_read_unlock();
/*   0.833 us   */                                     __rcu_read_lock();
/*   0.833 us   */                                     __rcu_read_unlock();
/* + 38.437 us  */                                   }
/* ! 160.729 us */                                 }
/*   1.302 us   */                                 run_posix_cpu_timers();
/* ! 275.521 us */                               }
/*   1.302 us   */                               profile_tick();
/*   0.886 us   */                               hrtimer_forward();
/* ! 415.416 us */                             }
/*              */                             _raw_spin_lock() {
/*   0.833 us   */                               preempt_count_add();
/*   5.260 us   */                             }
/*   0.990 us   */                             enqueue_hrtimer();
/* ! 448.072 us */                           }
/*   0.886 us   */                           __hrtimer_get_next_event();
/*              */                           _raw_spin_unlock() {
/*   0.885 us   */                             preempt_count_sub();
/*   5.417 us   */                           }
/*              */                           tick_program_event() {
/*              */                             clockevents_program_event() {
/*              */                               ktime_get() {
/*   0.886 us   */                                 arch_counter_read();
/*   5.364 us   */                               }
/*   0.833 us   */                               arch_timer_set_next_event_phys();
/* + 14.167 us  */                             }
/* + 18.594 us  */                           }
/* ! 507.761 us */                         }
/* ! 512.656 us */                       }
/*   0.885 us   */                       gic_eoimode1_eoi_irq();
/* ! 522.553 us */                     }
/* ! 527.656 us */                   }
/*              */                   irq_exit() {
/*   1.042 us   */                     preempt_count_sub();
/*              */                     __do_softirq() {
/*   1.146 us   */                       __local_bh_disable_ip();
/*              */                       run_timer_softirq() {
/*              */                         _raw_spin_lock_irq() {
/*   0.833 us   */                           preempt_count_add();
/*   5.416 us   */                         }
/*              */                         _raw_spin_unlock_irq() {
/*   0.833 us   */                           preempt_count_sub();
/*   5.261 us   */                         }
/* + 20.105 us  */                       }
/*              */                       run_rebalance_domains() {
/*              */                         rebalance_domains() {
/*              */                           update_blocked_averages() {
/*              */                             _raw_spin_lock_irqsave() {
/*   0.781 us   */                               preempt_count_add();
/*   5.313 us   */                             }
/*   1.458 us   */                             update_rq_clock();
/*   0.833 us   */                             __compute_runnable_contrib();
/*   0.833 us   */                             __compute_runnable_contrib();
/*              */                             _raw_spin_unlock_irqrestore() {
/*   0.781 us   */                               preempt_count_sub();
/*   5.261 us   */                             }
/* + 35.417 us  */                           }
/*   0.833 us   */                           __rcu_read_lock();
/*   0.885 us   */                           __msecs_to_jiffies();
/*   0.781 us   */                           __msecs_to_jiffies();
/*   0.833 us   */                           __rcu_read_unlock();
/* + 59.063 us  */                         }
/* + 64.062 us  */                       }
/*   0.833 us   */                       rcu_bh_qs();
/*              */                       __local_bh_enable() {
/*   1.041 us   */                         preempt_count_sub();
/*   5.365 us   */                       }
/* ! 113.646 us */                     }
/*   0.833 us   */                     idle_cpu();
/*   0.885 us   */                     rcu_irq_exit();
/* ! 131.979 us */                   }
/* ! 686.406 us */                 }
/* ! 691.094 us */               }
/*   <========== */
/* ! 700.468 us */             }
/* ! 718.386 us */           }
/*              */           _raw_spin_lock_irqsave() {
/*   1.041 us   */             preempt_count_add();
/*   5.469 us   */           }
/*              */           blk_start_queue() {
/*              */             mmc_request_fn() {
/*              */               wake_up_process() {
/*              */                 try_to_wake_up() {
/*              */                   _raw_spin_lock_irqsave() {
/*   1.302 us   */                     preempt_count_add();
/*   7.865 us   */                   }
/*              */                   select_task_rq_rt() {
/*   1.250 us   */                     __rcu_read_lock();
/*   1.250 us   */                     __rcu_read_unlock();
/* + 13.750 us  */                   }
/*              */                   _raw_spin_lock() {
/*   1.303 us   */                     preempt_count_add();
/*   7.604 us   */                   }
/*              */                   activate_task() {
/*              */                     enqueue_task_rt() {
/*              */                       dequeue_rt_stack() {
/*   1.250 us   */                         dequeue_top_rt_rq();
/*   8.229 us   */                       }
/*              */                       __enqueue_rt_entity() {
/*   1.250 us   */                         cpupri_set();
/*   0.834 us   */                         update_rt_migration();
/*              */                         _raw_spin_lock() {
/*   0.781 us   */                           preempt_count_add();
/*   5.521 us   */                         }
/*              */                         _raw_spin_unlock() {
/*   0.781 us   */                           preempt_count_sub();
/*   5.208 us   */                         }
/* + 28.177 us  */                       }
/*   0.834 us   */                       enqueue_top_rt_rq();
/* + 50.416 us  */                     }
/* + 57.188 us  */                   }
/*              */                   ttwu_do_wakeup() {
/*              */                     check_preempt_curr() {
/*              */                       resched_curr() {
/*              */                         smp_send_reschedule() {
/*              */                           smp_cross_call() {
/*              */                             gic_raise_softirq() {
/*              */                               _raw_spin_lock_irqsave() {
/*   0.834 us   */                                 preempt_count_add();
/*   5.573 us   */                               }
/*              */                               _raw_spin_unlock_irqrestore() {
/*   0.885 us   */                                 preempt_count_sub();
/*   5.521 us   */                               }
/* + 19.219 us  */                             }
/* + 23.698 us  */                           }
/* + 28.073 us  */                         }
/* + 32.812 us  */                       }
/* + 37.240 us  */                     }
/*   0.886 us   */                     task_woken_rt();
/* + 46.718 us  */                   }
/*              */                   _raw_spin_unlock() {
/*   0.833 us   */                     preempt_count_sub();
/*   5.312 us   */                   }
/*              */                   ttwu_stat() {
/*   0.781 us   */                     __rcu_read_lock();
/*   0.834 us   */                     __rcu_read_unlock();
/* + 10.052 us  */                   }
/*              */                   _raw_spin_unlock_irqrestore() {
/*   0.937 us   */                     preempt_count_sub();
/*   5.833 us   */                   }
/* ! 190.157 us */                 }
/* ! 195.521 us */               }
/* ! 201.406 us */             }
/* ! 207.031 us */           }
/*              */           _raw_spin_unlock_irqrestore() {
/*   1.250 us   */             preempt_count_sub();
/*   5.990 us   */           }
/* ! 957.448 us */         }
/* # 1974.114 us*/       }
/* # 1980.104 us*/     }
/* * 99158.12 us*/   }
/*   1.041 us   */   dev_driver_string();
/*   0.782 us   */   dev_driver_string();
/*              */ /* device_pm_callback_end: mmcblk mmc0:0001, err=0 */