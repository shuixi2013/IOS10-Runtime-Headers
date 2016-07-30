//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject
{
    NSArray *mColors;
    int mHueDirection;
    int mMethod;
}

- (void)setMethod:(int)arg1;
- (void)setHueDirection:(int)arg1;
- (void)setColors:(id)arg1;
- (id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;
- (void)dealloc;
- (void)getComponentsForIndex:(unsigned long long)arg1 hue:(float *)arg2 saturation:(float *)arg3 brightness:(float *)arg4 state:(id)arg5;
- (id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;
- (id)repeatColorAtIndex:(unsigned long long)arg1;
- (id)cycleColorAtIndex:(unsigned long long)arg1;

@end

