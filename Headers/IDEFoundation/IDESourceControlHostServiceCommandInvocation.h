//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESourceControlHostServiceCommandInvocation : NSObject
{
    NSString *_extensionIdentifier;
    NSString *_command;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (id)init:(id)arg1 command:(SEL)arg2;

@end

