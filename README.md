# test_spdlog_framework

test spdlog in xcode for framework project on mac

test env:  
* mac version 10.13.6  
* xcode version 10.1  

###1.create project test spdlog with framework type for compile.  
###2.find questions:  
  ####1.time.h in spdlog library conflict with mac system file name  
  ####2.format_float member mothod is not find impl in format-inl.h  
  ####3.SPDLOG_CONSTEXPR macro is not find in bin_to_hex.h, maybe not include common.h  
  ####4.android_sink.h is not use conditional compilation, it should be as msvc_sink.h  
