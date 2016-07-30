//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying>
{
    NSString *_viewId;
    int _viewType;
    CDStruct_372a990c _has;
}

@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasViewId;
- (int)StringAsViewType:(id)arg1;
- (id)viewTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasViewType;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;

@end

