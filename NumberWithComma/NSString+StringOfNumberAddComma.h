//
//  NSString+StringOfNumberAddComma.h
//  NumberWithComma
//
//  Created by FrankLiu on 15/8/18.
//  Copyright (c) 2015年 FrankLiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (StringOfNumberAddComma)

/**
 *  将正常的数字字符串以","按美式方式分割,如果字符串异常,则直接返回
 *
 *  @return 返回以","分割的数字字符串
 */
- (NSString*)stringOfNumberAddComma;

@end
