//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject
{
    NSArray *_completionItems;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *completionItems; // @synthesize completionItems=_completionItems;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (id)init;

@end

