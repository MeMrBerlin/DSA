// expr in2post(infix)
// {
// 	postfix=empty expr;
// 	while((token=getNextToken(infix))!=end_of_expr)
// 	{
// 		switch(getTokenType(token))
// 		{
// 		case operand: 
// 			addToken(postfix,token);
// 			break;
// 		case leftParen:
// 			push(token);
// 			break;
// 		case rightParen:
// 			while(getTokenType(token=pop())!=leftParen)
// 				addToken(postfix,token);
// 			break;
// 		case operator:
// 			while(!stackEmpty)
// 			{
// 				top=pop();
// 				push(top);
// 				if(getTokenType(top)==leftParen)break;
// 				if(getPriority(top)<=getPriority(token))break;
// 				top=pop();
// 				addToken(postfix,top);
// 			}
// 			push(token);
// 		}
// 	}
// 	while(!stackEmpty())
// 	{
// 		top=pop();
// 		addToken(postfix,top);
// 	}
// 	return postfix;
// }
