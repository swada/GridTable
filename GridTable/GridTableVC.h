//
//  GridTableVC.h
//  GridTable
//
//  Created by 池田 優一 on H.24/08/22.
//  Copyright (c) 平成24年 池田 優一. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^RowRenderer)(UITableViewCell *cell, int rowIndex);

@interface GridTableVC : UIViewController

@property(nonatomic, retain) NSMutableArray *rows;
@property(nonatomic, retain) NSMutableArray *cols;
@property(nonatomic, retain) RowRenderer rowRenderer;

@end
