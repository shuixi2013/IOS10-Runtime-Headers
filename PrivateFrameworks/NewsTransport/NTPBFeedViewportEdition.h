//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying>
{
    NTPBDate *_feedDateRangeEnd;
    NTPBDate *_feedDateRangeStart;
    NTPBDate *_keyDate;
}

@property(retain, nonatomic) NTPBDate *feedDateRangeEnd; // @synthesize feedDateRangeEnd=_feedDateRangeEnd;
@property(retain, nonatomic) NTPBDate *feedDateRangeStart; // @synthesize feedDateRangeStart=_feedDateRangeStart;
@property(retain, nonatomic) NTPBDate *keyDate; // @synthesize keyDate=_keyDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFeedDateRangeEnd;
@property(readonly, nonatomic) _Bool hasFeedDateRangeStart;
@property(readonly, nonatomic) _Bool hasKeyDate;
- (void)dealloc;

@end

