//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Message/NSCopying-Protocol.h>

@interface AWDMailError : PBCodable <NSCopying>
{
    long long _genericErrorCode;
    int _errorCode;
    struct {
        unsigned int genericErrorCode:1;
        unsigned int errorCode:1;
    } _has;
}

@property(nonatomic) long long genericErrorCode; // @synthesize genericErrorCode=_genericErrorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasGenericErrorCode;
- (int)StringAsErrorCode:(id)arg1;
- (id)errorCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;

@end

