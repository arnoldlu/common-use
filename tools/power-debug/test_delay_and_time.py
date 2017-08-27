#!/usr/bin/python

import time
import datetime
import sched
import threading

#Test time.sleep() 
def test_time_sleep(range_count, delay_duration):
    start = datetime.datetime.utcnow()
    for i in range(range_count):
        time.sleep(delay_duration)
    end = datetime.datetime.utcnow()
    print str(range_count)+'*'+str(delay_duration), ' takes ', (end - start).total_seconds()

test_time_sleep(1000, 0.001)
test_time_sleep(1000, 0.000001)

#Test schedule
#http://blog.csdn.net/jerk_zhang/article/details/20216569
schedule = sched.scheduler(time.time, time.sleep)

def func(string, delaytime):
    delaytime = (datetime.datetime.utcnow() - delaytime).total_seconds()
    print 'output=', string, delaytime


schedule_expires = 0.001
schedule.enter(schedule_expires, 0, func, ('schedule-'+str(schedule_expires), datetime.datetime.utcnow()))
schedule.run()

#Test threading
threading_expires = 0.001
threading.Timer(threading_expires, func, ('threading-'+str(threading_expires), datetime.datetime.utcnow())).start()

#Test loop schedule
loop_schedule_expires = 0.000001
loop_count = 0
s = sched.scheduler(time.time, time.sleep)

def do_loop_timer(delaytime):
    loop_count +=1
    now = datetime.datetime.utcnow()
    print '%.6f %.6f' % ((now-loop_start).total_seconds(), (now-delaytime).total_seconds())
    s.enter(loop_schedule_expires, 0, do_loop_timer, (datetime.datetime.utcnow(),))

loop_start = datetime.datetime.utcnow()
s.enter(loop_schedule_expires, 0, do_loop_timer, (loop_start,))
s.run()
    

print 'time.clock', time.clock()
