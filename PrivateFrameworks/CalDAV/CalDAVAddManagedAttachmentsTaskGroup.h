//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup
{
    NSURL *_postURLWithQuery;
    _Bool _hadPreconditionFailure;
    int _state;
    NSString *_previousETag;
    NSString *_previousScheduleTag;
    NSData *_updatedResourcePayload;
    NSString *_updatedETag;
    NSString *_updatedScheduleTag;
    NSDictionary *_postFailureSizes;
    NSURL *_resourceURL;
    NSDictionary *_attachments;
    NSDictionary *_contentTypes;
    NSMutableDictionary *_filenamesToServerLocation;
}

@property(retain, nonatomic) NSMutableDictionary *filenamesToServerLocation; // @synthesize filenamesToServerLocation=_filenamesToServerLocation;
@property(retain, nonatomic) NSDictionary *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(retain, nonatomic) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(retain, nonatomic) NSDictionary *postFailureSizes; // @synthesize postFailureSizes=_postFailureSizes;
@property(retain, nonatomic) NSString *updatedScheduleTag; // @synthesize updatedScheduleTag=_updatedScheduleTag;
@property(retain, nonatomic) NSString *updatedETag; // @synthesize updatedETag=_updatedETag;
@property(nonatomic) _Bool hadPreconditionFailure; // @synthesize hadPreconditionFailure=_hadPreconditionFailure;
@property(retain, nonatomic) NSData *updatedResourcePayload; // @synthesize updatedResourcePayload=_updatedResourcePayload;
@property(retain, nonatomic) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)startTaskGroup;
- (void)_sendAttachments;
- (void)_handlePostResponse:(id)arg1;
- (void)_fetchUpdatedContent;
- (id)urlWithQuery;
- (_Bool)_postedLastAttachment;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5;

@end

