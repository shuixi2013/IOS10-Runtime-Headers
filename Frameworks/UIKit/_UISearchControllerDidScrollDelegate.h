//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScrollNotification-Protocol.h>

@class NSString, UIScrollView;
@protocol _UIScrollNotification;

__attribute__((visibility("hidden")))
@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification>
{
    id <_UIScrollNotification> _controller;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UIScrollNotification> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_didScroll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

