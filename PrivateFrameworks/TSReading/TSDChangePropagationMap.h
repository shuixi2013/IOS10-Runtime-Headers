//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDChangePropagationMap-Protocol.h>

@class NSMutableSet, NSString, TSUNoCopyDictionary;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap>
{
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}

- (id)prototypePassingTest:(CDUnknownBlockType)arg1;
- (id)prototypeChangeForPrototype:(id)arg1;
- (void)p_addClassesForPrototype:(id)arg1;
- (_Bool)hasAnyChangesForPrototypesOfClasses:(id)arg1;
- (void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3;
- (void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3;
- (void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4;
- (void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

