//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface AVLoadingIndicatorView : UIView
{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_setDrawsAsBackdropOverlay:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setHidden:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

