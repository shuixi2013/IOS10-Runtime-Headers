//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVOperation.h>

@class MPModelLibraryImportChangeRequest, NSOperationQueue;

@interface MPModelLibraryImportChangeRequestOperation : MSVOperation
{
    NSOperationQueue *_operationQueue;
    MPModelLibraryImportChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryImportChangeRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)execute;

@end

