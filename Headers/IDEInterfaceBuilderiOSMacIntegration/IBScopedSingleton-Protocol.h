//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderiOSMacIntegration/NSObject-Protocol.h>

@class NSString;
@protocol IBCollection;

@protocol IBScopedSingleton <NSObject>
+ (id)instanceWithIdentifier:(NSString *)arg1;
+ (id <IBCollection>)allInstances;
+ (id)sharedInstance;
- (void)didRegisterSharedInstance;
- (NSString *)identifier;
@end

