// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_CHROME_BROWSER_INFOBARS_INFOBAR_BADGE_TAB_HELPER_DELEGATE_H_
#define IOS_CHROME_BROWSER_INFOBARS_INFOBAR_BADGE_TAB_HELPER_DELEGATE_H_

#import <Foundation/Foundation.h>

@protocol BadgeItem;

// Delegate used by InfobarBadgeTabHelper to manage the Infobar badges.
@protocol InfobarBadgeTabHelperDelegate

// Asks the delegate to add a badge with the configuration of |badgeItem|.
- (void)addInfobarBadge:(id<BadgeItem>)badgeItem;
// Asks the delegate to remove a badge matching the badgeType of |badgeItem|.
- (void)removeInfobarBadge:(id<BadgeItem>)badgeItem;
// Asks the delegate to update the configuration of |badgeItem|.
- (void)updateInfobarBadge:(id<BadgeItem>)badgeItem;

@end

#endif  // IOS_CHROME_BROWSER_INFOBARS_INFOBAR_BADGE_TAB_HELPER_DELEGATE_H_
