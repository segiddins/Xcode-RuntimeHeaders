//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTableView.h>

@interface IDERollOverTableView : DVTTableView
{
    BOOL _rolledOver;
}

@property(nonatomic, getter=isRolledOver) BOOL rolledOver; // @synthesize rolledOver=_rolledOver;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

