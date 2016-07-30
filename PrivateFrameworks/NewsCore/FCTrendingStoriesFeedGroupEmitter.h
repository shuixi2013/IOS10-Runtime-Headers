//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSString;

@interface FCTrendingStoriesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    unsigned long long _minPrecedingTopicGroups;
}

@property(nonatomic) unsigned long long minPrecedingTopicGroups; // @synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups;
@property(readonly, nonatomic) _Bool requiresForYouCatchUpOperation;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
- (id)operationToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (id)init;
- (id)initWithNoDistanceRequirements;
- (id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly) Class superclass;

@end

