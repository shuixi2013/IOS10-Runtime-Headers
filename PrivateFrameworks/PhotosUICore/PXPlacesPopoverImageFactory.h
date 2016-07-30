//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject
{
    NSCache *_cachedBackgroundImages;
    UIColor *_defaultBackgroundColor;
}

+ (id)sharedInstance;
+ (struct CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) NSCache *cachedBackgroundImages; // @synthesize cachedBackgroundImages=_cachedBackgroundImages;
- (void).cxx_destruct;
- (id)_fetchAndCacheBackgroundImageWithName:(id)arg1;
- (struct CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(_Bool)arg3;
- (double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (struct CGSize)backgroundImageSizeForPopoverAnnotation;
- (struct CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)createPopoverImageForGeotaggable:(id)arg1 withImage:(struct CGImage *)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4;
- (void)dealloc;
- (id)init;

@end

