//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>
#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)pickerDidCancel;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)invalidateSelectionAnimated:(_Bool)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

