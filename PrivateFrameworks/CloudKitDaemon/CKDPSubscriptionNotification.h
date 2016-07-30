//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPSubscriptionNotificationAlert, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotification : PBCodable <NSCopying>
{
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    struct {
        unsigned int shouldBadge:1;
        unsigned int shouldSendContentAvailable:1;
    } _has;
}

+ (Class)additionalFieldsType;
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(retain, nonatomic) NSMutableArray *additionalFields; // @synthesize additionalFields=_additionalFields;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(retain, nonatomic) CKDPSubscriptionNotificationAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShouldSendContentAvailable;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalFieldsCount;
- (void)addAdditionalFields:(id)arg1;
- (void)clearAdditionalFields;
@property(nonatomic) _Bool hasShouldBadge;
@property(readonly, nonatomic) _Bool hasAlert;

@end

