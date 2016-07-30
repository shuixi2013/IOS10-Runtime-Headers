//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>

#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *elementOverrides;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly) Class superclass;

@end

