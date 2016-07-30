//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSString, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView, UILabel, UIView;
@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>
{
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_clippingContainerView;
    UILabel *_cancelledLabel;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    struct UIEdgeInsets _snippetEdgeInsets;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
@property(nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (void)setShowBackgroundView:(_Bool)arg1;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (void)_configureSubviewsForCurrentInset;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

