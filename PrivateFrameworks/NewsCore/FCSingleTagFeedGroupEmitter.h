//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSString;

@interface FCSingleTagFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
}

- (_Bool)canMergeGroupsUnconditionally;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
- (id)operationToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (Class)classForGroupEmittingOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly, nonatomic) _Bool requiresForYouCatchUpOperation;
@property(readonly) Class superclass;

@end

