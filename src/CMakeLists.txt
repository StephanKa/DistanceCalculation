FIND_PACKAGE(fmt REQUIRED)

SET(PROJECT_NAME DistanceCalculation)
ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
                      PRIVATE project_options
                      project_warnings
                      fmt::fmt)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE ../inc)
