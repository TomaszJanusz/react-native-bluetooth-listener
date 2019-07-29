#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface RNBluetoothListener : RCTEventEmitter <RCTBridgeModule, CBCentralManagerDelegate>


@end
  
