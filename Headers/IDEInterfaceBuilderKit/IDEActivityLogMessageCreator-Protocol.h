//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEActivityLogMessage, IDETypeIdentifier, NSString;

@protocol IDEActivityLogMessageCreator
+ (IDEActivityLogMessage *)activityLogMessageFromClass:(Class)arg1 withType:(IDETypeIdentifier *)arg2 severity:(unsigned long long)arg3 title:(NSString *)arg4 shortTitle:(NSString *)arg5 categoryIdentifier:(NSString *)arg6 filePath:(NSString *)arg7 locationIdentifier:(NSString *)arg8;
@end

