//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTPlistNode.h>

@interface DVTPlistBooleanNode : DVTPlistNode
{
    BOOL _value;
}

- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (void)setValueFromPlist:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

