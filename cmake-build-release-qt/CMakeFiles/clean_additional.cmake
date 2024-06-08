# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\ProgramDesign_HuffmanCoding_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ProgramDesign_HuffmanCoding_autogen.dir\\ParseCache.txt"
  "ProgramDesign_HuffmanCoding_autogen"
  )
endif()
