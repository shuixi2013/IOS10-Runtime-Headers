//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLMemoryAssetFlag, NSData, NSString;

@interface CPLMemoryAsset : PBCodable <NSSecureCoding, NSCopying>
{
    CPLMemoryAssetFlag *_assetFlag;
    NSString *_assetIdentifier;
    NSData *_assetMovieData;
    NSString *_masterFingerprint;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *masterFingerprint; // @synthesize masterFingerprint=_masterFingerprint;
@property(retain, nonatomic) NSData *assetMovieData; // @synthesize assetMovieData=_assetMovieData;
@property(retain, nonatomic) CPLMemoryAssetFlag *assetFlag; // @synthesize assetFlag=_assetFlag;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
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
@property(readonly, nonatomic) _Bool hasMasterFingerprint;
@property(readonly, nonatomic) _Bool hasAssetMovieData;
@property(readonly, nonatomic) _Bool hasAssetFlag;
@property(readonly, nonatomic) _Bool hasAssetIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

