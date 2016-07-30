//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry
{
    NSArray *_records;
    double _modificationDate;
    long long _syncProvenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

