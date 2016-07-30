//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MSVCPLoggingController : NSObject
{
    NSMutableArray *_registeredConfigurations;
    NSMutableDictionary *_cachedLoggingLevelPairs;
    NSObject<OS_dispatch_queue> *_configurationAccessQueue;
    NSObject<OS_dispatch_queue> *_serialLoggingQueue;
    int _configurationChangeNotifyToken;
    _Bool _masterLoggingSwitchInitialized;
    _Bool _masterLoggingSwitchEnabled;
    _Bool _cachedPPTTestsAreInProgress;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_updateLoggingLevels;
- (void)_updateCachedPPTTestsAreInProgress;
- (void)logMessage:(id)arg1 withLevel:(long long)arg2 category:(id)arg3 fileName:(const char *)arg4 functionName:(const char *)arg5 lineNumber:(unsigned long long)arg6;
- (_Bool)shouldLogMessageWithLevel:(long long)arg1 category:(id)arg2;
- (void)registerConfiguration:(id)arg1 withFacilityName:(id)arg2;
@property(nonatomic) _Bool masterLoggingSwitchEnabled;
- (id)_defaultCategoryOnAccessQueue;
@property(readonly, copy, nonatomic) NSString *defaultCategory;
@property(readonly, copy, nonatomic) NSArray *registeredConfigurations;
- (void)dealloc;
- (id)init;

@end

