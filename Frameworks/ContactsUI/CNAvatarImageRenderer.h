//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _CNUIPRLikenessResolver;

@interface CNAvatarImageRenderer : NSObject
{
    _CNUIPRLikenessResolver *_resolver;
}

+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) _CNUIPRLikenessResolver *resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)renderAvatarsForContacts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

