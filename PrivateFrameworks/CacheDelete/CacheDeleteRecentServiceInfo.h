//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CacheDelete/CacheDeleteRecent.h>

#import <CacheDelete/NSCopying-Protocol.h>
#import <CacheDelete/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary;

@interface CacheDeleteRecentServiceInfo : CacheDeleteRecent <NSSecureCoding, NSCopying>
{
    NSDate *_timestamp;
    NSMutableDictionary *_amounts;
    NSMutableDictionary *_diagnostics;
}

+ (id)cacheDeleteRecentServiceInfo:(id)arg1 atUrgency:(id)arg2 pushed:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) NSMutableDictionary *amounts; // @synthesize amounts=_amounts;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)log;
- (id)diagnosticsForUrgency:(id)arg1;
- (void)updateDiagnostics:(id)arg1 forUrgency:(id)arg2;
- (void)updateAmount:(id)arg1 forUrgency:(id)arg2;
- (id)amountForUrgency:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate:(double)arg1;
- (id)initWithAmount:(id)arg1 atUrgency:(id)arg2 pushed:(_Bool)arg3;

@end

