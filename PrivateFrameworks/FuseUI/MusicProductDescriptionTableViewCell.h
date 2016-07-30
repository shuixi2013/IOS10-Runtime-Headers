//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <FuseUI/UITextViewDelegate-Protocol.h>

@class MusicMediaDetailTintInformation, MusicProductDescription, NSString, UIButton, UILabel, UITextView;
@protocol MusicProductDescriptionTableViewCellDelegate;

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UILabel *_descriptionHeaderLabel;
    _Bool _hasValidMoreButtonSize;
    _Bool _needsForcedTextViewUpdate;
    UIButton *_moreButton;
    UITextView *_placeholderTextView;
    UITextView *_textView;
    struct {
        unsigned int productDescriptionDidChange:1;
    } _delegateRespondsToSelector;
    _Bool _expanded;
    id <MusicProductDescriptionTableViewCellDelegate> _delegate;
    MusicMediaDetailTintInformation *_detailTintInformation;
    MusicProductDescription *_productDescription;
    long long _productDescriptionTextStyle;
    NSString *_productDescriptionTitle;
    long long _productDescriptionMaximumLengthForTextInput;
}

@property(nonatomic) long long productDescriptionMaximumLengthForTextInput; // @synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput;
@property(copy, nonatomic) NSString *productDescriptionTitle; // @synthesize productDescriptionTitle=_productDescriptionTitle;
@property(nonatomic) long long productDescriptionTextStyle; // @synthesize productDescriptionTextStyle=_productDescriptionTextStyle;
@property(copy, nonatomic) MusicProductDescription *productDescription; // @synthesize productDescription=_productDescription;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) MusicMediaDetailTintInformation *detailTintInformation; // @synthesize detailTintInformation=_detailTintInformation;
@property(nonatomic) __weak id <MusicProductDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTextViewWithProductDescriptionWithLayout:(_Bool)arg1;
- (void)_updateTextViewEditabilityForced:(_Bool)arg1 withEditing:(_Bool)arg2;
- (void)_updatePlaceholderTextViewVisibility;
- (void)_updateMoreButtonPropertiesWithTextViewSize:(struct CGSize)arg1 positionYDelta:(double)arg2;
- (void)_updateMaximumNumberOfLinesWithEditing:(_Bool)arg1;
- (void)_updateForPreferredFontChange;
- (id)_placeholderAttributedText;
- (id)_newTextView;
- (id)_loadTextAttributes;
- (unsigned long long)_calculateTextViewMaximumNumberOfLinesWithEditing:(_Bool)arg1;
- (struct CGRect)_calculateHeaderLabelFrameWithinContentBounds:(struct CGRect)arg1;
- (struct CGRect)_calculateContentBoundsWithBounds:(struct CGRect)arg1;
- (id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1 textColor:(id)arg2;
- (void)_handlePreferredContentSizeDidChangeNotification:(id)arg1;
- (void)_moreButtonAction:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

