# idlib static library
ADD_DEFINITIONS(-D__IDLIB__)

SET(ID_LIB_SRCS
    BV/Bounds.cpp
    BV/Bounds.h
    BV/Box.cpp
    BV/Box.h
    BV/Frustum.cpp
    BV/Frustum.h
    BV/Sphere.cpp
    BV/Sphere.h
    Containers/BinSearch.h
    Containers/BTree.h
    Containers/HashIndex.cpp
    Containers/HashIndex.h
    Containers/HashTable.h
    Containers/Hierarchy.h
    Containers/LinkList.h
    Containers/List.h
    Containers/PlaneSet.h
    Containers/Queue.h
    Containers/Stack.h
    Containers/StaticList.h
    Containers/StrList.h
    Containers/StrPool.h
    Containers/VectorSet.h
    Geometry/DrawVert.cpp
    Geometry/DrawVert.h
    Geometry/JointTransform.cpp
    Geometry/JointTransform.h
    Geometry/Surface.cpp
    Geometry/Surface.h
    Geometry/Surface_Patch.cpp
    Geometry/Surface_Patch.h
    Geometry/Surface_Polytope.cpp
    Geometry/Surface_Polytope.h
    Geometry/Surface_SweptSpline.cpp
    Geometry/Surface_SweptSpline.h
    Geometry/TraceModel.cpp
    Geometry/TraceModel.h
    Geometry/Winding.cpp
    Geometry/Winding.h
    Geometry/Winding2D.cpp
    Geometry/Winding2D.h
    #Hashing/CRC16.cpp
    #Hashing/CRC16.h
    Hashing/CRC32.cpp
    Hashing/CRC32.h
    #Hashing/CRC8.cpp
    #Hashing/CRC8.h
    #Hashing/Honeyman.cpp
    #Hashing/Honeyman.h
    Hashing/MD4.cpp
    Hashing/MD4.h
    Hashing/MD5.cpp
    Hashing/MD5.h
    Math/Angles.cpp
    Math/Angles.h
    Math/Complex.cpp
    Math/Complex.h
    Math/Curve.h
    Math/Extrapolate.h
    Math/Interpolate.h
    Math/Lcp.cpp
    Math/Lcp.h
    Math/Math.cpp
    Math/Math.h
    Math/Matrix.cpp
    Math/Matrix.h
    Math/Ode.cpp
    Math/Ode.h
    Math/Plane.cpp
    Math/Plane.h
    Math/Pluecker.cpp
    Math/Pluecker.h
    Math/Polynomial.cpp
    Math/Polynomial.h
    Math/Quat.cpp
    Math/Quat.h
    Math/Random.h
    Math/Rotation.cpp
    Math/Rotation.h
    Math/Simd.cpp
    Math/Simd.h
    Math/Simd_3DNow.cpp
    Math/Simd_3DNow.h
    Math/Simd_Generic.cpp
    Math/Simd_Generic.h
    Math/Simd_MMX.cpp
    Math/Simd_MMX.h
    Math/Simd_SSE.cpp
    Math/Simd_SSE.h
    Math/Simd_SSE2.cpp
    Math/Simd_SSE2.h
    Math/Simd_SSE3.cpp
    Math/Simd_SSE3.h
    Math/Vector.cpp
    Math/Vector.h
    Base64.cpp
    Base64.h
    BitMsg.cpp
    BitMsg.h
    CmdArgs.cpp
    CmdArgs.h
    Dict.cpp
    Dict.h
    Heap.cpp
    Heap.h
    LangDict.cpp
    LangDict.h
    Lexer.cpp
    Lexer.h
    Lib.cpp
    Lib.h
    MapFile.cpp
    MapFile.h
    Parser.cpp
    Parser.h
    precompiled.cpp
    precompiled.h
    Str.cpp
    Str.h
    Timer.cpp
    Timer.h
    Token.cpp
    Token.h)

IF(MSVC)
    SET_SOURCE_FILES_PROPERTIES(BV/Bounds.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BV/Box.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BV/Frustum.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BV/Sphere.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Containers/HashIndex.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/DrawVert.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/JointTransform.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Surface.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Surface_Patch.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Surface_Polytope.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Surface_SweptSpline.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/TraceModel.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Winding.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Geometry/Winding2D.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/CRC16.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/CRC32.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/CRC8.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/Honeyman.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/MD4.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Hashing/MD5.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Angles.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Complex.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Lcp.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Math.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Matrix.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Ode.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Plane.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Pluecker.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Polynomial.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Quat.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Rotation.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_3DNow.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_Generic.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_MMX.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_SSE.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_SSE2.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Simd_SSE3.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Math/Vector.cpp PROPERTIES COMPILE_FLAGS "/Yu../precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Base64.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BitMsg.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(CmdArgs.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Dict.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Heap.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(LangDict.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Lexer.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Lib.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(MapFile.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Parser.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(precompiled.cpp PROPERTIES COMPILE_FLAGS "/Ycprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Str.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Timer.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Token.cpp PROPERTIES COMPILE_FLAGS "/Yuprecompiled.h")
ENDIF(MSVC)

ADD_LIBRARY(idlib ${ID_LIB_SRCS})
