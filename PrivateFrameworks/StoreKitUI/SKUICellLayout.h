//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject
{
    UIView *_cell;
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    _Bool _parentWantsCellNeedsLayout;
}

@property(readonly, nonatomic) __weak UIView *parentCellView; // @synthesize parentCellView=_cell;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setNeedsLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)resetLayout;
- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

