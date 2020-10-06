#############################################################################
# Makefile for building: UWOWDevelopHelper
# Generated by qmake (3.1) (Qt 5.15.1)
# Project:  UWOWDevelopHelper.pro
# Template: app
# Command: F:\Programs\Qt\5.15.1\mingw81_64\bin\qmake.exe -o Makefile UWOWDevelopHelper.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = F:\Programs\Qt\5.15.1\mingw81_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = F:\Programs\Qt\5.15.1\mingw81_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = F:\Programs\Qt\5.15.1\mingw81_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = UWOWDevelopHelper_resource_res.o
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: UWOWDevelopHelper.pro F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/win32-g++/qmake.conf F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/spec_pre.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/qdevice.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/device_config.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/sanitize.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/gcc-base.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/g++-base.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/angle.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/windows-vulkan.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/g++-win32.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/windows-desktop.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/qconfig.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3danimation.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dcore.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dextras.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dinput.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dlogic.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquick.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3drender.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3drender_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axbase.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axbase_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axcontainer.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axcontainer_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axserver.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axserver_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bluetooth.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bodymovin_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_charts.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_charts_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_core.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_core_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_datavisualization.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_datavisualization_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_dbus.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designer.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gamepad.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gui.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_help.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_help_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_location.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_location_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimedia.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_network.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_network_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_networkauth.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_networkauth_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_nfc.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_nfc_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_opengl.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_openglextensions.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioning.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioning_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioningquick.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_purchasing.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_purchasing_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qml.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3d.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3d_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3drender.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3drender_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dutils.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dutils_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_repparser.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_repparser_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_script.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_script_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scripttools.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scxml.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scxml_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sensors.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sensors_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialbus.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialport.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialport_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sql.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_svg.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_testlib.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_texttospeech.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uitools.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_webchannel.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_websockets.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_websockets_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_widgets.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_winextras.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_winextras_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xml.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt_functions.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt_config.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/win32-g++/qmake.conf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exclusive_builds.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/toolchain.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/default_pre.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/default_pre.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resolve_config.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exclusive_builds_post.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/default_post.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qtquickcompiler.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/precompile_header.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/warn_on.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resources_functions.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resources.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/moc.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/opengl.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/uic.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qmake_use.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/file_copies.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/windows.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/testcase_targets.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exceptions.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/yacc.prf \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/lex.prf \
		UWOWDevelopHelper.pro \
		F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Widgets.prl \
		F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Gui.prl \
		F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Sql.prl \
		F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Core.prl \
		F:/Programs/Qt/5.15.1/mingw81_64/lib/qtmain.prl \
		F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/build_pass.prf
	$(QMAKE) -o Makefile UWOWDevelopHelper.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/spec_pre.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/qdevice.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/device_config.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/sanitize.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/gcc-base.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/g++-base.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/angle.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/windows-vulkan.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/g++-win32.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/common/windows-desktop.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/qconfig.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3danimation.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3danimation_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dcore.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dcore_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dextras.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dextras_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dinput.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dinput_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dlogic.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquick.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquick_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickextras.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickinput.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickrender.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3drender.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_3drender_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axbase.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axbase_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axcontainer.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axcontainer_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axserver.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_axserver_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bluetooth.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bodymovin_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_charts.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_charts_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_core.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_core_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_datavisualization.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_datavisualization_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_dbus.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designer.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_edid_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_egl_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gamepad.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gamepad_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gui.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_help.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_help_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_location.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_location_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimedia.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimedia_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_network.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_network_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_networkauth.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_networkauth_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_nfc.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_nfc_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_opengl.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_openglextensions.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioning.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioning_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioningquick.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_purchasing.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_purchasing_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qml.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3d.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3d_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3drender.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3drender_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dutils.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick3dutils_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_remoteobjects.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_remoteobjects_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_repparser.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_repparser_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_script.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_script_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scripttools.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scripttools_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scxml.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_scxml_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sensors.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sensors_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialbus.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialbus_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialport.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_serialport_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sql.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_svg.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_testlib.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_texttospeech.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_texttospeech_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_theme_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uitools.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_vulkan_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_webchannel.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_webchannel_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_websockets.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_websockets_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_widgets.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_winextras.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_winextras_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xml.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt_functions.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt_config.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/win32-g++/qmake.conf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/spec_post.prf:
.qmake.stash:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exclusive_builds.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/toolchain.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/default_pre.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/default_pre.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resolve_config.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exclusive_builds_post.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/default_post.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qtquickcompiler.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/precompile_header.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/warn_on.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qt.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resources_functions.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/resources.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/moc.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/opengl.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/uic.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/qmake_use.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/file_copies.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/win32/windows.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/testcase_targets.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/exceptions.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/yacc.prf:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/lex.prf:
UWOWDevelopHelper.pro:
F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Widgets.prl:
F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Gui.prl:
F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Sql.prl:
F:/Programs/Qt/5.15.1/mingw81_64/lib/Qt5Core.prl:
F:/Programs/Qt/5.15.1/mingw81_64/lib/qtmain.prl:
F:/Programs/Qt/5.15.1/mingw81_64/mkspecs/features/build_pass.prf:
qmake: FORCE
	@$(QMAKE) -o Makefile UWOWDevelopHelper.pro -spec win32-g++ "CONFIG+=qtquickcompiler"

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
