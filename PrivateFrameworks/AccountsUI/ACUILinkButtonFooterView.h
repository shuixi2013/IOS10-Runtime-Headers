//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AccountsUI/PSHeaderFooterView-Protocol.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView>
{
    ACUILinkButton *_linkButton;
    long long _desiredTextAlignment;
}

@property(nonatomic) long long alignment; // @synthesize alignment=_desiredTextAlignment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithButton:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end

