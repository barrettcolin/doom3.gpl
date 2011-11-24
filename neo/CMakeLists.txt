ADD_DEFINITIONS(-D__DOOM_DLL__)

SET(DOOM3_SRCS
    cm/CollisionModel.h
    cm/CollisionModel_contacts.cpp
    cm/CollisionModel_contents.cpp
    cm/CollisionModel_debug.cpp
    cm/CollisionModel_files.cpp
    cm/CollisionModel_load.cpp
    cm/CollisionModel_local.h
    cm/CollisionModel_rotate.cpp
    cm/CollisionModel_trace.cpp
    cm/CollisionModel_translate.cpp
    framework/async/AsyncClient.cpp
    framework/async/AsyncClient.h
    framework/async/AsyncNetwork.cpp
    framework/async/AsyncNetwork.h
    framework/async/AsyncServer.cpp
    framework/async/AsyncServer.h
    framework/async/MsgChannel.cpp
    framework/async/MsgChannel.h
    framework/async/NetworkSystem.cpp
    framework/async/NetworkSystem.h
    framework/async/ServerScan.cpp
    framework/async/ServerScan.h
    framework/BuildDefines.h
    framework/BuildVersion.h
    framework/CVarSystem.cpp
    framework/CVarSystem.h
    framework/CmdSystem.cpp
    framework/CmdSystem.h
    framework/Common.cpp
    framework/Common.h
    framework/Compressor.cpp
    framework/Compressor.h
    framework/Console.cpp
    framework/Console.h
    framework/DeclAF.cpp
    framework/DeclAF.h
    framework/DeclEntityDef.cpp
    framework/DeclEntityDef.h
    framework/DeclFX.cpp
    framework/DeclFX.h
    framework/DeclManager.cpp
    framework/DeclManager.h
    framework/DeclPDA.cpp
    framework/DeclPDA.h
    framework/DeclParticle.cpp
    framework/DeclParticle.h
    framework/DeclSkin.cpp
    framework/DeclSkin.h
    framework/DeclTable.cpp
    framework/DeclTable.h
    framework/DemoChecksum.h
    framework/DemoFile.cpp
    framework/DemoFile.h
    framework/EditField.cpp
    framework/EditField.h
    framework/EventLoop.cpp
    framework/EventLoop.h
    framework/File.cpp
    framework/File.h
    framework/FileSystem.cpp
    framework/FileSystem.h
    framework/KeyInput.cpp
    framework/KeyInput.h
    framework/Licensee.h
    framework/Session.cpp
    framework/Session.h
    framework/Session_local.h
    framework/Session_menu.cpp
    framework/Unzip.cpp
    framework/Unzip.h
    framework/UsercmdGen.cpp
    framework/UsercmdGen.h
    sys/sys_local.cpp
    sys/sys_local.h
    sys/sys_public.h
    precompiled.cpp)

IF(MSVC)
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_contacts.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_contents.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_debug.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_files.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_load.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_rotate.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_trace.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(cm/CollisionModel_translate.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncClient.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncNetwork.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncServer.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/MsgChannel.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/NetworkSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/ServerScan.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/sys_local.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(precompiled.cpp PROPERTIES COMPILE_FLAGS "/Ycidlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/CVarSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/CmdSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Common.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Compressor.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Console.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclAF.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclEntityDef.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclFX.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclManager.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclPDA.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclParticle.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclSkin.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclTable.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DemoFile.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/EditField.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/EventLoop.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/File.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/FileSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/KeyInput.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Session.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Session_menu.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Unzip.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/UsercmdGen.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
ENDIF(MSVC)

ADD_EXECUTABLE(Doom3 ${DOOM3_SRCS})
ADD_DEPENDENCIES(Doom3 idlib)
TARGET_LINK_LIBRARIES(Doom3 idlib)
