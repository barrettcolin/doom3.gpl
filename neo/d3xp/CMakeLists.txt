# gamex86 shared library
ADD_DEFINITIONS(-DGAME_DLL -D_D3XP -DCTF)

SET(GAME_DLL_SRCS
    # include
    ai/AAS.h
    ai/AAS_local.h
    ai/AI.h
    anim/Anim.h
    anim/Anim_Testmodel.h
    gamesys/Class.h
    gamesys/DebugGraph.h
    gamesys/Event.h
    gamesys/NoGameTypeInfo.h
    gamesys/SaveGame.h
    gamesys/SysCmds.h
    gamesys/SysCvar.h
    physics/Clip.h
    physics/Force.h
    physics/Force_Constant.h
    physics/Force_Drag.h
    physics/Force_Field.h
    physics/Force_Grab.h
    physics/Force_Spring.h
    physics/Physics.h
    physics/Physics_Actor.h
    physics/Physics_AF.h
    physics/Physics_Base.h
    physics/Physics_Monster.h
    physics/Physics_Parametric.h
    physics/Physics_Player.h
    physics/Physics_RigidBody.h
    physics/Physics_Static.h
    physics/Physics_StaticMulti.h
    physics/Push.h
    script/Script_Compiler.h
    script/Script_Interpreter.h
    script/Script_Program.h
    script/Script_Thread.h
    Actor.h
    AF.h
    AFEntity.h
    BrittleFracture.h
    Camera.h
    Entity.h
    Fx.h
    Game.h
    Game_local.h
    GameEdit.h
    Grabber.h
    IK.h
    Item.h
    Light.h
    Misc.h
    Moveable.h
    Mover.h
    MultiplayerGame.h
    Player.h
    PlayerIcon.h
    PlayerView.h
    Projectile.h
    Pvs.h
    SecurityCamera.h
    SmokeParticles.h
    Sound.h
    Target.h
    Trigger.h
    Weapon.h
    WorldSpawn.h
    
    # source
    ai/AAS.cpp
    ai/AAS_debug.cpp
    ai/AAS_pathing.cpp
    ai/AAS_routing.cpp
    ai/AI.cpp
    ai/AI_events.cpp
    ai/AI_pathing.cpp
    ai/AI_Vagary.cpp
    anim/Anim.cpp
    anim/Anim_Blend.cpp
    anim/Anim_Import.cpp
    anim/Anim_Testmodel.cpp
    gamesys/Class.cpp
    gamesys/DebugGraph.cpp
    gamesys/Event.cpp
    gamesys/SaveGame.cpp
    gamesys/SysCmds.cpp
    gamesys/SysCvar.cpp
    gamesys/TypeInfo.cpp
    physics/Clip.cpp
    physics/Force.cpp
    physics/Force_Constant.cpp
    physics/Force_Drag.cpp
    physics/Force_Field.cpp
    physics/Force_Grab.cpp
    physics/Force_Spring.cpp
    physics/Physics.cpp
    physics/Physics_Actor.cpp
    physics/Physics_AF.cpp
    physics/Physics_Base.cpp
    physics/Physics_Monster.cpp
    physics/Physics_Parametric.cpp
    physics/Physics_Player.cpp
    physics/Physics_RigidBody.cpp
    physics/Physics_Static.cpp
    physics/Physics_StaticMulti.cpp
    physics/Push.cpp
    script/Script_Compiler.cpp
    script/Script_Interpreter.cpp
    script/Script_Program.cpp
    script/Script_Thread.cpp
    Actor.cpp
    AF.cpp
    AFEntity.cpp
    BrittleFracture.cpp
    Camera.cpp
    Entity.cpp
    Fx.cpp
    Game_local.cpp
    Game_network.cpp
    GameEdit.cpp
    Grabber.cpp
    IK.cpp
    Item.cpp
    Light.cpp
    Misc.cpp
    Moveable.cpp
    Mover.cpp
    MultiplayerGame.cpp
    Player.cpp
    PlayerIcon.cpp
    PlayerView.cpp
    Projectile.cpp
    Pvs.cpp
    SecurityCamera.cpp
    SmokeParticles.cpp
    Sound.cpp
    Target.cpp
    Trigger.cpp
    Weapon.cpp
    WorldSpawn.cpp
    precompiled.cpp
)
    
IF(MSVC)
    SET_SOURCE_FILES_PROPERTIES(ai/AAS.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_debug.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_pathing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AAS_routing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_events.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_pathing.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ai/AI_Vagary.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
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
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Grab.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Force_Spring.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_Actor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(physics/Physics_AF.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
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
    SET_SOURCE_FILES_PROPERTIES(Actor.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(AF.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(AFEntity.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(BrittleFracture.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Camera.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Entity.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Fx.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Game_local.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Game_network.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(GameEdit.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Grabber.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
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
    SET_SOURCE_FILES_PROPERTIES(Projectile.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Pvs.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(SecurityCamera.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(SmokeParticles.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Sound.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Target.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Trigger.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(Weapon.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(WorldSpawn.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    
    SET_SOURCE_FILES_PROPERTIES(precompiled.cpp PROPERTIES COMPILE_FLAGS "/Yc../idlib/precompiled.h")
ENDIF(MSVC)

ADD_LIBRARY(gamex86 SHARED ${GAME_DLL_SRCS} Game.def)
ADD_DEPENDENCIES(gamex86 idlib)
TARGET_LINK_LIBRARIES(gamex86 idlib)
