//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailOperation : NSOperation
{
    long long _index;
    struct CGSize _size;
    UIImage *_image;
}

@property(retain) UIImage *image; // @synthesize image=_image;
@property struct CGSize size; // @synthesize size=_size;
@property long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

