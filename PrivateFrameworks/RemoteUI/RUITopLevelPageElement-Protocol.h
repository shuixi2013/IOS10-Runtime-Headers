//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUIObjectModel, UILabel, UIView;

@protocol RUITopLevelPageElement <NSObject>
- (void)populatePostbackDictionary:(NSDictionary *)arg1;
- (void)setObjectModel:(RUIObjectModel *)arg1;
- (UIView *)view;

@optional
- (void)setTitle:(NSString *)arg1;
- (UILabel *)titleLabel;
- (void)viewDidLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@end

