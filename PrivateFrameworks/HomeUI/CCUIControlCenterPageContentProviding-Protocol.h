//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/CCUIControlCenterObserver-Protocol.h>

@protocol CCUIControlCenterPageContentViewControllerDelegate;

@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>
@property(nonatomic) __weak id <CCUIControlCenterPageContentViewControllerDelegate> delegate;

@optional
@property(readonly, nonatomic) _Bool wantsVisible;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (_Bool)dismissModalFullScreenIfNeeded;
@end

