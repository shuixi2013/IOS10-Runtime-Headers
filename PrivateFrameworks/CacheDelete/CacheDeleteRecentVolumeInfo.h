//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CacheDelete/CacheDeleteRecent.h>

#import <CacheDelete/NSCopying-Protocol.h>
#import <CacheDelete/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface CacheDeleteRecentVolumeInfo : CacheDeleteRecent <NSSecureCoding, NSCopying>
{
    NSString *_volume;
    NSDate *_timestamp;
    NSNumber *_freespace;
    NSMutableDictionary *_services;
    NSMutableDictionary *_diagnostics;
}

+ (id)cacheDeleteRecentVolumeInfo:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain) NSNumber *freespace; // @synthesize freespace=_freespace;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)invalidate;
- (void)log;
- (id)copyInvalids;
- (_Bool)validate:(double)arg1;
- (_Bool)validateServiceInfo:(id)arg1;
- (void)removeServiceInfo:(id)arg1;
- (id)lookupAmountForService:(id)arg1 atUrgency:(id)arg2;
- (id)recentInfoForUrgency:(id)arg1;
- (_Bool)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 atUrgency:(id)arg3 pushed:(_Bool)arg4;
- (id)diagnosticsForUrgency:(id)arg1;
- (void)updateDiagnostics:(id)arg1 forUrgency:(id)arg2;
- (id)diagnosticsForService:(id)arg1 atUrgency:(id)arg2;
- (void)updateDiagnostics:(id)arg1 forService:(id)arg2 atUrgency:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServices:(id)arg1 volumeName:(id)arg2;

@end

