//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEDebuggerCommandBreakpointAction : IDEBreakpointAction
{
    NSString *_consoleCommand;
}

+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *consoleCommand; // @synthesize consoleCommand=_consoleCommand;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_debuggerCommandActionCommonInit;
- (id)init;

@end

