//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject
{
    int _format;
    int _singleThumbnailImageLength;
    unsigned long long _count;
    _Bool _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    _Bool _optionsAccessed;
    _Bool _missingHeader;
    struct CGSize _size;
}

+ (_Bool)_transformForImage:(struct CGImage *)arg1 isCropped:(_Bool)arg2 captureOrientation:(int)arg3 sizeInOut:(struct CGSize *)arg4 contextSizeOut:(struct CGSize *)arg5 transformOut:(struct CGAffineTransform *)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)_thumbnailData;
- (_Bool)writeBorderedThumbnailOfImage:(struct CGImage *)arg1 toBuffer:(void *)arg2 orientation:(int *)arg3 format:(int)arg4 formatInfo:(const CDStruct_0d559a47 *)arg5 delegate:(id)arg6;
@property(readonly, nonatomic) struct CGRect imageRect;
@property(readonly, nonatomic) unsigned int bitmapInfo;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) int bytesPerPixel;
@property(readonly, nonatomic) int bitsPerComponent;
@property(readonly, retain, nonatomic) NSData *optionsData;
@property(readonly, retain, nonatomic) NSMutableDictionary *options;
@property(readonly, nonatomic) int format;
- (struct CGImage *)thumbnailImageAtIndex:(long long)arg1;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (unsigned long long)count;
- (_Bool)saveToFile:(id)arg1;
- (id)serializedData;
- (id)description;
- (void)dealloc;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int *)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(_Bool)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(_Bool)arg3;

@end

