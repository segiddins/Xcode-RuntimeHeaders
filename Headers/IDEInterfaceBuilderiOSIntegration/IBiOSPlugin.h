//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderiOSIntegration/IDEInitialization-Protocol.h>

@interface IBiOSPlugin : NSObject <IDEInitialization>
{
}

+ (BOOL)ide_initializeWithOptions:(unsigned long long)arg1 error:(id *)arg2;
+ (id)sharedInstance;
- (id)init;

@end

