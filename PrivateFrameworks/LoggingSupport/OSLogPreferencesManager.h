//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface OSLogPreferencesManager : NSObject
{
    NSString *_name;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)resetAllSubsystems;
- (void)resetAllProcesses;
- (void)resetAll;
- (void)reset;
@property(nonatomic) long long persistedLevel;
@property(nonatomic) long long enabledLevel;
- (id)_levelPrefs;
@property(readonly, nonatomic) NSArray *subsystems;
@property(readonly, nonatomic) NSArray *processes;
- (id)init;

@end

