//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import <CoreDuet/_DKExecutableQuery-Protocol.h>

@class NSArray, NSObject, NSPredicate;
@protocol OS_dispatch_queue;

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    _Bool _readMetadata;
    _Bool _deduplicateValues;
    _Bool _countOnly;
    NSPredicate *_predicate;
    NSArray *_eventStreams;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
    unsigned long long _offset;
    CDUnknownBlockType _resultsHandler;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateForEventsOfMaximumDuration:(double)arg1;
+ (id)predicateForEventsOfMinimumDuration:(double)arg1;
+ (id)expressionForEventDuration;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
@property(copy) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property _Bool countOnly; // @synthesize countOnly=_countOnly;
@property _Bool deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property _Bool readMetadata; // @synthesize readMetadata=_readMetadata;
@property unsigned long long offset; // @synthesize offset=_offset;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain) NSArray *eventStreams; // @synthesize eventStreams=_eventStreams;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)constructFetchRequestPredicate;
- (id)init;
- (id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

