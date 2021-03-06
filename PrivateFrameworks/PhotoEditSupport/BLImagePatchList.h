//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BLImagePatchList : NSObject
{
    struct CGImage *_baseImage;
    struct CGSize _size;
    NSMutableArray *_patchArray;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage *)arg1;
- (id)description;
- (struct CGSize)size;
- (long long)count;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)removeAllPatches;
- (void)addPatch:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1;

@end

