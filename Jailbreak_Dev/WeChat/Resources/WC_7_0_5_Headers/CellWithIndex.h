//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITableViewCell;

@interface CellWithIndex : NSObject
{
    UITableViewCell *m_cell;
    long long m_index;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCell:(id)arg1 andIndex:(long long)arg2;
@property(retain, nonatomic) UITableViewCell *m_cell; // @synthesize m_cell;
@property(nonatomic) long long m_index; // @synthesize m_index;

@end
