//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

