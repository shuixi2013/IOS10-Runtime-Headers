//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject
{
    TSDFrameSpec *mFrameSpec;
    double mAssetScale;
    struct CGSize mSize;
    double mViewScale;
    struct CGImage *mImages[4];
}

@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(nonatomic) double assetScale; // @synthesize assetScale=mAssetScale;
@property(nonatomic) TSDFrameSpec *frameSpec; // @synthesize frameSpec=mFrameSpec;
- (void)setImage:(struct CGImage *)arg1 forCALayer:(_Bool)arg2 mask:(_Bool)arg3;
- (struct CGImage *)newImageForCALayer:(_Bool)arg1 mask:(_Bool)arg2;
- (void)dealloc;

@end

