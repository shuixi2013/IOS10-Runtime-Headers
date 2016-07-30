//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSURL, SLRequest, SUScriptAppleAccount;

@interface SUScriptFacebookRequest : SUScriptObject
{
    SLRequest *_request;
    long long _requestMethod;
    SUScriptAppleAccount *_scriptAccount;
    NSURL *_url;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_performRequest:(id)arg1 withScriptFunction:(id)arg2;
- (_Bool)_isRequestAllowed:(id *)arg1;
@property(readonly) long long requestMethodPost;
@property(readonly) long long requestMethodGet;
@property(readonly) long long requestMethodDelete;
- (void)setParameters:(id)arg1;
- (void)performRequestWithFunction:(id)arg1;
- (void)addParameterWithKey:(id)arg1 value:(id)arg2;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
@property(readonly, copy) NSURL *URL;
@property(retain) SUScriptAppleAccount *account;
@property(readonly) long long requestMethod;
- (id)_className;
- (void)dealloc;
- (id)initWithURL:(id)arg1 requestMethod:(id)arg2;

@end

