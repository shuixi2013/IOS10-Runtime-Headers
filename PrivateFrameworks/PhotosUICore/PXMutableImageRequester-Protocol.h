//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXImageRequester, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset;

@protocol PXMutableImageRequester <NSObject>
@property(nonatomic) struct CGSize viewportSize;
@property(nonatomic) struct CGRect desiredContentsRect;
@property(nonatomic) double scale;
@property(nonatomic) struct CGSize contentSize;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider;
- (void)handlePreloadedImageRequester:(PXImageRequester *)arg1;
- (void)handlePreloadedImage:(UIImage *)arg1;
@end

