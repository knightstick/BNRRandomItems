//
//  BNRItem.h
//  RandomItems
//
//  Created by Test Mac on 6/03/2015.
//  Copyright (c) 2015 Chris Jewell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *_itemName;
    NSString *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated;
}

+ (instancetype)randomItem;

// Designated initializer for BNRItem
- (instancetype)initWithItemName:(NSString *)name
                  valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;

- (instancetype)initWithItemName:(NSString *)name serialNumber:(NSString *)sNumber;


- (void)setItemName:(NSString *)str;
- (NSString *)itemName;

- (void)setSerialNumber:(NSString *)str;

- (NSString *)serialNumber;

- (void)setValueInDollars:(int)v;
- (int) valueInDollars;

- (NSDate *)dateCreated;

@end
