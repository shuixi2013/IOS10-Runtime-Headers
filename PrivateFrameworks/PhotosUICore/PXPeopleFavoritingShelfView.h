//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class NSLayoutConstraint, NSMutableArray, UIImage, UIImageView, UILabel, UIView;

@interface PXPeopleFavoritingShelfView : UIVisualEffectView
{
    _Bool _highlightedForDrop;
    UIView *_textContainerView;
    UIImageView *_dropzone;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_bottomSeparator;
    UIImage *_dropzoneImageNormal;
    UIImage *_dropzoneImageHighlight;
    NSMutableArray *_standardConstraints;
    NSLayoutConstraint *_bodyToTitleConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bodyToTitleConstraint; // @synthesize bodyToTitleConstraint=_bodyToTitleConstraint;
@property(retain, nonatomic) NSMutableArray *standardConstraints; // @synthesize standardConstraints=_standardConstraints;
@property(retain, nonatomic) UIImage *dropzoneImageHighlight; // @synthesize dropzoneImageHighlight=_dropzoneImageHighlight;
@property(retain, nonatomic) UIImage *dropzoneImageNormal; // @synthesize dropzoneImageNormal=_dropzoneImageNormal;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *dropzone; // @synthesize dropzone=_dropzone;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) _Bool highlightedForDrop; // @synthesize highlightedForDrop=_highlightedForDrop;
- (void).cxx_destruct;
- (void)contentSizeCategoryChanged:(id)arg1;
- (double)_dynamicBaselineForTextStyle:(id)arg1 originalValue:(double)arg2;
- (double)_dynamicBodyToTitleBaselineValue;
- (void)animateViewToDropZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)preferredContentSizeForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithEffect:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

