//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIPasscodeLockViewFactory : NSObject
{
}

+ (void)_warmupKBDIfNecessary;
+ (void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2;
+ (id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(_Bool)arg2;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForStyle:(int)arg1;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)passcodeLockViewForStyle:(int)arg1;
+ (id)passcodeLockViewForUsersCurrentStyle;

@end

