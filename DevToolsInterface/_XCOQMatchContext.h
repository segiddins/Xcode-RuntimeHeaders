//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _XCOQMatchContext : NSObject
{
    NSString *_projectPath;
    NSString *_buildPath;
    NSString *_input;
    NSString *_line;
}

@property(copy) NSString *line; // @synthesize line=_line;
@property(copy) NSString *input; // @synthesize input=_input;
@property(copy) NSString *buildPath; // @synthesize buildPath=_buildPath;
@property(copy) NSString *projectPath; // @synthesize projectPath=_projectPath;
- (id)description;
- (void)dealloc;
- (id)initWithProjectPath:(id)arg1 buildPath:(id)arg2 input:(id)arg3 line:(id)arg4;

@end

