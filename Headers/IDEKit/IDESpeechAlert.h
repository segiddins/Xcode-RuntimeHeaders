//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSArray, NSSpeechSynthesizer, NSString;

@interface IDESpeechAlert : IDEAlert
{
    NSSpeechSynthesizer *_speech;
    NSArray *_availableVoices;
    NSString *_defaultVoice;
    NSString *_voice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)availableVoices;
- (id)init;

@end

