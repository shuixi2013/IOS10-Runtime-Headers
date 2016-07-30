//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBReportConcernSubmission : PBCodable <NSCopying>
{
    int _cancelLocation;
    int _reportConcernLocation;
    int _resultType;
    struct {
        unsigned int cancelLocation:1;
        unsigned int reportConcernLocation:1;
        unsigned int resultType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCancelLocation;
@property(nonatomic) int cancelLocation; // @synthesize cancelLocation=_cancelLocation;
@property(nonatomic) _Bool hasReportConcernLocation;
@property(nonatomic) int reportConcernLocation; // @synthesize reportConcernLocation=_reportConcernLocation;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end

