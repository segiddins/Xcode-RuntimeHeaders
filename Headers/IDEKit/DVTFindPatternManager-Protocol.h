//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@protocol DVTFindPatternField;

@protocol DVTFindPatternManager <NSObject>
- (id <DVTFindPatternField>)replaceFieldForField:(id <DVTFindPatternField>)arg1;
- (id <DVTFindPatternField>)findFieldForField:(id <DVTFindPatternField>)arg1;

@optional
- (BOOL)supportsPatterns;
@end

