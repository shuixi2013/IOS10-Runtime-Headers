//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSlotNotification-Protocol.h>

@class NSHashTable, TKSmartCardSlot;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification>
{
    TKSmartCardSlot *_slot;
    NSHashTable *_cards;
}

@property(readonly) NSHashTable *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (id)initWithSlot:(id)arg1;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)arg1;

@end

