//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HUIconButton;
@protocol HFIconDescriptor;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell
{
    HUIconButton *_iconButton;
}

@property(retain, nonatomic) HUIconButton *iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

