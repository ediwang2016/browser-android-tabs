// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_LOOKALIKES_SAFETY_TIPS_SAFETY_TIP_INFOBAR_H_
#define CHROME_BROWSER_LOOKALIKES_SAFETY_TIPS_SAFETY_TIP_INFOBAR_H_

#include "base/android/scoped_java_ref.h"
#include "base/macros.h"
#include "chrome/browser/ui/android/infobars/confirm_infobar.h"

namespace safety_tips {

class SafetyTipInfoBarDelegate;

// SafetyTipInfoBar is a thin vineer over ConfirmInfoBar that adds a discrete
// description (instead of just having a title).
class SafetyTipInfoBar : public ConfirmInfoBar {
 public:
  static std::unique_ptr<infobars::InfoBar> CreateInfoBar(
      std::unique_ptr<safety_tips::SafetyTipInfoBarDelegate> delegate);
  ~SafetyTipInfoBar() override;

 private:
  explicit SafetyTipInfoBar(
      std::unique_ptr<safety_tips::SafetyTipInfoBarDelegate> delegate);

  // ConfirmInfoBar:
  base::android::ScopedJavaLocalRef<jobject> CreateRenderInfoBar(
      JNIEnv* env) override;

  safety_tips::SafetyTipInfoBarDelegate* GetDelegate();

  DISALLOW_COPY_AND_ASSIGN(SafetyTipInfoBar);
};

}  // namespace safety_tips

#endif  // CHROME_BROWSER_LOOKALIKES_SAFETY_TIPS_SAFETY_TIP_INFOBAR_H_
