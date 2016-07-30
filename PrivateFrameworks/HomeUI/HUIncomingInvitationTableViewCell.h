//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, CNContact, HMIncomingHomeInvitation, HUColoredButton, UIActivityIndicatorView, UILabel;

@interface HUIncomingInvitationTableViewCell : UITableViewCell
{
    HMIncomingHomeInvitation *_invitation;
    CNAvatarView *_avatarView;
    UILabel *_homeNameLabel;
    UILabel *_infoLabel;
    HUColoredButton *_declineButton;
    HUColoredButton *_acceptButton;
    UIActivityIndicatorView *_spinner;
    CNContact *_contact;
}

+ (id)_requiredKeyDescriptors;
+ (id)_formatDate:(id)arg1;
+ (double)perferredHeight;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) HUColoredButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) HUColoredButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *homeNameLabel; // @synthesize homeNameLabel=_homeNameLabel;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) HMIncomingHomeInvitation *invitation; // @synthesize invitation=_invitation;
- (void).cxx_destruct;
- (void)_invitationActionDidStart;
- (void)_invitationActionDidEnd;
- (void)_acceptInvitation:(id)arg1;
- (void)_rejectInvitation:(id)arg1;
- (void)_addSubviews;
- (void)_setLabelText;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

