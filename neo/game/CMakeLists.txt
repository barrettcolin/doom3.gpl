# gamex86 shared library
ADD_DEFINITIONS(-DGAME_DLL)

SET(GAME_DLL_SRCS
    ai/AAS.cpp
    ai/AAS.h
    ai/AAS_debug.cpp
    ai/AAS_local.h
    ai/AAS_pathing.cpp
    ai/AAS_routing.cpp
    ai/AI.cpp
    ai/AI.h
    ai/AI_Vagary.cpp
    ai/AI_events.cpp
    ai/AI_pathing.cpp
    anim/Anim.cpp
    anim/Anim.h
    anim/Anim_Blend.cpp
    anim/Anim_Import.cpp
    anim/Anim_Testmodel.cpp
    anim/Anim_Testmodel.h
    gamesys/Class.cpp
    gamesys/Class.h
    gamesys/DebugGraph.cpp
    gamesys/DebugGraph.h
    gamesys/Event.cpp
    gamesys/Event.h
    gamesys/NoGameTypeInfo.h
    gamesys/SaveGame.cpp
    gamesys/SaveGame.h
    gamesys/SysCmds.cpp
    gamesys/SysCmds.h
    gamesys/SysCvar.cpp
    gamesys/SysCvar.h
    gamesys/TypeInfo.cpp
    gamesys/TypeInfo.h
    physics/Clip.cpp
    physics/Clip.h
    physics/Force.cpp
    physics/Force.h
    physics/Force_Constant.cpp
    physics/Force_Constant.h
    physics/Force_Drag.cpp
    physics/Force_Drag.h
    physics/Force_Field.cpp
    physics/Force_Field.h
    physics/Force_Spring.cpp
    physics/Force_Spring.h
    physics/Physics.cpp
    physics/Physics.h
    physics/Physics_AF.cpp
    physics/Physics_AF.h
    physics/Physics_Actor.cpp
    physics/Physics_Actor.h
    physics/Physics_Base.cpp
    physics/Physics_Base.h
    physics/Physics_Monster.cpp
    physics/Physics_Monster.h
    physics/Physics_Parametric.cpp
    physics/Physics_Parametric.h
    physics/Physics_Player.cpp
    physics/Physics_Player.h
    physics/Physics_RigidBody.cpp
    physics/Physics_RigidBody.h
    physics/Physics_Static.cpp
    physics/Physics_Static.h
    physics/Physics_StaticMulti.cpp
    physics/Physics_StaticMulti.h
    physics/Push.cpp
    physics/Push.h
    script/Script_Compiler.cpp
    script/Script_Compiler.h
    script/Script_Interpreter.cpp
    script/Script_Interpreter.h
    script/Script_Program.cpp
    script/Script_Program.h
    script/Script_Thread.cpp
    script/Script_Thread.h
    AF.h
    AF.cpp
    AFEntity.cpp
    AFEntity.h
    Actor.cpp
    Actor.h
    BrittleFracture.cpp
    BrittleFracture.h
    Camera.cpp
    Camera.h
    Entity.cpp
    Entity.h
    Fx.cpp
    Fx.h
    Game.h
    GameEdit.cpp
    GameEdit.h
    Game_local.cpp
    Game_local.h
    Game_network.cpp
    IK.cpp
    IK.h
    Item.cpp
    Item.h
    Light.cpp
    Light.h
    Misc.cpp
    Misc.h
    Moveable.cpp
    Moveable.h
    Mover.cpp
    Mover.h
    MultiplayerGame.cpp
    MultiplayerGame.h
    Player.cpp
    Player.h
    PlayerIcon.cpp
    PlayerIcon.h
    PlayerView.cpp
    PlayerView.h
    precompiled.cpp
    Projectile.cpp
    Projectile.h
    Pvs.cpp
    Pvs.h
    SecurityCamera.cpp
    SecurityCamera.h
    SmokeParticles.cpp
    SmokeParticles.h
    Sound.cpp
    Sound.h
    Target.cpp
    Target.h
    Trigger.cpp
    Trigger.h
    Weapon.cpp
    Weapon.h
    WorldSpawn.cpp
    WorldSpawn.h)
    
IF(MSVC)
    SET_SOURCE_FILES_PROPERTIES(ai/AAS.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_debug.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_pathing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_routing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_Vagary.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_events.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_pathing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(anim/Anim.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(anim/Anim_Blend.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(anim/Anim_Import.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(anim/Anim_Testmodel.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/Class.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/DebugGraph.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/Event.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/SaveGame.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/SysCmds.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(gamesys/SysCvar.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    #SET_SOURCE_FILES_PROPERTIES(gamesys/TypeInfo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Clip.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Constant.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Drag.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Field.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Spring.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_AF.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Actor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Base.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Monster.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Parametric.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Player.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_RigidBody.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Static.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_StaticMulti.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Push.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(script/Script_Compiler.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(script/Script_Interpreter.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(script/Script_Program.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(script/Script_Thread.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(AF.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(AFEntity.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Actor.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BrittleFracture.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Camera.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Entity.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Fx.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(GameEdit.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Game_local.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Game_network.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(IK.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Item.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Light.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Misc.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Moveable.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Mover.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(MultiplayerGame.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Player.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(PlayerIcon.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(PlayerView.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(precompiled.cpp PROPERTIES COMPILE_FLAGS "/Yc../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Projectile.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Pvs.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(SecurityCamera.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(SmokeParticles.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Sound.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Target.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Trigger.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Weapon.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(WorldSpawn.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
ENDIF(MSVC)

ADD_LIBRARY(gamex86 SHARED ${GAME_DLL_SRCS} Game.def)
ADD_DEPENDENCIES(gamex86 idlib)
TARGET_LINK_LIBRARIES(gamex86 idlib)
