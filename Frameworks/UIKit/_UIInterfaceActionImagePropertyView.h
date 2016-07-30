//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <UIKit/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSLayoutConstraint, NSString, UIInterfaceAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver>
{
    NSLayoutConstraint *_nilImageWidthConstraint;
    NSLayoutConstraint *_nilImageHeightConstraint;
    UIInterfaceAction *_action;
    NSString *_imageProperty;
}

@property(readonly, nonatomic) NSString *imageProperty; // @synthesize imageProperty=_imageProperty;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)_visualStyle;
- (void)_reloadImageContent;
- (struct CGSize)_sizeToOccupyIfNoImage;
- (id)_interfaceActionViewState;
- (void)_applyVisualStyleToImageView;
- (void)_applyVisualStyle;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)tintColorDidChange;
@property(readonly, nonatomic) _Bool isUsedToOccupySpaceIfNoImage;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithAction:(id)arg1 imageProperty:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

