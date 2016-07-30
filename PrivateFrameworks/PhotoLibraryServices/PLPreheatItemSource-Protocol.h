//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSIndexSet, PLPreheatItem;
@protocol _PLImageLoadingAsset;

@protocol PLPreheatItemSource <NSObject>
- (PLPreheatItem *)originalPreheatItemForAsset:(id <_PLImageLoadingAsset>)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (PLPreheatItem *)preheatItemForAsset:(id <_PLImageLoadingAsset>)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;

@optional
- (NSData *)imageDataAtIndex:(unsigned long long)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)preheatImageDataAtIndexes:(NSIndexSet *)arg1 completionHandler:(void (^)(UIImage *, _Bool))arg2;
@end

