//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSString, SiriUISnippetViewController;

@interface SiriUIClearBackgroundCell : UICollectionViewCell <SiriUIReusableView>
{
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
@property(readonly) Class superclass;

@end

