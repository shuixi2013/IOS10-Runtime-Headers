//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFont, UIImageView, UILabel;

@interface SiriUIBorderedLabelView : UIView
{
    UIImageView *_borderImageView;
    UILabel *_ratingLabel;
    UIFont *_font;
    struct UIEdgeInsets _edgeInsets;
}

+ (struct UIEdgeInsets)_defaultEdgeInsets;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (double)baselineOffsetFromTopOfFrame;
- (struct CGSize)_borderSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3;

@end

