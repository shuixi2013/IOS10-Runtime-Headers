//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject
{
    NSMutableDictionary *_cachesByStyle;
}

- (void).cxx_destruct;
- (id)_cacheForStyle:(id)arg1;
- (id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(CDUnknownBlockType)arg3;
- (id)attributedStringAndSize:(struct CGSize *)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(CDUnknownBlockType)arg4;

@end

