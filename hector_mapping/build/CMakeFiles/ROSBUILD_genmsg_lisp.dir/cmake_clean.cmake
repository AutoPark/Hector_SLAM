FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/hector_mapping/msg"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/HectorDebugInfo.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_HectorDebugInfo.lisp"
  "../msg_gen/lisp/HectorIterData.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_HectorIterData.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
