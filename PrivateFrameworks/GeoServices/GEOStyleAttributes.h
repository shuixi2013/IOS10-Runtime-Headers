//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying>
{
    unsigned long long _customIconId;
    NSMutableArray *_attributes;
    struct {
        unsigned int customIconId:1;
    } _has;
}

+ (Class)attributeType;
+ (id)attributesForTransitSystem:(id)arg1;
+ (id)attributesForTransitLine:(id)arg1;
@property(nonatomic) unsigned long long customIconId; // @synthesize customIconId=_customIconId;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCustomIconId;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)addAttribute:(id)arg1;
- (void)clearAttributes;
- (void)dealloc;

@end

