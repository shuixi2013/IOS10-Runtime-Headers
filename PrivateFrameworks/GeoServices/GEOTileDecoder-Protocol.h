//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData;

@protocol GEOTileDecoder <NSObject>
- (id)decodeTile:(NSData *)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (_Bool)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;
@end

