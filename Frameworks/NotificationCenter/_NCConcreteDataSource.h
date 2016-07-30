//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NCConcreteDataSource : NSObject
{
    NSMutableArray *_observers;
    NSMutableDictionary *_identifiersToData;
}

- (void).cxx_destruct;
- (id)datumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *data;
@property(readonly, nonatomic) NSArray *dataIdentifiers;
- (void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;
- (void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

