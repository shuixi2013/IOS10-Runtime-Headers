//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class ISURLOperationPool, SUImageCache, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext
{
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    SUImageDataProvider *_imageProvider;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) SUImageDataProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) ISURLOperationPool *imagePool; // @synthesize imagePool=_imagePool;
@property(retain, nonatomic) SUImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)dealloc;

@end

