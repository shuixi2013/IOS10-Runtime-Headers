//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation
{
    CKShare *_share;
    CDUnknownBlockType _shareSaveCompletionBlock;
}

@property(copy) CDUnknownBlockType shareSaveCompletionBlock; // @synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1;

@end

