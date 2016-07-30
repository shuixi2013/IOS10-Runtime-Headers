//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/UITextViewDelegate-Protocol.h>

@class NSDate, NSLayoutConstraint, NSString, UITextView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentDetailCell : MKTableViewCell <UITextViewDelegate>
{
    UITextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_descriptionFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
    NSDate *_lastUpdated;
}

@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_updateLastUpdatedLabel;
@property(copy, nonatomic) NSString *incidentDescription;
- (void)didMoveToWindow;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)_updateConstraintValues;
- (void)updateConstraints;
- (void)_setConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

