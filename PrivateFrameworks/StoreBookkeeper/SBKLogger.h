//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSLock, NSRegularExpression, NSString;

@interface SBKLogger : NSObject
{
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    NSString *_filter;
    NSString *_runtimeOverride;
    int _pid;
    NSString *_procName;
    NSRegularExpression *_runtimeOverrideRegex;
    NSLock *_lock;
}

+ (id)sharedLogger;
+ (_Bool)debugLoggingEnabled;
+ (_Bool)verboseLoggingEnabled;
@property(copy) NSString *runtimeOverride; // @synthesize runtimeOverride=_runtimeOverride;
@property(copy) NSString *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)removeRuntimeOverride:(id)arg1;
- (void)addRuntimeOverride:(id)arg1;
- (void)logString:(id)arg1;
- (void)logFunction:(const char *)arg1 format:(id)arg2;
- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;
- (void)performLoggingBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldOverrideCondition:(id)arg1 file:(id)arg2;
- (id)auxPath;
- (void)setAuxPath:(id)arg1;
- (void)dealloc;
- (void)_updateSettingsFromPreferences:(id)arg1;
- (id)init;

@end

