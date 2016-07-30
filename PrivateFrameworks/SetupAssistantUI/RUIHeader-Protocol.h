//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class NSDictionary, NSString, UIImage, UILabel, UITableView, UIView;
@protocol RUIHeaderDelegate;

@protocol RUIHeader <NSObject>
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (double)headerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (void)setSectionIsFirst:(_Bool)arg1;
- (void)setDelegate:(id <RUIHeaderDelegate>)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(UIImage *)arg1;
- (UILabel *)detailHeaderLabel;
- (void)setDetailText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (UILabel *)subHeaderLabel;
- (void)setSubHeaderText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (UILabel *)headerLabel;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (double)headerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
@end

