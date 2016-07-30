//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCContentContext;

@interface FCArticleController : NSObject
{
    id <FCContentContext> _context;
}

@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1;
- (id)articleWithHeadline:(id)arg1;
- (id)articleWithID:(id)arg1 forceArticleUpdate:(_Bool)arg2 qualityOfService:(long long)arg3 networkPriority:(long long)arg4;
- (id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 networkPriority:(long long)arg3;
- (id)articleWithID:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

