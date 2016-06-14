//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityLogSection;

@interface IDEActivityLogChangeEvent : NSObject
{
    IDEActivityLogSection *_section;
}

+ (id)stopRecordingEventWithSection:(id)arg1 supersections:(id)arg2;
+ (id)setValueEventWithSection:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)appendTextEventWithSection:(id)arg1 textString:(id)arg2;
+ (id)addSubmessageEventWithSection:(id)arg1 supermessage:(id)arg2 submessage:(id)arg3;
+ (id)addSubsectionEventWithSection:(id)arg1 subsection:(id)arg2;
@property(readonly) IDEActivityLogSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)description;
- (id)addedChild;
- (id)changedParent;
- (id)initWithSection:(id)arg1;

@end

