set(SOURCE_FILES zmachine.cpp)
add_executable(ZMachine ${SOURCE_FILES})
target_include_directories(ZMachine PRIVATE ${CMAKE_SOURCE_DIR}/inc/)
set_target_properties(ZMachine PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/)