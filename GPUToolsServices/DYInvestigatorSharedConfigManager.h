//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DYInvestigatorSharedConfigManager : NSObject
{
    struct dispatch_queue_s *_queue;
    NSMapTable *_deviceInfoToInvestigatorConfig;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)investigatorConfigRemove:(id)arg1;
- (id)investigatorConfigForDeviceInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

