//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoLeash/NSObject-Protocol.h>

@class CBCharacteristic, CBDescriptor, CBPeripheral, CBService, NSArray, NSError, NSNumber;

@protocol CBPeripheralDelegate <NSObject>

@optional
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverDescriptorsForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateNotificationStateForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristicsForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverIncludedServicesForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverServices:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didReadRSSI:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)peripheralDidUpdateRSSI:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didModifyServices:(NSArray *)arg2;
- (void)peripheralDidUpdateName:(CBPeripheral *)arg1;
@end

