//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUserActivity.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SAClientUserActivity : SAUserActivity
{
}

+ (id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientUserActivity;
@property(copy, nonatomic) NSURL *webpageURL;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *requiredUserInfoKeys;
@property(copy, nonatomic) NSArray *keywords;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

