FILE(REMOVE_RECURSE
  "CMakeFiles/abc.dir/abc.cpp.o"
  "../bin/abc.pdb"
  "../bin/abc"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/abc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
