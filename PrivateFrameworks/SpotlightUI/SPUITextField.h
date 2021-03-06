//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSArray, UIImage, UIView;

@interface SPUITextField : UITextField
{
    NSArray *_suggestions;
    UIImage *_clearButtonImage;
    UIView *_tintView;
    struct CGSize _imageSize;
}

@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain) UIImage *clearButtonImage; // @synthesize clearButtonImage=_clearButtonImage;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (void)updateWithColor:(id)arg1;
- (_Bool)isRightToLeft;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (void)dictationButtonTapped;
- (void)insertTextSuggestion:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

