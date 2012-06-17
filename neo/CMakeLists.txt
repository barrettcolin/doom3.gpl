include_directories($ENV{DXSDK_DIR}/Include)
add_definitions(-D__DOOM_DLL__ -DCB_VISTA_7_8=1 -DCB_USE_XAUDIO2=1)

SET(NEO_SRCS
    # includes
    cm/CollisionModel.h
    cm/CollisionModel_local.h
    framework/BuildDefines.h
    framework/BuildVersion.h
    framework/CmdSystem.h
    framework/Common.h
    framework/Compressor.h
    framework/Console.h
    framework/CVarSystem.h
    framework/DeclAF.h
    framework/DeclEntityDef.h
    framework/DeclFX.h
    framework/DeclManager.h
    framework/DeclParticle.h
    framework/DeclPDA.h
    framework/DeclSkin.h
    framework/DeclTable.h
    framework/DemoChecksum.h
    framework/DemoFile.h
    framework/EditField.h
    framework/EventLoop.h
    framework/File.h
    framework/FileSystem.h
    framework/KeyInput.h
    framework/Licensee.h
    framework/Session.h
    framework/Session_local.h
    framework/Unzip.h
    framework/UsercmdGen.h
    framework/async/AsyncClient.h
    framework/async/AsyncNetwork.h
    framework/async/AsyncServer.h
    framework/async/MsgChannel.h
    framework/async/NetworkSystem.h
    framework/async/ServerScan.h
    renderer/Cinematic.h
    renderer/glext.h
    renderer/GuiModel.h
    renderer/Image.h
    renderer/Interaction.h
    renderer/Material.h
    renderer/MegaTexture.h
    renderer/Model.h
    renderer/Model_ase.h
    renderer/Model_local.h
    renderer/Model_lwo.h
    renderer/Model_ma.h
    renderer/Model_md3.h
    renderer/ModelDecal.h
    renderer/ModelManager.h
    renderer/ModelOverlay.h
    renderer/qgl.h
    renderer/qgl_linked.h
    renderer/RenderSystem.h
    renderer/RenderWorld.h
    renderer/RenderWorld_local.h
    renderer/simplex.h
    renderer/tr_local.h
    renderer/VertexCache.h
    renderer/wglext.h
    renderer/jpeg-6/jchuff.h
    renderer/jpeg-6/jconfig.h
    renderer/jpeg-6/jdct.h
    renderer/jpeg-6/jdhuff.h
    renderer/jpeg-6/jerror.h
    renderer/jpeg-6/jinclude.h
    renderer/jpeg-6/jmemsys.h
    renderer/jpeg-6/jmorecfg.h
    renderer/jpeg-6/jpegint.h
    renderer/jpeg-6/jpeglib.h
    renderer/jpeg-6/jversion.h
    sound/snd_local.h
    sound/sound.h
    sound/OggVorbis/vorbissrc/backends.h
    sound/OggVorbis/vorbissrc/bitrate.h
    sound/OggVorbis/vorbissrc/codebook.h
    sound/OggVorbis/vorbissrc/codec_internal.h
    sound/OggVorbis/vorbissrc/envelope.h
    sound/OggVorbis/vorbissrc/highlevel.h
    sound/OggVorbis/vorbissrc/lookup.h
    sound/OggVorbis/vorbissrc/lookup_data.h
    sound/OggVorbis/vorbissrc/lpc.h
    sound/OggVorbis/vorbissrc/lsp.h
    sound/OggVorbis/vorbissrc/masking.h
    sound/OggVorbis/vorbissrc/mdct.h
    sound/OggVorbis/vorbissrc/misc.h
    sound/OggVorbis/vorbissrc/os.h
    sound/OggVorbis/vorbissrc/psy.h
    sound/OggVorbis/vorbissrc/registry.h
    sound/OggVorbis/vorbissrc/scales.h
    sound/OggVorbis/vorbissrc/smallft.h
    sound/OggVorbis/vorbissrc/window.h
    sound/OggVorbis/vorbissrc/books/floor/floor_books.h
    sound/OggVorbis/vorbissrc/books/coupled/res_books_stereo.h
    sound/OggVorbis/vorbissrc/books/uncoupled/res_books_uncoupled.h
    sound/OggVorbis/vorbissrc/modes/floor_all.h
    sound/OggVorbis/vorbissrc/modes/psych_11.h
    sound/OggVorbis/vorbissrc/modes/psych_16.h
    sound/OggVorbis/vorbissrc/modes/psych_44.h
    sound/OggVorbis/vorbissrc/modes/psych_8.h
    sound/OggVorbis/vorbissrc/modes/residue_16.h
    sound/OggVorbis/vorbissrc/modes/residue_44.h
    sound/OggVorbis/vorbissrc/modes/residue_44u.h
    sound/OggVorbis/vorbissrc/modes/residue_8.h
    sound/OggVorbis/vorbissrc/modes/setup_11.h
    sound/OggVorbis/vorbissrc/modes/setup_16.h
    sound/OggVorbis/vorbissrc/modes/setup_22.h
    sound/OggVorbis/vorbissrc/modes/setup_32.h
    sound/OggVorbis/vorbissrc/modes/setup_44.h
    sound/OggVorbis/vorbissrc/modes/setup_44u.h
    sound/OggVorbis/vorbissrc/modes/setup_8.h
    sound/OggVorbis/vorbissrc/modes/setup_X.h
    sound/OggVorbis/vorbis/codec.h
    sound/OggVorbis/vorbis/vorbisenc.h
    sound/OggVorbis/vorbis/vorbisfile.h
    sound/OggVorbis/ogg/ogg.h
    sound/OggVorbis/ogg/os_types.h
    sys/sys_local.h
    sys/sys_public.h
    sys/win32/win_local.h
	sys/win32/win_snd.h
    sys/win32/rc/AFEditor_resource.h
    sys/win32/rc/Common_resource.h
    sys/win32/rc/CreateResourceIDs.h
    sys/win32/rc/Debugger_resource.h
    sys/win32/rc/DeclEditor_resource.h
    sys/win32/rc/doom_resource.h
    sys/win32/rc/GuiEd_resource.h
    sys/win32/rc/MaterialEditor_Resource.h
    sys/win32/rc/ParticleEditor_resource.h
    sys/win32/rc/PDAEditor_resource.h
    sys/win32/rc/PropTree_resource.h
    sys/win32/rc/Radiant_resource.h
    sys/win32/rc/ScriptEditor_resource.h
    sys/win32/rc/SoundEditor_resource.h
    tools/edit_public.h
    tools/af/DialogAF.h
    tools/af/DialogAFBody.h
    tools/af/DialogAFConstraint.h
    tools/af/DialogAFConstraintBallAndSocket.h
    tools/af/DialogAFConstraintFixed.h
    tools/af/DialogAFConstraintHinge.h
    tools/af/DialogAFConstraintSlider.h
    tools/af/DialogAFConstraintSpring.h
    tools/af/DialogAFConstraintUniversal.h
    tools/af/DialogAFName.h
    tools/af/DialogAFProperties.h
    tools/af/DialogAFView.h
    tools/comafx/CDIB.h
    tools/comafx/CPathTreeCtrl.h
    tools/comafx/CSyntaxRichEditCtrl.h
    tools/comafx/DialogColorPicker.h
    tools/comafx/DialogGoToLine.h
    tools/comafx/DialogName.h
    tools/comafx/StdAfx.h
    tools/comafx/VectorCtl.h
    tools/common/ColorButton.h
    tools/common/DialogHelpers.h
    tools/common/MaskEdit.h
    tools/common/OpenFileDialog.h
    tools/common/PropertyGrid.h
    tools/common/RegistryOptions.h
    tools/common/RollupPanel.h
    tools/common/SpinButton.h
    tools/common/PropTree/PropTree.h
    tools/common/PropTree/PropTreeInfo.h
    tools/common/PropTree/PropTreeItem.h
    tools/common/PropTree/PropTreeItemButton.h
    tools/common/PropTree/PropTreeItemCheck.h
    tools/common/PropTree/PropTreeItemColor.h
    tools/common/PropTree/PropTreeItemCombo.h
    tools/common/PropTree/PropTreeItemEdit.h
    tools/common/PropTree/PropTreeItemEditButton.h
    tools/common/PropTree/PropTreeItemFileEdit.h
    tools/common/PropTree/PropTreeItemStatic.h
    tools/common/PropTree/PropTreeList.h
    tools/common/PropTree/PropTreeView.h
    tools/compilers/compiler_public.h
    tools/compilers/aas/AASBuild_local.h
    tools/compilers/aas/AASCluster.h
    tools/compilers/aas/AASFile.h
    tools/compilers/aas/AASFile_local.h
    tools/compilers/aas/AASFileManager.h
    tools/compilers/aas/AASReach.h
    tools/compilers/aas/Brush.h
    tools/compilers/aas/BrushBSP.h
    tools/compilers/dmap/dmap.h
    tools/compilers/roqvq/codec.h
    tools/compilers/roqvq/gdefs.h
    tools/compilers/roqvq/quaddefs.h
    tools/compilers/roqvq/roq.h
    tools/compilers/roqvq/roqParam.h
    #tools/debugger/DebuggerApp.h
    #tools/debugger/DebuggerBreakpoint.h
    #tools/debugger/DebuggerClient.h
    #tools/debugger/DebuggerFindDlg.h
    #tools/debugger/DebuggerMessages.h
    #tools/debugger/DebuggerQuickWatchDlg.h
    #tools/debugger/DebuggerScript.h
    #tools/debugger/DebuggerServer.h
    #tools/debugger/DebuggerWindow.h
    tools/decl/DialogDeclBrowser.h
    tools/decl/DialogDeclEditor.h
    tools/decl/DialogDeclNew.h
    tools/guied/GEApp.h
    tools/guied/GEDeleteModifier.h
    tools/guied/GEHideModifier.h
    tools/guied/GEInsertModifier.h
    tools/guied/GEItemPropsDlg.h
    tools/guied/GEItemScriptsDlg.h
    tools/guied/GEKeyValueModifier.h
    tools/guied/GEModifier.h
    tools/guied/GEModifierGroup.h
    tools/guied/GEModifierStack.h
    tools/guied/GEMoveModifier.h
    tools/guied/GENavigator.h
    tools/guied/GEOptions.h
    tools/guied/GEOptionsDlg.h
    tools/guied/GEProperties.h
    tools/guied/GEPropertyPage.h
    tools/guied/GESelectionMgr.h
    tools/guied/GESizeModifier.h
    tools/guied/GEStateModifier.h
    tools/guied/GEStatusBar.h
    tools/guied/GETransformer.h
    tools/guied/GEViewer.h
    tools/guied/GEWindowWrapper.h
    tools/guied/GEWorkspace.h
    tools/guied/GEZOrderModifier.h
    tools/sound/DialogSound.h
    tools/sound/DialogSoundGroup.h
    tools/materialeditor/ConsoleView.h
    tools/materialeditor/FindDialog.h
    tools/materialeditor/MaterialDef.h
    tools/materialeditor/MaterialDoc.h
    tools/materialeditor/MaterialDocManager.h
    tools/materialeditor/MaterialEditor.h
    tools/materialeditor/MaterialEditView.h
    tools/materialeditor/MaterialModifier.h
    tools/materialeditor/MaterialPreviewPropView.h
    tools/materialeditor/MaterialPreviewView.h
    tools/materialeditor/MaterialPropTreeView.h
    tools/materialeditor/MaterialTreeView.h
    tools/materialeditor/MaterialView.h
    tools/materialeditor/MEMainFrame.h
    tools/materialeditor/MEOptions.h
    tools/materialeditor/StageView.h
    tools/materialeditor/ToggleListView.h
    tools/particle/DialogParticleEditor.h
    tools/pda/DialogPDAEditor.h
    tools/radiant/autocaulk.h
    tools/radiant/CameraTargetDlg.h
    tools/radiant/CamWnd.h
    tools/radiant/CapDialog.h
    tools/radiant/cmdlib.h
    tools/radiant/CommandsDlg.h
    tools/radiant/CommentsDlg.h
    tools/radiant/ConsoleDlg.h
    tools/radiant/CurveDlg.h
    tools/radiant/DialogInfo.h
    tools/radiant/DialogTextures.h
    tools/radiant/DialogThick.h
    tools/radiant/DlgCamera.h
    tools/radiant/DlgEvent.h
    tools/radiant/EditorBrush.h
    tools/radiant/EditorEntity.h
    tools/radiant/EditorMap.h
    tools/radiant/EditViewDlg.h
    tools/radiant/EntityDlg.h
    tools/radiant/EntityListDlg.h
    tools/radiant/EntKeyFindReplace.h
    tools/radiant/FindTextureDlg.h
    tools/radiant/GetString.h
    tools/radiant/GLWidget.h
    tools/radiant/InspectorDialog.h
    tools/radiant/LightDlg.h
    tools/radiant/MainFrm.h
    tools/radiant/MapInfo.h
    tools/radiant/MediaPreviewDlg.h
    tools/radiant/MRU.H
    tools/radiant/NewProjDlg.h
    tools/radiant/NewTexWnd.h
    tools/radiant/PARSE.H
    tools/radiant/PatchDensityDlg.h
    tools/radiant/PatchDialog.h
    tools/radiant/PMESH.H
    tools/radiant/PrefsDlg.h
    tools/radiant/PreviewDlg.h
    tools/radiant/PropertyList.h
    tools/radiant/QE3.H
    tools/radiant/QEDEFS.H
    tools/radiant/QERTYPES.H
    tools/radiant/Radiant.h
    tools/radiant/RotateDlg.h
    tools/radiant/ScaleDialog.h
    tools/radiant/SELECT.H
    tools/radiant/splines.h
    tools/radiant/SurfaceDlg.h
    tools/radiant/TabsDlg.h
    tools/radiant/TearoffContainerWindow.h
    tools/radiant/TextureBar.h
    tools/radiant/Textures.h
    tools/radiant/Undo.h
    tools/radiant/WaitDlg.h
    tools/radiant/WaveOpen.h
    tools/radiant/XYWnd.h
    tools/radiant/Z.H
    tools/radiant/ZClip.h
    tools/radiant/ZWnd.h
    tools/script/DialogScriptEditor.h
    ui/BindWindow.h
    ui/ChoiceWindow.h
    ui/DeviceContext.h
    ui/EditWindow.h
    ui/FieldWindow.h
    ui/GameBearShootWindow.h
    ui/GameBustOutWindow.h
    ui/GameSSDWindow.h
    ui/GuiScript.h
    ui/ListGUI.h
    ui/ListGUILocal.h
    ui/ListWindow.h
    ui/MarkerWindow.h
    ui/Rectangle.h
    ui/RegExp.h
    ui/RenderWindow.h
    ui/SimpleWindow.h
    ui/SliderWindow.h
    ui/UserInterface.h
    ui/UserInterfaceLocal.h
    ui/Window.h
    ui/Winvar.h
    
    # source
    cm/CollisionModel_contacts.cpp
    cm/CollisionModel_contents.cpp
    cm/CollisionModel_debug.cpp
    cm/CollisionModel_files.cpp
    cm/CollisionModel_load.cpp
    cm/CollisionModel_rotate.cpp
    cm/CollisionModel_trace.cpp
    cm/CollisionModel_translate.cpp
    framework/CmdSystem.cpp
    framework/Common.cpp
    framework/Compressor.cpp
    framework/Console.cpp
    framework/CVarSystem.cpp
    framework/DeclAF.cpp
    framework/DeclEntityDef.cpp
    framework/DeclFX.cpp
    framework/DeclManager.cpp
    framework/DeclParticle.cpp
    framework/DeclPDA.cpp
    framework/DeclSkin.cpp
    framework/DeclTable.cpp
    framework/DemoFile.cpp
    framework/EditField.cpp
    framework/EventLoop.cpp
    framework/File.cpp
    framework/FileSystem.cpp
    framework/KeyInput.cpp
    framework/Session.cpp
    framework/Session_menu.cpp
    framework/Unzip.cpp
    framework/UsercmdGen.cpp
    framework/async/AsyncClient.cpp
    framework/async/AsyncNetwork.cpp
    framework/async/AsyncServer.cpp
    framework/async/MsgChannel.cpp
    framework/async/NetworkSystem.cpp
    framework/async/ServerScan.cpp
    renderer/Cinematic.cpp
    renderer/draw_arb.cpp
    renderer/draw_arb2.cpp
    renderer/draw_common.cpp
    renderer/draw_nv10.cpp
    renderer/draw_nv20.cpp
    renderer/draw_r200.cpp
    renderer/GuiModel.cpp
    renderer/Image_files.cpp
    renderer/Image_init.cpp
    renderer/Image_load.cpp
    renderer/Image_process.cpp
    renderer/Image_program.cpp
    renderer/Interaction.cpp
    renderer/Material.cpp
    renderer/MegaTexture.cpp
    renderer/Model.cpp
    renderer/Model_ase.cpp
    renderer/Model_beam.cpp
    renderer/Model_liquid.cpp
    renderer/Model_lwo.cpp
    renderer/Model_ma.cpp
    renderer/Model_md3.cpp
    renderer/Model_md5.cpp
    renderer/Model_prt.cpp
    renderer/Model_sprite.cpp
    renderer/ModelDecal.cpp
    renderer/ModelManager.cpp
    renderer/ModelOverlay.cpp
    renderer/RenderEntity.cpp
    renderer/RenderSystem.cpp
    renderer/RenderSystem_init.cpp
    renderer/RenderWorld.cpp
    renderer/RenderWorld_demo.cpp
    renderer/RenderWorld_load.cpp
    renderer/RenderWorld_portals.cpp
    renderer/tr_backend.cpp
    renderer/tr_deform.cpp
    renderer/tr_font.cpp
    renderer/tr_guisurf.cpp
    renderer/tr_light.cpp
    renderer/tr_lightrun.cpp
    renderer/tr_main.cpp
    renderer/tr_orderIndexes.cpp
    renderer/tr_polytope.cpp
    renderer/tr_render.cpp
    renderer/tr_rendertools.cpp
    renderer/tr_shadowbounds.cpp
    renderer/tr_stencilshadow.cpp
    renderer/tr_subview.cpp
    renderer/tr_trace.cpp
    renderer/tr_trisurf.cpp
    renderer/tr_turboshadow.cpp
    renderer/VertexCache.cpp
    renderer/jpeg-6/jcapimin.c
    renderer/jpeg-6/jccoefct.c
    renderer/jpeg-6/jccolor.c
    renderer/jpeg-6/jcdctmgr.c
    renderer/jpeg-6/jchuff.c
    renderer/jpeg-6/jcinit.c
    renderer/jpeg-6/jcmainct.c
    renderer/jpeg-6/jcmarker.c
    renderer/jpeg-6/jcmaster.c
    renderer/jpeg-6/jcomapi.c
    renderer/jpeg-6/jcparam.c
    renderer/jpeg-6/jcphuff.c
    renderer/jpeg-6/jcprepct.c
    renderer/jpeg-6/jcsample.c
    renderer/jpeg-6/jdapimin.c
    renderer/jpeg-6/jdapistd.c
    renderer/jpeg-6/jdatadst.c
    renderer/jpeg-6/jdatasrc.c
    renderer/jpeg-6/jdcoefct.c
    renderer/jpeg-6/jdcolor.c
    renderer/jpeg-6/jddctmgr.c
    renderer/jpeg-6/jdhuff.c
    renderer/jpeg-6/jdinput.c
    renderer/jpeg-6/jdmainct.c
    renderer/jpeg-6/jdmarker.c
    renderer/jpeg-6/jdmaster.c
    renderer/jpeg-6/jdmerge.c
    renderer/jpeg-6/jdphuff.c
    renderer/jpeg-6/jdpostct.c
    renderer/jpeg-6/jdsample.c
    renderer/jpeg-6/jdtrans.c
    renderer/jpeg-6/jerror.c
    renderer/jpeg-6/jfdctflt.c
    renderer/jpeg-6/jfdctfst.c
    renderer/jpeg-6/jfdctint.c
    renderer/jpeg-6/jidctflt.c
    renderer/jpeg-6/jidctfst.c
    renderer/jpeg-6/jidctint.c
    renderer/jpeg-6/jidctred.c
    renderer/jpeg-6/jmemmgr.c
    renderer/jpeg-6/jmemnobs.c
    renderer/jpeg-6/jquant1.c
    renderer/jpeg-6/jquant2.c
    renderer/jpeg-6/jutils.c
    sound/snd_cache.cpp
    sound/snd_decoder.cpp
    sound/snd_efxfile.cpp
    sound/snd_emitter.cpp
    sound/snd_shader.cpp
    sound/snd_system.cpp
    sound/snd_wavefile.cpp
    sound/snd_world.cpp
    sound/OggVorbis/vorbissrc/analysis.c
    sound/OggVorbis/vorbissrc/barkmel.c
    sound/OggVorbis/vorbissrc/bitrate.c
    sound/OggVorbis/vorbissrc/block.c
    sound/OggVorbis/vorbissrc/codebook.c
    sound/OggVorbis/vorbissrc/envelope.c
    sound/OggVorbis/vorbissrc/floor0.c
    sound/OggVorbis/vorbissrc/floor1.c
    sound/OggVorbis/vorbissrc/info.c
    sound/OggVorbis/vorbissrc/lookup.c
    sound/OggVorbis/vorbissrc/lpc.c
    sound/OggVorbis/vorbissrc/lsp.c
    sound/OggVorbis/vorbissrc/mapping0.c
    sound/OggVorbis/vorbissrc/mdct.c
    sound/OggVorbis/vorbissrc/psy.c
    sound/OggVorbis/vorbissrc/registry.c
    sound/OggVorbis/vorbissrc/res0.c
    sound/OggVorbis/vorbissrc/sharedbook.c
    sound/OggVorbis/vorbissrc/smallft.c
    sound/OggVorbis/vorbissrc/synthesis.c
    sound/OggVorbis/vorbissrc/vorbisenc.c
    sound/OggVorbis/vorbissrc/vorbisfile.c
    sound/OggVorbis/vorbissrc/windowvb.c
    sound/OggVorbis/oggsrc/bitwise.c
    sound/OggVorbis/oggsrc/framing.c
    sys/sys_local.cpp
    sys/win32/win_cpu.cpp
    sys/win32/win_glimp.cpp
    sys/win32/win_input.cpp
    sys/win32/win_main.cpp
    sys/win32/win_net.cpp
    sys/win32/win_qgl.cpp
    sys/win32/win_shared.cpp
    sys/win32/win_snd.cpp
    sys/win32/win_snd_dsound.cpp
    sys/win32/win_snd_xaudio2.cpp
    sys/win32/win_syscon.cpp
    sys/win32/win_taskkeyhook.cpp
    sys/win32/win_wndproc.cpp
    sys/win32/rc/CreateResourceIDs.cpp
    tools/af/DialogAF.cpp
    tools/af/DialogAFBody.cpp
    tools/af/DialogAFConstraint.cpp
    tools/af/DialogAFConstraintBallAndSocket.cpp
    tools/af/DialogAFConstraintFixed.cpp
    tools/af/DialogAFConstraintHinge.cpp
    tools/af/DialogAFConstraintSlider.cpp
    tools/af/DialogAFConstraintSpring.cpp
    tools/af/DialogAFConstraintUniversal.cpp
    tools/af/DialogAFName.cpp
    tools/af/DialogAFProperties.cpp
    tools/af/DialogAFView.cpp
    tools/comafx/CDIB.cpp
    tools/comafx/CPathTreeCtrl.cpp
    tools/comafx/CSyntaxRichEditCtrl.cpp
    tools/comafx/DialogColorPicker.cpp
    tools/comafx/DialogGoToLine.cpp
    tools/comafx/DialogName.cpp
    tools/comafx/StdAfx.cpp
    tools/comafx/VectorCtl.cpp
    tools/common/AlphaPopup.cpp
    tools/common/ColorButton.cpp
    tools/common/MaskEdit.cpp
    tools/common/OpenFileDialog.cpp
    tools/common/PropertyGrid.cpp
    tools/common/RegistryOptions.cpp
    tools/common/RollupPanel.cpp
    tools/common/SpinButton.cpp
    tools/common/PropTree/PropTree.cpp
    tools/common/PropTree/PropTreeInfo.cpp
    tools/common/PropTree/PropTreeItem.cpp
    tools/common/PropTree/PropTreeItemButton.cpp
    tools/common/PropTree/PropTreeItemCheck.cpp
    tools/common/PropTree/PropTreeItemColor.cpp
    tools/common/PropTree/PropTreeItemCombo.cpp
    tools/common/PropTree/PropTreeItemEdit.cpp
    tools/common/PropTree/PropTreeItemEditButton.cpp
    tools/common/PropTree/PropTreeItemFileEdit.cpp
    tools/common/PropTree/PropTreeItemStatic.cpp
    tools/common/PropTree/PropTreeList.cpp
    tools/common/PropTree/PropTreeView.cpp
    tools/compilers/aas/AASBuild.cpp
    tools/compilers/aas/AASBuild_file.cpp
    tools/compilers/aas/AASBuild_gravity.cpp
    tools/compilers/aas/AASBuild_ledge.cpp
    tools/compilers/aas/AASBuild_merge.cpp
    tools/compilers/aas/AASCluster.cpp
    tools/compilers/aas/AASFile.cpp
    tools/compilers/aas/AASFile_optimize.cpp
    tools/compilers/aas/AASFile_sample.cpp
    tools/compilers/aas/AASFileManager.cpp
    tools/compilers/aas/AASReach.cpp
    tools/compilers/aas/Brush.cpp
    tools/compilers/aas/BrushBSP.cpp
    tools/compilers/dmap/dmap.cpp
    tools/compilers/dmap/facebsp.cpp
    tools/compilers/dmap/gldraw.cpp
    tools/compilers/dmap/glfile.cpp
    tools/compilers/dmap/leakfile.cpp
    tools/compilers/dmap/map.cpp
    tools/compilers/dmap/optimize.cpp
    tools/compilers/dmap/optimize_gcc.cpp
    tools/compilers/dmap/output.cpp
    tools/compilers/dmap/portals.cpp
    tools/compilers/dmap/shadowopt3.cpp
    tools/compilers/dmap/tritjunction.cpp
    tools/compilers/dmap/tritools.cpp
    tools/compilers/dmap/ubrush.cpp
    tools/compilers/dmap/usurface.cpp
    tools/compilers/renderbump/renderbump.cpp
    tools/compilers/roqvq/codec.cpp
    tools/compilers/roqvq/NSBitmapImageRep.cpp
    tools/compilers/roqvq/roq.cpp
    tools/compilers/roqvq/roqParam.cpp
    #tools/debugger/debugger.cpp
    #tools/debugger/DebuggerApp.cpp
    #tools/debugger/DebuggerBreakpoint.cpp
    #tools/debugger/DebuggerClient.cpp
    #tools/debugger/DebuggerFindDlg.cpp
    #tools/debugger/DebuggerQuickWatchDlg.cpp
    #tools/debugger/DebuggerScript.cpp
    #tools/debugger/DebuggerServer.cpp
    #tools/debugger/DebuggerWindow.cpp
    tools/decl/DialogDeclBrowser.cpp
    tools/decl/DialogDeclEditor.cpp
    tools/decl/DialogDeclNew.cpp
    tools/guied/GEApp.cpp
    tools/guied/GECheckInDlg.cpp
    tools/guied/GEDeleteModifier.cpp
    tools/guied/GEHideModifier.cpp
    tools/guied/GEInsertModifier.cpp
    tools/guied/GEItemPropsDlg.cpp
    tools/guied/GEItemScriptsDlg.cpp
    tools/guied/GEKeyValueModifier.cpp
    tools/guied/GEModifier.cpp
    tools/guied/GEModifierGroup.cpp
    tools/guied/GEModifierStack.cpp
    tools/guied/GEMoveModifier.cpp
    tools/guied/GENavigator.cpp
    tools/guied/GEOptions.cpp
    tools/guied/GEOptionsDlg.cpp
    tools/guied/GEProperties.cpp
    tools/guied/GEPropertyPage.cpp
    tools/guied/GESelectionMgr.cpp
    tools/guied/GESizeModifier.cpp
    tools/guied/GEStateModifier.cpp
    tools/guied/GEStatusBar.cpp
    tools/guied/GETransformer.cpp
    tools/guied/GEViewer.cpp
    tools/guied/GEWindowWrapper.cpp
    tools/guied/GEWorkspace.cpp
    tools/guied/GEWorkspaceFile.cpp
    tools/guied/GEZOrderModifier.cpp
    tools/guied/guied.cpp
    tools/sound/DialogSound.cpp
    tools/sound/DialogSoundGroup.cpp
    tools/materialeditor/ConsoleView.cpp
    tools/materialeditor/FindDialog.cpp
    tools/materialeditor/MaterialDef.cpp
    tools/materialeditor/MaterialDoc.cpp
    tools/materialeditor/MaterialDocManager.cpp
    tools/materialeditor/MaterialEditor.cpp
    tools/materialeditor/MaterialEditView.cpp
    tools/materialeditor/MaterialModifier.cpp
    tools/materialeditor/MaterialPreviewPropView.cpp
    tools/materialeditor/MaterialPreviewView.cpp
    tools/materialeditor/MaterialPropTreeView.cpp
    tools/materialeditor/MaterialTreeView.cpp
    tools/materialeditor/MaterialView.cpp
    tools/materialeditor/MEMainFrame.cpp
    tools/materialeditor/MEOptions.cpp
    tools/materialeditor/StageView.cpp
    tools/materialeditor/ToggleListView.cpp
    tools/particle/DialogParticleEditor.cpp
    tools/pda/DialogPDAEditor.cpp
    tools/radiant/autocaulk.cpp
    tools/radiant/CameraTargetDlg.cpp
    tools/radiant/CamWnd.cpp
    tools/radiant/CapDialog.cpp
    tools/radiant/cmdlib.cpp
    tools/radiant/CommandsDlg.cpp
    tools/radiant/CommentsDlg.cpp
    tools/radiant/ConsoleDlg.cpp
    tools/radiant/CSG.cpp
    tools/radiant/CurveDlg.cpp
    tools/radiant/DialogInfo.cpp
    tools/radiant/DialogTextures.cpp
    tools/radiant/DialogThick.cpp
    tools/radiant/DlgCamera.cpp
    tools/radiant/DlgEvent.cpp
    tools/radiant/DRAG.cpp
    tools/radiant/ECLASS.cpp
    tools/radiant/EditorBrush.cpp
    tools/radiant/EditorBrushPrimit.cpp
    tools/radiant/EditorEntity.cpp
    tools/radiant/EditorMap.cpp
    tools/radiant/EditViewDlg.cpp
    tools/radiant/EntityDlg.cpp
    tools/radiant/EntityListDlg.cpp
    tools/radiant/EntKeyFindReplace.cpp
    tools/radiant/FindTextureDlg.cpp
    tools/radiant/GetString.cpp
    tools/radiant/GLWidget.cpp
    tools/radiant/InspectorDialog.cpp
    tools/radiant/LightDlg.cpp
    tools/radiant/MainFrm.cpp
    tools/radiant/MapInfo.cpp
    tools/radiant/MediaPreviewDlg.cpp
    tools/radiant/MRU.cpp
    tools/radiant/NewProjDlg.cpp
    tools/radiant/NewTexWnd.cpp
    tools/radiant/PARSE.cpp
    tools/radiant/PatchDensityDlg.cpp
    tools/radiant/PatchDialog.cpp
    tools/radiant/PMESH.cpp
    tools/radiant/PointFile.cpp
    tools/radiant/PrefsDlg.cpp
    tools/radiant/PreviewDlg.cpp
    tools/radiant/PropertyList.cpp
    tools/radiant/QE3.cpp
    tools/radiant/Radiant.cpp
    tools/radiant/RotateDlg.cpp
    tools/radiant/ScaleDialog.cpp
    tools/radiant/SELECT.cpp
    tools/radiant/splines.cpp
    tools/radiant/SurfaceDlg.cpp
    tools/radiant/TabsDlg.cpp
    tools/radiant/TearoffContainerWindow.cpp
    tools/radiant/TextureBar.cpp
    tools/radiant/Undo.cpp
    tools/radiant/VERTSEL.cpp
    tools/radiant/WaitDlg.cpp
    tools/radiant/WaveOpen.cpp
    tools/radiant/WIN_DLG.cpp
    tools/radiant/WIN_QE3.cpp
    tools/radiant/XYWnd.cpp
    tools/radiant/Z.cpp
    tools/radiant/ZClip.cpp
    tools/radiant/ZWnd.cpp
    tools/script/DialogScriptEditor.cpp
    ui/BindWindow.cpp
    ui/ChoiceWindow.cpp
    ui/DeviceContext.cpp
    ui/EditWindow.cpp
    ui/FieldWindow.cpp
    ui/GameBearShootWindow.cpp
    ui/GameBustOutWindow.cpp
    ui/GameSSDWindow.cpp
    ui/GuiScript.cpp
    ui/ListGUI.cpp
    ui/ListWindow.cpp
    ui/MarkerWindow.cpp
    ui/RegExp.cpp
    ui/RenderWindow.cpp
    ui/SimpleWindow.cpp
    ui/SliderWindow.cpp
    ui/UserInterface.cpp
    ui/Window.cpp
    ui/Winvar.cpp
    
    # resources
    #sys/win32/rc/AFEditor.rc
    #sys/win32/rc/Common.rc
    #sys/win32/rc/Debugger.rc
    #sys/win32/rc/DeclEditor.rc
    sys/win32/rc/doom.rc
    #sys/win32/rc/GuiEd.rc
    #sys/win32/rc/MaterialEditor.rc
    #sys/win32/rc/ParticleEditor.rc
    #sys/win32/rc/PDAEditor.rc
    #sys/win32/rc/PropTree.rc
    #sys/win32/rc/Radiant.rc
    #sys/win32/rc/ScriptEditor.rc
    #sys/win32/rc/SoundEditor.rc
    
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
    SET_SOURCE_FILES_PROPERTIES(framework/CmdSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Common.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Compressor.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/Console.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/CVarSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclAF.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclEntityDef.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclFX.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclManager.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclParticle.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/DeclPDA.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
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
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncClient.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncNetwork.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/AsyncServer.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/MsgChannel.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/NetworkSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(framework/async/ServerScan.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Cinematic.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_arb.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_arb2.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_common.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_nv10.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_nv20.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/draw_r200.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/GuiModel.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Image_files.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Image_init.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Image_load.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Image_process.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Image_program.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Interaction.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Material.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/MegaTexture.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_ase.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_beam.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_liquid.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_lwo.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_ma.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_md3.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_md5.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_prt.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/Model_sprite.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/ModelDecal.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/ModelManager.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/ModelOverlay.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderEntity.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderSystem.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderSystem_init.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderWorld.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderWorld_demo.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderWorld_load.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/RenderWorld_portals.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_backend.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_deform.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_font.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_guisurf.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_light.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_lightrun.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_main.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_orderIndexes.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_polytope.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_render.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_rendertools.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_shadowbounds.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_stencilshadow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_subview.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_trace.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_trisurf.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/tr_turboshadow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(renderer/VertexCache.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_cache.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_decoder.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_efxfile.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_emitter.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_shader.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_system.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_wavefile.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sound/snd_world.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/sys_local.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_cpu.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_glimp.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_input.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_main.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_net.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_qgl.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_shared.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_snd.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_syscon.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_taskkeyhook.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/win_wndproc.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(sys/win32/rc/CreateResourceIDs.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAF.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFBody.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraint.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintBallAndSocket.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintFixed.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintHinge.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintSlider.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintSpring.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFConstraintUniversal.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFName.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFProperties.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/af/DialogAFView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/CDIB.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/CPathTreeCtrl.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/CSyntaxRichEditCtrl.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/DialogColorPicker.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/DialogGoToLine.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/DialogName.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/StdAfx.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/comafx/VectorCtl.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/AlphaPopup.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/ColorButton.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/MaskEdit.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/OpenFileDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropertyGrid.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/RegistryOptions.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/RollupPanel.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/SpinButton.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTree.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeInfo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItem.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemButton.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemCheck.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemColor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemCombo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemEdit.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemEditButton.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemFileEdit.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeItemStatic.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeList.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/common/PropTree/PropTreeView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASBuild.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASBuild_file.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASBuild_gravity.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASBuild_ledge.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASBuild_merge.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASCluster.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASFile.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASFile_optimize.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASFile_sample.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASFileManager.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/AASReach.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/Brush.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/aas/BrushBSP.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/dmap.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/facebsp.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/gldraw.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/glfile.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/leakfile.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/map.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/optimize.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/optimize_gcc.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/output.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/portals.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/shadowopt3.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/tritjunction.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/tritools.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/ubrush.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/dmap/usurface.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/renderbump/renderbump.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/roqvq/codec.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/roqvq/NSBitmapImageRep.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/roqvq/roq.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/compilers/roqvq/roqParam.cpp PROPERTIES COMPILE_FLAGS "/Yu../../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/decl/DialogDeclBrowser.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/decl/DialogDeclEditor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/decl/DialogDeclNew.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEApp.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GECheckInDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEDeleteModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEHideModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEInsertModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEItemPropsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEItemScriptsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEKeyValueModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEModifierGroup.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEModifierStack.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEMoveModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GENavigator.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEOptions.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEOptionsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEProperties.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEPropertyPage.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GESelectionMgr.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GESizeModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEStateModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEStatusBar.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GETransformer.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEViewer.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEWindowWrapper.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEWorkspace.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEWorkspaceFile.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/GEZOrderModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/guied/guied.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/sound/DialogSound.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/sound/DialogSoundGroup.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/ConsoleView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/FindDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialDef.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialDoc.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialDocManager.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialEditor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialEditView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialModifier.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialPreviewPropView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialPreviewView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialPropTreeView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialTreeView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MaterialView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MEMainFrame.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/MEOptions.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/StageView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/materialeditor/ToggleListView.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/particle/DialogParticleEditor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/pda/DialogPDAEditor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/autocaulk.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CameraTargetDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CamWnd.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CapDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/cmdlib.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CommandsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CommentsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/ConsoleDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CSG.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/CurveDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DialogInfo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DialogTextures.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DialogThick.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DlgCamera.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DlgEvent.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/DRAG.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/ECLASS.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EditorBrush.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EditorBrushPrimit.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EditorEntity.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EditorMap.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EditViewDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EntityDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EntityListDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/EntKeyFindReplace.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/FindTextureDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/GetString.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/GLWidget.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/InspectorDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/LightDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/MainFrm.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/MapInfo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/MediaPreviewDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/MRU.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/NewProjDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/NewTexWnd.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PARSE.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PatchDensityDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PatchDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PMESH.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PointFile.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PrefsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PreviewDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/PropertyList.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/QE3.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/Radiant.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/RotateDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/ScaleDialog.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/SELECT.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/splines.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/SurfaceDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/TabsDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/TearoffContainerWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/TextureBar.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/Undo.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/VERTSEL.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/WaitDlg.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/WaveOpen.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/WIN_DLG.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/WIN_QE3.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/XYWnd.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/Z.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/ZClip.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/radiant/ZWnd.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(tools/script/DialogScriptEditor.cpp PROPERTIES COMPILE_FLAGS "/Yu../../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/BindWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/ChoiceWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/DeviceContext.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/EditWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/FieldWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/GameBearShootWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/GameBustOutWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/GameSSDWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/GuiScript.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/ListGUI.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/ListWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/MarkerWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/RegExp.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/RenderWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/SimpleWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/SliderWindow.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/UserInterface.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/Window.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(ui/Winvar.cpp PROPERTIES COMPILE_FLAGS "/Yu../idlib/precompiled.h")
    SET_SOURCE_FILES_PROPERTIES(precompiled.cpp PROPERTIES COMPILE_FLAGS "/Ycidlib/precompiled.h")
ENDIF(MSVC)

FIND_LIBRARY(EAXGUID_LIBRARY eaxguid ${CMAKE_SOURCE_DIR}/neo/openal/lib)

ADD_EXECUTABLE(neo WIN32 ${NEO_SRCS})
ADD_DEPENDENCIES(neo idlib curl gamex86)
TARGET_LINK_LIBRARIES(neo idlib curl ${EAXGUID_LIBRARY} glu32 opengl32 dinput8 dsound dxguid winmm Iphlpapi dbghelp)
