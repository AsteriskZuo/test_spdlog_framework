//
//  test_spdlog_cpp.cpp
//  test_framework_spdlog
//
//  Created by Asterisk on 03/30/19.
//  Copyright © 2019 Asterisk. All rights reserved.
//

#include "test_spdlog_cpp.hpp"



#include "core.h"
#include "format.h"
#include "chrono.h"
#include "color.h"
#include "locale.h"
#include "ostream.h"
#include "posix.h"
#include "printf.h"
#include "ranges.h"
#include "time2.h"//name is same system file  time.h

/*format_float mothod is not revoked, so no request.*/
//#include "format-inl.h"//error if include

#include "fmt.h"
#include "ostr.h"
#include "bin_to_hex.h"
#include "periodic_worker.h"
//#include "mpmc_blocking_q.h"
#include "os.h"
#include "fmt_helper.h"
#include "null_mutex.h"
//#include "registry.h"
//#include "thread_pool.h"
#include "circular_q.h"
#include "mpmc_blocking_q.h"
#include "log_msg.h"
#include "file_helper.h"
#include "pattern_formatter.h"
#include "console_globals.h"

#include "stdout_sinks.h"
#include "basic_file_sink.h"
#include "rotating_file_sink.h"
#include "daily_file_sink.h"
#include "ansicolor_sink.h"
#include "base_sink.h"
#include "stdout_color_sinks.h"
#include "dist_sink.h"
#include "sink.h"
#include "syslog_sink.h"
#include "ostream_sink.h"
#include "null_sink.h"

/*if not macro if code, advise same as msvc_sink.h*/
//#include "android_sink.h"
#include "msvc_sink.h"

#include "formatter.h"
#include "async_logger.h"
#include "tweakme.h"
#include "common.h"
#include "logger.h"
#include "version.h"
#include "spdlog.h"


#include "async_logger_impl.h"
#include "registry.h"
#include "thread_pool.h"
#include "logger_impl.h"


//all right
