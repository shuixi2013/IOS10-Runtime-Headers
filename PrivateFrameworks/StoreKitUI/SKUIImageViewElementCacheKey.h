//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SKUIImageViewElementCacheKey : NSObject
{
    long long _imageTreatment;
    struct CGSize _size;
    NSURL *_url;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;

@end

