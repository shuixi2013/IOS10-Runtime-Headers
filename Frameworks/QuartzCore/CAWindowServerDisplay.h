//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CAWindowServerDisplay : NSObject
{
    struct CAWindowServerDisplayImpl *_impl;
    _Bool _mirroringEnabled;
}

@property(getter=isMirroringEnabled) _Bool mirroringEnabled; // @synthesize mirroringEnabled=_mirroringEnabled;
- (id)description;
@property _Bool disablesUpdates;
- (void)freeze;
@property _Bool allowsDisplayCompositing;
@property(getter=isSecure) _Bool secure;
@property(copy) NSString *TVSignalType;
@property(copy) NSString *TVMode;
@property int processId;
@property long long tag;
@property(readonly) _Bool supportsExtendedColors;
@property _Bool allowsVirtualModes;
@property(copy, nonatomic) NSString *colorMode;
@property _Bool usesPreferredModeRefreshRate;
@property float idealRefreshRate;
@property float maximumRefreshRate;
@property float minimumRefreshRate;
@property float maximumBrightness;
@property float contrast;
@property(getter=isGrayscale) _Bool grayscale;
- (void)setAccessibilityColorMatrix:(float *)arg1 scale:(float)arg2;
- (void)setColorMatrix:(float *)arg1 scale:(float)arg2 rampDuration:(double)arg3;
@property _Bool invertsColors;
@property struct CGSize overscanAmounts;
@property double overscanAmount;
@property(copy) NSString *orientation;
- (void)willUnblank;
@property(getter=isBlanked) _Bool blanked;
@property(readonly) CAWindowServerDisplay *cloneMaster;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (void)addClone:(id)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
@property(readonly) NSSet *clones;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortAtPosition:(struct CGPoint)arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint)arg1;
@property(readonly) unsigned int rendererFlags;
@property(readonly) NSString *uniqueId;
@property(readonly) unsigned int displayId;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *name;
@property double scale;
@property(readonly) struct CGRect bounds;
- (void)dealloc;
- (void)update;
- (void)invalidate;
- (id)_initWithCADisplayServer:(struct Server *)arg1;

@end

