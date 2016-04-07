//
//  The MIT License (MIT)
//  Copyright (c) 2016 Wayne Liu <liuweiself@126.com>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//　　The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//  Created by 刘微 on 16/4/7.
//  Copyright © 2016年 WayneInc. All rights reserved.
//



#import <UIKit/UIKit.h>
#import "LWStorage.h"



typedef NS_ENUM(NSUInteger, LWImageStorageType) {
    LWImageStorageWebImage = 0,
    LWImageStorageLocalImage = 1,
};

typedef NS_ENUM(NSUInteger, LWImageContainerType) {
    LWImageContainerTypeCALayer = 0,
    LWImageContainerTypeUIImageView = 1,
};


@interface LWImageStorage : LWStorage

@property (nonatomic,strong) NSURL* URL;
@property (nonatomic,assign) LWImageStorageType type;
@property (nonatomic,strong) UIImage* image;
@property (nonatomic,copy) NSString* contentMode;
@property (nonatomic,assign) BOOL masksToBounds;
@property (nonatomic,strong) UIImage* placeholder;
@property (nonatomic,assign,getter=isFadeShow) BOOL fadeShow;
@property (nonatomic,assign,readonly) LWImageContainerType imageContainerType;

- (void)addtarget:(id)target action:(nullable SEL)selector;

@end
