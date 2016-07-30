//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HFCroppedWallpaperInfo, NSString, UIImage;

@interface HFWallpaper : NSObject <NSCopying>
{
    long long _type;
    long long _variant;
    NSString *_identifier;
    UIImage *_image;
    HFCroppedWallpaperInfo *_cropInfo;
}

+ (struct CGSize)size;
@property(copy, nonatomic) HFCroppedWallpaperInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)croppedImage;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1 variant:(long long)arg2 image:(id)arg3 identifier:(id)arg4;

@end

