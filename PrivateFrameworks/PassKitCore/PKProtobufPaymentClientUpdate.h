//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>
{
    NSMutableArray *_paymentSummaryItems;
    NSString *_remotePaymentRequestIdentifier;
    NSString *_selectedAID;
    NSMutableArray *_shippingMethods;
    unsigned int _status;
    CDStruct_47fe53f2 _has;
}

+ (Class)shippingMethodsType;
+ (Class)paymentSummaryItemsType;
@property(retain, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
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
@property(readonly, nonatomic) _Bool hasSelectedAID;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)addShippingMethods:(id)arg1;
- (void)clearShippingMethods;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)clearPaymentSummaryItems;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasRemotePaymentRequestIdentifier;

@end

