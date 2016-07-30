//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface TPFavoritesEntryCell : UICollectionViewCell
{
    _Bool _contentViewLoaded;
    _Bool _contentViewLayoutConstraintsLoaded;
    UIView *_avatarContentView;
    UILabel *_contactNameLabel;
    UIImage *_transportImage;
    UILabel *_transportNameLabel;
    UIImageView *_transportImageView;
    UIView *_transportView;
    NSLayoutConstraint *_avatarContentViewHeightLayoutConstraint;
    NSLayoutConstraint *_avatarContentViewWidthLayoutConstraint;
    NSLayoutConstraint *_contactNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelLeadingLayoutConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic, getter=isContentViewLayoutConstraintsLoaded) _Bool contentViewLayoutConstraintsLoaded; // @synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded;
@property(nonatomic, getter=isContentViewLoaded) _Bool contentViewLoaded; // @synthesize contentViewLoaded=_contentViewLoaded;
@property(retain, nonatomic) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint; // @synthesize transportNameLabelLeadingLayoutConstraint=_transportNameLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint; // @synthesize transportNameLabelBaselineLayoutConstraint=_transportNameLabelBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint; // @synthesize contactNameLabelBaselineLayoutConstraint=_contactNameLabelBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarContentViewWidthLayoutConstraint; // @synthesize avatarContentViewWidthLayoutConstraint=_avatarContentViewWidthLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint; // @synthesize avatarContentViewHeightLayoutConstraint=_avatarContentViewHeightLayoutConstraint;
@property(retain, nonatomic) UIView *transportView; // @synthesize transportView=_transportView;
@property(retain, nonatomic) UIImageView *transportImageView; // @synthesize transportImageView=_transportImageView;
@property(retain, nonatomic) UILabel *transportNameLabel; // @synthesize transportNameLabel=_transportNameLabel;
@property(retain, nonatomic) UIImage *transportImage; // @synthesize transportImage=_transportImage;
@property(retain, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(readonly, nonatomic) UIView *avatarContentView; // @synthesize avatarContentView=_avatarContentView;
- (void).cxx_destruct;
@property(readonly, nonatomic) double transportNameLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double transportNameLabelBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double contactNameLabelBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double avatarContentViewWidthLayoutConstraintConstant;
@property(readonly, nonatomic) double avatarContentViewHeightLayoutConstraintConstant;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)loadContentViewLayoutConstraints;
- (void)loadContentView;
- (void)commonInit;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

