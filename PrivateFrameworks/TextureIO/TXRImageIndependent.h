//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextureIO/TXRImage.h>

@interface TXRImageIndependent : TXRImage
{
    unsigned long long _pixelFormat;
    // Error parsing type: , name: _dimensions
}

// Error parsing type for property dimensions:
// Property attributes: T,R,N,V_dimensions

@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (id)initWithCGImage:(struct CGImage *)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(id)arg4 buffer:(unsigned long long)arg5 offset: /* Error: Ran out of types for this method. */;
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat: /* Error: Ran out of types for this method. */;

@end

