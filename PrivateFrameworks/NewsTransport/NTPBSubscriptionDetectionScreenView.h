//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>
{
    int _countOfSubscriptionsDetected;
    struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;
}

@property(nonatomic) int countOfSubscriptionsDetected; // @synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCountOfSubscriptionsDetected;

@end

