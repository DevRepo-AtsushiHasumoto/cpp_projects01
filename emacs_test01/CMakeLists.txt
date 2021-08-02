

project(emacs_test01)

set(CMAKE_CXX_FLAGS "")

include_directories(
  /usr/include
  /usr/local/include
  includes
  )


link_directories (
  /usr/local/lib
  /usr/lib
  libs
  )

set(SRCS "srcs/main.cpp")

add_executable(example
  ${SRCS}
  )

target_link_libraries(example
  )

  

