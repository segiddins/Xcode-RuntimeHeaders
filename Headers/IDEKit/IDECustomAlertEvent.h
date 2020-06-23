//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlertEvent.h>

@class IDEKeyboardShortcut;

@interface IDECustomAlertEvent : IDEAlertEvent
{
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (id)createNewEvent;
+ (id)customAlertEventForIdentifier:(id)arg1;
+ (id)customAlertEvents;
+ (void)initialize;
@property(retain, nonatomic) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
- (void).cxx_destruct;
- (id)description;
- (void)remove;
- (void)saveToUserDefaults;
- (id)propertyList;
- (id)alertDefaults;
- (void)changeKeyboardShortcut:(id)arg1;
- (id)keyBinding;
- (id)initWithDefaults:(id)arg1;
- (id)init;

@end

