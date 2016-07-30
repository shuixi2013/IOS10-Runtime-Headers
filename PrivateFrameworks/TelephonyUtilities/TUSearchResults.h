//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, TUSearchController;

@interface TUSearchResults : NSObject <NSCopying>
{
    NSString *_searchTerm;
    NSMutableArray *_resultGroups;
    TUSearchController *_searchController;
    NSMutableArray *_allSearchItemsCache;
    NSMutableArray *_allDataItemsCache;
}

@property(retain, nonatomic) NSMutableArray *allDataItemsCache; // @synthesize allDataItemsCache=_allDataItemsCache;
@property(retain, nonatomic) NSMutableArray *allSearchItemsCache; // @synthesize allSearchItemsCache=_allSearchItemsCache;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSMutableArray *resultGroups; // @synthesize resultGroups=_resultGroups;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSArray *allDataItems;
@property(readonly) NSArray *allSearchItems;
- (long long)numberOfTableViewRows;
- (void)removeSearchItem:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (void)addResultGroup:(id)arg1;
- (void)addAdhocResultGroup;
- (void)removeDuplicateResults;
- (void)finalizeSearchResults;
- (void)_clearCaches;
- (id)resultGroupForSection:(long long)arg1;
@property(readonly) long long numberOfResults;
@property(readonly) long long numberOfSections;
- (id)description;
- (id)initWithSearchTerm:(id)arg1;

@end

