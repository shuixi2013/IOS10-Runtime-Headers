//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSClockManager : NSObject
{
    unsigned int _connection;
    NSMutableArray *_clockPersonalities;
    unsigned long long _machAbsoluteNanosecondClockIdentifier;
}

+ (id)diagnosticDescriptionForClockService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)defaultClockPersonalities;
+ (id)clockManager;
+ (id)sharedClockManager;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;
+ (void)loadClockManagerNub;
@property(readonly, nonatomic) unsigned long long machAbsoluteNanosecondClockIdentifier; // @synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier;
- (void)dealloc;
- (_Bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(_Bool)arg4 error:(id *)arg5;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (id)availableClockIdentifiers;
- (_Bool)removegPTPServicesWithError:(id *)arg1;
- (_Bool)addgPTPServicesWithError:(id *)arg1;
- (_Bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)nextAvailableDynamicClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getMachAbsoluteClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (void)removeClockPersonality:(id)arg1;
- (void)addClockPersonality:(id)arg1;
- (id)init;

@end

