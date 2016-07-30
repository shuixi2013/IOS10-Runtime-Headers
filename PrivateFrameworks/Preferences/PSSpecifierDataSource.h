//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/PSSpecifierDataSource-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource>
{
    NSMutableSet *_observerRefs;
    _Bool _specifiersLoaded;
    NSMutableArray *_specifiers;
}

+ (id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *specifiers; // @synthesize specifiers=_specifiers;
- (void).cxx_destruct;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)performUpdatesAnimated:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)reloadSpecifiers;
- (_Bool)areSpecifiersLoaded;
- (void)loadSpecifiers;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (void)_invalidateSpecifiersForObservers;
- (void)_clearAllSpecifiers;
- (void)performUpdates:(id)arg1;
- (void)enumerateObserversOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)observersOfClass:(Class)arg1;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

