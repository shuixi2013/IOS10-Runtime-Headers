//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EKEvent, EKEventDetailsHighlightControl, EKStructuredLocation, UIButton;
@protocol EKEventDetailPredictedLocationCellDelegate;

@interface EKEventDetailPredictedLocationCell : UITableViewCell
{
    EKEvent *_event;
    EKStructuredLocation *_location;
    EKEventDetailsHighlightControl *_titleControl;
    UIButton *_dismissButton;
    id <EKEventDetailPredictedLocationCellDelegate> _delegate;
}

@property __weak id <EKEventDetailPredictedLocationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setEventDate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)rejectLocationTapped:(id)arg1;
- (void)confirmLocationTapped:(id)arg1;
- (void)_disambiguateIfNeeded;
- (id)initEditable:(_Bool)arg1;
- (id)init;

@end

