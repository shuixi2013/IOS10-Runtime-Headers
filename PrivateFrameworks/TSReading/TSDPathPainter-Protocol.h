//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSDPathPainter <NSObject>
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

@optional
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 forImage:(struct CGImage *)arg3 swatchRect:(struct CGRect)arg4 wantsStroke:(_Bool)arg5;
@end

