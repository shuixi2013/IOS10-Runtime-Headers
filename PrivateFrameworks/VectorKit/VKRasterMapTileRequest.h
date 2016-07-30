//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/NSCopying-Protocol.h>

@class GEOResourceManifestConfiguration, NSLocale;

@interface VKRasterMapTileRequest : NSObject <NSCopying>
{
    unsigned int _scale;
    long long _mapType;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    struct VKRasterTileKey _tileKey;
}

@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) struct VKRasterTileKey tileKey; // @synthesize tileKey=_tileKey;
- (void)isReallyInvalid:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isInvalid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) struct VKTileKey tk;
@property(readonly, nonatomic) const struct VKRasterTileKey *tileKeyPtr;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

