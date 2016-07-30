//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/EMFEmojiPreferenceActions-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions>
{
    NSMutableDictionary *_defaults;
    _Bool _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;
    unsigned long long _maximumRecentsCount;
    NSArray *_recentEmojis;
    NSString *_previouslyUsedCategory;
}

+ (id)defaultsDomain;
@property(retain, nonatomic) NSString *previouslyUsedCategory; // @synthesize previouslyUsedCategory=_previouslyUsedCategory;
@property(retain, nonatomic) NSArray *recentEmojis; // @synthesize recentEmojis=_recentEmojis;
@property(nonatomic) unsigned long long maximumRecentsCount; // @synthesize maximumRecentsCount=_maximumRecentsCount;
- (void).cxx_destruct;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2;
- (void)loadDefaultsIfNecessary;
- (void)resetEmojiDefaults;
- (void)writeEmojiDefaults;
- (void)_readPreferencesFromDefaults;
- (void)readEmojiDefaults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

