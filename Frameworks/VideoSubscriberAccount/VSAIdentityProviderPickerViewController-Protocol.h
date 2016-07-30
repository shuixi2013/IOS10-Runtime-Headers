//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol VSAIdentityProviderPickerViewControllerDelegate;

@protocol VSAIdentityProviderPickerViewController <NSObject>
@property(copy, nonatomic) NSString *resourceTitle;
@property(copy, nonatomic) NSString *requestingAppDisplayName;
@property(nonatomic) unsigned long long additionalProvidersMode;
@property(copy, nonatomic) NSArray *featuredIdentityProviders;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property(nonatomic) __weak id <VSAIdentityProviderPickerViewControllerDelegate> delegate;
@end

