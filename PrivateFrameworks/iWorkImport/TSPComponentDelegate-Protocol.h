//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPComponent, TSPObject, TSPObjectContext;

@protocol TSPComponentDelegate <NSObject>
- (void)didModifyFlushedComponent:(TSPComponent *)arg1 forObject:(TSPObject *)arg2;
- (void)flushComponent:(TSPComponent *)arg1 isDiscardingContent:(_Bool)arg2;
- (void)cacheComponent:(TSPComponent *)arg1 isDiscardingContent:(_Bool)arg2;
- (TSPObject *)objectForIdentifier:(long long)arg1;
- (_Bool)shouldKeepAllCachedObjectsInMemory;
- (_Bool)isActive;
- (TSPObjectContext *)context;
@end

