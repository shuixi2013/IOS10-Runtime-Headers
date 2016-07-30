//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesProcess : NSObject
{
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
    NSString *_bundleID;
}

@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)reset;
@property(nonatomic) long long persistedLevel;
@property(nonatomic) long long enabledLevel;
- (id)_levelPrefs;
- (long long)defaultPersistedLevel;
- (long long)defaultEnabledLevel;
@property(readonly, nonatomic) long long effectivePersistedLevel;
@property(readonly, nonatomic) long long effectiveEnabledLevel;
@property(readonly, nonatomic) _Bool isLocked;
- (id)initWithBundleID:(id)arg1;

@end

