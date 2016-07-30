//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RUIWebContainerView, UIButton, UIColor, UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView *_invalidRowView;
    _Bool _leftAlignDetailLabel;
    long long _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
    UIButton *_detailLinkButton;
    CDUnknownBlockType _detailLinkHandler;
    UIColor *_accessoryColor;
    _Bool _forceFullSizeDetailLabel;
    _Bool _activityIndicatorVisible;
    RUIWebContainerView *_webContainerView;
}

@property(retain, nonatomic) RUIWebContainerView *webContainerView; // @synthesize webContainerView=_webContainerView;
@property(nonatomic) _Bool activityIndicatorVisible; // @synthesize activityIndicatorVisible=_activityIndicatorVisible;
@property(retain, nonatomic) UIView *remoteUIAccessoryView; // @synthesize remoteUIAccessoryView=_remoteUIAccessoryView;
@property(nonatomic) long long remoteUIAccessoryType; // @synthesize remoteUIAccessoryType=_remoteUIAccessoryType;
@property(nonatomic) _Bool leftAlignDetailLabel; // @synthesize leftAlignDetailLabel=_leftAlignDetailLabel;
@property(nonatomic) _Bool forceFullSizeDetailLabel; // @synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel;
- (void).cxx_destruct;
- (void)setRowInvalid:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setDetailLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_detailLinkPressed;
- (void)setHTMLData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)_showActivityIndicatorAccessory;
- (void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2;
- (id)_disclosureChevronImage:(_Bool)arg1;
- (id)_checkmarkImage:(_Bool)arg1;
- (void)_accessoriesChanged;
- (void)prepareForReuse;

@end

