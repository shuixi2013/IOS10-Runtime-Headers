//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <ChatKit/CKConversationListCell-Protocol.h>
#import <ChatKit/CNAvatarViewDelegate-Protocol.h>

@class CKAvatarView, CKConversation, NSDate, NSObject, NSString, UIDateLabel, UIImageView, UILabel;
@protocol CKConversationListCellDelegate;

@interface CKConversationListCell : UITableViewCell <CNAvatarViewDelegate, CKConversationListCell>
{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UIImageView *_chevronImageView;
    UILabel *_fromLabel;
    _Bool _isPlaceholder;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
    CKAvatarView *_avatarView;
    NSObject<CKConversationListCellDelegate> *_delegate;
    CKConversation *_conversation;
}

+ (double)cellHeight;
+ (id)identifierForConversation:(id)arg1;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak NSObject<CKConversationListCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *searchSummaryText; // @synthesize searchSummaryText=_searchSummaryText;
@property(retain, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
@property(copy, nonatomic) NSString *searchMessageGUID; // @synthesize searchMessageGUID=_searchMessageGUID;
- (void).cxx_destruct;
- (_Bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)superLayoutSubviews;
- (void)_calculateLayoutFrames;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (void)_updateAvatarView;
- (void)updateContentsForConversation:(id)arg1;
- (_Bool)showingEditControl;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

