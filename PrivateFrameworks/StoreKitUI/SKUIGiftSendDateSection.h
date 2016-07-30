//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSDate, NSString, SKUIGiftTableSectionHeaderView, SKUIItem;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection
{
    NSString *_dateString;
    SKUIItem *_giftItem;
    struct UIEdgeInsets _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
    NSDate *_sendDate;
    long long _sendDateStyle;
}

@property(nonatomic) long long sendDateStyle; // @synthesize sendDateStyle=_sendDateStyle;
@property(copy, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) SKUIItem *giftItem; // @synthesize giftItem=_giftItem;
- (void).cxx_destruct;
- (id)_headerView;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
@property(nonatomic) struct UIEdgeInsets headerInsets;

@end

