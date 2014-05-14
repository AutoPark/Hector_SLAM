FILE(REMOVE_RECURSE
  "../srv_gen"
  "../srv_gen"
  "../src/hector_nav_msgs/srv"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/GetRecoveryInfo.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_GetRecoveryInfo.lisp"
  "../srv_gen/lisp/GetRobotTrajectory.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_GetRobotTrajectory.lisp"
  "../srv_gen/lisp/GetDistanceToObstacle.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_GetDistanceToObstacle.lisp"
  "../srv_gen/lisp/GetSearchPosition.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_GetSearchPosition.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
