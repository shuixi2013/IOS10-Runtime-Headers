//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface GKImageContext : NSObject
{
    double _scale;
    struct CGContext *_CGContext;
    struct CGSize _size;
}

+ (id)imageFromRawPixelsAtURL:(id)arg1;
+ (id)imageDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)contextDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)writeRawPixelsToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) UIImage *image;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 data:(void *)arg4;

@end

