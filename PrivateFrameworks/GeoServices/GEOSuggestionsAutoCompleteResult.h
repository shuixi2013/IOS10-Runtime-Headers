//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOSuggestionsAutoCompleteResult : PBCodable <NSCopying>
{
    int _suggestionsAcType;
    struct {
        unsigned int suggestionsAcType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSuggestionsAcType:(id)arg1;
- (id)suggestionsAcTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSuggestionsAcType;
@property(nonatomic) int suggestionsAcType; // @synthesize suggestionsAcType=_suggestionsAcType;

@end

