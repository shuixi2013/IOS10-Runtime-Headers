//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol _MKPopoverEmbeddingViewWindowDelegate;

__attribute__((visibility("hidden")))
@interface _MKPopoverEmbeddingView : UIView
{
    id <_MKPopoverEmbeddingViewWindowDelegate> _windowDelegate;
}

@property(nonatomic) __weak id <_MKPopoverEmbeddingViewWindowDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;

@end

