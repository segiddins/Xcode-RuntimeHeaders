//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDebugSession.h>

@protocol IDEDebugTopNavigableModel;

@interface IDEShellXPCDebugSession : IDEDebugSession
{
    id <IDEDebugTopNavigableModel> _topNavigableModel;
}

- (void).cxx_destruct;
- (void)setTopNavigableModel:(id)arg1;
- (id)topNavigableModel;
- (void)primitiveInvalidate;
- (id)initWithName:(id)arg1;
- (id)init;

@end

