//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory
{
}

- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)init;

@end

