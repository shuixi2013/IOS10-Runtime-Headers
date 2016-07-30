//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, NSMutableDictionary, NSNumber, NSString, SKUIClientContext;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_requestBodyWithError:(id *)arg1;
- (id)_requestWithError:(id *)arg1;
- (id)_imageDictionaryFromPhotoUpload:(id)arg1;
- (void)main;
- (void)setValue:(id)arg1 forProfileField:(id)arg2;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSNumber *identifier;
@property(copy) NSString *entityType;
- (id)initWithClientContext:(id)arg1;

@end
