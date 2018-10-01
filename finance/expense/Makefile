# $FreeBSD: head/finance/expense/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	expense
PORTVERSION=	0.1
PORTREVISION=	9
CATEGORIES=	finance gnustep
MASTER_SITES=	http://www.eskimo.com/~pburns/Expense/files/
DISTNAME=	Expense-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application to track your expense under GNUstep

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Expense

PORTSCOUT=	ignore:1

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Expense.app/Expense

.include <bsd.port.mk>
