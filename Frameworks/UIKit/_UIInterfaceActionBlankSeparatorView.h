//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying-Protocol.h>

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionBlankSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>
{
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;
}

@property(readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setConstantSizedAxis:(long long)arg1;
@property(nonatomic) double constantAxisDimension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

