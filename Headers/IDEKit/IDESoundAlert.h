//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSSound, NSString;

@interface IDESoundAlert : IDEAlert
{
    NSSound *_sound;
    NSString *_soundPath;
}

+ (id)systemSoundPaths;
+ (void)_addSoundsFromPath:(id)arg1 to:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)systemSoundPaths;
- (id)init;

@end

