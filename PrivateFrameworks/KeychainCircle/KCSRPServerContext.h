//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KeychainCircle/KCSRPContext.h>

@class NSData;

@interface KCSRPServerContext : KCSRPContext
{
    NSData *_salt;
    NSData *_verifier;
}

@property(retain) NSData *verifier; // @synthesize verifier=_verifier;
@property(readonly) NSData *salt; // @synthesize salt=_salt;
- (void).cxx_destruct;
- (id)copyConfirmationFor:(id)arg1 error:(id *)arg2;
- (id)copyChallengeFor:(id)arg1 error:(id *)arg2;
- (id)initWithUser:(id)arg1 salt:(id)arg2 verifier:(id)arg3 digestInfo:(const struct ccdigest_info *)arg4 group:(CDUnion_089e675c)arg5 randomSource:(struct ccrng_state *)arg6;
- (id)initWithUser:(id)arg1 password:(id)arg2 digestInfo:(const struct ccdigest_info *)arg3 group:(CDUnion_089e675c)arg4 randomSource:(struct ccrng_state *)arg5;
- (_Bool)resetWithPassword:(id)arg1 error:(id *)arg2;

@end

