//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class MPUStackItemView, MPUStackView;

@protocol MPUStackViewDataSource <NSObject>
- (void)stackView:(MPUStackView *)arg1 didCreateItem:(MPUStackItemView *)arg2;
- (void)stackView:(MPUStackView *)arg1 applyAttributesToItem:(MPUStackItemView *)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInStackView:(MPUStackView *)arg1;
@end

