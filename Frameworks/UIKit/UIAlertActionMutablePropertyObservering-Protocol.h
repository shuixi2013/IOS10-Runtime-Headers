//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIAlertAction, UIColor;

@protocol UIAlertActionMutablePropertyObservering <NSObject>
- (void)_action:(UIAlertAction *)arg1 updatedTitleTextColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedImageTintColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitle:(NSString *)arg2;
@end

