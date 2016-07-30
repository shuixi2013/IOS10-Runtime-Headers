//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSDictionary, NSUUID;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry
{
    NSUUID *_seriesIdentifier;
    NSDictionary *_metadata;
    Class _seriesClass;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) Class seriesClass; // @synthesize seriesClass=_seriesClass;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *seriesIdentifier; // @synthesize seriesIdentifier=_seriesIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithSeriesPersistentID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;

@end

