//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : NSObject
{
    struct __MSShPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType didFindShareStateCallback;
        CDUnknownFunctionPointerType didFinishTransactionCallback;
        CDUnknownFunctionPointerType didFailAuthenticationCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
        int __contextType;
    } _context;
    NSString *_personID;
    NSURL *_inviteURL;
    NSURL *_manageURL;
    NSURL *_respondURL;
    NSURL *_statusURL;
    NSArray *_shares;
    int _transactionType;
    id <MSSharingProtocolDelegate> _delegate;
}

+ (id)shareFromPushUserInfo:(id)arg1 outSourcePersonID:(id *)arg2 outTargetPersonID:(id *)arg3 outError:(id *)arg4;
+ (id)_invalidFieldErrorWithFieldName:(id)arg1;
+ (id)shareStateFromProtocol:(id)arg1;
+ (id)_shareDictsArrayFromShares:(id)arg1;
+ (id)_sharesFromShareDictsArray:(id)arg1;
+ (id)_shareDictFromShare:(id)arg1;
+ (id)_shareFromShareDict:(id)arg1;
+ (id)_dictShareStateFromShareState:(int)arg1;
+ (int)_shareStateFromShareDictShareState:(id)arg1;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) id <MSSharingProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)abort;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (void)_didFailAuthenticationWithError:(id)arg1;
- (void)_didFinishTransactionWithResponseObject:(id)arg1 error:(id)arg2;
- (void)_checkForFailedInvitesWithResponse:(id)arg1;
- (void)_didFindShareState:(id)arg1;
- (void)deleteShares:(id)arg1;
- (void)modifyShares:(id)arg1;
- (void)requestCurrentShareState;
- (void)sendResponseToInvitation:(id)arg1 accept:(_Bool)arg2;
- (void)sendInvitations:(id)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@end

