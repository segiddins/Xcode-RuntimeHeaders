//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDECodeModule.h>

@protocol DBGSBModule;

@interface DBGLLDBCodeModule : IDECodeModule
{
    id <DBGSBModule> _lldbModule;
}

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 pathString:(id)arg2 lldbModule:(id)arg3;

@end

