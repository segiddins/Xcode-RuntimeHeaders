//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDETemplateOption, IDEWorkspace, NSString;

@protocol IDETemplateOptionParent <NSObject>
- (void)valueDidChangeForOption:(IDETemplateOption *)arg1;
- (IDEWorkspace *)workspace;
- (NSString *)identifier;
@end

