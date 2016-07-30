//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EMFEmojiPreferencesClient, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface UIKeyboardEmojiPreferences : NSObject
{
    EMFEmojiPreferencesClient *_preferencesClient;
    NSMutableDictionary *_defaults;
    _Bool _isDefaultDirty;
    int _currentSequence;
    NSMutableDictionary *_usageHistory;
    NSMutableDictionary *_typingNames;
    NSMutableArray *_recents;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    unsigned long long _maximumRecentsCount;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maximumRecentsCount; // @synthesize maximumRecentsCount=_maximumRecentsCount;
- (void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3;
- (void)_createPreferencesClientIfNecessary;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (id)typingNameForEmoji:(id)arg1 language:(id)arg2;
- (void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (void)emojiUsed:(id)arg1;
- (void)_emojiUsed:(id)arg1 language:(id)arg2;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(int)arg1;
- (id)defaultsValueForKey:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2;
@property(nonatomic) long long selectedCategoryType;
@property(nonatomic) long long currentSequenceKey;
@property(retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
@property(retain, nonatomic) NSDictionary *usageHistoryKey;
- (id)typingNames;
- (void)setTypingNames:(id)arg1;
@property(retain, nonatomic) NSArray *recents;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)writeEmojiDefaults;
- (void)_readPreferencesFromDefaults;
- (void)readEmojiDefaults;
- (id)emptyDefaultsDictionary;

@end

