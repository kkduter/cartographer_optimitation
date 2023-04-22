# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles/obstacle_detector_gui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/obstacle_detector_gui_autogen.dir/ParseCache.txt"
  "obstacle_detector_gui_autogen"
  )
endif()
