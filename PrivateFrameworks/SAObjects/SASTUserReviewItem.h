//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>
{
}

+ (id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userReviewItem;
@property(retain, nonatomic) SAUIDecoratedText *reviewer;
@property(retain, nonatomic) SAUIDecoratedText *reviewText;
@property(retain, nonatomic) SAUIDecoratedText *reviewDate;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

