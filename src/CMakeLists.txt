# Generic test that uses conan libs
SET(PROJECT_NAME DistanceCalculation)
ADD_EXECUTABLE(${PROJECT_NAME} main.cpp GeodDistanceCalculator.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
                      PRIVATE project_options
                      project_warnings
                      CONAN_PKG::fmt)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE ../inc)