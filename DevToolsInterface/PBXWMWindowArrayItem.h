//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSWindow;

@interface PBXWMWindowArrayItem : NSObject
{
    NSString *uniqueWindowName;
    NSWindow *window;
}

- (void)logTheMenuHelperWindowContents;
- (void)appendWindowToWindowMenu:(id)arg1 withIndent:(BOOL)arg2 addSeparator:(BOOL)arg3 invokingSelector:(SEL)arg4;
- (long long)compareWindowNames:(id)arg1;
- (id)init;
- (id)initWMWindowItem:(id)arg1;
- (void)setUniqueWindowName:(id)arg1;
- (id)uniqueWindowName;
- (id)windowName;
- (void)setWindow:(id)arg1;
- (id)window;

@end

