#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ScoreController
struct ScoreController_t1938732650;
// System.Collections.Generic.List`1<Score>
struct List_1_t888096406;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ScoreController::.ctor()
extern "C"  void ScoreController__ctor_m907446087 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C"  void ScoreController_Start_m425734171 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Update()
extern "C"  void ScoreController_Update_m2547870996 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::scaleText()
extern "C"  void ScoreController_scaleText_m549282552 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::initializeGameOverPanel()
extern "C"  void ScoreController_initializeGameOverPanel_m1693668053 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::setTopList(System.Collections.Generic.List`1<Score>)
extern "C"  void ScoreController_setTopList_m3893180288 (ScoreController_t1938732650 * __this, List_1_t888096406 * ___scores0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::setGameOverPanel(System.Boolean)
extern "C"  void ScoreController_setGameOverPanel_m2301936702 (ScoreController_t1938732650 * __this, bool ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::stop()
extern "C"  void ScoreController_stop_m2352226295 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::start()
extern "C"  void ScoreController_start_m3083151867 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScoreController::currentScore()
extern "C"  int32_t ScoreController_currentScore_m3743041826 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::updateScore()
extern "C"  void ScoreController_updateScore_m2485541276 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::updateScoreList(System.Collections.Generic.List`1<Score>)
extern "C"  void ScoreController_updateScoreList_m679618762 (ScoreController_t1938732650 * __this, List_1_t888096406 * ___scores0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::saveScore()
extern "C"  void ScoreController_saveScore_m760662636 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::saveScore(System.Int32,System.String)
extern "C"  void ScoreController_saveScore_m21189441 (ScoreController_t1938732650 * __this, int32_t ___score0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::sendScore()
extern "C"  void ScoreController_sendScore_m2012309839 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::handleSend(System.Boolean)
extern "C"  void ScoreController_handleSend_m251473580 (ScoreController_t1938732650 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::gameOver()
extern "C"  void ScoreController_gameOver_m1079131375 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::onGameOver()
extern "C"  void ScoreController_onGameOver_m4262233388 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::showGameOver()
extern "C"  void ScoreController_showGameOver_m2601521200 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::restart()
extern "C"  void ScoreController_restart_m3719212210 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::onRestart()
extern "C"  void ScoreController_onRestart_m112873417 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::quit()
extern "C"  void ScoreController_quit_m2472418118 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::onQuit()
extern "C"  void ScoreController_onQuit_m731835315 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::onResolutionChanged()
extern "C"  void ScoreController_onResolutionChanged_m815704320 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
