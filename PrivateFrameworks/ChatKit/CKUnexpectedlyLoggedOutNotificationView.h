//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKTwoButtonInlineNotificationViewDelegate-Protocol.h>

@class CKTwoButtonInlineNotificationView, NSString;
@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate>
{
    id <CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;
    CKTwoButtonInlineNotificationView *_inlineNotificationView;
}

@property(retain, nonatomic) CKTwoButtonInlineNotificationView *inlineNotificationView; // @synthesize inlineNotificationView=_inlineNotificationView;
@property(nonatomic) __weak id <CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool visible; // @dynamic visible;
- (void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1;
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
