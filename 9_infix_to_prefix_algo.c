// expr in2pre(infix)
// {
// 	revPrefix=empty expr;
// 	revInfix=reverse(infix);
// 	while((token=getNextToken(revInfix))!=end_of_expr)
// 	{
// 		switch(getTokenType(token))
// 		{
// 		case operand: 
// 			addToken(revPrefix,token);
// 			break;
// 		case rightParen:
// 			push(token);
// 			break;
// 		case leftParen:
// 			while(getTokenType(token=pop())!=rightParen)
// 				addToken(revPrefix,token);
// 			break;
// 		case operator:
// 			while(!stackEmpty)
// 			{
// 				top=pop();
// 				push(top);
// 				if(getTokenType(top)==rightParen)break;
// 				if(getPriority(top)<=getPriority(token))break;
// 				top=pop();
// 				addToken(revPrefix,top);
// 			}
// 			push(token);
// 		}
// 	}
// 	while(!stackEmpty)
// 	{
// 		top=pop;
// 		addToken(revPrefix,top);
// 	}
// 	prefix=reverse(revPrefix);
// 	return prefix;
// }
