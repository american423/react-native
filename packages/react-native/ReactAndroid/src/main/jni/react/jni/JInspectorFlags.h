/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fbjni/fbjni.h>

namespace facebook::react {

/**
 * fbjni interface for reading `jsinspector_modern::InspectorFlags`.
 */
class JInspectorFlags : public jni::JavaClass<JInspectorFlags> {
 public:
  static constexpr auto kJavaDescriptor =
      "Lcom/facebook/react/bridge/InspectorFlags;";

  static bool getEnableModernCDPRegistry(jni::alias_ref<jclass>);

  static bool getEnableCxxInspectorPackagerConnection(jni::alias_ref<jclass>);

  static void registerNatives();

 private:
  JInspectorFlags();
};

} // namespace facebook::react
