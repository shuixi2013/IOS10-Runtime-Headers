//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVOperation.h>

@class MPModelLibraryRequest, MSVOperationQueue;

@interface MPModelLibraryRequestOperation : MSVOperation
{
    MPModelLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
    MSVOperationQueue *_operationQueue;
    MSVOperationQueue *_serialAccessQueue;
}

@property(retain, nonatomic) MSVOperationQueue *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property(retain, nonatomic) MSVOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)execute;

@end

