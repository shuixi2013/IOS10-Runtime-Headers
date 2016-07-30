//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKDatabase, NSArray, NSError;

@interface FCCKFeedQueryOperation : FCOperation
{
    FCCKDatabase *_database;
    NSArray *_feedRequests;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    long long _sortingFunction;
    long long _queryPriority;
    NSArray *_articleKeysMappingToTag;
    CDUnknownBlockType _queryCompletionHandler;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSArray *resultFeedResponses; // @synthesize resultFeedResponses=_resultFeedResponses;
@property(retain, nonatomic) NSArray *resultTagRecords; // @synthesize resultTagRecords=_resultTagRecords;
@property(retain, nonatomic) NSArray *resultFeedItemAndArticleRecords; // @synthesize resultFeedItemAndArticleRecords=_resultFeedItemAndArticleRecords;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSArray *articleKeysMappingToTag; // @synthesize articleKeysMappingToTag=_articleKeysMappingToTag;
@property(nonatomic) long long queryPriority; // @synthesize queryPriority=_queryPriority;
@property(nonatomic) long long sortingFunction; // @synthesize sortingFunction=_sortingFunction;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) NSArray *feedRequests; // @synthesize feedRequests=_feedRequests;
@property(retain, nonatomic) FCCKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_feedRelativeDictionaryFromResultsArray:(id)arg1;
- (void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3;
- (id)_requiredKeys;
- (id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)_constructFeedQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

