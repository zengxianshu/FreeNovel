//
//  ContentViewController.h
//  ZEFreeNovel
//
//  Created by 泽i on 16/7/27.
//  Copyright © 2016年 泽i. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  内容显示视图控制器
 */
@interface ContentViewController : UIViewController
/** 显示的字符串 */
@property (nonatomic, copy) NSString *content;
/** 章节名 */
@property (nonatomic, copy) NSString *name;
/** 页面编号 */
@property (nonatomic, assign) NSInteger index;

@property (nonatomic, assign) NSInteger font;

@end
