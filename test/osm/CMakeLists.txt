add_subdirectory(utilities)

ament_add_gtest(lane_test lane_test.cc)
ament_add_gtest(segment_test segment_test.cc)
ament_add_gtest(conversions_test conversions_test.cc)
ament_add_gtest(osm_manager_test osm_manager_test.cc)

add_dependencies_to_test(lane_test)
add_dependencies_to_test(segment_test)
add_dependencies_to_test(conversions_test)
add_dependencies_to_test(osm_manager_test)
