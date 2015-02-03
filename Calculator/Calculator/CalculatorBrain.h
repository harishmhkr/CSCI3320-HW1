//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Harish Mallela on 1/30/15.
//  Copyright (c) 2015 edu.ucdenver.csci3320.Harish. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation: (NSString *)operation;

@end