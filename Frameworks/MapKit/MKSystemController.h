//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MKSystemController : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)overrideBlurStyle;
- (void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)openURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)reduceMotionEnabled;
- (_Bool)requiresRTT;
- (_Bool)supports3DImagery;
- (_Bool)supportsPitchAPI;
- (_Bool)supports3DMaps;
- (_Bool)isInternalInstall;
- (int)userInterfaceIdiom;
- (_Bool)isHiDPI;
- (struct CGSize)screenSize;
- (double)screenScale;
- (_Bool)supportsAlwaysOnCompass;
- (_Bool)isPhone6PlusOrLarger;
- (_Bool)isDevicePluggedIn;
- (_Bool)isWifiEnabled;

@end

