//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIView
{
    UISelectionGrabber *m_grabber;
}

@property(nonatomic) __weak UISelectionGrabber *grabber; // @synthesize grabber=m_grabber;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 container:(id)arg2;

@end

