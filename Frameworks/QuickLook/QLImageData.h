//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLImageData : NSObject
{
    struct CGImageSource *_imageSource;
}

- (id)type;
- (unsigned long long)count;
- (long long)orientation;
- (id)durations;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

