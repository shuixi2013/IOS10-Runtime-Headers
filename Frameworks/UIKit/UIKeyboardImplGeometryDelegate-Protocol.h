//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol UIKeyboardImplGeometryDelegate
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (_Bool)isAutomatic;
- (_Bool)isActive;
- (_Bool)canDismiss;
- (_Bool)shouldSaveMinimizationState;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
@end

