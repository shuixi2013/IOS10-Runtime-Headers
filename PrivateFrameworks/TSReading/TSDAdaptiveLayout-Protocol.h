//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, TSDLayout;
@protocol TSDInfo;

@protocol TSDAdaptiveLayout
- (struct CGPoint)applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint)arg3;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
@end

