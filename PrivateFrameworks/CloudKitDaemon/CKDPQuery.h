//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPQuery : PBCodable <NSCopying>
{
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    _Bool _distinct;
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;
}

+ (Class)sortsType;
+ (Class)filtersType;
+ (Class)typesType;
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
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
- (int)StringAsQueryOperator:(id)arg1;
- (id)queryOperatorAsString:(int)arg1;
@property(nonatomic) _Bool hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) _Bool hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortsCount;
- (void)addSorts:(id)arg1;
- (void)clearSorts;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (void)addFilters:(id)arg1;
- (void)clearFilters;
- (id)typesAtIndex:(unsigned long long)arg1;
- (unsigned long long)typesCount;
- (void)addTypes:(id)arg1;
- (void)clearTypes;

@end

