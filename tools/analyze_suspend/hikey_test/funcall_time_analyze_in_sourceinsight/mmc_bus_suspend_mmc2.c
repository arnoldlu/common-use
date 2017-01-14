/*              */  /* device_pm_callback_start: mmc mmc2:0001, parent: mmc2, bus [suspend] */
/*              */    mmc_bus_suspend() {
/*   0.833 us   */      pm_generic_suspend();
/*              */      mmc_sdio_suspend() {
/*              */        __mmc_claim_host() {
/*              */          add_wait_queue() {
/*              */            _raw_spin_lock_irqsave() {
/*   1.042 us   */              preempt_count_add();
/*   5.781 us   */            }
/*              */            _raw_spin_unlock_irqrestore() {
/*   0.938 us   */              preempt_count_sub();
/*   5.416 us   */            }
/* + 19.636 us  */          }
/*              */          _raw_spin_lock_irqsave() {
/*   1.458 us   */            preempt_count_add();
/*   7.032 us   */          }
/*              */          _raw_spin_unlock_irqrestore() {
/*   1.458 us   */            preempt_count_sub();
/*   7.864 us   */          }
/*              */          remove_wait_queue() {
/*              */            _raw_spin_lock_irqsave() {
/*   1.458 us   */              preempt_count_add();
/*   7.760 us   */            }
/*              */            _raw_spin_unlock_irqrestore() {
/*   1.459 us   */              preempt_count_sub();
/*   7.761 us   */            }
/* + 26.823 us  */          }
/*              */          __pm_runtime_resume() {
/*              */            _raw_spin_lock_irqsave() {
/*   1.458 us   */              preempt_count_add();
/*   7.812 us   */            }
/*   1.718 us   */            rpm_resume();
/*              */            _raw_spin_unlock_irqrestore() {
/*   0.937 us   */              preempt_count_sub();
/*   5.365 us   */            }
/* + 27.656 us  */          }
/* ! 113.489 us */        }
/*              */        mmc_power_off() {
/*   1.042 us   */          mmc_pwrseq_power_off();
/*              */          mmc_retune_disable() {
/*              */            del_timer_sync() {
/*              */              lock_timer_base.isra.34() {
/*              */                _raw_spin_lock_irqsave() {
/*   0.989 us   */                  preempt_count_add();
/*   5.781 us   */                }
/* + 10.833 us  */              }
/*   1.093 us   */              detach_if_pending();
/*              */              _raw_spin_unlock_irqrestore() {
/*   0.989 us   */                preempt_count_sub();
/*   5.417 us   */              }
/* + 29.896 us  */            }
/* + 34.480 us  */          }
/*              */          dw_mci_set_ios() {
/*              */            dw_mci_hi6220_set_ios() {
/*              */              clk_set_rate() {
/*              */                clk_prepare_lock() {
/*   1.458 us   */                  mutex_trylock();
/*   6.302 us   */                }
/*              */                clk_core_set_rate_nolock() {
/*              */                  clk_calc_new_rates() {
/*              */                    clk_calc_new_rates() {
/*              */                      __clk_mux_determine_rate() {
/*              */                        clk_mux_determine_rate_flags.isra.23() {
/*              */                          clk_core_round_rate_nolock() {
/*              */                            clk_factor_round_rate() {
/*   1.511 us   */                              clk_hw_get_flags();
/*   8.125 us   */                            }
/* + 15.157 us  */                          }
/*              */                          clk_core_round_rate_nolock() {
/*              */                            hi6220_clkdiv_round_rate() {
/*              */                              divider_round_rate() {
/*              */                                clk_divider_bestdiv() {
/*   2.344 us   */                                  _get_maxdiv();
/*   0.781 us   */                                  clk_hw_get_flags();
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.094 us   */                                      clk_core_round_rate_nolock();
/*   5.937 us   */                                    }
/* + 10.886 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.886 us   */                                      clk_core_round_rate_nolock();
/*   7.968 us   */                                    }
/* + 12.396 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.739 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.688 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.604 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.250 us   */                                      clk_core_round_rate_nolock();
/*   7.552 us   */                                    }
/* + 13.906 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.355 us   */                                      clk_core_round_rate_nolock();
/*   7.761 us   */                                    }
/* + 14.010 us  */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.636 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.739 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.636 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.739 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.781 us   */                                      clk_core_round_rate_nolock();
/*   5.156 us   */                                    }
/* + 10.209 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.656 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.604 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.687 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.584 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.781 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.583 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.636 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.354 us   */                                      clk_core_round_rate_nolock();
/*   7.552 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.656 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.354 us   */                                      clk_core_round_rate_nolock();
/*   7.656 us   */                                    }
/* + 13.489 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.635 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.532 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.739 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.635 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.041 us   */                                      clk_core_round_rate_nolock();
/*   6.354 us   */                                    }
/* + 11.667 us  */                                  }
/*   1.303 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.250 us   */                                      clk_core_round_rate_nolock();
/*   7.552 us   */                                    }
/* + 13.854 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.553 us   */                                    }
/* + 13.802 us  */                                  }
/*   1.094 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.636 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.687 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.781 us   */                                      clk_core_round_rate_nolock();
/*   5.209 us   */                                    }
/*   9.583 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.688 us   */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.552 us   */                                    }
/* + 13.750 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.250 us   */                                      clk_core_round_rate_nolock();
/*   7.605 us   */                                    }
/* + 14.011 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.885 us   */                                      clk_core_round_rate_nolock();
/*   5.782 us   */                                    }
/* + 11.094 us  */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.688 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.740 us   */                                  }
/*   0.834 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/* + 11.875 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.739 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.354 us   */                                      clk_core_round_rate_nolock();
/*   7.708 us   */                                    }
/* + 13.958 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.500 us   */                                    }
/* + 13.697 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.605 us   */                                    }
/* + 13.177 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.583 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.886 us   */                                      clk_core_round_rate_nolock();
/*   5.312 us   */                                    }
/*   9.739 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.782 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.354 us   */                                      clk_core_round_rate_nolock();
/*   6.875 us   */                                    }
/* + 12.135 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.354 us   */                                      clk_core_round_rate_nolock();
/*   7.657 us   */                                    }
/* + 13.906 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.605 us   */                                    }
/* + 13.854 us  */                                  }
/*   1.094 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.781 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   7.604 us   */                                    }
/* + 11.979 us  */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.313 us   */                                    }
/*   9.791 us   */                                  }
/*   0.781 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.208 us   */                                    }
/*   9.583 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.416 us   */                                    }
/* + 10.625 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.604 us   */                                    }
/* + 13.854 us  */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.250 us   */                                      clk_core_round_rate_nolock();
/*   7.500 us   */                                    }
/* + 13.750 us  */                                  }
/*   1.250 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.885 us   */                                      clk_core_round_rate_nolock();
/*   5.364 us   */                                    }
/*   9.792 us   */                                  }
/*   0.781 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.635 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.833 us   */                                      clk_core_round_rate_nolock();
/*   5.261 us   */                                    }
/*   9.583 us   */                                  }
/*   0.833 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   0.834 us   */                                      clk_core_round_rate_nolock();
/*   5.260 us   */                                    }
/*   9.635 us   */                                  }
/*   1.302 us   */                                  clk_hw_get_parent();
/*              */                                  clk_hw_round_rate() {
/*              */                                    clk_core_round_rate_nolock() {
/*   1.302 us   */                                      clk_core_round_rate_nolock();
/*   7.604 us   */                                    }
/* + 13.854 us  */                                  }
/* # 1341.094 us*/                                }
/* # 1347.969 us*/                              }
/* # 1354.427 us*/                            }
/* # 1361.614 us*/                          }
/* # 1389.635 us*/                        }
/* # 1396.094 us*/                      }
/*              */                      clk_calc_subtree() {
/*   1.302 us   */                        clk_calc_subtree();
/* + 11.146 us  */                      }
/* # 1420.990 us*/                    }
/*   1.302 us   */                    clk_calc_subtree();
/* # 1434.271 us*/                  }
/*   1.146 us   */                  clk_propagate_rate_change();
/*              */                  clk_change_rate() {
/*   1.198 us   */                    clk_change_rate();
/*   6.823 us   */                  }
/* # 1456.042 us*/                }
/*              */                clk_prepare_unlock() {
/*   0.834 us   */                  mutex_unlock();
/*   5.260 us   */                }
/* # 1480.937 us*/              }
/*              */              clk_get_rate() {
/*              */                clk_prepare_lock() {
/*   0.885 us   */                  mutex_trylock();
/*   5.365 us   */                }
/*              */                clk_prepare_unlock() {
/*   0.833 us   */                  mutex_unlock();
/*   5.313 us   */                }
/* + 18.646 us  */              }
/* # 1508.021 us*/            }
/*              */            dw_mci_setup_bus() {
/*              */              mci_send_cmd.isra.18.constprop.24() {
/*   1.302 us   */                dw_mci_wait_while_busy.isra.17();
/*   6.718 us   */              }
/* + 12.083 us  */            }
/*              */            mmc_regulator_set_ocr() {
/*              */              regulator_disable() {
/*   1.094 us   */                mutex_lock();
/*              */                _regulator_disable() {
/*   1.719 us   */                  blocking_notifier_call_chain();
/*              */                  _regulator_do_disable() {
/*              */                    gpiod_set_value_cansleep() {
/*              */                      _gpiod_set_raw_value() {
/*   2.708 us   */                        pl061_set_value();
/*   9.791 us   */                      }
/* + 16.666 us  */                    }
/* + 24.167 us  */                  }
/*   1.302 us   */                  blocking_notifier_call_chain();
/* + 44.688 us  */                }
/*   1.354 us   */                mutex_unlock();
/* + 62.136 us  */              }
/* + 68.177 us  */            }
/* # 1603.282 us*/          }
/*   1.041 us   */          _cond_resched();
/* # 2658.333 us*/        }
/*              */        mmc_release_host() {
/*              */          _raw_spin_lock_irqsave() {
/*   1.562 us   */            preempt_count_add();
/*   7.812 us   */          }
/*              */          _raw_spin_unlock_irqrestore() {
/*   1.458 us   */            preempt_count_sub();
/*   7.865 us   */          }
/*              */          __wake_up() {
/*              */            _raw_spin_lock_irqsave() {
/*   1.459 us   */              preempt_count_add();
/*   8.021 us   */            }
/*   1.302 us   */            __wake_up_common();
/*              */            _raw_spin_unlock_irqrestore() {
/*   1.406 us   */              preempt_count_sub();
/*   7.709 us   */            }
/* + 32.969 us  */          }
/*   1.094 us   */          __pm_runtime_suspend();
/* + 69.010 us  */        }
/* # 2854.687 us*/      }
/* # 2864.115 us*/    }
/*   0.885 us   */    dev_driver_string();
/*   0.833 us   */    dev_driver_string();
/*              */  /* device_pm_callback_end: mmc mmc2:0001, err=0 */