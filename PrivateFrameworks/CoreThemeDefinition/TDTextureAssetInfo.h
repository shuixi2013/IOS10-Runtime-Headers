//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying>
{
    _Bool _flipped;
    NSURL *_fileURL;
    unsigned long long _mipLevel;
    long long _textureFace;
}

@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(nonatomic) long long textureFace; // @synthesize textureFace=_textureFace;
@property(nonatomic) unsigned long long mipLevel; // @synthesize mipLevel=_mipLevel;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSURL *mipsURL;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

