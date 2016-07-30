//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface DAEASOAuthTokenResponse : NSObject
{
    long long _statusCode;
    NSDictionary *_data;
    NSString *_token;
    NSString *_refreshToken;
    NSDate *_expiryDate;
    NSError *_error;
    NSString *_errorMessage;
    NSString *_user_id;
}

@property(readonly, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)usernameFromJWTToken:(id)arg1;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

