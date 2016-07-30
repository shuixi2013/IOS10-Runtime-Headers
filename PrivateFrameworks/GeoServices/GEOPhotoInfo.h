//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    int _size;
    NSString *_url;
    struct {
        unsigned int size:1;
    } _has;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUrl;
- (int)StringAsSize:(id)arg1;
- (id)sizeAsString:(int)arg1;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) int size; // @synthesize size=_size;
- (void)dealloc;
- (id)initWithPlaceDataPhotoContent:(id)arg1;

@end

