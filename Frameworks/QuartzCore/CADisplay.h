//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayMode, NSArray, NSString;

@interface CADisplay : NSObject
{
    void *_impl;
    _Bool _allowsVirtualModes;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)TVOutDisplay;
+ (id)mainDisplay;
+ (id)displays;
@property _Bool allowsVirtualModes; // @synthesize allowsVirtualModes=_allowsVirtualModes;
- (id)description;
@property(readonly) _Bool supportsExtendedColors;
@property(readonly, getter=isCloningSupported) _Bool cloningSupported;
@property(readonly, getter=isCloned) _Bool cloned;
@property(copy, nonatomic) NSString *overscanAdjustment;
@property(readonly) struct CGSize overscanAmounts;
@property(readonly) double overscanAmount;
@property(readonly, getter=isOverscanned) _Bool overscanned;
@property(readonly) long long minimumFrameDuration;
@property(readonly) double heartbeatRate;
@property(readonly) double maximumRefreshRate;
@property(readonly) double minimumRefreshRate;
@property(readonly) double refreshRate;
@property(readonly, getter=isExternal) _Bool external;
@property(readonly, getter=isSupported) _Bool supported;
@property(readonly) int processId;
@property(readonly) long long tag;
@property(readonly, nonatomic) struct CGRect safeBounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(copy, nonatomic) NSString *colorMode;
@property(readonly, nonatomic) CADisplayMode *preferredMode;
@property(retain, nonatomic) CADisplayMode *currentMode;
@property(readonly, nonatomic) NSArray *availableModes;
@property(readonly) NSString *uniqueId;
@property(readonly) unsigned int connectionSeed;
@property(readonly) unsigned int seed;
@property(readonly) unsigned int displayId;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *name;
- (void)update;
- (void)_invalidate;
- (id)_initWithDisplay:(struct Display *)arg1;

@end

