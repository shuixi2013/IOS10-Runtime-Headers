//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKRingsView, HKWorkout, UILabel, UIView;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell
{
    HKWorkout *_workout;
    HKRingsView *_ringsView;
    UILabel *_typeLabel;
    UILabel *_percentCompleteLabel;
    UIView *_separatorView;
}

+ (double)_bottomLabelToSeparatorSpacing;
+ (double)_typeToPercentageSpacing;
+ (double)_ringToTypeSpacing;
+ (double)_ringDiameter;
+ (double)rowHeightForWorkout:(id)arg1;
+ (double)_ringTopPadding;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *percentCompleteLabel; // @synthesize percentCompleteLabel=_percentCompleteLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) HKRingsView *ringsView; // @synthesize ringsView=_ringsView;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateRingWithCompletion:(CDUnknownBlockType)arg1;
- (void)setWorkout:(id)arg1 fillRing:(_Bool)arg2;
- (void)setWorkoutWithoutFillingRing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

