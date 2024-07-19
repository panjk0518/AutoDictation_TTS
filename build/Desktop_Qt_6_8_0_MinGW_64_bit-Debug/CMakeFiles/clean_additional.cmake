# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AutoTTS_autogen"
  "CMakeFiles\\AutoTTS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AutoTTS_autogen.dir\\ParseCache.txt"
  )
endif()
